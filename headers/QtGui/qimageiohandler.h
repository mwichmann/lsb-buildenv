#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QIMAGEIOHANDLER_H_
#define _QTGUI_QIMAGEIOHANDLER_H_

class QFlags < QImageIOPlugin::Capability >;
// *INDENT-OFF*

typedef class QFlags<QImageIOPlugin::Capability>QImageIOPlugin::Capabilities	
;

class QImageIOHandler;

enum _ZN15QImageIOHandler11ImageOptionE	
{
Size = 0,	
ClipRect = 1,	
Description = 2,	
ScaledClipRect = 3,	
ScaledSize = 4,	
CompressionRatio = 5,	
Gamma = 6,	
Quality = 7,	
Name = 8,	
SubType = 9,	
IncrementalReading = 10,	
Endianness = 11,	
Animation = 12,	
BackgroundColor = 13
}
;

struct QImageIOHandlerFactoryInterface	;

class QImageIOPlugin;

enum _ZN14QImageIOPlugin10CapabilityE	
{
CanRead = 1,	
CanWrite = 2,	
CanReadIncremental = 4
}
;

class QFlags<QImageIOPlugin::Capability>;


/* Function prototypes */

extern struct QMetaObject _ZN14QImageIOPlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
