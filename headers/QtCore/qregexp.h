#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QREGEXP_H_
#define _QTCORE_QREGEXP_H_

class QRegExp;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QRegExp
{
private:
public:
     QRegExp();
     QRegExp(QString const&, Qt::CaseSensitivity, QRegExp::PatternSyntax);
     QRegExp(QRegExp const&);
     ~QRegExp();
    QRegExp & operator=(QRegExp const&);
    bool operator==(QRegExp const&) const;
    bool isEmpty() const;
    bool isValid() const;
    QString pattern() const;
    void setPattern(QString const&);
    enum _ZN2Qt15CaseSensitivityE caseSensitivity() const;
    void setCaseSensitivity(Qt::CaseSensitivity);
    enum _ZN7QRegExp13PatternSyntaxE patternSyntax() const;
    void setPatternSyntax(QRegExp::PatternSyntax);
    bool isMinimal() const;
    void setMinimal(bool);
    bool exactMatch(QString const&) const;
    int indexIn(QString const&, int, QRegExp::CaretMode) const;
    int lastIndexIn(QString const&, int, QRegExp::CaretMode) const;
    int matchedLength() const;
    int numCaptures() const;
    QStringList capturedTexts();
    QString cap(int);
    int pos(int);
    QString errorString();
    static QString escape(QString const&);
};

enum PatternSyntax	
{
RegExp = 0,	
Wildcard = 1,	
FixedString = 2
}
;

enum CaretMode	
{
CaretAtZero = 0,	
CaretAtOffset = 1,	
CaretWontMatch = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDataStream _ZlsR11QDataStreamRK7QRegExp(const QRegExp &);
extern QDataStream _ZrsR11QDataStreamR7QRegExp(QRegExp &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
