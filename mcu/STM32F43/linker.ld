/*
    GNU linker script for STM32F4xxxx
*/

MEMORY
{
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 1024K /* entire flash */
    FLASH_ISR (rx)  : ORIGIN = 0x08000000, LENGTH = 16K /* sector 0 */
    FLASH_FS (rx)   : ORIGIN = 0x08004000, LENGTH = 112K /* sectors 1,2,3,4 are for filesystem */
    FLASH_TEXT (rx) : ORIGIN = 0x08020000, LENGTH = 896K /* sectors 5,6,7,8,9,10,11 */
    CCMRAM (xrw)    : ORIGIN = 0x10000000, LENGTH = 64K
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 128K
} /* ok, provereno iz rm009 */

/* MICROPY */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;

_estack = ORIGIN(RAM) + LENGTH(RAM) - _estack_reserve;
_sstack = _estack - 16K; /* tunable */

_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);
_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = _sstack;

_micropy_hw_internal_flash_storage_ram_cache_start = ORIGIN(CCMRAM);
_micropy_hw_internal_flash_storage_ram_cache_end = ORIGIN(CCMRAM) + LENGTH(CCMRAM);
_micropy_hw_internal_flash_storage_start = ORIGIN(FLASH_FS);
_micropy_hw_internal_flash_storage_end = ORIGIN(FLASH_FS) + LENGTH(FLASH_FS);
