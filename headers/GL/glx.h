#ifndef _GL_GLX_H_
#define _GL_GLX_H_

#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xlib.h>



typedef struct __GLXcontextRec *GLXContext;

typedef struct __GLXFBConfigRec *GLXFBConfig;

typedef XID GLXContextID;

typedef XID GLXPixmap;

typedef XID GLXDrawable;

typedef XID GLXPbuffer;

typedef XID GLXWindow;


XVisualInfo *glXChooseVisual (Display *, int, int *);
void glXCopyContext (Display *, GLXContext, GLXContext, unsigned long);
GLXContext glXCreateContext (Display *, XVisualInfo *, GLXContext, int);
GLXPixmap glXCreateGLXPixmap (Display *, XVisualInfo *, Pixmap);
void glXDestroyContext (Display *, GLXContext);
void glXDestroyGLXPixmap (Display *, GLXPixmap);
void glXFreeContextEXT (Display *, GLXContext);
char *glXGetClientString (Display *, int);
int glXGetConfig (Display *, XVisualInfo *, int, int *);
GLXContextID glXGetContextIDEXT (GLXContext);
GLXContext glXGetCurrentContext (void);
Display *glXGetCurrentDisplay (void);
GLXDrawable glXGetCurrentDrawable (void);
GLXContext glXImportContextEXT (Display *, GLXContextID);
int glXIsDirect (Display *, GLXContext);
int glXMakeCurrent (Display *, GLXDrawable, GLXContext);
int glXQueryContextInfoEXT (Display *, GLXContext, int, int *);
int glXQueryExtension (Display *, int *, int *);
char *glXQueryExtensionsString (Display *, int);
char *glXQueryServerString (Display *, int, int);
int glXQueryVersion (Display *, int *, int *);
void glXSwapBuffers (Display *, GLXDrawable);
void glXUseXFont (Font, int, int, int);
void glXWaitGL (void);
void glXWaitX (void);
void glXGetSelectedEvent (Display *, GLXDrawable, unsigned long *);
void glXSelectEvent (Display *, GLXDrawable, unsigned long);
int glXQueryContext (Display *, GLXContext, int, int *);
GLXDrawable glXGetCurrentReadDrawable (void);
int glXMakeContextCurrent (Display *, GLXDrawable, GLXDrawable, GLXContext);
GLXContext glXCreateNewContext (Display *, GLXFBConfig, int, GLXContext, int);
void glXQueryDrawable (Display *, GLXDrawable, int, unsigned int *);
void glXDestroyPbuffer (Display *, GLXPbuffer);
GLXPbuffer glXCreatePbuffer (Display *, GLXFBConfig, int *);
void glXDestroyPixmap (Display *, GLXPixmap);
GLXPixmap glXCreatePixmap (Display *, GLXFBConfig, Pixmap, int *);
void glXDestroyWindow (Display *, GLXWindow);
GLXWindow glXCreateWindow (Display *, GLXFBConfig, Window, int *);
XVisualInfo *glXGetVisualFromFBConfig (Display *, GLXFBConfig);
int glXGetFBConfigAttrib (Display *, GLXFBConfig, int, int *);
GLXFBConfig *glXChooseFBConfig (Display *, int, int *, int *);
#endif
