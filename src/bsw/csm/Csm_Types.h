#ifndef __AUTO_CLASSIC_AUTOSAR_CSM_TYPES_H__
#define __AUTO_CLASSIC_AUTOSAR_CSM_TYPES_H__

#include <Std_Types.h>

// extension to Std_ReturnType
//
// The service request failed because the service is still busy
#define CRYPTO_E_BUSY 					0x02

// The service request failed because the provided buffer is too small to store the result
#define CRYPTO_E_SMALL_BUFFER 			0x03

// The service request failed because the entropy of the random number generator is exhausted
#define CRYPTO_E_ENTROPY_EXHAUSTION 	0x04

// The service request failed because the queue is full
#define CRYPTO_E_QUEUE_FULL				0x05

// The service request failed because read access was denied
#define CRYPTO_E_KEY_READ_FAIL			0x06

// The service request failed because the writing access failed
#define CRYPTO_E_KEY_WRITE_FAIL			0x07

// The service request failed because the key is not available
#define CRYPTO_E_KEY_NOT_AVAILABLE		0x08

// The service request failed because the key is invalid
#define CRYPTO_E_KEY_NOT_VALID			0x09

// The service request failed because the key size does not match
#define CRYPTO_E_KEY_SIZE_MISMATCH		0x0A

// The service request failed because the counter is overflowed
#define CRYPTO_E_COUNTER_OVERFLOW		0x0B

// The service request failed because the Job has been canceled
#define CRYPTO_E_JOB_CANCELED			0x0C

typedef enum Crypto_AlgorithmFamilyType {
	// Algorithm family is not set
	CRYPTO_ALGOFAM_NOT_SET 				= 0x00,

	// SHA1 hash
	CRYPTO_ALGOFAM_SHA1 				= 0x01,

	// SHA2-224 hash
	CRYPTO_ALGOFAM_SHA2_224				= 0x02,

	// SHA2-256 hash
	CRYPTO_ALGOFAM_SHA2_256				= 0x03,

	// SHA2-384 hash
	CRYPTO_ALGOFAM_SHA2_384				= 0x04,

	// SHA2-512 hash
	CRYPTO_ALGOFAM_SHA2_512				= 0x05,

	// SHA2-512/224 hash
	CRYPTO_ALGOFAM_SHA2_512_224			= 0x06,

	// SHA2-512/256 hash
	CRYPTO_ALGOFAM_SHA2_512_256			= 0x07,

	// SHA3-224 hash
	CRYPTO_ALGOFAM_SHA3_224				= 0x08,

	// SHA3-256 hash
	CRYPTO_ALGOFAM_SHA3_256				= 0x09,

	// SHA3-384 hash
	CRYPTO_ALGOFAM_SHA3_384				= 0x0A,

	// SHA3-512 hash
	CRYPTO_ALGOFAM_SHA3_512				= 0x0B,

	// SHAKE128 hash
	CRYPTO_ALGOFAM_SHAKE128				= 0x0C,

	// SHAKE256 hash
	CRYPTO_ALGOFAM_SHAKE256				= 0x0D,

	// RIPEMD hash
	CRYPTO_ALGOFAM_RIPEMD160			= 0x0E,

	// BLAKE-1-256 hash
	CRYPTO_ALGOFAM_BLAKE_1_256			= 0x0F,

	// BLAKE-1-512 hash
	CRYPTO_ALGOFAM_BLAKE_1_512			= 0x10,

	// BLAKE-2s-256 hash
	CRYPTO_ALGOFAM_BLAKE_2s_256			= 0x11,

	// BLAKE-2s-512 hash
	CRYPTO_ALGOFAM_BLAKE_2s_512			= 0x12,

	// 3DES cipher
	CRYPTO_ALGOFAM_3DES					= 0x13,

	// AES cipher
	CRYPTO_ALGOFAM_AES					= 0x14,

	// ChaCha cipher
	CRYPTO_ALGOFAM_CHACHA				= 0x15,

	// RSA cipher
	CRYPTO_ALGOFAM_RSA					= 0x16,

	// ED22518 elliptic curve
	CRYPTO_ALGOFAM_ED25519				= 0x17,

	// Brainpool elliptic curve
	CRYPTO_ALGOFAM_BRAINPOOL			= 0x18,

	// NIST ECC elliptic curves
	CRYPTO_ALGOFAM_ECCNIST				= 0x19,

	// Secure Counter
	CRYPTO_ALGOFAM_SECURECOUNTER		= 0x1a,

	// Random Number Generator
	CRYPTO_ALGOFAM_RNG					= 0x1b,

	// SipHash
	CRYPTO_ALGOFAM_SIPHASH				= 0x1C,

	// ECIES Cipher
	CRYPTO_ALGOFAM_ECIES				= 0x1D,

	// Custom algorithm family
	CRYPTO_ALGOFAM_CUSTOM				= 0xFF,
} Crypto_AlgorithmFamilyType;

