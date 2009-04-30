#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

class QSizePolicy;
// *INDENT-OFF*

typedef enum _ZN11QSizePolicy6PolicyE	
{
Fixed = 0,	
Minimum = 1,	
MinimumExpanding = 3,	
Maximum = 4,	
Preferred = 5,	
Expanding = 7,	
Ignored = 13
}
QSizePolicy::SizeType	
;

typedef Qt::Orientations	QSizePolicy::ExpandData	
;

class QSizePolicy;

enum _ZN11QSizePolicy15SizePolicyMasksE	
{
HSize = 4,	
HMask = 15,	
VMask = 240
}
;

enum _ZN11QSizePolicy10PolicyFlagE	
{
GrowFlag = 1,	
ExpandFlag = 2,	
ShrinkFlag = 4,	
IgnoreFlag = 8
}
;

enum _ZN11QSizePolicy6PolicyE	
{
Fixed = 0,	
Minimum = 1,	
MinimumExpanding = 3,	
Maximum = 4,	
Preferred = 5,	
Expanding = 7,	
Ignored = 13
}
;


/* Function prototypes */

extern struct QMetaObject _ZN11QSizePolicy16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
