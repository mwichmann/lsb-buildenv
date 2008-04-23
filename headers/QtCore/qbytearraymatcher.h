#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBYTEARRAYMATCHER_H_
#define _QTCORE_QBYTEARRAYMATCHER_H_

class QByteArrayMatcher;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QByteArrayMatcher
{
private:
public:
     QByteArrayMatcher();
     QByteArrayMatcher(QByteArray const&);
     QByteArrayMatcher(QByteArrayMatcher const&);
     ~QByteArrayMatcher();
    QByteArrayMatcher & operator=(QByteArrayMatcher const&);
    void setPattern(QByteArray const&);
    int indexIn(QByteArray const&, int) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
