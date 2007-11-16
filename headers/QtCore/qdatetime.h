#ifndef _QTCORE_QDATETIME_H_
#define _QTCORE_QDATETIME_H_

class QDateTime;
// *INDENT-OFF*




class QDate
{
private:
public:
};

class QTime
{
private:
public:
};

class QDateTime
{
private:
public:
};


extern QDate _ZN5QDateC2Eiii(void);
extern QDate _ZN5QDateC1Eiii(void);
extern bool _ZNK5QDate7isValidEv(void);
extern int _ZNK5QDate4yearEv(void);
extern int _ZNK5QDate5monthEv(void);
extern int _ZNK5QDate3dayEv(void);
extern int _ZNK5QDate9dayOfWeekEv(void);
extern int _ZNK5QDate9dayOfYearEv(void);
extern int _ZNK5QDate11daysInMonthEv(void);
extern int _ZNK5QDate10daysInYearEv(void);
extern int _ZNK5QDate10weekNumberEPi(void);
extern QString _ZN5QDate14shortMonthNameEi(void);
extern QString _ZN5QDate12shortDayNameEi(void);
extern QString _ZN5QDate13longMonthNameEi(void);
extern QString _ZN5QDate11longDayNameEi(void);
extern QString _ZNK5QDate8toStringEN2Qt10DateFormatE(void);
extern QString _ZNK5QDate8toStringERK7QString(void);
extern bool _ZN5QDate6setYMDEiii(void);
extern QDate _ZNK5QDate7addDaysEi(void);
extern QDate _ZNK5QDate9addMonthsEi(void);
extern QDate _ZNK5QDate8addYearsEi(void);
extern int _ZNK5QDate6daysToERKS_(void);
extern QDate _ZN5QDate11currentDateEv(void);
extern QDate _ZN5QDate10fromStringERK7QStringN2Qt10DateFormatE(void);
extern QDate _ZN5QDate10fromStringERK7QStringS2_(void);
extern bool _ZN5QDate7isValidEiii(void);
extern bool _ZN5QDate10isLeapYearEi(void);
extern uint _ZN5QDate17gregorianToJulianEiii(void);
extern void _ZN5QDate17julianToGregorianEjRiS0_S0_(void);
extern QTime _ZN5QTimeC2Eiiii(void);
extern QTime _ZN5QTimeC1Eiiii(void);
extern bool _ZNK5QTime7isValidEv(void);
extern int _ZNK5QTime4hourEv(void);
extern int _ZNK5QTime6minuteEv(void);
extern int _ZNK5QTime6secondEv(void);
extern int _ZNK5QTime4msecEv(void);
extern QString _ZNK5QTime8toStringEN2Qt10DateFormatE(void);
extern QString _ZNK5QTime8toStringERK7QString(void);
extern bool _ZN5QTime6setHMSEiiii(void);
extern QTime _ZNK5QTime7addSecsEi(void);
extern int _ZNK5QTime6secsToERKS_(void);
extern QTime _ZNK5QTime8addMSecsEi(void);
extern int _ZNK5QTime7msecsToERKS_(void);
extern QTime _ZN5QTime11currentTimeEv(void);
extern QTime _ZN5QTime10fromStringERK7QStringN2Qt10DateFormatE(void);
extern QTime _ZN5QTime10fromStringERK7QStringS2_(void);
extern bool _ZN5QTime7isValidEiiii(void);
extern void _ZN5QTime5startEv(void);
extern int _ZN5QTime7restartEv(void);
extern int _ZNK5QTime7elapsedEv(void);
extern QDateTime _ZN9QDateTimeC2Ev(void);
extern QDateTime _ZN9QDateTimeC1Ev(void);
extern QDateTime _ZN9QDateTimeC2ERK5QDate(void);
extern QDateTime _ZN9QDateTimeC1ERK5QDate(void);
extern QDateTime _ZN9QDateTimeC2ERK5QDateRK5QTimeN2Qt8TimeSpecE(void);
extern QDateTime _ZN9QDateTimeC1ERK5QDateRK5QTimeN2Qt8TimeSpecE(void);
extern QDateTime _ZN9QDateTimeC2ERKS_(void);
extern QDateTime _ZN9QDateTimeC1ERKS_(void);
extern QDateTime _ZN9QDateTimeD2Ev(void);
extern QDateTime _ZN9QDateTimeD1Ev(void);
extern QDateTime _ZN9QDateTimeaSERKS_(void);
extern bool _ZNK9QDateTime6isNullEv(void);
extern bool _ZNK9QDateTime7isValidEv(void);
extern QDate _ZNK9QDateTime4dateEv(void);
extern QTime _ZNK9QDateTime4timeEv(void);
extern enum N2Qt8TimeSpecE _ZNK9QDateTime8timeSpecEv(void);
extern uint _ZNK9QDateTime8toTime_tEv(void);
extern void _ZN9QDateTime7setDateERK5QDate(void);
extern void _ZN9QDateTime7setTimeERK5QTime(void);
extern void _ZN9QDateTime11setTimeSpecEN2Qt8TimeSpecE(void);
extern void _ZN9QDateTime9setTime_tEj(void);
extern QString _ZNK9QDateTime8toStringEN2Qt10DateFormatE(void);
extern QString _ZNK9QDateTime8toStringERK7QString(void);
extern QDateTime _ZNK9QDateTime7addDaysEi(void);
extern QDateTime _ZNK9QDateTime9addMonthsEi(void);
extern QDateTime _ZNK9QDateTime8addYearsEi(void);
extern QDateTime _ZNK9QDateTime7addSecsEi(void);
extern QDateTime _ZNK9QDateTime8addMSecsEx(void);
extern QDateTime _ZNK9QDateTime10toTimeSpecEN2Qt8TimeSpecE(void);
extern int _ZNK9QDateTime6daysToERKS_(void);
extern int _ZNK9QDateTime6secsToERKS_(void);
extern bool _ZNK9QDateTimeeqERKS_(void);
extern bool _ZNK9QDateTimeltERKS_(void);
extern QDateTime _ZN9QDateTime15currentDateTimeEv(void);
extern QDateTime _ZN9QDateTime10fromStringERK7QStringN2Qt10DateFormatE(void);
extern QDateTime _ZN9QDateTime10fromStringERK7QStringS2_(void);
extern QDataStream _ZlsR11QDataStreamRK5QDate(void);
extern QDataStream _ZrsR11QDataStreamR5QDate(void);
extern QDataStream _ZlsR11QDataStreamRK5QTime(void);
extern QDataStream _ZrsR11QDataStreamR5QTime(void);
extern QDataStream _ZlsR11QDataStreamRK9QDateTime(void);
extern QDataStream _ZrsR11QDataStreamR9QDateTime(void);
extern QDebug _Zls6QDebugRK5QDate(void);
extern QDebug _Zls6QDebugRK5QTime(void);
extern QDebug _Zls6QDebugRK9QDateTime(void);
// *INDENT-ON*
#endif
