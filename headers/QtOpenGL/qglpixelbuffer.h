#ifndef _QTOPENGL_QGLPIXELBUFFER_H_
#define _QTOPENGL_QGLPIXELBUFFER_H_

class QGLPixelBuffer;
// *INDENT-OFF*

typedef enum QtValidLicenseForOpenGLModule	QtOpenGLModule	
;

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

// *INDENT-ON*
#endif
