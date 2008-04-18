#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDATETIME_H_
#define _QTCORE_QDATETIME_H_

class QDateTime;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDate
{
private:
public:
     QDate(int, int, int);
    bool isValid() const;
    int year() const;
    int month() const;
    int day() const;
    int dayOfWeek() const;
    int dayOfYear() const;
    int daysInMonth() const;
    int daysInYear() const;
    int weekNumber(int*) const;
    static QString shortMonthName(int);
    static QString shortDayName(int);
    static QString longMonthName(int);
    static QString longDayName(int);
    QString toString(Qt::DateFormat) const;
    QString toString(QString const&) const;
    bool setYMD(int, int, int);
    QDate addDays(int) const;
    QDate addMonths(int) const;
    QDate addYears(int) const;
    int daysTo(QDate const&) const;
    static QDate currentDate();
    static QDate fromString(QString const&, Qt::DateFormat);
    static QDate fromString(QString const&, QString const&);
    static bool isValid(int, int, int);
    static bool isLeapYear(int);
    static uint gregorianToJulian(int, int, int);
    static void julianToGregorian(unsigned int, int&, int&, int&);
    bool setDate(int, int, int);
};

class QTime
{
private:
public:
     QTime(int, int, int, int);
    bool isValid() const;
    int hour() const;
    int minute() const;
    int second() const;
    int msec() const;
    QString toString(Qt::DateFormat) const;
    QString toString(QString const&) const;
    bool setHMS(int, int, int, int);
    QTime addSecs(int) const;
    int secsTo(QTime const&) const;
    QTime addMSecs(int) const;
    int msecsTo(QTime const&) const;
    static QTime currentTime();
    static QTime fromString(QString const&, Qt::DateFormat);
    static QTime fromString(QString const&, QString const&);
    static bool isValid(int, int, int, int);
    void start();
    int restart();
    int elapsed() const;
};

class QDateTime
{
private:
public:
     QDateTime();
     QDateTime(QDate const&);
     QDateTime(QDate const&, QTime const&, Qt::TimeSpec);
     QDateTime(QDateTime const&);
     ~QDateTime();
    QDateTime & operator=(QDateTime const&);
    bool isNull() const;
    bool isValid() const;
    QDate date() const;
    QTime time() const;
    enum _ZN2Qt8TimeSpecE timeSpec() const;
    uint toTime_t() const;
    void setDate(QDate const&);
    void setTime(QTime const&);
    void setTimeSpec(Qt::TimeSpec);
    void setTime_t(unsigned int);
    QString toString(Qt::DateFormat) const;
    QString toString(QString const&) const;
    QDateTime addDays(int) const;
    QDateTime addMonths(int) const;
    QDateTime addYears(int) const;
    QDateTime addSecs(int) const;
    QDateTime addMSecs(long long) const;
    QDateTime toTimeSpec(Qt::TimeSpec) const;
    int daysTo(QDateTime const&) const;
    int secsTo(QDateTime const&) const;
    bool operator==(QDateTime const&) const;
    bool operator<(QDateTime const&) const;
    static QDateTime currentDateTime();
    static QDateTime fromString(QString const&, Qt::DateFormat);
    static QDateTime fromString(QString const&, QString const&);
    static QDateTime fromTime_t(unsigned int);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK5QDate(const QDate &);
extern QDebug _Zls6QDebugRK5QTime(const QTime &);
extern QDebug _Zls6QDebugRK9QDateTime(const QDateTime &);
extern QDataStream _ZlsR11QDataStreamRK5QDate(const QDate &);
extern QDataStream _ZlsR11QDataStreamRK5QTime(const QTime &);
extern QDataStream _ZlsR11QDataStreamRK9QDateTime(const QDateTime &);
extern QDataStream _ZrsR11QDataStreamR5QDate(QDate &);
extern QDataStream _ZrsR11QDataStreamR5QTime(QTime &);
extern QDataStream _ZrsR11QDataStreamR9QDateTime(QDateTime &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
