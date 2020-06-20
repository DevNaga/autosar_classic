#ifndef __AUTO_CLASSICAUTOSAR_CSM_H__
#define __AUTO_CLASSICAUTOSAR_CSM_H__

#include <Csm_Types.h>

// Csm module specific return values for use in Std_ReturnType that could occur on async
typedef Std_ReturnType Csm_ResultType;

#define E_SMALL_BUFFER 				0x02
#define E_ENTROPY_EXHAUSTION 		0x03
#define E_KEY_READ_FAIL 			0x04
#define E_KEY_NOT_AVAILABLE 		0x05
#define E_KEY_NOT_VALID 			0x06
#define E_JOB_CANCELED 				0x07

// Identification of a CSM service configuration via a numeric identifier, that is unique within a service.The name of a CSM service configuration, i.e. the name of the container Csm_<Service>Config, shall serve as a symbolic name for this parameter
typedef uint16 Csm_ConfigIdType;

// Enumeration of the result type of verification operations
typedef uint8 Csm_VerifyResultType;

/**
 * @brief - Initializes the CSM module
 * @serviceid - 0x00
 */
void Csm_Init(void);

/**
 * @brief - Returns the version information of this module
 * @serviceid - 0x3b
 */
void Csm_GetVersionInfo(struct Std_VersionInfoType* versioninfo);

/**
 * @brief - Uses the given data to perform the hash calculation and stores the hash.
 * @serviceid - 0x5d
 */
Std_ReturnType Csm_Hash(uint32 jobId, enum Crypto_OperationModeType mode, const uint8* dataPtr, uint32 dataLength, uint8* resultPtr, uint32* resultLengthPtr);

/**
 * @brief - This function is deprecated and does nothing
 */
Std_ReturnType Csm_HashStart(Csm_ConfigIdType cfgId);

/**
 * @brief - This function is deprecated. Feeds the hash service with the input data
 */
Std_ReturnType Csm_HashUpdate(Csm_ConfigIdType cfgId,const uint8* dataPtr,uint32 dataLength);

/**
 * @brief - This function is deprecated. Finishes the hash service of the CSM module and stores the hash
 */
Std_ReturnType Csm_HashFinish(Csm_ConfigIdType cfgId,uint8* resultPtr,uint32* resultLengthPtr,boolean TruncationIsAllowed);

/**
 * @brief - This function is deprecated and does nothing
 */
Std_ReturnType Csm_ChecksumStart(Csm_ConfigIdType cfgId);

/**
 * @brief - This function is deprecated. Feeds the checksum service with the input data. It shall use the hash service to calculate the checksum
 */
Std_ReturnType Csm_ChecksumUpdate(Csm_ConfigIdType cfgId,const uint8* dataPtr,uint32 dataLength);

/**
 * @brief - This function is deprecated. Finishes the checksum service of the CSM module and stores the hash. It shall use the hash service to calculate the checksum
 */
Std_ReturnType Csm_ChecksumFinish(Csm_ConfigIdType cfgId,uint8* resultPtr,uint32* resultLengthPtr,boolean TruncationIsAllowed);

/**
 * @brief - Uses the given data to perform a MAC generation and stores the MAC in the memory location pointed to by the MAC pointer
 */
Std_ReturnType Csm_MacGenerate(uint32 jobId, enum Crypto_OperationModeType mode,const uint8* dataPtr,uint32 dataLength,uint8* macPtr,uint32* macLengthPtr);

/**
 * @brief - This function is deprecated. Sets the key for MAC generation
 */
Std_ReturnType Csm_MacGenerateStart(Csm_ConfigIdType cfgId,const Csm_SymKeyType* keyPtr);

/**
 * @brief - This function is deprecated. Feeds the MAC generate service with the input data
 */
Std_ReturnType Csm_MacGenerateUpdate(Csm_ConfigIdType cfgId,const uint8* dataPtr,uint32 dataLength);

/**
 * @brief - This function is deprecated. Finishes the MAC generation service and stores the MAC in the memory location pointed by the MAC pointer
 */
Std_ReturnType Csm_MacGenerateFinish(Csm_ConfigIdType cfgId,uint8* resultPtr,uint32* resultLengthPtr,boolean TruncationIsAllowed);

/**
 * @brief - Verifies the given MAC by comparing if the MAC is generated with the given data
 */
Std_ReturnType Csm_MacVerify(uint32 jobId,Crypto_OperationModeType mode,const uint8* dataPtr,uint32 dataLength,const uint8* macPtr,const uint32 macLength,Crypto_VerifyResultType* verifyPtr);

/**
 * @brief - This function is deprecated. Sets the key for MAC verification
 */
Std_ReturnType Csm_MacVerifyStart(Csm_ConfigIdType cfgId,const Csm_SymKeyType* keyPtr);

/**
 * @brief - This function is deprecated. Feeds the MAC verification service with the input data
 */
Std_ReturnType Csm_MacVerifyUpdate(Csm_ConfigIdType cfgId,const uint8* dataPtr,uint32 dataLength);

/**
 * @brief - This function is deprecated. Finishes the MAC verification and stores the verification result in the memory location pointed by the result pointer
 */
Std_ReturnType Csm_MacVerifyFinish(Csm_ConfigIdType cfgId,const uint8* MacPtr,uint32 MacLength,Csm_VerifyResultType* resultPtr);

/**
 * @brief - Encrypts the given data and store the ciphertext in the memory location pointed by the result pointer
 */
Std_ReturnType Csm_Encrypt(uint32 jobId,Crypto_OperationModeType mode,const uint8* dataPtr,uint32 dataLength,uint8* resultPtr,uint32* resultLengthPtr);

/**
 * @brief - Decrypts the given encrypted data and store the decrypted plaintext in the memory location pointed by the result pointer
 */
Std_ReturnType Csm_Decrypt(uint32 jobId,Crypto_OperationModeType mode,const uint8* dataPtr,uint32 dataLength,uint8* resultPtr,uint32* resultLengthPtr);

/**
 * @brief - This function is deprecated. Sets the key for symmetrical encryption
 */
Std_ReturnType Csm_SymBlockEncryptStart(Csm_ConfigIdType cfgId,const Csm_SymKeyType* keyPtr);

/**
 * @brief - This function is deprecated. Feeds the symmetrical encrypt service with the input data and store the ciphertext inthe memory location pointed by the ciphertext pointer
 */
Std_ReturnType Csm_SymBlockEncryptUpdate(Csm_ConfigIdType cfgId,const uint8* plainTextPtr,uint32 plainTextLength,uint8* cipherTextPtr,uint32* cipherTextLengthPtr);


#endif


