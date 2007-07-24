#ifndef _QTGUI_QSIZEPOLICY_H_
#define _QTGUI_QSIZEPOLICY_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef enum N11QSizePolicy6PolicyE {
	Fixed,
	Minimum,
	MinimumExpanding,
	Maximum,
	Preferred,
	Expanding,
	Ignored
    } N11QSizePolicy8SizeTypeE;

    typedef N2Qt12OrientationsE N11QSizePolicy10ExpandDataE;

    Unknown Type:".Class.";

    enum N11QSizePolicy15SizePolicyMasksE {
	HSize,
	HMask,
	VMask
    };

    enum N11QSizePolicy10PolicyFlagE {
	GrowFlag,
	ExpandFlag,
	ShrinkFlag,
	IgnoreFlag
    };

    enum N11QSizePolicy6PolicyE {
	Fixed,
	Minimum,
	MinimumExpanding,
	Maximum,
	Preferred,
	Expanding,
	Ignored
    };


    extern struct QMetaObject _ZN11QSizePolicy16staticMetaObjectE;
    extern Class _ZNK11QSizePolicycv8QVariantEv(void);
#ifdef __cplusplus
}
#endif
#endif
