#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTHREADSTORAGE_H_
#define _QTCORE_QTHREADSTORAGE_H_

class QThreadStorageData;
// *INDENT-OFF*

class QThreadStorageData
{
private:
public:
     QThreadStorageData(void (*)(void*));
     ~QThreadStorageData();
    void * * get() const;
    void * * set(void*);
    static void finish(void**);
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