typedef enum Crypto_AlgorithmModeType {
	// Algorithm key is not set
	CRYPTO_ALGOMODE_NOT_SET				= 0x00,

	// Blockmode: Electronic Code Book
	CRYPTO_ALGOMODE_ECB					= 0x01,

	// Blockmode: Cipher Block Chaining
	CRYPTO_ALGOMODE_CBC					= 0x02,

	// Blockmode: Cipher Feedback Mode
	CRYPTO_ALGOMODE_CFB					= 0x03,

	// Blockmode: Output Feedback Mode
	CRYPTO_ALGOMODE_OFB					= 0x04,

	// Blockmode: Counter Modex
	CRYPTO_ALGOMODE_CTR					= 0x05,

	// Blockmode: Galois/Counter Mode
	CRYPTO_ALGOMODE_GCM					= 0x06,

	// XOR-encryption-based tweaked-codebook mode with ciphertext stealing
	CRYPTO_ALGOMODE_XTS					= 0x07,

	// RSA Optimal Asymmetric Encryption Padding
	CRYPTO_ALGOMODE_RSAES_OAEP			= 0x08,

	// RSA encryption/decryption with PKCS#1 v1.5 padding
	CRYPTO_ALGOMODE_RSAES_PKCS1_v1_5	= 0x09,

	// RSA Probabilistic Signature
	CRYPTO_ALGOMODE_RSASSA_PSS			= 0x0A,

	// RSA signature with PKCS#1 v1.5
	CRYPTO_ALGOMODE_RSASSA_PKCS1_v1_5	= 0x0B,

	// 8 rounds (e.g. ChaCha8)
	CRYPTO_ALGOMODE_8ROUNDS				= 0x0C,

	// 12 rounds (e.g. ChaCha12)
	CRYPTO_ALGOMODE_12ROUNDS			= 0x0D,

	// 20 rounds (e.g. ChaCha20)
	CRYPTO_ALGOMODE_20ROUNDS			= 0x0E,

	// Hashed-based MAC
	CRYPTO_ALGOMODE_HMAC				= 0x0F,

	// Cipher-based MAC
	CRYPTO_ALGOMODE_CMAC				= 0x10,

	// Galois MAC
	CRYPTO_ALGOMODE_GMAC				= 0x11,

	// Counter-based Deterministic Random Bit Generator
	CRYPTO_ALGOMODE_CTRDRBG				= 0x12,

	// Siphash-2-4
	CRYPTO_ALGOMODE_SIPHASH_2_4			= 0x13,

	// Siphash-4-8
	CRYPTO_ALGOMODE_SIPHASH_4_8			= 0x14,

	// Custom algorithm mode
	CRYPTO_ALGOMODE_CUSTOM				= 0xff,
} Crypto_AlgorithmModeType;

typedef enum Crypto_JobStateType {
	CRYPTO_JOBSTATE_IDLE 				= 0x00,
	CRYPTO_JOBSTATE_ACTIVE 				= 0x01,
} Crypto_JobStateType;

