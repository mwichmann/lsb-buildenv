#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAINTERPATH_H_
#define _QTGUI_QPAINTERPATH_H_

class QPainterPathStroker;
// *INDENT-OFF*

class QPainterPath;

enum QPainterPath::ElementType	
{
MoveToElement = 0,	
LineToElement = 1,	
CurveToElement = 2,	
CurveToDataElement = 3
}
;

class QPainterPath::Element;

class QPainterPathPrivate;

class QPainterPathStroker;


/* Function prototypes */

extern QDataStream operator<<(QDataStream&, QPainterPath const&)(QDataStream &);
extern QDataStream operator>>(QDataStream&, QPainterPath&)(QDataStream &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
