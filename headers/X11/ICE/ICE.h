#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICE_H_
#define _X11_ICE_ICE_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define ICE_Error	0
#define IceBadMajor	0
#define IceCanContinue	0
#define IceLSBfirst	0
#define IceProtoMinor	0
#define IceBadMinor	0x8000
#define IceBadState	0x8001
#define IceBadLength	0x8002
#define IceBadValue	0x8003
#define ICE_ByteOrder	1
#define IceFatalToProtocol	1
#define IceMSBfirst	1
#define IceNoAuth	1
#define IceProtoMajor	1
#define ICE_PingReply	10
#define ICE_WantToClose	11
#define ICE_NoClose	12
#define ICE_ConnectionSetup	2
#define IceFatalToConnection	2
#define IceNoVersion	2
#define ICE_AuthRequired	3
#define IceSetupFailed	3
#define ICE_AuthReply	4
#define IceAuthRejected	4
#define ICE_AuthNextPhase	5
#define IceAuthFailed	5
#define ICE_ConnectionReply	6
#define IceProtocolDuplicate	6
#define ICE_ProtocolSetup	7
#define IceMajorOpcodeDuplicate	7
#define ICE_ProtocolReply	8
#define IceUnknownProtocol	8
#define ICE_Ping	9
#endif				// __LSB_VERSION__ >= 1.2



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
