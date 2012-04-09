#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_SM_SMPROTO_H_
#define _X11_SM_SMPROTO_H_

#include <X11/Xmd.h>

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
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smRegisterClientReplyMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast[2];
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1[2];
	CARD32 length;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 unused2[4];
    } smSaveYourselfMsg;

/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused1;
	CARD8 saveType;
	CARD8 shutdown;
	CARD8 interactStyle;
	CARD8 fast;
	CARD8 global;
	CARD8 unused2[3];
    } smSaveYourselfRequestMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 dialogType;
	CARD8 unused;
	CARD32 length;
    } smInteractRequestMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smInteractMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 cancelShutdown;
	CARD8 unused;
	CARD32 length;
    } smInteractDoneMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 success;
	CARD8 unused;
	CARD32 length;
    } smSaveYourselfDoneMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDieMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smShutdownCancelledMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smCloseConnectionMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSetPropertiesMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smDeletePropertiesMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smGetPropertiesMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smPropertiesReplyMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2RequestMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveYourselfPhase2Msg;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 majorOpcode;
	CARD8 minorOpcode;
	CARD8 unused[2];
	CARD32 length;
    } smSaveCompleteMsg;

#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
