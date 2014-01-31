#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QBRUSH_H_
#define _QTGUI_QBRUSH_H_

class QConicalGradient;
// *INDENT-OFF*

class QBrush;

struct QBrushData	;

class QGradient;

enum QGradient::Type	
{
LinearGradient = 0,	
RadialGradient = 1,	
ConicalGradient = 2,	
NoGradient = 3
}
;

enum QGradient::Spread	
{
PadSpread = 0,	
ReflectSpread = 1,	
RepeatSpread = 2
}
;

class QLinearGradient;

class QRadialGradient;

class QConicalGradient;


/* Function prototypes */

extern QDebug operator<<(QDebug, QBrush const&)(const QBrush &);
extern QDataStream operator<<(QDataStream&, QBrush const&)(QDataStream &, const QBrush &);
extern QDataStream operator>>(QDataStream&, QBrush&)(QDataStream &, QBrush &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
