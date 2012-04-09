#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICEPROTO_H_
#define _X11_ICE_ICEPROTO_H_

#include <X11/Xmd.h>

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



#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 data[2];
	CARD32 length;
    } iceMsg;

/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 byteOrder;
	CARD8 unused;
	CARD32 length;
    } iceByteOrderMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 protocolOpcode;
	CARD32 length;
    } iceProtocolReplyMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionIndex;
	CARD8 unused;
	CARD32 length;
    } iceConnectionReplyMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 protocolOpcode;
	CARD8 mustAuthenticate;
	CARD32 length;
	CARD8 versionCount;
	CARD8 authCount;
	CARD8 unused[6];
    } iceProtocolSetupMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 versionCount;
	CARD8 authCount;
	CARD32 length;
	CARD8 mustAuthenticate;
	CARD8 unused[7];
    } iceConnectionSetupMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 authIndex;
	CARD8 unused1;
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthRequiredMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthReplyMsg;

/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD16 authDataLength;
	CARD8 unused2[6];
    } iceAuthNextPhaseMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD16 errorClass;
	CARD32 length;
	CARD8 offendingMinorOpcode;
	CARD8 severity;
	CARD16 unused;
	CARD32 offendingSequenceNum;
    } iceErrorMsg;

#endif
    typedef iceErrorMsg icePingMsg;

    typedef iceErrorMsg icePingReplyMsg;

    typedef iceErrorMsg iceWantToCloseMsg;

    typedef iceErrorMsg iceNoCloseMsg;

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
