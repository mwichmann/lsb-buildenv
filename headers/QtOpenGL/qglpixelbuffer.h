#ifndef _QTOPENGL_QGLPIXELBUFFER_H_
#define _QTOPENGL_QGLPIXELBUFFER_H_

#include <GL/gl.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qglobal.h>
#include <QtCore/qsize.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qimage.h>
#include <QtGui/qpaintengine.h>
#include <QtOpenGL/qgl.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef enum QtValidLicenseForOpenGLModule QtOpenGLModule;

    Unknown Type:".Class.";


    extern Class
	_ZN14QGLPixelBufferC2ERK5QSizeRK9QGLFormatP9QGLWidget(void);
    extern Class
	_ZN14QGLPixelBufferC1ERK5QSizeRK9QGLFormatP9QGLWidget(void);
    extern Class _ZN14QGLPixelBufferD2Ev(void);
    extern Class _ZN14QGLPixelBufferD1Ev(void);
    extern Class _ZN14QGLPixelBufferD0Ev(void);
    extern bool _ZNK14QGLPixelBuffer7isValidEv(void);
    extern bool _ZN14QGLPixelBuffer11makeCurrentEv(void);
    extern bool _ZN14QGLPixelBuffer11doneCurrentEv(void);
    extern GLuint _ZNK14QGLPixelBuffer22generateDynamicTextureEv(void);
    extern bool _ZN14QGLPixelBuffer20bindToDynamicTextureEj(void);
    extern void _ZN14QGLPixelBuffer25releaseFromDynamicTextureEv(void);
    extern void _ZNK14QGLPixelBuffer20updateDynamicTextureEj(void);
    extern GLuint _ZN14QGLPixelBuffer11bindTextureERK6QImagej(void);
    extern GLuint _ZN14QGLPixelBuffer11bindTextureERK7QPixmapj(void);
    extern GLuint _ZN14QGLPixelBuffer11bindTextureERK7QString(void);
    extern void _ZN14QGLPixelBuffer13deleteTextureEj(void);
    extern Class _ZNK14QGLPixelBuffer4sizeEv(void);
    extern N2Qt6HANDLEE _ZNK14QGLPixelBuffer6handleEv(void);
    extern Class _ZNK14QGLPixelBuffer7toImageEv(void);
    extern Class _ZNK14QGLPixelBuffer11paintEngineEv(void);
    extern Class _ZNK14QGLPixelBuffer6formatEv(void);
    extern bool _ZN14QGLPixelBuffer17hasOpenGLPbuffersEv(void);
    extern int
	_ZNK14QGLPixelBuffer6metricEN12QPaintDevice17PaintDeviceMetricE
	(void);
    extern _ZNK14QGLPixelBuffer7devTypeEv(void);
#ifdef __cplusplus
}
#endif
#endif
