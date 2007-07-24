#ifndef _QTCORE_QMETAOBJECT_H_
#define _QTCORE_QMETAOBJECT_H_

#include <QtCore/qlist.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qvariant.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N11QMetaMethod6AccessE {
	Private,
	Protected,
	Public
    };

    enum N11QMetaMethod10MethodTypeE {
	Method,
	Signal,
	Slot
    };

    enum N11QMetaMethod10AttributesE {
	Compatibility,
	Cloned,
	Scriptable
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern char _ZNK11QMetaMethod9signatureEv(void);
    extern char _ZNK11QMetaMethod8typeNameEv(void);
    extern Class _ZNK11QMetaMethod14parameterTypesEv(void);
    extern Class _ZNK11QMetaMethod14parameterNamesEv(void);
    extern char _ZNK11QMetaMethod3tagEv(void);
    extern enum N11QMetaMethod6AccessE _ZNK11QMetaMethod6accessEv(void);
    extern enum N11QMetaMethod10MethodTypeE
	_ZNK11QMetaMethod10methodTypeEv(void);
    extern int _ZNK11QMetaMethod10attributesEv(void);
    extern char _ZNK9QMetaEnum4nameEv(void);
    extern bool _ZNK9QMetaEnum6isFlagEv(void);
    extern int _ZNK9QMetaEnum8keyCountEv(void);
    extern char _ZNK9QMetaEnum3keyEi(void);
    extern int _ZNK9QMetaEnum5valueEi(void);
    extern char _ZNK9QMetaEnum5scopeEv(void);
    extern int _ZNK9QMetaEnum10keyToValueEPKc(void);
    extern char _ZNK9QMetaEnum10valueToKeyEi(void);
    extern int _ZNK9QMetaEnum11keysToValueEPKc(void);
    extern Class _ZNK9QMetaEnum11valueToKeysEi(void);
    extern Class _ZN13QMetaPropertyC2Ev(void);
    extern Class _ZN13QMetaPropertyC1Ev(void);
    extern char _ZNK13QMetaProperty4nameEv(void);
    extern char _ZNK13QMetaProperty8typeNameEv(void);
    extern enum N8QVariant4TypeE _ZNK13QMetaProperty4typeEv(void);
    extern bool _ZNK13QMetaProperty10isReadableEv(void);
    extern bool _ZNK13QMetaProperty10isWritableEv(void);
    extern bool _ZNK13QMetaProperty12isResettableEv(void);
    extern bool _ZNK13QMetaProperty12isDesignableEPK7QObject(void);
    extern bool _ZNK13QMetaProperty12isScriptableEPK7QObject(void);
    extern bool _ZNK13QMetaProperty8isStoredEPK7QObject(void);
    extern bool _ZNK13QMetaProperty10isEditableEPK7QObject(void);
    extern bool _ZNK13QMetaProperty6isUserEPK7QObject(void);
    extern bool _ZNK13QMetaProperty10isFlagTypeEv(void);
    extern bool _ZNK13QMetaProperty10isEnumTypeEv(void);
    extern Class _ZNK13QMetaProperty10enumeratorEv(void);
    extern Class _ZNK13QMetaProperty4readEPK7QObject(void);
    extern bool _ZNK13QMetaProperty5writeEP7QObjectRK8QVariant(void);
    extern bool _ZNK13QMetaProperty5resetEP7QObject(void);
    extern bool _ZNK13QMetaProperty12hasStdCppSetEv(void);
    extern char _ZNK14QMetaClassInfo4nameEv(void);
    extern char _ZNK14QMetaClassInfo5valueEv(void);
#ifdef __cplusplus
}
#endif
#endif
