#ifndef _QTGUI_QPAINTDEVICE_H_
#define _QTGUI_QPAINTDEVICE_H_

class QPaintDevice;
// *INDENT-OFF*




class QPaintDevice
{
private:
public:
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


extern QPaintDevice _ZN12QPaintDeviceD2Ev(void);
extern QPaintDevice _ZN12QPaintDeviceD1Ev(void);
extern QPaintDevice _ZN12QPaintDeviceD0Ev(void);
extern QPaintDevice _ZN12QPaintDeviceC2Ev(void);
extern QPaintDevice _ZN12QPaintDeviceC1Ev(void);
extern int _ZNK12QPaintDevice6metricENS_17PaintDeviceMetricE(void);
extern Display _ZNK12QPaintDevice10x11DisplayEv(void);
extern int _ZNK12QPaintDevice9x11ScreenEv(void);
extern int _ZNK12QPaintDevice8x11DepthEv(void);
extern int _ZNK12QPaintDevice8x11CellsEv(void);
extern N2Qt6HANDLEE _ZNK12QPaintDevice11x11ColormapEv(void);
extern bool _ZNK12QPaintDevice18x11DefaultColormapEv(void);
extern void _ZNK12QPaintDevice9x11VisualEv(void);
extern bool _ZNK12QPaintDevice16x11DefaultVisualEv(void);
extern Display _ZN12QPaintDevice13x11AppDisplayEv(void);
extern int _ZN12QPaintDevice12x11AppScreenEv(void);
extern int _ZN12QPaintDevice11x11AppDepthEi(void);
extern int _ZN12QPaintDevice11x11AppCellsEi(void);
extern N2Qt6HANDLEE _ZN12QPaintDevice16x11AppRootWindowEi(void);
extern N2Qt6HANDLEE _ZN12QPaintDevice14x11AppColormapEi(void);
extern void _ZN12QPaintDevice12x11AppVisualEi(void);
extern bool _ZN12QPaintDevice21x11AppDefaultColormapEi(void);
extern bool _ZN12QPaintDevice19x11AppDefaultVisualEi(void);
extern int _ZN12QPaintDevice10x11AppDpiXEi(void);
extern int _ZN12QPaintDevice10x11AppDpiYEi(void);
extern void _ZN12QPaintDevice13x11SetAppDpiXEii(void);
extern void _ZN12QPaintDevice13x11SetAppDpiYEii(void);
extern void _Z6bitBltP12QPaintDeviceiiPKS_iiiib(void);
extern void _Z6bitBltP12QPaintDeviceiiPK6QImageiiiii(void);
extern void _Z6bitBltP12QPaintDeviceRK6QPointPKS_RK5QRectb(void);
extern  _ZNK12QPaintDevice7devTypeEv(void);
// *INDENT-ON*
#endif
