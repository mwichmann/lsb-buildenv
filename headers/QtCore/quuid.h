#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QUUID_H_
#define _QTCORE_QUUID_H_

#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>

#ifdef __cplusplus
extern "C" {
#endif


    struct QUuid;

    enum QUuid::Variant {
	VarUnknown = -1,
	NCS = 0,
	DCE = 2,
	Microsoft = 6,
	Reserved = 7
    };

    enum QUuid::Version {
	VerUnknown = -1,
	Time = 1,
	EmbeddedPOSIX = 2,
	Name = 3,
	Random = 4
    };


/* Function prototypes */

    extern QDataStream operator<<(QDataStream &,
				  QUuid const &) (const struct QUuid &);
    extern QDataStream operator>>(QDataStream &, QUuid &) (struct QUuid &);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
