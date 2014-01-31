#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOLOR_H_
#define _QTGUI_QCOLOR_H_

class QColor;
// *INDENT-OFF*

class QColor;

enum QColor::Spec	
{
Invalid = 0,	
Rgb = 1,	
Hsv = 2,	
Cmyk = 3
}
;


/* Function prototypes */

extern QDebug operator<<(QDebug, QColor const&)(const QColor &);
extern QDataStream operator<<(QDataStream&, QColor const&)(QDataStream &, const QColor &);
extern QDataStream operator>>(QDataStream&, QColor&)(QDataStream &, QColor &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
