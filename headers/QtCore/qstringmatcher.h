#ifndef _QTCORE_QSTRINGMATCHER_H_
#define _QTCORE_QSTRINGMATCHER_H_

class QStringMatcher;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
