#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XEVISTR_H_
#define _X11_EXTENSIONS_XEVISTR_H_

#include <X11/extensions/XEVI.h>
#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XEVI_MINOR_VERSION	0
#define XEVI_MAJOR_VERSION	1
#define _EVISTR_H_	1
#define sz_xExtendedVisualInfo	16
#define sz_xEVIGetVisualInfoReply	32
#define sz_xEVIQueryVersionReply	32
#define sz_VisualID32	4
#define sz_xEVIQueryVersionReq	4
#define sz_xEVIGetVisualInfoReq	8
#define EVINAME	"Extended-Visual-Information"


    typedef unsigned int VisualID32;

    typedef struct _xExtendedVisualInfo xExtendedVisualInfo;

    typedef struct _XEVIQueryVersion xEVIQueryVersionReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 majorVersion;
	CARD16 minorVersion;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    } xEVIQueryVersionReply;

    typedef struct _XEVIGetVisualInfoReq xEVIGetVisualInfoReq;

    typedef struct _XEVIGetVisualInfoReply xEVIGetVisualInfoReply;

    struct _xExtendedVisualInfo {
	CARD32 core_visual_id;
	INT8 screen;
	INT8 level;
	CARD8 transparency_type;
	CARD8 pad0;
	CARD32 transparency_value;
	CARD8 min_hw_colormaps;
	CARD8 max_hw_colormaps;
	CARD16 num_colormap_conflicts;
    };

    struct _XEVIQueryVersion {
	CARD8 reqType;
	CARD8 xeviReqType;
	CARD16 length;
    };

    struct _XEVIGetVisualInfoReq {
	CARD8 reqType;
	CARD8 xeviReqType;
	CARD16 length;
	CARD32 n_visual;
    };

    struct _XEVIGetVisualInfoReply {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 n_info;
	CARD32 n_conflicts;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
