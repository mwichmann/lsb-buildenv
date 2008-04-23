#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLINDEX_H_
#define _QTSQL_QSQLINDEX_H_

class QSqlIndex;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlIndex :  
{
private:
public:
     QSqlIndex(QString const&, QString const&);
     QSqlIndex(QSqlIndex const&);
     ~QSqlIndex();
    QSqlIndex & operator=(QSqlIndex const&);
    void setCursorName(QString const&);
    void setName(QString const&);
    void append(QSqlField const&);
    void append(QSqlField const&, bool);
    bool isDescending(int) const;
    void setDescending(int, bool);
    QString toString(QString const&, QString const&, bool) const;
    QStringList toStringList(QString const&, bool) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
