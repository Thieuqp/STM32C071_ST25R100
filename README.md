# Introduction

This demo is tested with: [NUCLEO-C071RB](https://www.st.com/en/evaluation-tools/nucleo-c071rb.html#cad-resources) + [X-NUCLEO-NFC09A1](https://www.st.com/en/evaluation-tools/x-nucleo-nfc09a1.html#cad-resources).

For other customized boards, you may need to compare and to ensure respective pinouts are assigned to ensure demo works correctly and then remove to fit your application.

Pin mapping:
- ST25_IRQ: PA0
- ST25_RST: PA9
- USR_BTN: PC13
- LED1: PA1
- LED2: PA4
- LED3: PB0
- LED4: PA8
- LED5: PB10
- LED6: PB4

SPI peripheral: SPI1:
- SPI1_NSS: PA15 (configured as GPIO_OUTPUT) - it will be controlled by NFC09A1 lib
- SPI_SCL: PA5
- SPI_MISO: PA6
- SPI_MOSI: PA7

## Issues

There are few fixes that make generated code work on this platform:

1) Fix SPI HAL to handle 8-bit transfer instead of 16-bit (Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_spi.c), to resolve issue with 16-bit alignment when transfer/read data of cards
2) Disable adding FIFO to UART2 in `Drivers/BSP/custom/custom.c` as it is not available on STM32C071 UART2
3) Remove USR_BTN handling - as it is always at low level. this could be just a workaround, however we can enable again with more testing in (X-CUBE-NFC9/Target/demo_polling.c)

## Usage

An IOC file is provided which can regenerate firmware again, so pls use `git diff` to see what changes have been made to understand correctly and overcome above issues.

Currentl STM32Cube version:
- STM32CubeMX v6.15.0
- STM32CubeCLT v1.19.0

Development is done with [STM32 VS Code extension v2.0.0](https://www.st.com/content/st_com/en/campaigns/stm32-vs-code-extension-z11.html)

## Test results

```log
Welcome to X-NUCLEO-NFC09A1
ISO15693/NFC-V card found. UID: E00401531C5228B3
 Read Block: OK Data: 32353235
ISO14443A/NFC-A card found. UID: 04BF08A2A75980
 Read Block: OK Data: 04BF083BA2A75980DC48000000000000
```