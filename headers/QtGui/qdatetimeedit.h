#ifndef _QTGUI_QDATETIMEEDIT_H_
#define _QTGUI_QDATETIMEEDIT_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qdatetime.h>
#include <QtGui/qwidget.h>
#include <QtGui/qvalidator.h>
#include <QtGui/qabstractspinbox.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N13QDateTimeEdit8SectionsE;

    Unknown Type:".Class.";

    enum N13QDateTimeEdit7SectionE {
	NoSection,
	AmPmSection,
	MSecSection,
	SecondSection,
	MinuteSection,
	HourSection,
	TimeSections_Mask,
	DaySection,
	MonthSection,
	YearSection,
	DateSections_Mask
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern _ZN13QDateTimeEditD0Ev(void);
    extern _ZN13QDateTimeEditD1Ev(void);
    extern struct QMetaObject _ZN13QDateTimeEdit16staticMetaObjectE;
    extern struct QMetaObject _ZNK13QDateTimeEdit10metaObjectEv(void);
    extern void _ZN13QDateTimeEdit11qt_metacastEPKc(void);
    extern int
	_ZN13QDateTimeEdit11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN13QDateTimeEditC2EP7QWidget(void);
    extern Class _ZN13QDateTimeEditC1EP7QWidget(void);
    extern Class _ZN13QDateTimeEditC2ERK9QDateTimeP7QWidget(void);
    extern Class _ZN13QDateTimeEditC1ERK9QDateTimeP7QWidget(void);
    extern Class _ZN13QDateTimeEditC2ERK5QDateP7QWidget(void);
    extern Class _ZN13QDateTimeEditC1ERK5QDateP7QWidget(void);
    extern Class _ZN13QDateTimeEditC2ERK5QTimeP7QWidget(void);
    extern Class _ZN13QDateTimeEditC1ERK5QTimeP7QWidget(void);
    extern Class _ZNK13QDateTimeEdit8dateTimeEv(void);
    extern Class _ZNK13QDateTimeEdit4dateEv(void);
    extern Class _ZNK13QDateTimeEdit4timeEv(void);
    extern Class _ZNK13QDateTimeEdit11minimumDateEv(void);
    extern void _ZN13QDateTimeEdit14setMinimumDateERK5QDate(void);
    extern void _ZN13QDateTimeEdit16clearMinimumDateEv(void);
    extern Class _ZNK13QDateTimeEdit11maximumDateEv(void);
    extern void _ZN13QDateTimeEdit14setMaximumDateERK5QDate(void);
    extern void _ZN13QDateTimeEdit16clearMaximumDateEv(void);
    extern void _ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void);
    extern Class _ZNK13QDateTimeEdit11minimumTimeEv(void);
    extern void _ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void);
    extern void _ZN13QDateTimeEdit16clearMinimumTimeEv(void);
    extern Class _ZNK13QDateTimeEdit11maximumTimeEv(void);
    extern void _ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void);
    extern void _ZN13QDateTimeEdit16clearMaximumTimeEv(void);
    extern void _ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void);
    extern N13QDateTimeEdit8SectionsE
	_ZNK13QDateTimeEdit17displayedSectionsEv(void);
    extern enum N13QDateTimeEdit7SectionE
	_ZNK13QDateTimeEdit14currentSectionEv(void);
    extern void _ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void);
    extern Class _ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void);
    extern Class _ZNK13QDateTimeEdit13displayFormatEv(void);
    extern void _ZN13QDateTimeEdit16setDisplayFormatERK7QString(void);
    extern Class _ZNK13QDateTimeEdit8sizeHintEv(void);
    extern void _ZN13QDateTimeEdit5clearEv(void);
    extern void _ZN13QDateTimeEdit6stepByEi(void);
    extern bool _ZN13QDateTimeEdit5eventEP6QEvent(void);
    extern void _ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void);
    extern void _ZN13QDateTimeEdit11timeChangedERK5QTime(void);
    extern void _ZN13QDateTimeEdit11dateChangedERK5QDate(void);
    extern void _ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void);
    extern void _ZN13QDateTimeEdit7setDateERK5QDate(void);
    extern void _ZN13QDateTimeEdit7setTimeERK5QTime(void);
    extern void _ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent(void);
    extern void _ZN13QDateTimeEdit10wheelEventEP11QWheelEvent(void);
    extern void _ZN13QDateTimeEdit12focusInEventEP11QFocusEvent(void);
    extern bool _ZN13QDateTimeEdit18focusNextPrevChildEb(void);
    extern enum N10QValidator5StateE
	_ZNK13QDateTimeEdit8validateER7QStringRi(void);
    extern void _ZNK13QDateTimeEdit5fixupER7QString(void);
    extern Class _ZNK13QDateTimeEdit16dateTimeFromTextERK7QString(void);
    extern Class _ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime(void);
    extern N16QAbstractSpinBox11StepEnabledE
	_ZNK13QDateTimeEdit11stepEnabledEv(void);
    extern _ZN9QTimeEditD0Ev(void);
    extern _ZN9QTimeEditD1Ev(void);
    extern struct QMetaObject _ZN9QTimeEdit16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QTimeEdit10metaObjectEv(void);
    extern void _ZN9QTimeEdit11qt_metacastEPKc(void);
    extern int _ZN9QTimeEdit11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QTimeEditC2EP7QWidget(void);
    extern Class _ZN9QTimeEditC1EP7QWidget(void);
    extern Class _ZN9QTimeEditC2ERK5QTimeP7QWidget(void);
    extern Class _ZN9QTimeEditC1ERK5QTimeP7QWidget(void);
    extern _ZN9QDateEditD0Ev(void);
    extern _ZN9QDateEditD1Ev(void);
    extern struct QMetaObject _ZN9QDateEdit16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QDateEdit10metaObjectEv(void);
    extern void _ZN9QDateEdit11qt_metacastEPKc(void);
    extern int _ZN9QDateEdit11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QDateEditC2EP7QWidget(void);
    extern Class _ZN9QDateEditC1EP7QWidget(void);
    extern Class _ZN9QDateEditC2ERK5QDateP7QWidget(void);
    extern Class _ZN9QDateEditC1ERK5QDateP7QWidget(void);
#ifdef __cplusplus
}
#endif
#endif
