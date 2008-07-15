#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QVALIDATOR_H_
#define _QTGUI_QVALIDATOR_H_

class QIntValidator;
// *INDENT-OFF*

class QValidator : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QValidator(QObject*);
     ~QValidator();
    void fixup(QString&) const;
     QValidator(QObject*, char const*);
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
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QIntValidator(QObject*);
     QIntValidator(int, int, QObject*);
     ~QIntValidator();
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    void setBottom(int);
    void setTop(int);
    void setRange(int, int);
     QIntValidator(QObject*, char const*);
     QIntValidator(int, int, QObject*, char const*);
};

class QDoubleValidator : public QValidator
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDoubleValidator(QObject*);
     QDoubleValidator(double, double, int, QObject*);
     ~QDoubleValidator();
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    void setRange(double, double, int);
    void setBottom(double);
    void setTop(double);
    void setDecimals(int);
     QDoubleValidator(QObject*, char const*);
     QDoubleValidator(double, double, int, QObject*, char const*);
};

class QRegExpValidator : public QValidator
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QRegExpValidator(QObject*);
     QRegExpValidator(QRegExp const&, QObject*);
     ~QRegExpValidator();
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    void setRegExp(QRegExp const&);
     QRegExpValidator(QObject*, char const*);
     QRegExpValidator(QRegExp const&, QObject*, char const*);
};


/* Function prototypes */

extern struct QMetaObject _ZN10QValidator16staticMetaObjectE ;
extern struct QMetaObject _ZN13QIntValidator16staticMetaObjectE ;
extern struct QMetaObject _ZN16QDoubleValidator16staticMetaObjectE ;
extern struct QMetaObject _ZN16QRegExpValidator16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
