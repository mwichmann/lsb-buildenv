#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QCOREAPPLICATION_H_
#define _QTCORE_QCOREAPPLICATION_H_

class QCoreApplication;
// *INDENT-OFF*

typedef bool	QCoreApplication::EventFilter	
;

typedef void	QtCleanUpFunction	
;

class QCoreApplication;

enum QCoreApplication::Encoding	
{
DefaultCodec = 0,	
UnicodeUTF8 = 1
}
;


/* Function prototypes */

extern void qAddPostRoutine(void (*)())(void(*)(void));
extern void qRemovePostRoutine(void (*)())(void(*)(void));
extern QString qAppName()(void);
extern struct QMetaObject _ZN16QCoreApplication16staticMetaObjectE;
extern QCoreApplication * _ZN16QCoreApplication4selfE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