typedef enum Crypto_ServiceInfoType {
	CRYPTO_HASH 						= 0x00,
	CRYPTO_MACGENERATE 					= 0x01,
	CRYPTO_MACVERIFY 					= 0x02,
	CRYPTO_ENCRYPT 						= 0x03,
	CRYPTO_DECRYPT 						= 0x04,
	CRYPTO_AEADENCRYPT 					= 0x05,
	CRYPTO_AEADDECRYPT 					= 0x06,
	CRYPTO_SIGNATUREGENERATE 			= 0x07,
	CRYPTO_SIGNATUREVERIFY 				= 0x08,
	CRYPTO_SECCOUNTERINCREMENT 			= 0x09,
	CRYPTO_SECCOUNTERREAD 				= 0x0A,
	CRYPTO_RANDOMGENERATE 				= 0x0B,
} Crypto_ServiceInfoType;

typedef enum Crypto_OperationModeType {
	CRYPTO_OPERATIONMODE_START = 0x01,
	CRYPTO_OPERATIONMODE_UPDATE = 0x02,
	CRYPTO_OPERATIONMODE_STREAMSTART = 0x03,
	CRYPTO_OPERATIONMODE_FINISH = 0x04,
	CRYPTO_OPERATIONMODE_SINGLECALL = 0x07,
} Crypto_OperationModeType;

typedef struct Crypto_AlgorithmInfoType {
	Crypto_AlgorithmFamilyType 		algType;
	Crypto_AlgorithmFamilyType 		secondaryFam;
	uint32 							keyLength;
	Crypto_AlgorithmModeType 		mode;
} Crypto_AlgorithmInfoType;

typedef enum Crypto_ProcessingType {
	CRYPTO_PROCESSING_ASYNC 			= 0x00,
	CRYPTO_PROCESSING_SYNC				= 0x01,
} Crypto_ProcessingType;

typedef enum Crypto_VerifyResultType {
	CRYPTO_E_VER_OK						= 0x00,
	CRYPTO_E_VER_NOT_OK					= 0x01,
} Crypto_VerifyResultType;

typedef struct Crypto_JobPrimitiveInputOutputType {
	const uint8						*inputPtr;
	uint32							inputLength;
	const uint8						*secondaryInputPtr;
	uint32							secondaryInputLength;
	const uint8						*tertiaryInputPtr;
	uint32							tertiaryInputLength;
	uint8							*outputPtr;
	uint32							*outputLengthPtr;
	uint8							*secondaryOutputPtr;
	uint64							input64;
	Crypto_VerifyResultType 		*verifyPtr;
	uint64							*output64Ptr;
	Crypto_OperationModeType 		mode;
} Crypto_JobPrimitiveInputOutputType;

typedef struct Crypto_JobInfoType {
	const uint32 jobId;
	const uint32 jobPriority;
} Crypto_JobInfoType;

typedef struct Crypto_PrimitiveInfoType {
	const uint32 					resultLength;
	const Crypto_ServiceInfoType	service;
	const Crypto_AlgorithmInfoType 	algorithm;
} Crypto_PrimitiveInfoType;

typedef struct Crypto_JobPrimitiveInfoType {
	const uint32 					callbackId;
	const Crypto_PrimitiveInfoType	*primitiveInfo;
	const uint32					secureCounterId;
	const uint32					cryIfKeyId;
	const Crypto_ProcessingType		processingType;
	const boolean					callbackUpdateNotification;
} Crypto_JobPrimitiveInfoType;

typedef struct Crypto_JobType {
	const uint32						jobId;
	Crypto_JobStateType					jobState;
	Crypto_JobPrimitiveInputOutputType 	jobPrimitiveInputOutput;
	const Crypto_JobPrimitiveInfoType 	*jobPrimitiveInfo;
	const Crypto_JobInfoType			*jobInfo;
	uint32								cryptoKeyId;
} Crypto_JobType;

#endif


