#include <det.h>

static const Det_Config *config = NULL;
static uint8 initialized = 0;

void Det_Init(const Det_ConfigType *ConfigPtr)
{
    config = ConfigPtr;
}

Std_ReturnType Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
}

void Det_Start()
{
}

Std_ReturnType Det_ReportRuntimeError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
}

Std_ReturnType Det_ReportTransientFault(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 FaultId)
{
}

void Det_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
}


