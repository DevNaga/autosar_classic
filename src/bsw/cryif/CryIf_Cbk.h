//
// Created by devnaga on 6/2/20.
//

#ifndef AUTO_OS_CLASSIC_AUTOSAR_CRYIF_CBK_H
#define AUTO_OS_CLASSIC_AUTOSAR_CRYIF_CBK_H

/**
 * @brief - notifies the CRYIF about the completion of the request with the result of the cryptographic operation
 * @param job - points to the completed job's information structure. It contains a callbackID to identify which job is finished
 * @param result - contains the result of the cryptographic operation
 */
void CryIf_CallbackNotification(const Crypto_JobType* job, Std_ReturnType result);


#endif //AUTO_OS_CRYIF_CBK_H
