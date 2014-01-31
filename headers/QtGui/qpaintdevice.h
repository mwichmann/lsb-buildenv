#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTDEVICE_H_
#define _QTGUI_QPAINTDEVICE_H_

class QPaintDevice;
// *INDENT-OFF*

class QPaintDevice;

enum QPaintDevice::PaintDeviceMetric	
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

extern void bitBlt(QPaintDevice*, QPoint const&, QPaintDevice const*, QRect const&, bool)(QPaintDevice *, const QPoint &, const QPaintDevice *, const QRect &);
extern void bitBlt(QPaintDevice*, int, int, QImage const*, int, int, int, int, int)(QPaintDevice *, const QImage *);
extern void bitBlt(QPaintDevice*, int, int, QPaintDevice const*, int, int, int, int, bool)(QPaintDevice *, const QPaintDevice *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
