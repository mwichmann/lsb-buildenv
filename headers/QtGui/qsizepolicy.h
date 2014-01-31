#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

class QSizePolicy;
// *INDENT-OFF*

typedef enum QSizePolicy::Policy	
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

enum QSizePolicy::SizePolicyMasks	
{
HSize = 4,	
HMask = 15,	
VMask = 240
}
;

enum QSizePolicy::PolicyFlag	
{
GrowFlag = 1,	
ExpandFlag = 2,	
ShrinkFlag = 4,	
IgnoreFlag = 8
}
;

enum QSizePolicy::Policy	
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
