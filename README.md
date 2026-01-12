# Xmas-RedRider Radio Client

ESP-NOW client receiver for the Red Rider Radio prop in the Christmas escape room.

## What It Does

This ESP32 acts as an **ESP-NOW client** that listens for messages from the RadioHost. When it receives "ON" or "OFF" signals, it prints "Received On" or "Received Off" to the serial monitor.

## Hardware

- **ESP32** (esp32dev)

## Configuration

Edit `src/config.h`:

| Setting | Value | Description |
|---------|-------|-------------|
| `DEVICE_IDENTIFIER` | `RadioClient` | Device name for logging |
| `ESPNOW_HOST` | `0` | Client mode (listens for messages) |
| `ESPNOW_HOST_MAC` | `{0xAA, 0xBB, ...}` | MAC address of the RadioHost |

**Important**: Update `ESPNOW_HOST_MAC` with the actual MAC address of your RadioHost device (shown in host's serial output at boot).

## Serial Output

| Received Message | Output |
|------------------|--------|
| `ON` | `Received On` |
| `OFF` | `Received Off` |

## Build Commands

```bash
pio run                  # Build
pio run --target upload  # Upload to ESP32
pio device monitor       # Serial monitor (115200 baud)
```
