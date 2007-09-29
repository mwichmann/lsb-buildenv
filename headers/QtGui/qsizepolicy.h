#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

class QSizePolicy;
// *INDENT-OFF*



typedef enum Policy	
{
Fixed = 0,	
Minimum = 1,	
MinimumExpanding = 3,	
Maximum = 4,	
Preferred = 5,	
Expanding = 7,	
Ignored = 13
}
SizeType	
;

typedef Orientations	ExpandData	
;

class QSizePolicy
{
private:
public:
};

enum SizePolicyMasks	
{
HSize = 4,	
HMask = 15,	
VMask = 240
}
;

enum PolicyFlag	
{
GrowFlag = 1,	
ExpandFlag = 2,	
ShrinkFlag = 4,	
IgnoreFlag = 8
}
;

enum Policy	
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


extern struct QMetaObject _ZN11QSizePolicy16staticMetaObjectE ;
extern QSizePolicy _ZNK11QSizePolicycv8QVariantEv(void);
// *INDENT-ON*
#endif
