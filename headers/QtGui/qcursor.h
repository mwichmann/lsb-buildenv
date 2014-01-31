#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCURSOR_H_
#define _QTGUI_QCURSOR_H_

class QCursor;
// *INDENT-OFF*

typedef enum Qt::CursorShape	QCursorShape	
;

class QCursor;


/* Function prototypes */

extern QDataStream operator<<(QDataStream&, QCursor const&)(QDataStream &, const QCursor &);
extern QDataStream operator>>(QDataStream&, QCursor&)(QDataStream &, QCursor &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
