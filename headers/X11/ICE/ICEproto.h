#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICEPROTO_H_
#define _X11_ICE_ICEPROTO_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define sz_iceAuthNextPhaseMsg	16
#define sz_iceAuthReplyMsg	16
#define sz_iceAuthRequiredMsg	16
#define sz_iceConnectionSetupMsg	16
#define sz_iceErrorMsg	16
#define sz_iceProtocolSetupMsg	16
#define sz_iceByteOrderMsg	8
#define sz_iceConnectionReplyMsg	8
#define sz_iceMsg	8
#define sz_iceNoCloseMsg	8
#define sz_icePingMsg	8
#define sz_icePingReplyMsg	8
#define sz_iceProtocolReplyMsg	8
#define sz_iceWantToCloseMsg	8
#endif				/* __LSB_VERSION__ >= 1.2 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
