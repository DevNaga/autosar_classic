#ifndef __AUTO_CLASSIC_AUTOSAR_CAN_TSYN_H__
#define __AUTO_CLASSIC_AUTOSAR_CAN_TSYN_H__

#include <Std_Types.h>

#define CANTSYN_INIT_SERVICE_ID 0x01
#define CANTSYN_GET_VERSIONINFO_SERVICE_ID 0x02
#define CANTSYN_SET_TRANSMISSION_MODE_SERVICE_ID 0x03

/**
 * This is the base type for the configuration of the Time Synchronization over CAN.A pointer to an instance of this structure will be used in the initialization of the Time Synchronization over CAN.The content of this structure is defined in chapter 10 Configuration specification.
 */
typedef struct CanTSyn_ConfigType {
} CanTSyn_ConfigType;

/**
 * Handles the enabling and disabling of the transmission mode
 */
typedef enum CanTSyn_TransmissionModeType {
    CANTSYN_TX_OFF,
    CANTSYN_TX_ON,
} CanTSyn_TransmissionModeType;

void CanTSyn_Init(const CanTSyn_ConfigType *configPtr);

void CanTSyn_GetVersionInfo(Std_VersionInfoType *versioninfo);

void CanTSyn_SetTransmissionMode(uint8 CtrlIdx, CanTSyn_TransmissionModeType Mode);

#endif


