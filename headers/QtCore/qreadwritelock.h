#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QREADWRITELOCK_H_
#define _QTCORE_QREADWRITELOCK_H_

class QReadLocker;
// *INDENT-OFF*

typedef enum QtValidLicenseForCoreModule	QtCoreModule	
;

class QReadWriteLock
{
private:
public:
     QReadWriteLock();
     ~QReadWriteLock();
    void lockForRead();
    bool tryLockForRead();
    void lockForWrite();
    bool tryLockForWrite();
    void unlock();
};

class QReadLocker
{
private:
public:
};

class QWriteLocker
{
private:
public:
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
