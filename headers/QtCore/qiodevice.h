#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QIODEVICE_H_
#define _QTCORE_QIODEVICE_H_

class QIODevice;
// *INDENT-OFF*

typedef class QFlags<QIODevice::OpenModeFlag>QIODevice::OpenMode	
;

typedef qint64	QIODevice::Offset	
;

typedef int	QIODevice::Status	
;

class QIODevice;

enum _ZN9QIODevice12OpenModeFlagE	
{
NotOpen = 0,	
ReadOnly = 1,	
WriteOnly = 2,	
ReadWrite = 3,	
Append = 4,	
Truncate = 8,	
Text = 16,	
Unbuffered = 32
}
;

class QFlags<QIODevice::OpenModeFlag>;


/* Function prototypes */

extern struct QMetaObject _ZN9QIODevice16staticMetaObjectE ;
extern  _Zls6QDebug6QFlagsIN9QIODevice12OpenModeFlagEE(_Z6QDebug, _Z356QFlagsIN9QIODevice12OpenModeFlagEE);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
