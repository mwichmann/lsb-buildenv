#ifndef _QTGUI_QPAINTDEVICE_H_
#define _QTGUI_QPAINTDEVICE_H_

class QPaintDevice;
// *INDENT-OFF*

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


extern void _Z6bitBltP12QPaintDeviceiiPKS_iiiib(QPaintDevice *, int, int, const QPaintDevice *, int, int, int, int, bool);
extern void _Z6bitBltP12QPaintDeviceiiPK6QImageiiiii(QPaintDevice *, int, int, const QImage *, int, int, int, int, int);
extern void _Z6bitBltP12QPaintDeviceRK6QPointPKS_RK5QRectb(QPaintDevice *, const QPoint &, const QPaintDevice *, const QRect &, bool);
// *INDENT-ON*
#endif
