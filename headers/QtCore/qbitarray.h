#ifndef _QTCORE_QBITARRAY_H_
#define _QTCORE_QBITARRAY_H_

class QBitRef;
// *INDENT-OFF*

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


extern QBitArray _ZanRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QBitArray _ZorRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QBitArray _ZeoRK9QBitArrayS1_(const QBitArray &, const QBitArray &);
extern QDataStream _ZlsR11QDataStreamRK9QBitArray(QDataStream &, const QBitArray &);
extern QDataStream _ZrsR11QDataStreamR9QBitArray(QDataStream &, QBitArray &);
// *INDENT-ON*
#endif
