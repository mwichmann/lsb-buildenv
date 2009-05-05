#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XLIBINT_H_
#define _X11_XLIBINT_H_

#include <X11/Xlib.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <X11/X.h>
#include <X11/ICE/ICEconn.h>
#include <X11/Xmd.h>
#include <X11/Xproto.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NEED_EVENTS
#define NEED_REPLIES
#define WORD64ALIGN
#define min(a,b)	(((a) < (b)) ? (a) : (b))
#define max(a,b)	(((a) > (b)) ? (a) : (b))
#define CI_NONEXISTCHAR(cs)	(((cs)->width == 0) && (((cs)->rbearing|(cs)->lbearing| (cs)->ascent|(cs)->descent) == 0))
#define XAllocIDs(dpy,ids,n)	(*(dpy)->idlist_alloc)(dpy,ids,n)
#define XlibDisplayIOError	(1L << 0)
#define XlibDisplayClosing	(1L << 1)
#define XlibDisplayNoXkb	(1L << 2)
#define XlibDisplayPrivSync	(1L << 3)
#define XlibDisplayProcConni	(1L << 4)
#define XlibDisplayReadEvents	(1L << 5)
#define XlibDisplayReply	(1L << 5)
#define XlibDisplayWriting	(1L << 6)
#define XlibDisplayDfltRMDB	(1L << 7)
#define UNLOCKED	0
#define LOCKED	1
#define WRCTSPERBATCH	10
#define PTSPERBATCH	1024
#define ZLNSPERBATCH	1024
#define BUFSIZE	2048
#define FARCSPERBATCH	256
#define FRCTSPERBATCH	256
#define XCONN_CHECK_FREQ	256
#define ZRCTSPERBATCH	256
#define WLNSPERBATCH	50
#define Xcalloc(nelem,elsize)	calloc((nelem), (elsize))
#define CI_GET_DEFAULT_INFO_1D(fs,cs)	CI_GET_CHAR_INFO_1D (fs, fs->default_char, NULL, cs)
#define CURSORFONT	"cursor"
#define Data16(dpy,data,len)	Data((dpy), (char *)(data), (len))
#define PackData16(dpy,data,len)	Data16 (dpy, data, len)
#define PackData32(dpy,data,len)	Data32 (dpy, data, len)
#define _XFopenFile(path,mode)	fopen(path,mode)
#define Xfree(ptr)	free((ptr))
#define LockDisplay(d)	if ((d)->lock_fns) (*(d)->lock_fns->lock_display)(d)
#define UnlockDisplay(d)	if ((d)->lock_fns) (*(d)->lock_fns->unlock_display)(d)
#define FlushGC(dpy,gc)	if ((gc)->dirty) _XFlushGCCache((dpy), (gc))
#define SetReqLen(req,n,badlen)	if ((req->length + n) > (unsigned)65535) { if (dpy->bigreq_size) { MakeBigReq(req,n) } else { n = badlen; req->length += n; } } else req->length += n
#define BufAlloc(type,ptr,n)	if (dpy->bufptr + (n) > dpy->bufmax) _XFlush (dpy); ptr = (type) dpy->bufptr; (void)ptr; dpy->bufptr += (n);
#define SyncHandle()	if (dpy->synchandler) (*dpy->synchandler)(dpy)
#define _XCreateMutex(lock)	if (_XCreateMutex_fn) (*_XCreateMutex_fn)(lock);
#define _XFreeMutex(lock)	if (_XFreeMutex_fn) (*_XFreeMutex_fn)(lock);
#define _XLockMutex(lock)	if (_XLockMutex_fn) (*_XLockMutex_fn)(lock)
#define _XUnlockMutex(lock)	if (_XUnlockMutex_fn) (*_XUnlockMutex_fn)(lock)
#define Xmalloc(size)	malloc((size))
#define _XOpenFile(path,flags)	open(path,flags)
#define _XOpenFileMode(path,flags,mode)	open(path,flags,mode)
#define PackData(dpy,data,len)	PackData16 (dpy, data, len)
#define Xrealloc(ptr,size)	realloc((ptr), (size))
#define GetReqExtra(name,n,req)	WORD64ALIGN if ((dpy->bufptr + SIZEOF(x ##name ##Req) + n) > dpy->bufmax) _XFlush(dpy); req = (x ##name ##Req *)(dpy->last_req = dpy->bufptr); req->reqType = X_ ##name; req->length = (SIZEOF(x ##name ##Req) + n)>>2; dpy->bufptr += SIZEOF(x ##name ##Req) + n; dpy->request++
#define GetReq(name,req)	WORD64ALIGN if ((dpy->bufptr + SIZEOF(x ##name ##Req)) > dpy->bufmax) _XFlush(dpy); req = (x ##name ##Req *)(dpy->last_req = dpy->bufptr); req->reqType = X_ ##name; req->length = (SIZEOF(x ##name ##Req))>>2; dpy->bufptr += SIZEOF(x ##name ##Req); dpy->request++
#define GetEmptyReq(name,req)	WORD64ALIGN if ((dpy->bufptr + SIZEOF(xReq)) > dpy->bufmax) _XFlush(dpy); req = (xReq *) (dpy->last_req = dpy->bufptr); req->reqType = X_ ##name; req->length = 1; dpy->bufptr += SIZEOF(xReq); dpy->request++
#define GetResReq(name,rid,req)	WORD64ALIGN if ((dpy->bufptr + SIZEOF(xResourceReq)) > dpy->bufmax) _XFlush(dpy); req = (xResourceReq *) (dpy->last_req = dpy->bufptr); req->reqType = X_ ##name; req->length = 2; req->id = (rid); dpy->bufptr += SIZEOF(xResourceReq); dpy->request++
#define _XBCOPYFUNC	_Xbcopy
#define Data32(dpy,data,len)	_XData32(dpy, (long *)data, len)
#define _XRead16(dpy,data,len)	_XRead((dpy), (char *)(data), (len))
#define _XRead16Pad(dpy,data,len)	_XReadPad((dpy), (char *)(data), (len))
#define OneDataCard32(dpy,dstaddr,srcvar)	{ *(CARD32 *)(dstaddr) = (srcvar); }
#define MakeBigReq(req,n)	{ CARD64 _BRdat; CARD32 _BRlen = req->length - 1; req->length = 0; _BRdat = ((CARD32 *)req)[_BRlen]; memmove(((char *)req) + 8, ((char *)req) + 4, _BRlen << 2); ((CARD32 *)req)[1] = _BRlen + n + 2; Data32(dpy, &_BRdat, 4); }
#define CI_GET_CHAR_INFO_1D(fs,col,def,cs)	{ cs = def; if (col >= fs->min_char_or_byte2 && col <= fs->max_char_or_byte2) { if (fs->per_char == NULL) { cs = &fs->min_bounds; } else { cs = &fs->per_char[(col - fs->min_char_or_byte2)]; if (CI_NONEXISTCHAR(cs)) cs = def; } } }
#define CI_GET_CHAR_INFO_2D(fs,row,col,def,cs)	{ cs = def; if (row >= fs->min_byte1 && row <= fs->max_byte1 && col >= fs->min_char_or_byte2 && col <= fs->max_char_or_byte2) { if (fs->per_char == NULL) { cs = &fs->min_bounds; } else { cs = &fs->per_char[((row - fs->min_byte1) * (fs->max_char_or_byte2 - fs->min_char_or_byte2 + 1)) + (col - fs->min_char_or_byte2)]; if (CI_NONEXISTCHAR(cs)) cs = def; } } }
#define DeqAsyncHandler(dpy,handler)	{ if (dpy->async_handlers == (handler)) dpy->async_handlers = (handler)->next; else _XDeqAsyncHandler(dpy, handler); }
#define Data(dpy,data,len)	{ if (dpy->bufptr + (len) <= dpy->bufmax) { memcpy(dpy->bufptr, data, (int)len); dpy->bufptr += ((len) + 3) & ~3; } else _XSend(dpy, data, len); }
#define CI_GET_DEFAULT_INFO_2D(fs,cs)	{ unsigned int r = (fs->default_char >> 8); unsigned int c = (fs->default_char & 0xff); CI_GET_CHAR_INFO_2D (fs, r, c, NULL, cs); }


    typedef struct _XSQEvent _XQEvent;

    typedef struct _LockInfoRec *LockInfoPtr;

    typedef struct _XInternalAsync _XAsyncHandler;

    typedef struct _XAsyncEState _XAsyncErrorState;

    typedef void (*FreeFuncType) (Display *);

    typedef int (*FreeModmapType) (XModifierKeymap *);

    typedef struct _XFreeFuncs _XFreeFuncRec;

    typedef int (*CreateGCType) (Display *, GC, XExtCodes *);

    typedef int (*CopyGCType) (Display *, GC, XExtCodes *);

    typedef int (*FlushGCType) (Display *, GC, XExtCodes *);

    typedef int (*FreeGCType) (Display *, GC, XExtCodes *);

    typedef int (*CreateFontType) (Display *, XFontStruct *, XExtCodes *);

    typedef int (*FreeFontType) (Display *, XFontStruct *, XExtCodes *);

    typedef int (*CloseDisplayType) (Display *, XExtCodes *);

    typedef int (*ErrorType) (Display *, xError *, XExtCodes *, int *);

    typedef char *(*ErrorStringType) (Display *, int, XExtCodes *, char *,
				      int);

    typedef void (*PrintErrorType) (Display *, XErrorEvent *, void *);

    typedef void (*BeforeFlushType) (Display *, XExtCodes *, const char *,
				     long int);

    typedef struct _XExten _XExtension;

    typedef void (*_XInternalConnectionProc) (Display *, int, XPointer);

    struct _XDisplay {
	XExtData *ext_data;
	struct _XFreeFuncs *free_funcs;
	int fd;
	int conn_checker;
	int proto_major_version;
	int proto_minor_version;
	char *vendor;
	XID resource_base;
	XID resource_mask;
	XID resource_id;
	int resource_shift;
	 XID(*resource_alloc) (struct _XDisplay *);
	int byte_order;
	int bitmap_unit;
	int bitmap_pad;
	int bitmap_bit_order;
	int nformats;
	ScreenFormat *pixmap_format;
	int vnumber;
	int release;
	struct _XSQEvent *head;
	struct _XSQEvent *tail;
	int qlen;
	unsigned long int last_request_read;
	unsigned long int request;
	char *last_req;
	char *buffer;
	char *bufptr;
	char *bufmax;
	unsigned int max_request_size;
	struct _XrmHashBucketRec *db;
	int (*synchandler) (struct _XDisplay *);
	char *display_name;
	int default_screen;
	int nscreens;
	Screen *screens;
	unsigned long int motion_buffer;
	unsigned long int flags;
	int min_keycode;
	int max_keycode;
	KeySym *keysyms;
	XModifierKeymap *modifiermap;
	int keysyms_per_keycode;
	char *xdefaults;
	char *scratch_buffer;
	unsigned long int scratch_length;
	int ext_number;
	struct _XExten *ext_procs;
	int (*event_vec[128]) (Display *, XEvent *, xEvent *);
	int (*wire_vec[128]) (Display *, XEvent *, xEvent *);
	KeySym lock_meaning;
	struct _XLockInfo *lock;
	struct _XInternalAsync *async_handlers;
	unsigned long int bigreq_size;
	struct _XLockPtrs *lock_fns;
	void (*idlist_alloc) (Display *, XID *, int);
	struct _XKeytrans *key_bindings;
	Font cursor_font;
	struct _XDisplayAtoms *atoms;
	unsigned int mode_switch;
	unsigned int num_lock;
	struct _XContextDB *context_db;
	int (**error_vec) (Display *, XErrorEvent *, xError *);
	struct {
	    XPointer defaultCCCs;
	    XPointer clientCmaps;
	    XPointer perVisualIntensityMaps;
	} cms;
	struct _XIMFilter *im_filters;
	struct _XSQEvent *qfree;
	unsigned long int next_event_serial_num;
	struct _XExten *flushes;
	struct _XConnectionInfo *im_fd_info;
	int im_fd_length;
	struct _XConnWatchInfo *conn_watchers;
	int watcher_count;
	XPointer filedes;
	int (*savedsynchandler) (Display *);
	XID resource_max;
	int xcmisc_opcode;
	struct _XkbInfoRec *xkb_info;
	struct _XtransConnInfo *trans_conn;
    };

    struct _XGC {
	XExtData *ext_data;
	GContext gid;
	int rects;
	int dashes;
	unsigned long int dirty;
	XGCValues values;
    };

    struct _XSQEvent {
	struct _XSQEvent *next;
	XEvent event;
	unsigned long int qserial_num;
    };

    struct _XInternalAsync {
	struct _XInternalAsync *next;
	int (*handler) (Display *, xReply *, char *, int, XPointer);
	XPointer data;
    };

    struct _XAsyncEState {
	unsigned long int min_sequence_number;
	unsigned long int max_sequence_number;
	unsigned char error_code;
	unsigned char major_opcode;
	unsigned short minor_opcode;
	unsigned char last_error_received;
	int error_count;
    };

    struct _XFreeFuncs {
	FreeFuncType atoms;
	FreeModmapType modifiermap;
	FreeFuncType key_bindings;
	FreeFuncType context_db;
	FreeFuncType defaultCCCs;
	FreeFuncType clientCmaps;
	FreeFuncType intensityMaps;
	FreeFuncType im_filters;
	FreeFuncType xkb;
    };

    struct _XExten {
	struct _XExten *next;
	XExtCodes codes;
	CreateGCType create_GC;
	CopyGCType copy_GC;
	FlushGCType flush_GC;
	FreeGCType free_GC;
	CreateFontType create_Font;
	FreeFontType free_Font;
	CloseDisplayType close_display;
	ErrorType error;
	ErrorStringType error_string;
	char *name;
	PrintErrorType error_values;
	BeforeFlushType before_flush;
	struct _XExten *next_flush;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
