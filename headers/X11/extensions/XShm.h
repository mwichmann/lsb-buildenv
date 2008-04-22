#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_XSHM_H_
#define _X11_EXTENSIONS_XSHM_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef unsigned long int ShmSeg;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Drawable drawable;
	int major_code;
	int minor_code;
	ShmSeg shmseg;
	unsigned long int offset;
    } XShmCompletionEvent;

    typedef struct {
	ShmSeg shmseg;
	int shmid;
	char *shmaddr;
	int readOnly;
    } XShmSegmentInfo;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Drawable drawable;
	int major_code;
	int minor_code;
	ShmSeg shmseg;
	unsigned long int offset;
    };

    struct {
	ShmSeg shmseg;
	int shmid;
	char *shmaddr;
	int readOnly;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int XShmAttach(Display *, XShmSegmentInfo *);
    extern XImage *XShmCreateImage(Display *, Visual *, unsigned int, int,
				   char *, XShmSegmentInfo *, unsigned int,
				   unsigned int);
    extern Pixmap XShmCreatePixmap(Display *, Drawable, char *,
				   XShmSegmentInfo *, unsigned int,
				   unsigned int, unsigned int);
    extern int XShmDetach(Display *, XShmSegmentInfo *);
    extern int XShmGetEventBase(Display *);
    extern int XShmGetImage(Display *, Drawable, XImage *, int, int,
			    unsigned long int);
    extern int XShmPixmapFormat(Display *);
    extern int XShmPutImage(Display *, Drawable, GC, XImage *, int, int,
			    int, int, unsigned int, unsigned int, int);
    extern int XShmQueryExtension(Display *);
    extern int XShmQueryVersion(Display *, int *, int *, int *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
