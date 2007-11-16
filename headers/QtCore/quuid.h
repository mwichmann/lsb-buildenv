#ifndef _QTCORE_QUUID_H_
#define _QTCORE_QUUID_H_

#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>

#ifdef __cplusplus
extern "C" {
#endif





    struct QUuid;

    enum Variant {
	VarUnknown = -1,
	NCS = 0,
	DCE = 2,
	Microsoft = 6,
	Reserved = 7
    };

    enum Version {
	VerUnknown = -1,
	Time = 1,
	EmbeddedPOSIX = 2,
	Name = 3,
	Random = 4
    };


    extern struct QUuid _ZN5QUuidC2ERK7QString(void);
    extern struct QUuid _ZN5QUuidC1ERK7QString(void);
    extern struct QUuid _ZN5QUuidC2EPKc(void);
    extern struct QUuid _ZN5QUuidC1EPKc(void);
    extern QString _ZNK5QUuid8toStringEv(void);
    extern bool _ZNK5QUuid6isNullEv(void);
    extern bool _ZNK5QUuidltERKS_(void);
    extern bool _ZNK5QUuidgtERKS_(void);
    extern struct QUuid _ZN5QUuid10createUuidEv(void);
    extern enum N5QUuid7VariantE _ZNK5QUuid7variantEv(void);
    extern enum N5QUuid7VersionE _ZNK5QUuid7versionEv(void);
    extern QDataStream _ZlsR11QDataStreamRK5QUuid(void);
    extern QDataStream _ZrsR11QDataStreamR5QUuid(void);
#ifdef __cplusplus
}
#endif
#endif
