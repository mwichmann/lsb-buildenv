#if (__LSB_VERSION__ >= 10 )
#ifndef _GL_GLXEXT_H_
#define _GL_GLXEXT_H_

#include <GL/gl.h>
#include <GL/glx.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern void glXFreeContextEXT(Display *, int);
    extern int glXQueryContextInfoEXT(Display *, int, int, int *);
#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 13
    extern __GLXextFuncPtr glXGetProcAddressARB(const GLubyte *);
#endif				// __LSB_VERSION__ >= 1.3

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
