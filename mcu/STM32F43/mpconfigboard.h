#define MICROPY_HW_BOARD_NAME       "Fusion for ARM v8" // ma bre, sve dev board su vam iste, isti pinovi
#define MICROPY_HW_MCU_NAME         "STM32F43xx" // trenutno

// misc config
#define MICROPY_PY_BUILTINS_HELP_TEXT  me_help_text
#define MICROPY_HW_FLASH_FS_LABEL      "mikroe_mpy"
#define MICROPY_BOARD_FROZEN_BOOT_FILE "_boot.py"

#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1) // 0 kad je ex. SPI/SD koriscen flash
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_PY_PYB              (0) // ode 100KB a i nije potrebno, cemu sluzi onda machine

// Clock konfiguracija
// Trenutna konfiguracija za F437ZG (NECTO USB default, porgresan 16 PLLM: 25, MCU nema 16 MHz kristal)

#define MICROPY_HW_CLK_PLLM         (25)                // PLLM
#define MICROPY_HW_CLK_PLLN         (336)               // PLLN
#define MICROPY_HW_CLK_PLLP         (RCC_PLLP_DIV2)     // PLLP
#define MICROPY_HW_CLK_PLLQ         (7)                 // PLLQ

// RTC konfiguracija    
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (0) // 512 Hz out

/////////////////////////////////////////////////////////////// CONFIG INTERFACE START

// UART konfiguracija
// mikroBUS slot 1
#define MICROPY_HW_UART1_TX         (pin_B6)
#define MICROPY_HW_UART1_RX         (pin_B7)

// mikroBUS slot 2
#define MICROPY_HW_UART2_TX         (pin_D5)
#define MICROPY_HW_UART2_RX         (pin_D6)

// mikroBUS slot 3
#define MICROPY_HW_UART3_TX         (pin_D8)
#define MICROPY_HW_UART3_RX         (pin_D9)

// mikroBUS slot 4
#define MICROPY_HW_UART4_TX         (pin_C6)
#define MICROPY_HW_UART4_RX         (pin_C7)

// mikroBUS slot 5
#define MICROPY_HW_UART5_TX         (pin_C6)
#define MICROPY_HW_UART5_RX         (pin_C7)

// USB UART
#define MICROPY_HW_UART6_TX         (pin_C6)
#define MICROPY_HW_UART6_RX         (pin_C7)

// I2C busevi
// mikroBUS slot 1-3
#define MICROPY_HW_I2C1_SCL         (pin_B8)
#define MICROPY_HW_I2C1_SDA         (pin_B9)

// mikroBUS slot 4-5
#define MICROPY_HW_I2C2_SCL         (pin_F1)
#define MICROPY_HW_I2C2_SDA         (pin_F0)

// SPI bus
// mikroBUS slot 1
#define MICROPY_HW_SPI1_NSS         (pin_A4)
#define MICROPY_HW_SPI1_SCK         (pin_A5)
#define MICROPY_HW_SPI1_MISO        (pin_A6)
#define MICROPY_HW_SPI1_MOSI        (pin_B5)

// mikroBUS slot 2
#define MICROPY_HW_SPI2_NSS         (pin_B2)
#define MICROPY_HW_SPI2_SCK         (pin_A5)
#define MICROPY_HW_SPI2_MISO        (pin_A6)
#define MICROPY_HW_SPI2_MOSI        (pin_B5)

// mikroBUS slot 3
#define MICROPY_HW_SPI3_NSS         (pin_B4)
#define MICROPY_HW_SPI3_SCK         (pin_A5)
#define MICROPY_HW_SPI3_MISO        (pin_A6)
#define MICROPY_HW_SPI3_MOSI        (pin_B5)

// mikroBUS slot 4
#define MICROPY_HW_SPI4_NSS         (pin_C13)
#define MICROPY_HW_SPI4_SCK         (pin_C10)
#define MICROPY_HW_SPI4_MISO        (pin_C11)
#define MICROPY_HW_SPI4_MOSI        (pin_C12)

// mikroBUS slot 5
#define MICROPY_HW_SPI5_NSS         (pin_D7)
#define MICROPY_HW_SPI5_SCK         (pin_C10)
#define MICROPY_HW_SPI5_MISO        (pin_C11)
#define MICROPY_HW_SPI5_MOSI        (pin_C12)

// CAN bus
#define MICROPY_HW_CAN1_TX          (pin_D1)
#define MICROPY_HW_CAN1_RX          (pin_D0)

/////////////////////////////////////////////////////////////// CONFIG INTERFACE END

// Indikacione LED, koristi se samo LED2 za indikaciju boot-a
#define MICROPY_HW_LED1             (pin_B15) // koristi se za prikaz ucitavanja (ovo je prazan pin, donji levi indikator)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin)) // koristi se hal_ll_gpio
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB konfiguracija, MicroPython se ucitava na USB izlazu na dev ploci
#define MICROPY_HW_USB_FS              (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)