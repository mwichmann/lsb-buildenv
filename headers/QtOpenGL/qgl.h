#if (__LSB_VERSION__ >= 31 )
#ifndef _QTOPENGL_QGL_H_
#define _QTOPENGL_QGL_H_

class QGLFormat;
// *INDENT-OFF*

typedef class QFlags<QGL::FormatOption>QGL::FormatOptions	
;

enum QGL::FormatOption	
{
DoubleBuffer = 1,	
DepthBuffer = 2,	
Rgba = 4,	
AlphaChannel = 8,	
AccumBuffer = 16,	
StencilBuffer = 32,	
StereoBuffers = 64,	
DirectRendering = 128,	
HasOverlay = 256,	
SampleBuffers = 512,	
SingleBuffer = 65536,	
NoDepthBuffer = 131072,	
ColorIndex = 262144,	
NoAlphaChannel = 524288,	
NoAccumBuffer = 1048576,	
NoStencilBuffer = 2097152,	
NoStereoBuffers = 4194304,	
IndirectRendering = 8388608,	
NoOverlay = 16777216,	
NoSampleBuffers = 33554432
}
;

class QFlags<QGL::FormatOption>;

class QGLFormat;

class QGLContext;

class QGLWidget;


/* Function prototypes */

extern QGLContext * _ZN10QGLContext10currentCtxE;
extern struct QMetaObject _ZN9QGLWidget16staticMetaObjectE;
extern bool operator==(QGLFormat const&, QGLFormat const&)(const QGLFormat &, const QGLFormat &);
extern bool operator!=(QGLFormat const&, QGLFormat const&)(const QGLFormat &, const QGLFormat &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
