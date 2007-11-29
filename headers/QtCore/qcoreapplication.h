#ifndef _QTCORE_QCOREAPPLICATION_H_
#define _QTCORE_QCOREAPPLICATION_H_

class QCoreApplication;
// *INDENT-OFF*




typedef bool	EventFilter	
;

typedef void	QtCleanUpFunction	
;

class QCoreApplication : public QObject
{
private:
public:
};

enum Encoding	
{
DefaultCodec = 0,	
UnicodeUTF8 = 1
}
;


extern struct QMetaObject _ZN16QCoreApplication16staticMetaObjectE ;
extern struct QMetaObject _ZNK16QCoreApplication10metaObjectEv(void);
extern void _ZN16QCoreApplication11qt_metacastEPKc(void);
extern int _ZN16QCoreApplication11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QCoreApplication _ZN16QCoreApplicationC2ERiPPc(void);
extern QCoreApplication _ZN16QCoreApplicationC1ERiPPc(void);
extern  _ZN16QCoreApplicationD2Ev(void);
extern  _ZN16QCoreApplicationD1Ev(void);
extern  _ZN16QCoreApplicationD0Ev(void);
extern int _ZN16QCoreApplication4argcEv(void);
extern char _ZN16QCoreApplication4argvEv(void);
extern QStringList _ZN16QCoreApplication9argumentsEv(void);
extern void _ZN16QCoreApplication21setOrganizationDomainERK7QString(void);
extern QString _ZN16QCoreApplication18organizationDomainEv(void);
extern void _ZN16QCoreApplication19setOrganizationNameERK7QString(void);
extern QString _ZN16QCoreApplication16organizationNameEv(void);
extern void _ZN16QCoreApplication18setApplicationNameERK7QString(void);
extern QString _ZN16QCoreApplication15applicationNameEv(void);
extern int _ZN16QCoreApplication4execEv(void);
extern void _ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEE(void);
extern void _ZN16QCoreApplication13processEventsE6QFlagsIN10QEventLoop17ProcessEventsFlagEEi(void);
extern void _ZN16QCoreApplication4exitEi(void);
extern void _ZN16QCoreApplication9postEventEP7QObjectP6QEvent(void);
extern void _ZN16QCoreApplication16sendPostedEventsEP7QObjecti(void);
extern void _ZN16QCoreApplication18removePostedEventsEP7QObject(void);
extern bool _ZN16QCoreApplication16hasPendingEventsEv(void);
extern bool _ZN16QCoreApplication6notifyEP7QObjectP6QEvent(void);
extern bool _ZN16QCoreApplication10startingUpEv(void);
extern bool _ZN16QCoreApplication11closingDownEv(void);
extern QString _ZN16QCoreApplication18applicationDirPathEv(void);
extern QString _ZN16QCoreApplication19applicationFilePathEv(void);
extern void _ZN16QCoreApplication15setLibraryPathsERK11QStringList(void);
extern QStringList _ZN16QCoreApplication12libraryPathsEv(void);
extern void _ZN16QCoreApplication14addLibraryPathERK7QString(void);
extern void _ZN16QCoreApplication17removeLibraryPathERK7QString(void);
extern void _ZN16QCoreApplication17installTranslatorEP11QTranslator(void);
extern void _ZN16QCoreApplication16removeTranslatorEP11QTranslator(void);
extern QString _ZN16QCoreApplication9translateEPKcS1_S1_NS_8EncodingE(void);
extern void _ZN16QCoreApplication5flushEv(void);
extern int _ZN16QCoreApplication10enter_loopEv(void);
extern void _ZN16QCoreApplication9exit_loopEv(void);
extern int _ZN16QCoreApplication9loopLevelEv(void);
extern void _ZN16QCoreApplication15watchUnixSignalEib(void);
extern N16QCoreApplication11EventFilterE _ZN16QCoreApplication14setEventFilterEPFbPvPlE(void);
extern bool _ZN16QCoreApplication11filterEventEPvPl(void);
extern void _ZN16QCoreApplication4quitEv(void);
extern void _ZN16QCoreApplication11aboutToQuitEv(void);
extern void _ZN16QCoreApplication10unixSignalEi(void);
extern bool _ZN16QCoreApplication5eventEP6QEvent(void);
extern bool _ZN16QCoreApplication13compressEventEP6QEventP7QObjectP14QPostEventList(void);
extern QCoreApplication _ZN16QCoreApplicationC2ER23QCoreApplicationPrivate(void);
extern QCoreApplication _ZN16QCoreApplicationC1ER23QCoreApplicationPrivate(void);
extern void _Z15qAddPostRoutinePFvvE(void);
extern void _Z18qRemovePostRoutinePFvvE(void);
extern QString _Z8qAppNamev(void);
extern QCoreApplication * _ZN16QCoreApplication4selfE ;
// *INDENT-ON*
#endif
