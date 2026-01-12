# Red Rider Radio Receiver

ESP32-S3 ESP-NOW receiver for the Christmas Red Rider escape room. Listens for broadcast commands from the room hub to trigger puzzle states.

## Hardware

- **Board**: ESP32-S3-DevKitC-1 (N8R2: 8MB Flash, 2MB PSRAM)
- **Input**: Button on GPIO23

## Features

- **ESP-NOW Client**: Receives broadcast messages from room hub
- **Button Input**: Physical trigger for game events
- **Low Latency**: Direct peer-to-peer communication without WiFi

## Quick Start

```bash
pio run                    # Build
pio run --target upload    # Upload via USB
pio device monitor         # Serial output (115200 baud)
```

## Configuration

Edit `src/config.h`:
- `DEVICE_IDENTIFIER` - Device name
- `ESPNOW_HOST_MAC` - MAC address of the room hub
- `BUTTON_PIN` - GPIO for button input

## Part of Otherworld Escape Rooms

This prop is part of the [OER](https://github.com/TenMoreMinutesProductions) escape room system.
