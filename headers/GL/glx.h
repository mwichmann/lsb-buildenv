#ifndef _GL_GLX_H_
#define _GL_GLX_H_

#include <GL/gl.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>

#ifdef __cplusplus
extern "C"
{
#endif




  typedef struct __GLXcontextRec *GLXContext;

  typedef struct __GLXFBConfigRec *GLXFBConfig;

  typedef XID GLXContextID;

  typedef XID GLXPixmap;

  typedef XID GLXDrawable;

  typedef XID GLXPbuffer;

  typedef XID GLXWindow;


  extern XVisualInfo *glXChooseVisual (Display *, int, int *);
  extern void glXCopyContext (Display *, GLXContext, GLXContext,
			      unsigned long int);
  extern GLXContext glXCreateContext (Display *, XVisualInfo *, GLXContext,
				      int);
  extern GLXPixmap glXCreateGLXPixmap (Display *, XVisualInfo *, Pixmap);
  extern void glXDestroyContext (Display *, GLXContext);
  extern void glXDestroyGLXPixmap (Display *, GLXPixmap);
  extern void glXFreeContextEXT (Display *, GLXContext);
  extern char *glXGetClientString (Display *, int);
  extern int glXGetConfig (Display *, XVisualInfo *, int, int *);
  extern GLXContextID glXGetContextIDEXT (GLXContext);
  extern GLXContext glXGetCurrentContext (void);
  extern Display *glXGetCurrentDisplay (void);
  extern GLXDrawable glXGetCurrentDrawable (void);
  extern GLXContext glXImportContextEXT (Display *, GLXContextID);
  extern int glXIsDirect (Display *, GLXContext);
  extern int glXMakeCurrent (Display *, GLXDrawable, GLXContext);
  extern int glXQueryContextInfoEXT (Display *, GLXContext, int, int *);
  extern int glXQueryExtension (Display *, int *, int *);
  extern char *glXQueryExtensionsString (Display *, int);
  extern char *glXQueryServerString (Display *, int, int);
  extern int glXQueryVersion (Display *, int *, int *);
  extern void glXSwapBuffers (Display *, GLXDrawable);
  extern void glXUseXFont (Font, int, int, int);
  extern void glXWaitGL (void);
  extern void glXWaitX (void);
  extern void glXGetSelectedEvent (Display *, GLXDrawable,
				   unsigned long int *);
  extern void glXSelectEvent (Display *, GLXDrawable, unsigned long int);
  extern int glXQueryContext (Display *, GLXContext, int, int *);
  extern GLXDrawable glXGetCurrentReadDrawable (void);
  extern int glXMakeContextCurrent (Display *, GLXDrawable, GLXDrawable,
				    GLXContext);
  extern GLXContext glXCreateNewContext (Display *, GLXFBConfig, int,
					 GLXContext, int);
  extern void glXQueryDrawable (Display *, GLXDrawable, int, unsigned int *);
  extern void glXDestroyPbuffer (Display *, GLXPbuffer);
  extern GLXPbuffer glXCreatePbuffer (Display *, GLXFBConfig, int *);
  extern void glXDestroyPixmap (Display *, GLXPixmap);
  extern GLXPixmap glXCreatePixmap (Display *, GLXFBConfig, Pixmap, int *);
  extern void glXDestroyWindow (Display *, GLXWindow);
  extern GLXWindow glXCreateWindow (Display *, GLXFBConfig, Window, int *);
  extern XVisualInfo *glXGetVisualFromFBConfig (Display *, GLXFBConfig);
  extern int glXGetFBConfigAttrib (Display *, GLXFBConfig, int, int *);
  extern GLXFBConfig *glXChooseFBConfig (Display *, int, int *, int *);
#ifdef __cplusplus
}
#endif
#endif
