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

enum QIODevice::OpenModeFlag	
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

extern struct QMetaObject _ZN9QIODevice16staticMetaObjectE;
extern 
