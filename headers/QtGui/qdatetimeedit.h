#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDATETIMEEDIT_H_
#define _QTGUI_QDATETIMEEDIT_H_

class QTimeEdit;
// *INDENT-OFF*

typedef class QFlags<QDateTimeEdit::Section>QDateTimeEdit::Sections	
;

class QDateTimeEdit;

enum _ZN13QDateTimeEdit7SectionE	
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

class QFlags<QDateTimeEdit::Section>;

class QTimeEdit;

class QDateEdit;


/* Function prototypes */

extern struct QMetaObject _ZN13QDateTimeEdit16staticMetaObjectE;
extern struct QMetaObject _ZN9QDateEdit16staticMetaObjectE;
extern struct QMetaObject _ZN9QTimeEdit16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
