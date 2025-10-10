cmake_minimum_required(VERSION 3.22)
# Enable CMake support for ASM and C languages
enable_language(C ASM)
# STM32CubeMX generated symbols (macros)
set(MX_Defines_Syms 
	ST25R200 
	USE_HAL_DRIVER 
	STM32C071xx
    $<$<CONFIG:Debug>:DEBUG>
)

# STM32CubeMX generated include paths
set(MX_Include_Dirs
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../../X-CUBE-NFC9/Target
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Inc/Legacy
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/CMSIS/Device/ST/STM32C0xx/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/CMSIS/Include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/NFC09A1
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Inc
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src
)

# STM32CubeMX generated application sources
set(MX_Application_Src
    ${CMAKE_CURRENT_SOURCE_DIR}/../../X-CUBE-NFC9/Target/nfc_conf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/main.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/gpio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/custom_bus.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/stm32c0xx_it.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/stm32c0xx_hal_msp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/sysmem.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/syscalls.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../startup_stm32c071xx.s
)

# STM32 HAL/LL Drivers
set(STM32_Drivers_Src
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Core/Src/system_stm32c0xx.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_spi.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_spi_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_dma.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_dma_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_rcc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_rcc_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_flash.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_flash_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_gpio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_pwr.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_pwr_ex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_cortex.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/STM32C0xx_HAL_Driver/Src/stm32c0xx_hal_exti.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/NFC09A1/nfc09a1.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200/rfal_rfst25r200.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200/st25r200.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200/st25r200_com.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200/st25r200_irq.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Drivers/BSP/Components/st25r200/timer.c
)

# Drivers Midllewares


set(X-CUBE-NFC9_Src
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_analogConfig.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_crc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_dpo.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_iso15693_2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_cd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_isoDep.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfca.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfcb.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfcDep.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfcf.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_nfcv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_st25tb.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_st25xv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_t1t.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_t2t.c
    ${CMAKE_CURRENT_SOURCE_DIR}/../../Middlewares/ST/rfal/Src/rfal_t4t.c
)

# Link directories setup
set(MX_LINK_DIRS

)
# Project static libraries
set(MX_LINK_LIBS 
    STM32_Drivers
    ${TOOLCHAIN_LINK_LIBRARIES}
    X-CUBE-NFC9	
)
# Interface library for includes and symbols
add_library(stm32cubemx INTERFACE)
target_include_directories(stm32cubemx INTERFACE ${MX_Include_Dirs})
target_compile_definitions(stm32cubemx INTERFACE ${MX_Defines_Syms})

# Create STM32_Drivers static library
add_library(STM32_Drivers OBJECT)
target_sources(STM32_Drivers PRIVATE ${STM32_Drivers_Src})
target_link_libraries(STM32_Drivers PUBLIC stm32cubemx)


# Create X-CUBE-NFC9 static library
add_library(X-CUBE-NFC9 OBJECT)
target_sources(X-CUBE-NFC9 PRIVATE ${X-CUBE-NFC9_Src})
target_link_libraries(X-CUBE-NFC9 PUBLIC stm32cubemx)

# Add STM32CubeMX generated application sources to the project
target_sources(${CMAKE_PROJECT_NAME} PRIVATE ${MX_Application_Src})

# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE ${MX_LINK_DIRS})

# Add libraries to the project
target_link_libraries(${CMAKE_PROJECT_NAME} ${MX_LINK_LIBS})

# Add the map file to the list of files to be removed with 'clean' target
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES ADDITIONAL_CLEAN_FILES ${CMAKE_PROJECT_NAME}.map)

# Validate that STM32CubeMX code is compatible with C standard
if((CMAKE_C_STANDARD EQUAL 90) OR (CMAKE_C_STANDARD EQUAL 99))
    message(ERROR "Generated code requires C11 or higher")
endif()
