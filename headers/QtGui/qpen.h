#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPEN_H_
#define _QTGUI_QPEN_H_

class QPen;
// *INDENT-OFF*

class QPen;


/* Function prototypes */

extern QDebug operator<<(QDebug, QPen const&)(const QPen &);
extern QDataStream operator<<(QDataStream&, QPen const&)(QDataStream &, const QPen &);
extern QDataStream operator>>(QDataStream&, QPen&)(QDataStream &, QPen &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
