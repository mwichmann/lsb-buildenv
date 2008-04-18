#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSTRINGMATCHER_H_
#define _QTCORE_QSTRINGMATCHER_H_

class QStringMatcher;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QStringMatcher
{
private:
public:
     QStringMatcher();
     QStringMatcher(QString const&, Qt::CaseSensitivity);
     QStringMatcher(QStringMatcher const&);
     ~QStringMatcher();
    QStringMatcher & operator=(QStringMatcher const&);
    void setPattern(QString const&);
    void setCaseSensitivity(Qt::CaseSensitivity);
    int indexIn(QString const&, int) const;
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
