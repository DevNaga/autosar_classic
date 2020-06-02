//
// Created by devnaga on 5/31/20.
//

#ifndef AUTOSAR_CLASSIC_ETHTSYN_H
#define AUTOSAR_CLASSIC_ETHTSYN_H

#include <Std_Types.h>

struct EthTSyn_ConfigType {

};

enum EthTSyn_TransmissionModeType {
    ETHTSYN_TX_OFF = 0x00,
    ETHTSYN_TX_ON = 0x01,
};

/**
 * @brief - this function initializes time synchronization over ethernet
 * @serviceid - 0x01
 * @param configPtr
 */
void EthTSyn_Init(const EthTSyn_ConfigType *configPtr);

/**
 * @brief - returns the version information of this module
 * @serviceid - 0x02
 * @param versioninfo
 */
void EthTSyn_GetVersionInfo(Std_VersionInfoType *versioninfo);

/**
 * @brief - this API is used to turn on and off the TX capabilities of the EthTSyn
 * @serviceid - 0x05
 * @param CtrlIdx - index of ethernet controller
 * @param Mode
 */
void EthTSyn_SetTransmissionMode(uint8 CtrlIdx, EthTSyn_TransmissonModeType Mode);

/**
 * @brief - by this API service the EthTSyn gets an indication and the data of a received frame
 * @serviceid - 0x06
 * @param CtrlIdx - index of the ethernet controller
 * @param FrameType - frame type of received Ethernet frame
 * @param IsBroadcast - parameter to indicate a broadcast frame
 * @param PhysAddrPtr - pointer to Physical source address (MAC address in network byte order) of received Ethernet frame
 * @param DataPtr - pointer to payload of the received Ethernet frame (i.e. Ethernet header is not provided)
 * @param LenByte - length of received data
 */
void EthTSyn_RxIndication(uint8 CtrlIdx, Eth_FrameType FrameType, boolean IsBroadcast, const uint8 *PhysAddrPtr, const uint8 *DataPtr, uint16 LenByte);

/**
 * @brief - Confirms the transmission of an Ethernet frame
 * @serviceid - 0x07
 * @param CtrlIdx - index of Ethernet controller within the context of the Ethernet Interface
 * @param BufIdx - index of the buffer resource
 */
void EthTSyn_TxConfirmation(uint8 CtrlIdx, Eth_BufIdxType BufIdx);

#endif //AUTO_OS_ETHTSYN_H

