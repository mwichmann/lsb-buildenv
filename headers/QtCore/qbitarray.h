#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBITARRAY_H_
#define _QTCORE_QBITARRAY_H_

class QBitRef;
// *INDENT-OFF*

class QBitArray;

class QBitRef;


/* Function prototypes */

extern QBitArray operator&(QBitArray const&, QBitArray const&)(const QBitArray &, const QBitArray &);
extern QBitArray operator^(QBitArray const&, QBitArray const&)(const QBitArray &, const QBitArray &);
extern QDataStream operator<<(QDataStream&, QBitArray const&)(const QBitArray &);
extern QBitArray operator|(QBitArray const&, QBitArray const&)(const QBitArray &, const QBitArray &);
extern QDataStream operator>>(QDataStream&, QBitArray&)(QBitArray &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
