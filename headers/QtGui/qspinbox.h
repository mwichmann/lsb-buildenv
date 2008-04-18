#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSPINBOX_H_
#define _QTGUI_QSPINBOX_H_

class QDoubleSpinBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSpinBox : public QAbstractSpinBox
{
private:
public:
     ~QSpinBox();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSpinBox(QWidget*);
     QSpinBox(QWidget*, char const*);
     QSpinBox(int, int, int, QWidget*, char const*);
    int value() const;
    QString prefix() const;
    void setPrefix(QString const&);
    QString suffix() const;
    void setSuffix(QString const&);
    QString cleanText() const;
    int singleStep() const;
    void setSingleStep(int);
    int minimum() const;
    void setMinimum(int);
    int maximum() const;
    void setMaximum(int);
    void setRange(int, int);
    void setValue(int);
protected:
    bool event(QEvent*);
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    int valueFromText(QString const&) const;
    QString textFromValue(int) const;
    void fixup(QString&) const;
    void valueChanged(int);
    void valueChanged(QString const&);
};

class QDoubleSpinBox : public QAbstractSpinBox
{
private:
public:
     ~QDoubleSpinBox();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDoubleSpinBox(QWidget*);
    double value() const;
    QString prefix() const;
    void setPrefix(QString const&);
    QString suffix() const;
    void setSuffix(QString const&);
    QString cleanText() const;
    double singleStep() const;
    void setSingleStep(double);
    double minimum() const;
    void setMinimum(double);
    double maximum() const;
    void setMaximum(double);
    void setRange(double, double);
    int decimals() const;
    void setDecimals(int);
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    double valueFromText(QString const&) const;
    QString textFromValue(double) const;
    void fixup(QString&) const;
    void setValue(double);
protected:
    void valueChanged(double);
    void valueChanged(QString const&);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN14QDoubleSpinBox16staticMetaObjectE ;
extern struct QMetaObject _ZN8QSpinBox16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
