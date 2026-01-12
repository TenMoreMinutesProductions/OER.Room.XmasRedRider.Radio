# CLAUDE.md

## Project Overview

ESP32-S3 ESP-NOW receiver for the Christmas Red Rider room. Receives commands from the room hub and monitors a button input.

**Target Board:** ESP32-S3-DevKitC-1 (N8R2: 8MB Flash, 2MB PSRAM)

## Build Commands

```bash
pio run                    # Build
pio run --target upload    # Upload to ESP32-S3
pio run --target clean     # Clean build
pio device monitor         # Serial monitor (115200 baud)
```

## Architecture

### Code Flow
```
main.cpp          → Entry points, ESP-NOW callbacks
├── setup.cpp     → Module initialization
├── loop.cpp      → Main loop dispatcher
└── SampleFunction.cpp → Game logic placeholder
```

### Configuration
All settings in `src/config.h`:
- `DEVICE_IDENTIFIER` - Device name for logging
- `ESPNOW_HOST` - Set to 0 (client mode)
- `ESPNOW_HOST_MAC` - MAC of the room hub
- `BUTTON_PIN` - GPIO for button input

## ESP32-S3 Notes

- Different GPIO numbering than original ESP32
- PSRAM enabled via build flags
- Verify button pin supports input mode
