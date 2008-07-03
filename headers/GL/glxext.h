#if (__LSB_VERSION__ >= 10 )
#ifndef _GL_GLXEXT_H_
#define _GL_GLXEXT_H_

#include <GL/gl.h>
#include <GL/glx.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define GLX_VISUAL_CAVEAT_EXT	0x20
#define GLX_X_VISUAL_TYPE_EXT	0x22
#define GLX_TRANSPARENT_TYPE_EXT	0x23
#define GLX_TRANSPARENT_INDEX_VALUE_EXT	0x24
#define GLX_TRANSPARENT_RED_VALUE_EXT	0x25
#define GLX_TRANSPARENT_GREEN_VALUE_EXT	0x26
#define GLX_TRANSPARENT_BLUE_VALUE_EXT	0x27
#define GLX_TRANSPARENT_ALPHA_VALUE_EXT	0x28
#define GLX_NONE_EXT	0x8000
#define GLX_SLOW_VISUAL_EXT	0x8001
#define GLX_TRUE_COLOR_EXT	0x8002
#define GLX_DIRECT_COLOR_EXT	0x8003
#define GLX_PSEUDO_COLOR_EXT	0x8004
#define GLX_STATIC_COLOR_EXT	0x8005
#define GLX_GRAY_SCALE_EXT	0x8006
#define GLX_STATIC_GRAY_EXT	0x8007
#define GLX_TRANSPARENT_RGB_EXT	0x8008
#define GLX_TRANSPARENT_INDEX_EXT	0x8009
#define GLX_SHARE_CONTEXT_EXT	0x800A
#define GLX_VISUAL_ID_EXT	0x800B
#define GLX_SCREEN_EXT	0x800C
#define GLX_NON_CONFORMANT_VISUAL_EXT	0x800D
#define GLX_SAMPLE_BUFFERS_3DFX	0x8050
#define GLX_SAMPLES_3DFX	0x8051
#define GLX_ARB_multisample	1
#define GLX_EXT_import_context	1
#define GLX_EXT_visual_info	1
#define GLX_EXT_visual_rating	1
#define GLX_SUN_get_transparent_index	1
#define GLX_SAMPLE_BUFFERS_ARB	100000
#define GLX_SAMPLES_ARB	100001
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void glXFreeContextEXT(Display *, int);
    extern int glXQueryContextInfoEXT(Display *, int, int, int *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 13
    extern __GLXextFuncPtr glXGetProcAddressARB(const GLubyte *);
#endif				/* __LSB_VERSION__ >= 1.3 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
