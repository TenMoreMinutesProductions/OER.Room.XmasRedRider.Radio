#include "setup.h"
#include "config.h"
#include "modules/espnow_module.h"

extern void onEspNowReceive(const uint8_t* mac, const uint8_t* data, int len);
extern void onEspNowSend(const uint8_t* mac, bool success);

void printStartupInfo() {
  Serial.println();
  Serial.println("========================================");
  Serial.print("Firmware: ");
  Serial.println(__FILE__);
  Serial.print("Compiled: ");
  Serial.print(__DATE__);
  Serial.print(" ");
  Serial.println(__TIME__);
  Serial.print("Device:   ");
  Serial.println(DEVICE_IDENTIFIER);
  Serial.println("----------------------------------------");
  #if ESPNOW_HOST
    Serial.println("Mode: ESP-NOW Host");
  #else
    Serial.println("Mode: ESP-NOW Client");
  #endif
  Serial.print("MAC: ");
  Serial.println(espnowGetMAC());
  Serial.println("========================================");
  Serial.println();
}

void setupInit() {
  Serial.begin(115200);
  delay(1000);

  // Initialize pins
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Initialize ESP-NOW
  uint8_t hostMac[] = ESPNOW_HOST_MAC;
  #if ESPNOW_HOST
    espnowInit(true, nullptr);
  #else
    espnowInit(false, hostMac);
  #endif
  espnowSetReceiveCallback(onEspNowReceive);
  espnowSetSendCallback(onEspNowSend);

  printStartupInfo();

  Serial.println("[Setup] Complete. Starting main loop...");
  Serial.println();
}
