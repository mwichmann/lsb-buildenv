#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QUUID_H_
#define _QTCORE_QUUID_H_

#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
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

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern QDataStream _ZlsR11QDataStreamRK5QUuid(const struct QUuid &);
    extern QDataStream _ZrsR11QDataStreamR5QUuid(struct QUuid &);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
