#include <Std_Types.h>
#include <CryIf.h>


/**
 * @brief - initializes the CRYIF module
 * @serviceid - 0x00
 * @param configPtr - pointer to a selected configuration structure
 */
void CryIf_Init(const struct CryIf_ConfigType *configPtr)
{

}

/**
 * @brief - returns the version information of this module
 * @serviceid - 0x01
 * @param versioninfo - pointer to where to store the version informaiton of this module
 */
void CryIf_GetVersionInfo(Std_VersionInfoType *versioninfo)
{

}

/**
 * @brief - this interface dispatches the received jobs to the configured crypto driver object
 * @serviceid - 0x03
 * @param channelid - holds the identifier of the crypto channel
 * @param job - pointer to the configuration of the job. contains the structures with user and primitive relevant information
 */
Std_ReturnType CryIf_ProcessJob(uint32 channelId, Crypto_JobType *job)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this interface dispatches the job cancellation function to the configured crypto object
 * @param channelId - holds the identifier of the crypto channel
 * @param job - pointer to the configuration of the job. contains structures with user and primitive relevant information
 */
Std_ReturnType CryIf_CancelJob(uint32 channelId, Crypto_JobType *job)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/*
 * @brief - this function shall dispatch the set key element function to the configured crypto driver object
 * @serviceid - 0x04
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be set
 * @param keyElementId - holds the identifier of the key element which shall be set
 * @param keyPtr - holds the pointer to the key data which shall be set as key element
 * @param keyLength - contains the length of the key element in bytes
 */
Std_ReturnType CryIf_KeyElementSet(uint32 cryIfKeyId, uint32 keyElementId, const uint8 *keyPtr, uint32 keyLength)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the set key valid function to the configured crypto driver object
 * @serviceid - 0x05
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be set to valid
 */
Std_ReturnType CryIf_KeySetValid(uint32 cryIfKeyId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the get key element function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key whose key elements shall be returned
 * @param keyElementId - holds the identifier of the key element which shall be returned
 * @param resultPtr - holds the pointer of the buffer for the returned key element
 * @param resultLengthPtr - Holds a pointer to a memory location in which the length information is stored. On calling this function this parameter shall contain the size of the buffer provided by resultPtr. If the key element is configured to allow partial access, this parameter contains the amount of data which should be read from the key element. The size may not be equal to the size of the provided buffer anymore. When the request has finished, the amount of data that has been stored shall be stored
 */
Std_ReturnType CryIf_KeyElementGet(uint32 cryIfKeyId, uint32 keyElementId, uint8 *resultPtr, uint32 *resultLengthPtr)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall copy a key elements from one key to a target key
 * @serviceid - 0x0f
 * @param cryIfKeyId - holds the identifier of the key whose element shall be the source element
 * @param keyElementId - holds the identifier of the key element which shall be the source for the copy operation
 * @param targetCryIfKeyId - holds the identifier of the key whose key element shall be the destination element
 * @param targetKeyElementId - holds the identifier of the key element which shall be the destination for the copy operation
 */
Std_ReturnType CryIf_KeyElementCopy(uint32 cryIfKeyId, uint32 keyElementId, uint32 targetCryIfKeyId, uint32 targetKeyElementId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall copy all key elements from the source key to a target key
 * @serviceid - 0x10
 * @param cryIfKeyId - holds the identifier of the key whose key element shall be the source element
 * @param targetCryIfKeyId - holds the identifier of the key whose key element shall be the destination element
 */
Std_ReturnType CryIf_KeyCopy(uint32 cryIfKeyId, uint32 targetCryIfKeyId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the random seed function to the configured crypto driver object
 * @serviceid - 0x07
 * @param cryIfKeyId - holds the identifier of the key for which a new seed shall be generated
 * @param seedPtr - holds a pointer to the memory location which contains the data to feed the seed
 * @param seedLength - contains the length of the seed in bytes
 */
Std_ReturnType CryIf_RandomSeed(uint32 cryIfKeyId, const uint8* seedPtr, uint32 seedLength)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the key generate function to the configured crypto driver object
 * @serviceid - 0x08
 * @param cryIfKeyId - holds the identifier of the key which is to be updated with the generated value
 */
Std_ReturnType CryIf_KeyGenerate(uint32 cryIfKeyId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the key derive function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key which is used for key derivation
 * @param targetCryIfKeyId - holds the identifier of the key which is used to store the derived key
 */
Std_ReturnType CryIf_KeyDerive(uint32 cryIfKeyId, uint32 targetCryIfKeyId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the key exchange public value calculation function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key which shall be used for the key exchange protocol
 * @param publicValuePtr - holds a pointer to the memory location in which the public value length information is stored. On calling this function, this parameter shall contain the size of the buffer provided by publicValuePtr. When the request has finished, the actual length of thereturned value shall be stored
 * @param publicValueLengthPtr - contains the pointer to the data where the public value shall be stored
 */
Std_ReturnType CryIf_KeyExchangeCalcPubVal(uint32 cryIfKeyId, uint8* publicValuePtr, uint32* publicValueLengthPtr)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the key exchange common shared secret calculation function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key which shall be used for the key exchange protocol
 * @param partnerPublicValuePtr - holds the pointer to the memory location which contains the partner's public value
 * @param partnerPublicValueLength - contains the length of the partner's public value in bytes
 */
Std_ReturnType CryIf_KeyExchangeCalcSecret(uint32 cryIfKeyId, const uint8* partnerPublicValuePtr, uint32 partnerPublicValueLength)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - this function shall dispatch the certificate parse function to the configured crypto driver object
 * @param cryIfKeyId - holds the identifier of the key which shall be parsed
 */
Std_ReturnType CryIf_CertificateParse(uint32 cryIfKeyId)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}

/**
 * @brief - verifies the certificate stored in the key referenced by verifyCryIfKeyId with the certificate stored in the key referenced by cryIfKeyId
 * @param cryIfKeyId - holds the identifier of the key which shall be used to validate the certificate
 * @param verifyCryIfKeyId - holds the identifier of the key containing the certificate to be verified
 * @param verifyPtr - holds a pointer to the memory location which will contain the result of the certificate verification
 */
Std_ReturnType CryIf_CertificateVerify(uint32 cryIfKeyId, uint32 verifyCryIfKeyId, Crypto_VerifyResultType* verifyPtr)
{
    Std_ReturnType ret = E_NOT_OK;

    return ret;
}



