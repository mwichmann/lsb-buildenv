#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QHASH_H_
#define _QTCORE_QHASH_H_

#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>

#ifdef __cplusplus
extern "C" {
#endif


    struct QHashData;

    struct QHashData::Node;

    struct QHashDummyValue;


/* Function prototypes */

    extern uint _Z5qHashRK10QByteArray(QByteArray & &);
    extern uint _Z5qHashRK7QString(QString & &);
    extern struct QHashData _ZN9QHashData11shared_nullE;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
