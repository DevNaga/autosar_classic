#ifndef __AUTO_OS_CLASSIC_AUTOSAR_CRYIF_H__
#define __AUTO_OS_CLASSIC_AUTOSAR_CRYIF_H__

#include <Std_Types.h>
#include <Csm_Types.h>
#include <CryIf_Cbk.h>
#include <CryIf_Cfg.h>

// Development Error Trace code
#define CRYIF_E_UNINIT              0x00
#define CRYIF_E_INIT_FAILED         0x01
#define CRYIF_E_PARAM_POINTER       0x02
#define CRYIF_E_PARAM_HANDLE        0x03
#define CRYIF_E_PARAM_VALUE         0x04
#define CRYIF_E_KEY_SIZE_MISMATCH   0x05

// Std_Types.h-> Std_ReturnType

#define CRYPTO_E_BUSY               0x02
#define CRYPTO_E_SMALL_BUFFER       0x03
#define CRYPTO_E_ENTROPY_EXHAUSTION 0x04
#define CRYPTO_E_QUEUE_FULL         0x05
#define CRYPTO_E_KEY_READ_FAIL      0x06
#define CRYPTO_E_KEY_WRITE_FAIL     0x07
#define CRYPTO_E_KEY_NOT_AVAILABLE  0x08
#define CRYPTO_E_KEY_NOT_VALID      0x09
#define CRYPTO_E_KEY_SIZE_MISMATCH  0x0A
#define CRYPTO_E_COUNTER_OVERFLOW   0x0B
#define CRYPTO_E_JOB_CANCELED       0x0C

struct CryIf_ConfigType {
};

/**
 * @brief - initializes the CRYIF module
 * @serviceid - 0x00
 * @param configPtr - pointer to a selected configuration structure
 */
void CryIf_Init(const CryIf_ConfigType *configPtr);

/**
 * @brief - returns the version information of this module
 * @serviceid - 0x01
 * @param versioninfo - pointer to where to store the version informaiton of this module
 */
void CryIf_GetVersionInfo(Std_VersionInfoType *versioninfo);

/**
 * @brief - this interface dispatches the received jobs to the configured crypto driver object
 * @serviceid - 0x03
 * @param channelid - holds the identifier of the crypto channel
 * @param job - pointer to the configuration of the job. contains the structures with user and primitive relevant information
 */
Std_ReturnType CryIf_ProcessJob(uint32 channelId, Crypto_JobType *job);

/**
 * @brief - this interface dispatches the job cancellation function to the configured crypto object
 * @param channelId - holds the identifier of the crypto channel
 * @param job - pointer to the configuration of the job. contains structures with user and primitive relevant information
 */
Std_ReturnType CryIf_CancelJob(uint32 channelId, Crypto_JobType *job);

/*
 * @brief - this function shall dispatch the set key element function to the configured crypto driver object
 * @serviceid - 0x04
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be set
 * @param keyElementId - holds the identifier of the key element which shall be set
 * @param keyPtr - holds the pointer to the key data which shall be set as key element
 * @param keyLength - contains the length of the key element in bytes
 */
Std_ReturnType CryIf_KeyElementSet(uint32 cryIfKeyId, uint32 keyElementId, const uint8 *keyPtr, uint32 keyLength);

/**
 * @brief - this function shall dispatch the set key valid function to the configured crypto driver object
 * @serviceid - 0x05
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be set to valid
 */
Std_ReturnType CryIf_KeySetValid(uint32 cryIfKeyId);

/**
 * @brief - this function shall dispatch the get key element function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be returned
 * @param keyElementId - holds the identifier of the key element which shall be returned
 * @param resultPtr - holds the pointer of the buffer for the returned key element
 * @param resultLengthPtr - Holds a pointer to a memory location in which the length information is stored. On calling this function this parameter shall contain the size of the buffer provided by resultPtr. If the key element is configured to allow partial access, this parameter contains the amount of data which should be read from the key element. The size may not be equal to the size of the provided buffer anymore. When the request has finished, the amount of data that has been stored shall be stored
 */
Std_ReturnType CryIf_KeyElementGet(uint32 cryIfKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr);


#endif


