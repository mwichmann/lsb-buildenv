#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTDEVICE_H_
#define _QTGUI_QPAINTDEVICE_H_

class QPaintDevice;
// *INDENT-OFF*

class QPaintDevice;

enum _ZN12QPaintDevice17PaintDeviceMetricE	
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


/* Function prototypes */

extern void _Z6bitBltP12QPaintDeviceRK6QPointPKS_RK5QRectb(QPaintDevice *, const QPoint &, const QPaintDevice *, const QRect &);
extern void _Z6bitBltP12QPaintDeviceiiPK6QImageiiiii(QPaintDevice *, const QImage *);
extern void _Z6bitBltP12QPaintDeviceiiPKS_iiiib(QPaintDevice *, const QPaintDevice *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
