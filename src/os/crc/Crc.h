#ifndef __AUTO_CLASSIC_AUTOSAR_CRC_H__
#define __AUTO_CLASSIC_AUTOSAR_CRC_H__

#include <Std_Types.h>

#define CRC_CALCULATECRC8_SERVICE_ID 0x01
#define CRC_CALCULATECRC8H2F_SERVICE_ID 0x05
#define CRC_CALCULATECRC16_SERVICE_ID 0x02
#define CRC_CALCULATECRC16ARC_SERVICE_ID 0x08
#define CRC_CALCULATECRC32_SERVICE_ID 0x03
#define CRC_CALCULATECRC32P4_SERVICE_ID 0x06
#define CRC_CALCULATECRC64_SERVICE_ID 0x07

/**
 * @brief - This service makes a CRC8 calculation on Crc_Length data bytes, with SAE J1850 parameters
 */
uint8 Crc_CalculateCRC8(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC8 calculation with the Polynomial 0x2F on Crc_Length
 */
uint8 Crc_CalculateCRC8H2F(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8H2F, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC16 calculation on Crc_Length data bytes.
 */
uint16 Crc_CalculateCRC16(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC16 calculation on Crc_Length data bytes, using the poly-
 *          nomial 0x8005.
 */
uint16 Crc_CalculateCRC16ARC(const uint8 *CrC_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC32 calculation on Crc_Length data bytes.
 */
uint32 Crc_CalculateCRC32(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC32 calculation on Crc_Length data bytes, using the poly-
 *          nomial 0xF4ACFB13.
 *          This CRC routine is used by E2E Profile 4.
 */
uint32 Crc_CalculateCRC32P4(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall);

/**
 * @brief - This service makes a CRC64 calculation on Crc_Length data bytes, using the poly-
 *          nomial 0x42F0E1EBA9EA3693.
 *          This CRC routine is used by E2E Profile 7.
 */
uint64 Crc_CalculateCRC64(const uint8 *Crc_DataPtr, uint32 Crc_Length, uint64 Crc_StartValue64, boolean Crc_IsFirstCall);

/**
 * @brief - This service returns the version information of this module.
 */
void Crc_GetVersionInfo(Std_VersionInfoType *VersionInfo);


#endif


