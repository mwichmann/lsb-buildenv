#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTER_H_
#define _QTGUI_QPAINTER_H_

class QFlags < QPainter::RenderHint >;
// *INDENT-OFF*

typedef class QFlags<QPainter::RenderHint>QPainter::RenderHints	
;

class QPainter;

enum QPainter::RenderHint	
{
Antialiasing = 1,	
TextAntialiasing = 2,	
SmoothPixmapTransform = 4
}
;

class QFlags<QPainter::RenderHint>;

enum QPainter::CompositionMode	
{
CompositionMode_SourceOver = 0,	
CompositionMode_DestinationOver = 1,	
CompositionMode_Clear = 2,	
CompositionMode_Source = 3,	
CompositionMode_Destination = 4,	
CompositionMode_SourceIn = 5,	
CompositionMode_DestinationIn = 6,	
CompositionMode_SourceOut = 7,	
CompositionMode_DestinationOut = 8,	
CompositionMode_SourceAtop = 9,	
CompositionMode_DestinationAtop = 10,	
CompositionMode_Xor = 11
}
;


/* Function prototypes */

#if __LSB_VERSION__ >= 32
extern struct QMetaObject _ZN8QPainter16staticMetaObjectE;
#endif /* __LSB_VERSION__ >= 3.2 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
