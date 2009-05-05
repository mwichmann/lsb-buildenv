#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_DPMSSTR_H_
#define _X11_EXTENSIONS_DPMSSTR_H_

#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DPMSNumberErrors	0
#define DPMSNumberEvents	0
#define X_DPMSGetVersion	0
#define DPMSMajorVersion	1
#define DPMSMinorVersion	1
#define X_DPMSCapable	1
#define _DPMSSTR_H_	1
#define sz_xDPMSSetTimeoutsReq	12
#define X_DPMSGetTimeouts	2
#define X_DPMSSetTimeouts	3
#define sz_xDPMSCapableReply	32
#define sz_xDPMSGetTimeoutsReply	32
#define sz_xDPMSGetVersionReply	32
#define sz_xDPMSInfoReply	32
#define X_DPMSEnable	4
#define sz_xDPMSCapableReq	4
#define sz_xDPMSDisableReq	4
#define sz_xDPMSEnableReq	4
#define sz_xDPMSGetTimeoutsReq	4
#define sz_xDPMSInfoReq	4
#define X_DPMSDisable	5
#define X_DPMSForceLevel	6
#define X_DPMSInfo	7
#define sz_xDPMSForceLevelReq	8
#define sz_xDPMSGetVersionReq	8
#define DPMSExtensionName	"DPMS"


    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
	CARD16 majorVersion;
	CARD16 minorVersion;
    } xDPMSGetVersionReq;

    typedef struct {
	BYTE type;
	CARD8 pad0;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 majorVersion;
	CARD16 minorVersion;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDPMSGetVersionReply;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
    } xDPMSCapableReq;

    typedef struct {
	BYTE type;
	CARD8 pad0;
	CARD16 sequenceNumber;
	CARD32 length;
	BOOL capable;
	CARD8 pad1;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xDPMSCapableReply;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
    } xDPMSGetTimeoutsReq;

    typedef struct {
	BYTE type;
	CARD8 pad0;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 standby;
	CARD16 suspend;
	CARD16 off;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDPMSGetTimeoutsReply;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
	CARD16 standby;
	CARD16 suspend;
	CARD16 off;
	CARD16 pad0;
    } xDPMSSetTimeoutsReq;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
    } xDPMSEnableReq;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
    } xDPMSDisableReq;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
	CARD16 level;
	CARD16 pad0;
    } xDPMSForceLevelReq;

    typedef struct {
	CARD8 reqType;
	CARD8 dpmsReqType;
	CARD16 length;
    } xDPMSInfoReq;

    typedef struct {
	BYTE type;
	CARD8 pad0;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 power_level;
	BOOL state;
	CARD8 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xDPMSInfoReply;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
