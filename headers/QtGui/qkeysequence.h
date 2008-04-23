#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QKEYSEQUENCE_H_
#define _QTGUI_QKEYSEQUENCE_H_

class QKeySequence;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QKeySequence
{
private:
public:
     QKeySequence();
     QKeySequence(QString const&);
     QKeySequence(int, int, int, int);
     QKeySequence(QKeySequence const&);
     ~QKeySequence();
    uint count() const;
    bool isEmpty() const;
    QString toString(QKeySequence::SequenceFormat) const;
    QKeySequence fromString(QString const&, QKeySequence::SequenceFormat);
    enum _ZN12QKeySequence13SequenceMatchE matches(QKeySequence const&) const;
    QKeySequence mnemonic(QString const&);
    QString operator QString() const;
    QVariant operator QVariant() const;
    int operator int() const;
    int operator[](unsigned int) const;
    QKeySequence & operator=(QKeySequence const&);
    bool operator==(QKeySequence const&) const;
    bool operator<(QKeySequence const&) const;
    bool isDetached() const;
     QKeySequence(QKeySequence::StandardKey);
    QList<QKeySequence> keyBindings(QKeySequence::StandardKey);
};

enum SequenceMatch	
{
NoMatch = 0,	
PartialMatch = 1,	
ExactMatch = 2,	
Identical = 2
}
;

enum SequenceFormat	
{
NativeText = 0,	
PortableText = 1
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK12QKeySequence(const QKeySequence &);
extern QDataStream _ZlsR11QDataStreamRK12QKeySequence(QDataStream &, const QKeySequence &);
extern QDataStream _ZrsR11QDataStreamR12QKeySequence(QDataStream &, QKeySequence &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
