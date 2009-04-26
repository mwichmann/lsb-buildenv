#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QBRUSH_H_
#define _QTGUI_QBRUSH_H_

class QConicalGradient;
// *INDENT-OFF*

class QBrush;

struct QBrushData	;

class QGradient;

enum _ZN9QGradient4TypeE	
{
LinearGradient = 0,	
RadialGradient = 1,	
ConicalGradient = 2,	
NoGradient = 3
}
;

enum _ZN9QGradient6SpreadE	
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

extern QDebug _Zls6QDebugRK6QBrush(const QBrush &);
extern QDataStream _ZlsR11QDataStreamRK6QBrush(QDataStream &, const QBrush &);
extern QDataStream _ZrsR11QDataStreamR6QBrush(QDataStream &, QBrush &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
