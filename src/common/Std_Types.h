//
// Created by devnaga on 5/31/20.
//

#ifndef AUTOSAR_CLASSIC_STD_TYPES_H
#define AUTOSAR_CLASSIC_STD_TYPES_H

typedef char boolean;
typedef char sint8;
typedef unsigned char uint8;
typedef short sint16;
typedef unsigned short uint16;
typedef int sint32;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef long long sint64;
typedef char sint8_least;
typedef unsigned char uint8_least;
typedef short sint16_least;
typedef unsigned short uint16_least;
typedef int sint32_least;
typedef unsigned int uint32_least;
typedef float float32;
typedef float float64;

#define CPU_TYPE_8      8
#define CPU_TYPE_16     16
#define CPU_TYPE_32     32
#define CPU_TYPE_64     64

#define MSB_FIRST       0
#define LSB_FIRST       1

#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST  1

#ifdef CONFIG_CPU_ESP32
#define CPU_TYPE CPU_TYPE_32
#define CPU_BIT_ORDER LSB_FIRST
#define CPU_BYTE_ORDER HIGH_BYTE_FIRST
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif


typedef uint8 Std_ReturnType;

#define E_OK 0
#define E_NOT_OK 1

#define STD_LOW 0x00u
#define STD_HIGH 0x01u

#define STD_IDLE 0x00u
#define STD_ACTIVE 0x01u

#define STD_OFF 0x00u
#define STD_ON 0x01u

typedef struct Std_VersionInfoType {
    uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
} Std_VersionInfoType;

#endif //AUTO_OS_STD_TYPES_H
