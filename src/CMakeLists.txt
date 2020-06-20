cmake_minimum_required(VERSION 3.8)

project(classic_autosar)

# Non RTOS build
if (CONFIG_OS_LINUX)
    SET(CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused-parameter")
endif()

include_directories(
                    ./common/
                    ./arch/
                    ./bsw/
                    ./bsw/cryif/
                    ./bsw/csm/
                    )

SET(CRYIF_SOURCES
        ./bsw/cryif/CryIf.c
        ./bsw/csm/Csm.c
        ./bsw/csm/Csm_Cfg.c)

SET(BSW_SOURCES
            ${CRYIF_SOURCES})
SET(AUTO_CLASSIC_AUTOSAR_SOURCES
            ${BSW_SOURCES})

if (CONFIG_OS_LINUX)
    add_library(classic_autosar ${AUTO_CLASSIC_AUTOSAR_SOURCES})
    target_link_libraries(classic_autosar pthread rt)
endif()


