#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTDEVICE_H_
#define _QTGUI_QPAINTDEVICE_H_

class QPaintDevice;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPaintDevice
{
private:
public:
     ~QPaintDevice();
     QPaintDevice();
    Display * x11Display() const;
    int x11Screen() const;
    int x11Depth() const;
    int x11Cells() const;
     x11Colormap() const;
    bool x11DefaultColormap() const;
    void * x11Visual() const;
    bool x11DefaultVisual() const;
    Display * x11AppDisplay();
    int x11AppScreen();
    int x11AppDepth(int);
    int x11AppCells(int);
     x11AppRootWindow(int);
     x11AppColormap(int);
    void * x11AppVisual(int);
    bool x11AppDefaultColormap(int);
    bool x11AppDefaultVisual(int);
    int x11AppDpiX(int);
    int x11AppDpiY(int);
    void x11SetAppDpiX(int, int);
    void x11SetAppDpiY(int, int);
    int devType() const;
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
};

enum PaintDeviceMetric	
{
PdmWidth = 1,	
PdmHeight = 2,	
PdmWidthMM = 3,	
PdmHeightMM = 4,	
PdmNumColors = 5,	
PdmDepth = 6,	
PdmDpiX = 7,	
PdmDpiY = 8,	
PdmPhysicalDpiX = 9,	
PdmPhysicalDpiY = 10
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern void _Z6bitBltP12QPaintDeviceRK6QPointPKS_RK5QRectb(QPaintDevice *, const QPoint &, const QPaintDevice *, const QRect &);
extern void _Z6bitBltP12QPaintDeviceiiPK6QImageiiiii(QPaintDevice *, const QImage *);
extern void _Z6bitBltP12QPaintDeviceiiPKS_iiiib(QPaintDevice *, const QPaintDevice *);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
