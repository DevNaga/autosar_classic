#ifndef __AUTO_CLASSIC_AUTOSAR_DET_H__
#define __AUTO_CLASSIC_AUTOSAR_DET_H__

#include <Std_Types.h>

#define DET_SERVICE_ID_DET_INIT                 0x00
#define DET_SERVICE_ID_DET_REPORT_ERROR         0x01
#define DET_SERVICE_ID_DET_START                0x02
#define DET_SERVICE_ID_DET_GET_VERSION_INFO     0x03
#define DET_SERVICE_ID_DET_REPORT_RUNTIME_ERROR 0x04
#define DET_SERVICE_ID_DET_REPORT_TRANSIENT_FAULT 0x05

typedef struct Det_ConfigType {
} Det_ConfigType;

/**
 * @brief - service to initialize the default error tracer
 */
void Det_Init(const Det_ConfigType* ConfigPtr);

/**
 * @brief - service to report development errors
 */
Std_ReturnType Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId);

/**
 * @brief - service to start the default error tracer
 */
void Det_Start(void);

/**
 * @brief - service to report runtime errors. if a callout has been configured then this callout shall be called
 */
Std_ReturnType Det_ReportRuntimeError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId);

/**
 * @brief - service to report transcient faults. if a callout has been configured then this callout
 *          shall be called and the returned value of the callout shall be returned. otherwise it returns
 *          immediately with E_OK
 */
Std_ReturnType Det_ReportTransientFault(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId);

/**
 * @brief - returns the version information of this module
 */
void Det_GetVersionInfo(Std_VersionInfoType* versioninfo);

#endif


