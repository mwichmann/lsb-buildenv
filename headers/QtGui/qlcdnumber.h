#ifndef _QTGUI_QLCDNUMBER_H_
#define _QTGUI_QLCDNUMBER_H_

class QLCDNumber;
// *INDENT-OFF*

class QLCDNumber : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QLCDNumber(QWidget*);
     QLCDNumber(unsigned int, QWidget*);
     ~QLCDNumber();
    bool smallDecimalPoint() const;
    int numDigits() const;
    void setNumDigits(int);
    bool checkOverflow(double) const;
    bool checkOverflow(int) const;
    enum _ZN10QLCDNumber4ModeE mode() const;
    void setMode(QLCDNumber::Mode);
    enum _ZN10QLCDNumber12SegmentStyleE segmentStyle() const;
    void setSegmentStyle(QLCDNumber::SegmentStyle);
    double value() const;
    int intValue() const;
    QSize sizeHint() const;
    void display(QString const&);
    void display(int);
    void display(double);
    void setHexMode();
    void setDecMode();
    void setOctMode();
    void setBinMode();
    void setSmallDecimalPoint(bool);
     QLCDNumber(QWidget*, char const*);
     QLCDNumber(unsigned int, QWidget*, char const*);
protected:
    void overflow();
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
};

enum Mode	
{
Hex = 0,	
HEX = 0,	
Dec = 1,	
DEC = 1,	
Oct = 2,	
OCT = 2,	
Bin = 3,	
BIN = 3
}
;

enum SegmentStyle	
{
Outline = 0,	
Filled = 1,	
Flat = 2
}
;


extern struct QMetaObject _ZN10QLCDNumber16staticMetaObjectE ;
// *INDENT-ON*
#endif
