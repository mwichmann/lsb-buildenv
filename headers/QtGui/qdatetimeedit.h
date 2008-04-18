#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDATETIMEEDIT_H_
#define _QTGUI_QDATETIMEEDIT_H_

class QTimeEdit;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QDateTimeEdit::Section>
{
private:
public:
}Sections	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QDateTimeEdit : public QAbstractSpinBox
{
private:
public:
     ~QDateTimeEdit();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDateTimeEdit(QWidget*);
     QDateTimeEdit(QDateTime const&, QWidget*);
     QDateTimeEdit(QDate const&, QWidget*);
     QDateTimeEdit(QTime const&, QWidget*);
    QDateTime dateTime() const;
    QDate date() const;
    QTime time() const;
    QDate minimumDate() const;
    void setMinimumDate(QDate const&);
    void clearMinimumDate();
    QDate maximumDate() const;
    void setMaximumDate(QDate const&);
    void clearMaximumDate();
    void setDateRange(QDate const&, QDate const&);
    QTime minimumTime() const;
    void setMinimumTime(QTime const&);
    void clearMinimumTime();
    QTime maximumTime() const;
    void setMaximumTime(QTime const&);
    void clearMaximumTime();
    void setTimeRange(QTime const&, QTime const&);
    QFlags<QDateTimeEdit::Section> displayedSections() const;
    enum _ZN13QDateTimeEdit7SectionE currentSection() const;
    void setCurrentSection(QDateTimeEdit::Section);
    QString sectionText(QDateTimeEdit::Section) const;
    QString displayFormat() const;
    void setDisplayFormat(QString const&);
    QSize sizeHint() const;
    void clear();
    void stepBy(int);
    bool event(QEvent*);
    void setDateTime(QDateTime const&);
    void setDate(QDate const&);
    void setTime(QTime const&);
    void setCalendarPopup(bool);
    void setSelectedSection(QDateTimeEdit::Section);
    bool calendarPopup() const;
protected:
    void dateTimeChanged(QDateTime const&);
    void timeChanged(QTime const&);
    void dateChanged(QDate const&);
    void keyPressEvent(QKeyEvent*);
    void wheelEvent(QWheelEvent*);
    void focusInEvent(QFocusEvent*);
    bool focusNextPrevChild(bool);
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    void fixup(QString&) const;
    QDateTime dateTimeFromText(QString const&) const;
    QString textFromDateTime(QDateTime const&) const;
    QFlags<QAbstractSpinBox::StepEnabledFlag> stepEnabled() const;
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
};

enum Section	
{
NoSection = 0,	
AmPmSection = 1,	
MSecSection = 2,	
SecondSection = 4,	
MinuteSection = 8,	
HourSection = 16,	
TimeSections_Mask = 31,	
DaySection = 256,	
MonthSection = 512,	
YearSection = 1024,	
DateSections_Mask = 1792
}
;

class QFlags<QDateTimeEdit::Section>
{
private:
public:
};

class QTimeEdit : public QDateTimeEdit
{
private:
public:
     ~QTimeEdit();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTimeEdit(QWidget*);
     QTimeEdit(QTime const&, QWidget*);
};

class QDateEdit : public QDateTimeEdit
{
private:
public:
     ~QDateEdit();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDateEdit(QWidget*);
     QDateEdit(QDate const&, QWidget*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN13QDateTimeEdit16staticMetaObjectE ;
extern struct QMetaObject _ZN9QDateEdit16staticMetaObjectE ;
extern struct QMetaObject _ZN9QTimeEdit16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
