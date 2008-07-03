#if (__LSB_VERSION__ >= 10 )
#ifndef _GL_GLX_H_
#define _GL_GLX_H_

#include <GL/gl.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 10
#define GLX_EXTENSION_NAME	"GLX"
#define GLX_FRONT_LEFT_BUFFER_BIT	0x00000001
#define GLX_RGBA_BIT	0x00000001
#define GLX_WINDOW_BIT	0x00000001
#define GLX_COLOR_INDEX_BIT	0x00000002
#define GLX_FRONT_RIGHT_BUFFER_BIT	0x00000002
#define GLX_PIXMAP_BIT	0x00000002
#define GLX_BACK_LEFT_BUFFER_BIT	0x00000004
#define GLX_PBUFFER_BIT	0x00000004
#define GLX_BACK_RIGHT_BUFFER_BIT	0x00000008
#define GLX_AUX_BUFFERS_BIT	0x00000010
#define GLX_DEPTH_BUFFER_BIT	0x00000020
#define GLX_STENCIL_BUFFER_BIT	0x00000040
#define GLX_ACCUM_BUFFER_BIT	0x00000080
#define GLX_PBUFFER_CLOBBER_MASK	0x08000000
#define GLX_SAMPLE_BUFFERS	0x186a0
#define GLX_SAMPLES	0x186a1
#define GLX_CONFIG_CAVEAT	0x20
#define GLX_X_VISUAL_TYPE	0x22
#define GLX_TRANSPARENT_TYPE	0x23
#define GLX_TRANSPARENT_INDEX_VALUE	0x24
#define GLX_TRANSPARENT_RED_VALUE	0x25
#define GLX_TRANSPARENT_GREEN_VALUE	0x26
#define GLX_TRANSPARENT_BLUE_VALUE	0x27
#define GLX_TRANSPARENT_ALPHA_VALUE	0x28
#define GLX_NONE	0x8000
#define GLX_SLOW_CONFIG	0x8001
#define GLX_TRUE_COLOR	0x8002
#define GLX_DIRECT_COLOR	0x8003
#define GLX_PSEUDO_COLOR	0x8004
#define GLX_STATIC_COLOR	0x8005
#define GLX_GRAY_SCALE	0x8006
#define GLX_STATIC_GRAY	0x8007
#define GLX_TRANSPARENT_RGB	0x8008
#define GLX_TRANSPARENT_INDEX	0x8009
#define GLX_VISUAL_ID	0x800B
#define GLX_SCREEN	0x800C
#define GLX_NON_CONFORMANT_CONFIG	0x800D
#define GLX_DRAWABLE_TYPE	0x8010
#define GLX_RENDER_TYPE	0x8011
#define GLX_X_RENDERABLE	0x8012
#define GLX_FBCONFIG_ID	0x8013
#define GLX_RGBA_TYPE	0x8014
#define GLX_COLOR_INDEX_TYPE	0x8015
#define GLX_MAX_PBUFFER_WIDTH	0x8016
#define GLX_MAX_PBUFFER_HEIGHT	0x8017
#define GLX_MAX_PBUFFER_PIXELS	0x8018
#define GLX_PRESERVED_CONTENTS	0x801B
#define GLX_LARGEST_PBUFFER	0x801C
#define GLX_WIDTH	0x801D
#define GLX_HEIGHT	0x801E
#define GLX_EVENT_MASK	0x801F
#define GLX_DAMAGED	0x8020
#define GLX_SAVED	0x8021
#define GLX_WINDOW	0x8022
#define GLX_PBUFFER	0x8023
#define GLX_PBUFFER_HEIGHT	0x8040
#define GLX_PBUFFER_WIDTH	0x8041
#define GLX_DONT_CARE	0xFFFFFFFF
#define GLX_ARB_render_texture	1
#define GLX_BAD_SCREEN	1
#define GLX_EXT_texture_from_pixmap	1
#define GLX_USE_GL	1
#define GLX_VENDOR	1
#define GLX_VERSION_1_1	1
#define GLX_VERSION_1_2	1
#define GLX_VERSION_1_3	1
#define GLX_VERSION_1_4	1
#define GLX_BLUE_SIZE	10
#define GLX_ALPHA_SIZE	11
#define GLX_DEPTH_SIZE	12
#define GLX_STENCIL_SIZE	13
#define GLX_ACCUM_RED_SIZE	14
#define GLX_ACCUM_GREEN_SIZE	15
#define GLX_ACCUM_BLUE_SIZE	16
#define GLX_ACCUM_ALPHA_SIZE	17
#define GLX_BAD_ATTRIBUTE	2
#define GLX_BUFFER_SIZE	2
#define GLX_VERSION	2
#define GLX_EXTENSIONS	3
#define GLX_LEVEL	3
#define GLX_NO_EXTENSION	3
#define GLX_BAD_VISUAL	4
#define GLX_RGBA	4
#define GLX_BAD_CONTEXT	5
#define GLX_DOUBLEBUFFER	5
#define GLX_BAD_VALUE	6
#define GLX_STEREO	6
#define GLX_AUX_BUFFERS	7
#define GLX_BAD_ENUM	7
#define GLX_RED_SIZE	8
#define GLX_GREEN_SIZE	9
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 13
#define GLX_ARB_get_proc_address	1
#define GLX_GLXEXT_VERSION	6
#endif				/* __LSB_VERSION__ >= 1.3 */



