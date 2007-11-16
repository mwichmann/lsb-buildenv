#ifndef _QTGUI_QVALIDATOR_H_
#define _QTGUI_QVALIDATOR_H_

class QIntValidator;
// *INDENT-OFF*




class QValidator : public QObject
{
private:
public:
};

enum State	
{
Invalid = 0,	
Intermediate = 1,	
Valid = 1,	
Acceptable = 2
}
;

class QIntValidator : public QValidator
{
private:
public:
};

class QDoubleValidator : public QValidator
{
private:
public:
};

class QRegExpValidator : public QValidator
{
private:
public:
};


extern struct QMetaObject _ZN10QValidator16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QValidator10metaObjectEv(void);
extern void _ZN10QValidator11qt_metacastEPKc(void);
extern int _ZN10QValidator11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QValidator _ZN10QValidatorC2EP7QObject(void);
extern QValidator _ZN10QValidatorC1EP7QObject(void);
extern QValidator _ZN10QValidatorD2Ev(void);
extern QValidator _ZN10QValidatorD1Ev(void);
extern QValidator _ZN10QValidatorD0Ev(void);
extern void _ZNK10QValidator5fixupER7QString(void);
extern QValidator _ZN10QValidatorC2EP7QObjectPKc(void);
extern QValidator _ZN10QValidatorC1EP7QObjectPKc(void);
extern struct QMetaObject _ZN13QIntValidator16staticMetaObjectE ;
extern struct QMetaObject _ZNK13QIntValidator10metaObjectEv(void);
extern void _ZN13QIntValidator11qt_metacastEPKc(void);
extern int _ZN13QIntValidator11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QIntValidator _ZN13QIntValidatorC2EP7QObject(void);
extern QIntValidator _ZN13QIntValidatorC1EP7QObject(void);
extern QIntValidator _ZN13QIntValidatorC2EiiP7QObject(void);
extern QIntValidator _ZN13QIntValidatorC1EiiP7QObject(void);
extern QIntValidator _ZN13QIntValidatorD2Ev(void);
extern QIntValidator _ZN13QIntValidatorD1Ev(void);
extern QIntValidator _ZN13QIntValidatorD0Ev(void);
extern enum N10QValidator5StateE _ZNK13QIntValidator8validateER7QStringRi(void);
extern void _ZN13QIntValidator9setBottomEi(void);
extern void _ZN13QIntValidator6setTopEi(void);
extern void _ZN13QIntValidator8setRangeEii(void);
extern QIntValidator _ZN13QIntValidatorC2EP7QObjectPKc(void);
extern QIntValidator _ZN13QIntValidatorC1EP7QObjectPKc(void);
extern QIntValidator _ZN13QIntValidatorC2EiiP7QObjectPKc(void);
extern QIntValidator _ZN13QIntValidatorC1EiiP7QObjectPKc(void);
extern struct QMetaObject _ZN16QDoubleValidator16staticMetaObjectE ;
extern struct QMetaObject _ZNK16QDoubleValidator10metaObjectEv(void);
extern void _ZN16QDoubleValidator11qt_metacastEPKc(void);
extern int _ZN16QDoubleValidator11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QDoubleValidator _ZN16QDoubleValidatorC2EP7QObject(void);
extern QDoubleValidator _ZN16QDoubleValidatorC1EP7QObject(void);
extern QDoubleValidator _ZN16QDoubleValidatorC2EddiP7QObject(void);
extern QDoubleValidator _ZN16QDoubleValidatorC1EddiP7QObject(void);
extern QDoubleValidator _ZN16QDoubleValidatorD2Ev(void);
extern QDoubleValidator _ZN16QDoubleValidatorD1Ev(void);
extern QDoubleValidator _ZN16QDoubleValidatorD0Ev(void);
extern enum N10QValidator5StateE _ZNK16QDoubleValidator8validateER7QStringRi(void);
extern void _ZN16QDoubleValidator8setRangeEddi(void);
extern void _ZN16QDoubleValidator9setBottomEd(void);
extern void _ZN16QDoubleValidator6setTopEd(void);
extern void _ZN16QDoubleValidator11setDecimalsEi(void);
extern QDoubleValidator _ZN16QDoubleValidatorC2EP7QObjectPKc(void);
extern QDoubleValidator _ZN16QDoubleValidatorC1EP7QObjectPKc(void);
extern QDoubleValidator _ZN16QDoubleValidatorC2EddiP7QObjectPKc(void);
extern QDoubleValidator _ZN16QDoubleValidatorC1EddiP7QObjectPKc(void);
extern struct QMetaObject _ZN16QRegExpValidator16staticMetaObjectE ;
extern struct QMetaObject _ZNK16QRegExpValidator10metaObjectEv(void);
extern void _ZN16QRegExpValidator11qt_metacastEPKc(void);
extern int _ZN16QRegExpValidator11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QRegExpValidator _ZN16QRegExpValidatorC2EP7QObject(void);
extern QRegExpValidator _ZN16QRegExpValidatorC1EP7QObject(void);
extern QRegExpValidator _ZN16QRegExpValidatorC2ERK7QRegExpP7QObject(void);
extern QRegExpValidator _ZN16QRegExpValidatorC1ERK7QRegExpP7QObject(void);
extern QRegExpValidator _ZN16QRegExpValidatorD2Ev(void);
extern QRegExpValidator _ZN16QRegExpValidatorD1Ev(void);
extern QRegExpValidator _ZN16QRegExpValidatorD0Ev(void);
extern enum N10QValidator5StateE _ZNK16QRegExpValidator8validateER7QStringRi(void);
extern void _ZN16QRegExpValidator9setRegExpERK7QRegExp(void);
extern QRegExpValidator _ZN16QRegExpValidatorC2EP7QObjectPKc(void);
extern QRegExpValidator _ZN16QRegExpValidatorC1EP7QObjectPKc(void);
extern QRegExpValidator _ZN16QRegExpValidatorC2ERK7QRegExpP7QObjectPKc(void);
extern QRegExpValidator _ZN16QRegExpValidatorC1ERK7QRegExpP7QObjectPKc(void);
// *INDENT-ON*
#endif
