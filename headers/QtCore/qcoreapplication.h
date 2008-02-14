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
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QCoreApplication(int&, char**);
     ~QCoreApplication();
    static int argc();
    static char * * argv();
    static QStringList arguments();
    static void setOrganizationDomain(QString const&);
    static QString organizationDomain();
    static void setOrganizationName(QString const&);
    static QString organizationName();
    static void setApplicationName(QString const&);
    static QString applicationName();
    static int exec();
    static void processEvents(QFlags<QEventLoop::ProcessEventsFlag>);
    static void processEvents(QFlags<QEventLoop::ProcessEventsFlag>, int);
    static void exit(int);
    static void postEvent(QObject*, QEvent*);
    static void sendPostedEvents(QObject*, int);
    static void removePostedEvents(QObject*);
    static bool hasPendingEvents();
    bool notify(QObject*, QEvent*);
    static bool startingUp();
    static bool closingDown();
    static QString applicationDirPath();
    static QString applicationFilePath();
    static void setLibraryPaths(QStringList const&);
    static QStringList libraryPaths();
    static void addLibraryPath(QString const&);
    static void removeLibraryPath(QString const&);
    static void installTranslator(QTranslator*);
    static void removeTranslator(QTranslator*);
    static QString translate(char const*, char const*, char const*, QCoreApplication::Encoding);
    static void flush();
    static int enter_loop();
    static void exit_loop();
    static int loopLevel();
    static void watchUnixSignal(int, bool);
    bool(*)(void	* ,long int	* )
 setEventFilter(bool (*)(void*, long*));
    bool filterEvent(void*, long*);
    static void quit();
     QCoreApplication(QCoreApplicationPrivate&);
    static void setAttribute(Qt::ApplicationAttribute, bool);
    static bool testAttribute(Qt::ApplicationAttribute);
    static QString translate(char const*, char const*, char const*, QCoreApplication::Encoding, int);
protected:
    void aboutToQuit();
    void unixSignal(int);
    bool event(QEvent*);
    bool compressEvent(QEvent*, QObject*, QPostEventList*);
};

enum Encoding	
{
DefaultCodec = 0,	
UnicodeUTF8 = 1
}
;


extern struct QMetaObject _ZN16QCoreApplication16staticMetaObjectE ;
extern void _Z15qAddPostRoutinePFvvE(void(*)(void)
);
extern void _Z18qRemovePostRoutinePFvvE(void(*)(void)
);
extern QString _Z8qAppNamev(void);
extern QCoreApplication * _ZN16QCoreApplication4selfE ;
// *INDENT-ON*
#endif
