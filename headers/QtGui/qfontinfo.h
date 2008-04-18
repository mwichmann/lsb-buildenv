#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONTINFO_H_
#define _QTGUI_QFONTINFO_H_

class QFontInfo;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFontInfo
{
private:
public:
     QFontInfo(QFont const&);
     QFontInfo(QFontInfo const&);
     ~QFontInfo();
    QFontInfo & operator=(QFontInfo const&);
    QString family() const;
    int pixelSize() const;
    int pointSize() const;
    qreal pointSizeF() const;
    bool italic() const;
    enum _ZN5QFont5StyleE style() const;
    int weight() const;
    bool underline() const;
    bool overline() const;
    bool strikeOut() const;
    bool fixedPitch() const;
    enum _ZN5QFont9StyleHintE styleHint() const;
    bool rawMode() const;
    bool exactMatch() const;
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
