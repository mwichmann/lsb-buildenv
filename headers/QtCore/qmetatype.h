#ifndef _QTCORE_QMETATYPE_H_
#define _QTCORE_QMETATYPE_H_


#ifdef __cplusplus
extern "C" {
#endif




    typedef void N9QMetaType10DestructorE;

    typedef void N9QMetaType11ConstructorE;

    typedef void N9QMetaType12SaveOperatorE;

    typedef void N9QMetaType12LoadOperatorE;

    Unknown Type:".Class.";

    enum N9QMetaType4TypeE {
	Void,
	Bool,
	Int,
	UInt,
	Double,
	QChar,
	QString,
	QByteArray,
	VoidStar,
	Long,
	Short,
	Char,
	ULong,
	UShort,
	UChar,
	Float,
	QObjectStar,
	QWidgetStar,
	User
    };


    extern void
	_ZN9QMetaType23registerStreamOperatorsEPKcPFvR11QDataStreamPKvEPFvS3_PvE
	(void);
    extern int _ZN9QMetaType12registerTypeEPKcPFvPvEPFS2_PKvE(void);
    extern int _ZN9QMetaType4typeEPKc(void);
    extern char _ZN9QMetaType8typeNameEi(void);
    extern bool _ZN9QMetaType12isRegisteredEi(void);
    extern void _ZN9QMetaType9constructEiPKv(void);
    extern void _ZN9QMetaType7destroyEiPv(void);
    extern bool _ZN9QMetaType4saveER11QDataStreamiPKv(void);
    extern bool _ZN9QMetaType4loadER11QDataStreamiPv(void);
#ifdef __cplusplus
}
#endif
#endif
