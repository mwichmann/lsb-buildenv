#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMETAOBJECT_H_
#define _QTCORE_QMETAOBJECT_H_

class QMetaProperty;
// *INDENT-OFF*

class QMetaMethod
{
private:
public:
    const char * signature() const;
    const char * typeName() const;
    QList<QByteArray> parameterTypes() const;
    QList<QByteArray> parameterNames() const;
    const char * tag() const;
    enum _ZN11QMetaMethod6AccessE access() const;
    enum _ZN11QMetaMethod10MethodTypeE methodType() const;
    int attributes() const;
};

enum Access	
{
Private = 0,	
Protected = 1,	
Public = 2
}
;

enum MethodType	
{
Method = 0,	
Signal = 1,	
Slot = 2
}
;

enum Attributes	
{
Compatibility = 1,	
Cloned = 2,	
Scriptable = 4
}
;

class QMetaEnum
{
private:
public:
    const char * name() const;
    bool isFlag() const;
    int keyCount() const;
    const char * key(int) const;
    int value(int) const;
    const char * scope() const;
    int keyToValue(char const*) const;
    const char * valueToKey(int) const;
    int keysToValue(char const*) const;
    QByteArray valueToKeys(int) const;
};

class QMetaProperty
{
private:
public:
     QMetaProperty();
    const char * name() const;
    const char * typeName() const;
    enum _ZN8QVariant4TypeE type() const;
    bool isReadable() const;
    bool isWritable() const;
    bool isResettable() const;
    bool isDesignable(QObject const*) const;
    bool isScriptable(QObject const*) const;
    bool isStored(QObject const*) const;
    bool isEditable(QObject const*) const;
    bool isUser(QObject const*) const;
    bool isFlagType() const;
    bool isEnumType() const;
    QMetaEnum enumerator() const;
    QVariant read(QObject const*) const;
    bool write(QObject*, QVariant const&) const;
    bool reset(QObject*) const;
    bool hasStdCppSet() const;
    int userType() const;
};

class QMetaClassInfo
{
private:
public:
    const char * name() const;
    const char * value() const;
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
