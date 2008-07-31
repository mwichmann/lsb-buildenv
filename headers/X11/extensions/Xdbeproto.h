#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_XDBEPROTO_H_
#define _X11_EXTENSIONS_XDBEPROTO_H_

#include <X11/X.h>
#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned char xDbeSwapAction;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned int xDbeBackBuffer;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	VisualID visual;
	int depth;
	int perflevel;
    } XdbeVisualInfo;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	int count;
	XdbeVisualInfo *visinfo;
    } XdbeScreenVisualInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	unsigned int window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeSwapInfo;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD32 window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeSwapInfo;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeSwapInfo;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	unsigned int window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeSwapInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD32 window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeSwapInfo;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	unsigned int window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeSwapInfo;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD32 window;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeSwapInfo;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD32 visualID;
	CARD8 depth;
	CARD8 perfLevel;
	CARD16 pad1;
    } xDbeVisInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	unsigned int visualID;
	CARD8 depth;
	CARD8 perfLevel;
	unsigned int pad1;
    } xDbeVisInfo;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	unsigned int visualID;
	CARD8 depth;
	CARD8 perfLevel;
	unsigned int pad1;
    } xDbeVisInfo;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD32 visualID;
	CARD8 depth;
	CARD8 perfLevel;
	CARD16 pad1;
    } xDbeVisInfo;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	unsigned int visualID;
	CARD8 depth;
	CARD8 perfLevel;
	unsigned int pad1;
    } xDbeVisInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD32 visualID;
	CARD8 depth;
	CARD8 perfLevel;
	CARD16 pad1;
    } xDbeVisInfo;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int visualID;
	CARD8 depth;
	CARD8 perfLevel;
	unsigned int pad1;
    } xDbeVisInfo;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD32 n;
    } xDbeScreenVisInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	unsigned int n;
    } xDbeScreenVisInfo;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int n;
    } xDbeScreenVisInfo;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	unsigned int n;
    } xDbeScreenVisInfo;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD32 n;
    } xDbeScreenVisInfo;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD32 n;
    } xDbeScreenVisInfo;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	unsigned int n;
    } xDbeScreenVisInfo;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	unsigned int window;
    } xDbeBufferAttributes;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD32 window;
    } xDbeBufferAttributes;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD32 window;
    } xDbeBufferAttributes;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	unsigned int window;
    } xDbeBufferAttributes;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD32 window;
    } xDbeBufferAttributes;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	unsigned int window;
    } xDbeBufferAttributes;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	unsigned int window;
    } xDbeBufferAttributes;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int unused;
    } xDbeGetVersionReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 unused;
    } xDbeGetVersionReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int unused;
    } xDbeGetVersionReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 unused;
    } xDbeGetVersionReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int unused;
    } xDbeGetVersionReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 unused;
    } xDbeGetVersionReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int unused;
    } xDbeGetVersionReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xDbeGetVersionReply;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
	unsigned int pad6;
    } xDbeGetVersionReply;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
	unsigned int pad6;
    } xDbeGetVersionReply;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
	unsigned int pad6;
    } xDbeGetVersionReply;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
	unsigned int pad6;
    } xDbeGetVersionReply;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xDbeGetVersionReply;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xDbeGetVersionReply;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 window;
	xDbeBackBuffer buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int window;
	unsigned int buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int window;
	unsigned int buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int window;
	unsigned int buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int window;
	unsigned int buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	unsigned int pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 window;
	xDbeBackBuffer buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 window;
	xDbeBackBuffer buffer;
	xDbeSwapAction swapAction;
	CARD8 pad1;
	CARD16 pad2;
    } xDbeAllocateBackBufferNameReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeDeallocateBackBufferNameReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeSwapBuffersReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeSwapBuffersReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeSwapBuffersReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeSwapBuffersReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeSwapBuffersReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeSwapBuffersReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeSwapBuffersReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeBeginIdiomReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeBeginIdiomReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeBeginIdiomReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeBeginIdiomReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeBeginIdiomReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeBeginIdiomReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeBeginIdiomReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeEndIdiomReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeEndIdiomReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeEndIdiomReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeEndIdiomReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeEndIdiomReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
    } xDbeEndIdiomReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
    } xDbeEndIdiomReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	CARD32 n;
    } xDbeGetVisualInfoReq;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 m;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 m;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 m;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 m;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 m;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 m;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 m;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetVisualInfoReply;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	CARD16 length;
	xDbeBackBuffer buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	CARD8 reqType;
	CARD8 dbeReqType;
	unsigned int length;
	unsigned int buffer;
    } xDbeGetBackBufferAttributesReq;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 attributes;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 attributes;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __i386__
/* IA32 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 attributes;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __ia64__
/* IA64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 attributes;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 attributes;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __s390x__
/* S390X */
    typedef struct {
	BYTE type;
	CARD8 unused;
	unsigned int sequenceNumber;
	unsigned int length;
	CARD32 attributes;
	unsigned int pad1;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned int pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 attributes;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xDbeGetBackBufferAttributesReply;

#endif
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
