#if (__LSB_VERSION__ >= 31 )
#ifndef _QTOPENGL_QGLPIXELBUFFER_H_
#define _QTOPENGL_QGLPIXELBUFFER_H_

class QGLPixelBuffer;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 12
typedef enum QtValidLicenseForOpenGLModule	QtOpenGLModule	
;

#endif // __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 12
class QGLPixelBuffer : public QPaintDevice
{
private:
public:
     QGLPixelBuffer(QSize const&, QGLFormat const&, QGLWidget*);
     ~QGLPixelBuffer();
    bool isValid() const;
    bool makeCurrent();
    bool doneCurrent();
    GLuint generateDynamicTexture() const;
    bool bindToDynamicTexture(unsigned int);
    void releaseFromDynamicTexture();
    void updateDynamicTexture(unsigned int) const;
    GLuint bindTexture(QImage const&, unsigned int);
    GLuint bindTexture(QPixmap const&, unsigned int);
    GLuint bindTexture(QString const&);
    void deleteTexture(unsigned int);
    QSize size() const;
     handle() const;
    QImage toImage() const;
    QPaintEngine * paintEngine() const;
    QGLFormat format() const;
    bool hasOpenGLPbuffers();
     QGLPixelBuffer(int, int, QGLFormat const&, QGLWidget*);
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    int devType() const;
};

#endif // __LSB_VERSION__ >= 1.2

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
