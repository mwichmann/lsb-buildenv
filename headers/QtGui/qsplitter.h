#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSPLITTER_H_
#define _QTGUI_QSPLITTER_H_

class QSplitter;
// *INDENT-OFF*

class QSplitter;

enum QSplitter::ResizeMode	
{
Stretch = 0,	
KeepSize = 1,	
FollowSizeHint = 2,	
Auto = 3
}
;

class QSplitterHandle;


/* Function prototypes */

extern struct QMetaObject _ZN15QSplitterHandle16staticMetaObjectE;
extern struct QMetaObject _ZN9QSplitter16staticMetaObjectE;
extern QTextStream operator<<(QTextStream&, QSplitter const&)(QTextStream &, const QSplitter &);
extern QTextStream operator>>(QTextStream&, QSplitter&)(QTextStream &, QSplitter &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