#if __LSB_VERSION__ >= 10
    typedef struct __GLXcontextRec *GLXContext;

    typedef XID GLXDrawable;

    typedef union __GLXEvent GLXEvent;

    typedef XID GLXContextID;

    typedef XID GLXPixmap;

    typedef struct {
	int event_type;
	int draw_type;
	unsigned long int serial;
	int send_event;
	Display *display;
	GLXDrawable drawable;
	unsigned int buffer_mask;
	unsigned int aux_buffer;
	int x;
	int y;
	int width;
	int height;
	int count;
    } GLXPbufferClobberEvent;

    typedef XID GLXPbuffer;

    typedef XID GLXWindow;

    typedef XID GLXFBConfigID;

    typedef void (*__GLXextFuncPtr) (const GLubyte * procName);

#include <GL/glxext.h>
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
    typedef struct __GLXFBConfigRec *GLXFBConfig;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 10
    union __GLXEvent {
	GLXPbufferClobberEvent glxpbufferclobber;
	long int pad;
    };

#endif				/* __LSB_VERSION__ >= 1.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern GLXFBConfig *glXChooseFBConfig(Display *, int, const int *,
					  int *);
    extern XVisualInfo *glXChooseVisual(Display *, int, int *);
    extern void glXCopyContext(Display *, struct __GLXcontextRec *,
			       struct __GLXcontextRec *,
			       long unsigned int);
    extern GLXContext glXCreateContext(Display *, XVisualInfo *,
				       struct __GLXcontextRec *, int);
    extern GLXPixmap glXCreateGLXPixmap(Display *, XVisualInfo *, Pixmap);
    extern GLXContext glXCreateNewContext(Display *,
					  struct __GLXFBConfigRec *, int,
					  struct __GLXcontextRec *, int);
    extern GLXPbuffer glXCreatePbuffer(Display *,
				       struct __GLXFBConfigRec *,
				       const int *);
    extern GLXPixmap glXCreatePixmap(Display *, struct __GLXFBConfigRec *,
				     Pixmap, const int *);
    extern GLXWindow glXCreateWindow(Display *, struct __GLXFBConfigRec *,
				     Window, const int *);
    extern void glXDestroyContext(Display *, struct __GLXcontextRec *);
    extern void glXDestroyGLXPixmap(Display *, GLXPixmap);
    extern void glXDestroyPbuffer(Display *, int);
    extern void glXDestroyPixmap(Display *, int);
    extern void glXDestroyWindow(Display *, int);
    extern const char *glXGetClientString(Display *, int);
    extern int glXGetConfig(Display *, XVisualInfo *, int, int *);
    extern GLXContextID glXGetContextIDEXT(GLXContext);
    extern GLXContext glXGetCurrentContext(void);
    extern Display *glXGetCurrentDisplay(void);
    extern GLXDrawable glXGetCurrentDrawable(void);
    extern GLXDrawable glXGetCurrentReadDrawable(void);
    extern int glXGetFBConfigAttrib(Display *, int, int, int *);
    extern void glXGetSelectedEvent(Display *, int, unsigned long int *);
    extern XVisualInfo *glXGetVisualFromFBConfig(Display *, int);
    extern GLXContext glXImportContextEXT(Display *, GLXContextID);
    extern int glXIsDirect(Display *, struct __GLXcontextRec *);
    extern int glXMakeContextCurrent(Display *, int, int, int);
    extern int glXMakeCurrent(Display *, GLXDrawable,
			      struct __GLXcontextRec *);
    extern int glXQueryContext(Display *, int, int, int *);
    extern void glXQueryDrawable(Display *, int, int, unsigned int *);
    extern int glXQueryExtension(Display *, int *, int *);
    extern const char *glXQueryExtensionsString(Display *, int);
    extern const char *glXQueryServerString(Display *, int, int);
    extern int glXQueryVersion(Display *, int *, int *);
    extern void glXSelectEvent(Display *, int, long unsigned int);
    extern void glXSwapBuffers(Display *, GLXDrawable);
    extern void glXUseXFont(Font, int, int, int);
    extern void glXWaitGL(void);
    extern void glXWaitX(void);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 40
    extern GLXFBConfig *glXGetFBConfigs(Display *, int, int *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
