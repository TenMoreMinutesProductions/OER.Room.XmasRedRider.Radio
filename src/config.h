#ifndef CONFIG_H
#define CONFIG_H

// ============================================================
//                    DEVICE IDENTIFIER
// ============================================================
#define DEVICE_IDENTIFIER "RadioClient"

// ============================================================
//                  ESP-NOW CONFIGURATION
// ============================================================
#define ESPNOW_HOST 0 // 1 = Host (broadcasts), 0 = Client (listens)
// Host MAC address - set this to your host device's MAC
// Only used when ESPNOW_HOST is 0 (client mode)
#define ESPNOW_HOST_MAC {0xA8, 0x42, 0xE3, 0xC8, 0x42, 0x78}

// ============================================================
//                     PIN DEFINITIONS
// ============================================================
#define BUTTON_PIN 23

#endif
