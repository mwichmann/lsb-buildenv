#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSETTINGS_H_
#define _QTCORE_QSETTINGS_H_

class QSettings;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef QMap<QString, QVariant> SettingsMap	
;

typedef bool	ReadFunc	
;

typedef bool	WriteFunc	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QSettings : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSettings(QString const&, QString const&, QObject*);
     QSettings(QSettings::Scope, QString const&, QString const&, QObject*);
     QSettings(QSettings::Format, QSettings::Scope, QString const&, QString const&, QObject*);
     QSettings(QString const&, QSettings::Format, QObject*);
     QSettings(QObject*);
     ~QSettings();
    void clear();
    void sync();
    enum _ZN9QSettings6StatusE status() const;
    void beginGroup(QString const&);
    void endGroup();
    QString group() const;
    int beginReadArray(QString const&);
    void beginWriteArray(QString const&, int);
    void endArray();
    void setArrayIndex(int);
    QStringList allKeys() const;
    QStringList childKeys() const;
    QStringList childGroups() const;
    bool isWritable() const;
    void setValue(QString const&, QVariant const&);
    QVariant value(QString const&, QVariant const&) const;
    void remove(QString const&);
    bool contains(QString const&) const;
    void setFallbacksEnabled(bool);
    bool fallbacksEnabled() const;
    QString fileName() const;
    static void setSystemIniPath(QString const&);
    static void setUserIniPath(QString const&);
    static void setPath(QSettings::Format, QSettings::Scope, QString const&);
    static enum _ZN9QSettings6FormatE registerFormat(QString const&, bool (*)(QIODevice&, QMap<QString, QVariant>&), bool (*)(QIODevice&, QMap<QString, QVariant> const&), Qt::CaseSensitivity);
protected:
    bool event(QEvent*);
};

enum Status	
{
NoError = 0,	
AccessError = 1,	
FormatError = 2
}
;

enum Format	
{
NativeFormat = 0,	
IniFormat = 1,	
InvalidFormat = 16,	
CustomFormat1 = 17,	
CustomFormat2 = 18,	
CustomFormat3 = 19,	
CustomFormat4 = 20,	
CustomFormat5 = 21,	
CustomFormat6 = 22,	
CustomFormat7 = 23,	
CustomFormat8 = 24,	
CustomFormat9 = 25,	
CustomFormat10 = 26,	
CustomFormat11 = 27,	
CustomFormat12 = 28,	
CustomFormat13 = 29,	
CustomFormat14 = 30,	
CustomFormat15 = 31,	
CustomFormat16 = 32
}
;

enum Scope	
{
UserScope = 0,	
User = 0,	
SystemScope = 1,	
Global = 1
}
;

enum System	
{
Unix = 0,	
Windows = 1,	
Mac = 2
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QSettings16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
