#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOLOR_H_
#define _QTGUI_QCOLOR_H_

class QColor;
// *INDENT-OFF*

class QColor;

enum _ZN6QColor4SpecE	
{
Invalid = 0,	
Rgb = 1,	
Hsv = 2,	
Cmyk = 3
}
;


/* Function prototypes */

extern QDebug _Zls6QDebugRK6QColor(const QColor &);
extern QDataStream _ZlsR11QDataStreamRK6QColor(QDataStream &, const QColor &);
extern QDataStream _ZrsR11QDataStreamR6QColor(QDataStream &, QColor &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
