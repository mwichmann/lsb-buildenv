#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLRECORD_H_
#define _QTSQL_QSQLRECORD_H_

class QSqlRecord;
// *INDENT-OFF*

class QSqlRecord
{
private:
public:
     QSqlRecord();
     QSqlRecord(QSqlRecord const&);
    QSqlRecord & operator=(QSqlRecord const&);
     ~QSqlRecord();
    bool operator==(QSqlRecord const&) const;
    QVariant value(int) const;
    QVariant value(QString const&) const;
    void setValue(int, QVariant const&);
    void setValue(QString const&, QVariant const&);
    void setNull(int);
    void setNull(QString const&);
    bool isNull(int) const;
    bool isNull(QString const&) const;
    int indexOf(QString const&) const;
    QString fieldName(int) const;
    QSqlField field(int) const;
    QSqlField field(QString const&) const;
    bool isGenerated(int) const;
    bool isGenerated(QString const&) const;
    void setGenerated(QString const&, bool);
    void setGenerated(int, bool);
    const QSqlField * fieldPtr(int) const;
    const QSqlField * fieldPtr(QString const&) const;
    QString toString(QString const&, QString const&) const;
    QStringList toStringList(QString const&) const;
    void append(QSqlField const&);
    void replace(int, QSqlField const&);
    void insert(int, QSqlField const&);
    void remove(int);
    bool isEmpty() const;
    bool contains(QString const&) const;
    void clear();
    void clearValues();
    int count() const;
};


/* Function prototypes */

extern QDebug _Zls6QDebugRK10QSqlRecord(const QSqlRecord &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
