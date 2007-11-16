#ifndef _QTGUI_QSHORTCUT_H_
#define _QTGUI_QSHORTCUT_H_

class QShortcut;
// *INDENT-OFF*




class QShortcut : public QObject
{
private:
public:
};


extern struct QMetaObject _ZN9QShortcut16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QShortcut10metaObjectEv(void);
extern void _ZN9QShortcut11qt_metacastEPKc(void);
extern int _ZN9QShortcut11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QShortcut _ZN9QShortcutC2EP7QWidget(void);
extern QShortcut _ZN9QShortcutC1EP7QWidget(void);
extern QShortcut _ZN9QShortcutC2ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(void);
extern QShortcut _ZN9QShortcutC1ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(void);
extern QShortcut _ZN9QShortcutD2Ev(void);
extern QShortcut _ZN9QShortcutD1Ev(void);
extern QShortcut _ZN9QShortcutD0Ev(void);
extern void _ZN9QShortcut6setKeyERK12QKeySequence(void);
extern QKeySequence _ZNK9QShortcut3keyEv(void);
extern void _ZN9QShortcut10setEnabledEb(void);
extern bool _ZNK9QShortcut9isEnabledEv(void);
extern void _ZN9QShortcut10setContextEN2Qt15ShortcutContextE(void);
extern enum N2Qt15ShortcutContextE _ZN9QShortcut7contextEv(void);
extern void _ZN9QShortcut12setWhatsThisERK7QString(void);
extern QString _ZNK9QShortcut9whatsThisEv(void);
extern int _ZNK9QShortcut2idEv(void);
extern void _ZN9QShortcut9activatedEv(void);
extern void _ZN9QShortcut20activatedAmbiguouslyEv(void);
extern bool _ZN9QShortcut5eventEP6QEvent(void);
// *INDENT-ON*
#endif
