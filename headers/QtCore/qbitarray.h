#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBITARRAY_H_
#define _QTCORE_QBITARRAY_H_

class QBitRef;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QBitArray
{
private:
public:
     QBitArray(int, bool);
    int count(bool) const;
    void resize(int);
    QBitArray & operator&=(QBitArray const&);
    QBitArray & operator|=(QBitArray const&);
    QBitArray & operator^=(QBitArray const&);
    QBitArray operator~() const;
    void fill(bool, int, int);
};

class QBitRef
{
private:
public:
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QBitArray _ZanRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QBitArray _ZeoRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QDataStream _ZlsR11QDataStreamRK9QBitArray(const QBitArray &);
extern QBitArray _ZorRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QDataStream _ZrsR11QDataStreamR9QBitArray(QBitArray &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
