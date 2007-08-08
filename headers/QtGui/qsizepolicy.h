#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

class QSizePolicy;
// *INDENT-OFF*



typedef enum Policy	
{
Fixed,	
Minimum,	
MinimumExpanding,	
Maximum,	
Preferred,	
Expanding,	
Ignored
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
HSize,	
HMask,	
VMask
}
;

enum PolicyFlag	
{
GrowFlag,	
ExpandFlag,	
ShrinkFlag,	
IgnoreFlag
}
;

enum Policy	
{
Fixed,	
Minimum,	
MinimumExpanding,	
Maximum,	
Preferred,	
Expanding,	
Ignored
}
;


extern struct QMetaObject _ZN11QSizePolicy16staticMetaObjectE ;
extern QSizePolicy _ZNK11QSizePolicycv8QVariantEv(void);
// *INDENT-ON*
#endif
