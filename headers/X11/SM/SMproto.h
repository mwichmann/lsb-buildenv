#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_SM_SMPROTO_H_
#define _X11_SM_SMPROTO_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define sz_smSaveYourselfMsg	16
#define sz_smSaveYourselfRequestMsg	16
#define sz_smCloseConnectionMsg	8
#define sz_smDeletePropertiesMsg	8
#define sz_smDieMsg	8
#define sz_smGetPropertiesMsg	8
#define sz_smInteractDoneMsg	8
#define sz_smInteractMsg	8
#define sz_smInteractRequestMsg	8
#define sz_smPropertiesReplyMsg	8
#define sz_smRegisterClientMsg	8
#define sz_smRegisterClientReplyMsg	8
#define sz_smSaveCompleteMsg	8
#define sz_smSaveYourselfDoneMsg	8
#define sz_smSaveYourselfPhase2Msg	8
#define sz_smSaveYourselfPhase2RequestMsg	8
#define sz_smSetPropertiesMsg	8
#define sz_smShutdownCancelledMsg	8
#endif				// __LSB_VERSION__ >= 1.2



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
