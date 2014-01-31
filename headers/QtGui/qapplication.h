#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QAPPLICATION_H_
#define _QTGUI_QAPPLICATION_H_

class QApplication;
// *INDENT-OFF*

typedef int	QApplication::ColorMode	
;

class QApplication;

enum QApplication::Type	
{
Tty = 0,	
GuiClient = 1,	
GuiServer = 2
}
;

enum QApplication::ColorSpec	
{
NormalColor = 0,	
CustomColor = 1,	
ManyColor = 2
}
;


/* Function prototypes */

extern struct QMetaObject _ZN12QApplication16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
