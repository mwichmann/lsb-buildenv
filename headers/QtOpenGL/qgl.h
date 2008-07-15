#if (__LSB_VERSION__ >= 31 )
#ifndef _QTOPENGL_QGL_H_
#define _QTOPENGL_QGL_H_

class QGLFormat;
// *INDENT-OFF*

typedef class QFlags<QGL::FormatOption>
{
private:
public:
}FormatOptions	
;

enum FormatOption	
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

class QFlags<QGL::FormatOption>
{
private:
public:
};

class QGLFormat
{
private:
public:
     QGLFormat();
     QGLFormat(QFlags<QGL::FormatOption>, int);
     QGLFormat(QGLFormat const&);
     operator=(QGLFormat const&);
     ~QGLFormat();
    void setDepthBufferSize(int);
    int depthBufferSize() const;
    void setAccumBufferSize(int);
    int accumBufferSize() const;
    void setAlphaBufferSize(int);
    int alphaBufferSize() const;
    void setStencilBufferSize(int);
    int stencilBufferSize() const;
    void setSampleBuffers(bool);
    void setSamples(int);
    int samples() const;
    void setDoubleBuffer(bool);
    void setDepth(bool);
    void setRgba(bool);
    void setAlpha(bool);
    void setAccum(bool);
    void setStencil(bool);
    void setStereo(bool);
    void setDirectRendering(bool);
    void setOverlay(bool);
    int plane() const;
    void setPlane(int);
    void setOption(QFlags<QGL::FormatOption>);
    bool testOption(QFlags<QGL::FormatOption>) const;
    QGLFormat defaultFormat();
    void setDefaultFormat(QGLFormat const&);
    QGLFormat defaultOverlayFormat();
    void setDefaultOverlayFormat(QGLFormat const&);
    bool hasOpenGL();
    bool hasOpenGLOverlays();
    int blueBufferSize() const;
    int greenBufferSize() const;
    QFlags<QGLFormat::OpenGLVersionFlag> openGLVersionFlags();
    int redBufferSize() const;
    void setBlueBufferSize(int);
    void setGreenBufferSize(int);
    void setRedBufferSize(int);
    void setSwapInterval(int);
    int swapInterval() const;
};

class QGLContext
{
private:
public:
     QGLContext(QGLFormat const&, QPaintDevice*);
     QGLContext(QGLFormat const&);
     ~QGLContext();
    bool create(QGLContext const*);
    bool isValid() const;
    bool isSharing() const;
    void reset();
    QGLFormat format() const;
    QGLFormat requestedFormat() const;
    void setFormat(QGLFormat const&);
    void makeCurrent();
    void doneCurrent();
    void swapBuffers() const;
    GLuint bindTexture(QImage const&, unsigned int, int);
    GLuint bindTexture(QPixmap const&, unsigned int, int);
    GLuint bindTexture(QString const&);
    void deleteTexture(unsigned int);
    void setTextureCacheLimit(int);
    int textureCacheLimit();
    void * getProcAddress(QString const&) const;
    QPaintDevice * device() const;
    QColor overlayTransparentColor() const;
    const QGLContext * currentContext();
protected:
    bool chooseContext(QGLContext const*);
    void * tryVisual(QGLFormat const&, int);
    void * chooseVisual();
    bool deviceIsPixmap() const;
    bool windowCreated() const;
    void setWindowCreated(bool);
    bool initialized() const;
    void setInitialized(bool);
    void generateFontDisplayLists(QFont const&, int);
    uint colorIndex(QColor const&) const;
    void setValid(bool);
    void setDevice(QPaintDevice*);
};

class QGLWidget : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QGLWidget(QWidget*, QGLWidget const*, QFlags<Qt::WindowType>);
     QGLWidget(QGLContext*, QWidget*, QGLWidget const*, QFlags<Qt::WindowType>);
     QGLWidget(QGLFormat const&, QWidget*, QGLWidget const*, QFlags<Qt::WindowType>);
     QGLWidget(QWidget*, char const*, QGLWidget const*, QFlags<Qt::WindowType>);
     QGLWidget(QGLContext*, QWidget*, char const*, QGLWidget const*, QFlags<Qt::WindowType>);
     QGLWidget(QGLFormat const&, QWidget*, char const*, QGLWidget const*, QFlags<Qt::WindowType>);
     ~QGLWidget();
    void qglColor(QColor const&) const;
    void qglClearColor(QColor const&) const;
    bool isValid() const;
    bool isSharing() const;
    void makeCurrent();
    void doneCurrent();
    bool doubleBuffer() const;
    void swapBuffers();
    QGLFormat format() const;
    void setFormat(QGLFormat const&);
    const QGLContext * context() const;
    void setContext(QGLContext*, QGLContext const*, bool);
    QPixmap renderPixmap(int, int, bool);
    QImage grabFrameBuffer(bool);
    void makeOverlayCurrent();
    const QGLContext * overlayContext() const;
    QImage convertToGLFormat(QImage const&);
    void setMouseTracking(bool);
    const QGLColormap & colormap() const;
    void setColormap(QGLColormap const&);
    void renderText(int, int, QString const&, QFont const&, int);
    void renderText(double, double, double, QString const&, QFont const&, int);
    QPaintEngine * paintEngine() const;
    GLuint bindTexture(QImage const&, unsigned int, int);
    GLuint bindTexture(QPixmap const&, unsigned int, int);
    GLuint bindTexture(QString const&);
    void deleteTexture(unsigned int);
    void updateGL();
    void updateOverlayGL();
protected:
    bool event(QEvent*);
    void initializeGL();
    void resizeGL(int, int);
    void paintGL();
    void initializeOverlayGL();
    void resizeOverlayGL(int, int);
    void paintOverlayGL();
    void setAutoBufferSwap(bool);
    bool autoBufferSwap() const;
    void paintEvent(QPaintEvent*);
    void resizeEvent(QResizeEvent*);
    void glInit();
    void glDraw();
    int fontDisplayListBase(QFont const&, int);
};


/* Function prototypes */

extern QGLContext * _ZN10QGLContext10currentCtxE ;
extern struct QMetaObject _ZN9QGLWidget16staticMetaObjectE ;
extern bool _ZeqRK9QGLFormatS1_(const QGLFormat &, const QGLFormat &);
extern bool _ZneRK9QGLFormatS1_(const QGLFormat &, const QGLFormat &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
