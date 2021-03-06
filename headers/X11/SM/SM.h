#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_SM_SM_H_
#define _X11_SM_SM_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define SM_Error	0
#define SmDialogError	0
#define SmInteractStyleNone	0
#define SmProtoMinor	0
#define SmRestartIfRunning	0
#define SmSaveGlobal	0
#define SM_RegisterClient	1
#define SmDialogNormal	1
#define SmInteractStyleErrors	1
#define SmProtoMajor	1
#define SmRestartAnyway	1
#define SmSaveLocal	1
#define SM_ShutdownCancelled	10
#define SM_CloseConnection	11
#define SM_SetProperties	12
#define SM_DeleteProperties	13
#define SM_GetProperties	14
#define SM_PropertiesReply	15
#define SM_SaveYourselfPhase2Request	16
#define SM_SaveYourselfPhase2	17
#define SM_SaveComplete	18
#define SM_RegisterClientReply	2
#define SmInteractStyleAny	2
#define SmRestartImmediately	2
#define SmSaveBoth	2
#define SM_SaveYourself	3
#define SmRestartNever	3
#define SM_SaveYourselfRequest	4
#define SM_InteractRequest	5
#define SM_Interact	6
#define SM_InteractDone	7
#define SM_SaveYourselfDone	8
#define SM_Die	9
#define SmARRAY8	"ARRAY8"
#define SmCARD8	"CARD8"
#define SmCloneCommand	"CloneCommand"
#define SmCurrentDirectory	"CurrentDirectory"
#define SmDiscardCommand	"DiscardCommand"
#define SmEnvironment	"Environment"
#define SmLISTofARRAY8	"LISTofARRAY8"
#define SmProcessID	"ProcessID"
#define SmProgram	"Program"
#define SmResignCommand	"ResignCommand"
#define SmRestartCommand	"RestartCommand"
#define SmRestartStyleHint	"RestartStyleHint"
#define SmShutdownCommand	"ShutdownCommand"
#define SmUserID	"UserID"
#endif				/* __LSB_VERSION__ >= 1.2 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
