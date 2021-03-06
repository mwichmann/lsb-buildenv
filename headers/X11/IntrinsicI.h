#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_INTRINSICI_H_
#define _X11_INTRINSICI_H_

#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define CALLGEOTAT(f)
#define XTERROR_PREFIX	""
#define XTWARNING_PREFIX	""
#define XtStackAlloc(size,stack_cache_array)	((size) <= sizeof(stack_cache_array) ? (XtPointer)(stack_cache_array) : XtMalloc((unsigned)(size)))
#define XtWindowOfObject(object)	((XtIsWidget(object) ? (object) : _XtWindowedAncestor(object)) ->core.window)
#define XtIsSensitive(object)	(XtIsRectObj(object) ? ((object)->core.sensitive && (object)->core.ancestor_sensitive) : False)
#define XtIsManaged(object)	(XtIsRectObj(object) ? (object)->core.managed : False)
#define XtScreenOfObject(object)	(XtIsWidget(object) ? (object)->core.screen : _XtIsHookObject(object) ? ((HookObject)(object))->hooks.screen : _XtWindowedAncestor(object)->core.screen)
#define XtDisplayOfObject(object)	(XtIsWidget(object) ? (object)->core.screen->display : _XtIsHookObject(object) ? ((HookObject)(object))->hooks.screen->display : _XtWindowedAncestor(object)->core.screen->display)
#define XFILESEARCHPATHDEFAULT	"/usr/lib/X11/%L/%T/%N%S:/usr/lib/X11/%l/%T/%N%S:/usr/lib/X11/%T/%N%S"
#define ERRORDB	"/usr/lib/X11/XtErrorDB"
#define RectObjClassFlag	0x02
#define WidgetClassFlag	0x04
#define CompositeClassFlag	0x08
#define ConstraintClassFlag	0x10
#define ShellClassFlag	0x20
#define WMShellClassFlag	0x40
#define TopLevelClassFlag	0x80
#define _XtintrinsicI_h	1
#define XtBZero(dst,size)	bzero((char *) (dst), (int) (size))
#define XtMemmove(dst,src,size)	if ((char *)(dst) != (char *)(src)) { (void) memcpy((char *) (dst), (char *) (src), (int) (size)); }
#define XtMemcmp(b1,b2,size)	memcmp((char *) (b1), (char *) (b2), (int) (size))
#define _XBCOPYFUNC	_XtBcopy
#define XtStackFree(pointer,stack_cache_array)	{ if ((pointer) != ((XtPointer)(stack_cache_array))) XtFree(pointer); }



/* Function prototypes */

    extern String XtCXtToolkitError;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
