#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QREADWRITELOCK_H_
#define _QTCORE_QREADWRITELOCK_H_

class QReadLocker;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForCoreModule	QtCoreModule	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
