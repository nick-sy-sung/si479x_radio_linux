# si479x_radio_linux

Si479xx sample code under Linux.

## Hardware Platform

- Raspberry Pi 5
- Si479xx head unit daughter card.

## Quick Start

### 1. Build / Clean

```bash
./build.sh   # build the project (CMake required, cross-compiles with arm-linux-gnueabihf toolchain)
./clean.sh   # clean the build output (removes build/ and bin/)
```

### 2. Hardware Wiring (RPi5 ↔ Si479xx)

The Si479xx daughter card connects to the Raspberry Pi 5 40-pin header through the
SPI0 bus and two GPIO reset lines. Wire the pins as follows:

| Si479xx signal   | RPi5 GPIO (BCM) | RPi5 physical pin | Notes                         |
| ---------------- | --------------- | ----------------- | ----------------------------- |
| SPI SCLK         | GPIO11          | Pin 23            | SPI0 clock (12 MHz)           |
| SPI MOSI         | GPIO10          | Pin 19            | SPI0 host → Si479xx           |
| SPI MISO         | GPIO9           | Pin 21            | SPI0 Si479xx → host           |
| SPI CS (chip 0)  | GPIO8 (CE0)     | Pin 24            | `/dev/spidev0.0`              |
| SPI CS (chip 1)  | GPIO7 (CE1)     | Pin 26            | `/dev/spidev0.1`              |
| RESET (chip 0)   | GPIO17          | Pin 11            | Active-low hard reset         |
| RESET (chip 1)   | GPIO27          | Pin 13            | Active-low hard reset         |
| VDD (3.3V)       | 3V3             | Pin 1 / Pin 17    | Power supply                  |
| GND              | GND             | Pin 6 / Pin 9     | Common ground                 |

Notes:

- The SPI bus runs in mode 0 at 12 MHz with 8 bits per word.
- For a single-tuner setup only chip 0 (CE0 / GPIO17) is required.

### 3. Run

After a successful build, binaries are placed under `./bin`.

```bash
# Flash load
./bin/si479xx_radio

# Host load (firmwarefolder contains si479x.bin and key_exch.key,
# key_exch.key is only required for si47925)
./bin/si479xx_radio ./firmwarefolder
```

### 4. Burn / Dump SPI Flash Firmware

```bash
./bin/flash_tool       # burn si479x.bin to SPI flash (si479x.bin and flash_bl.bin are required)
./bin/flash_tool -d    # dump the flash content to si479x.bin (flash_bl.bin is required)
./bin/flash_tool -h    # show help
```

### 5. Sample Firmware Images

Sample si479x images (and flash_bl.bin) can be found under `radio/firmware`.
These are for test purposes only and are not intended for mass production.

## Directory Layout

| Directory    | Description                              |
| ------------ | ----------------------------------------- |
| `flash_tool` | Tools for burning and dumping flash data. |
| `radio`      | Main routine for si479x_radio.            |
| `tuner`      | Tuner API and SDK.                        |
| `include`    | Header files.                             |

## Documentation

See [`Quick_start_guide.pdf`](Quick_start_guide.pdf) for more details.
