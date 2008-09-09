#if (__LSB_VERSION__ >= 40 )
#ifndef _NSS3_NSSILCKT_H_
#define _NSS3_NSSILCKT_H_


#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	nssILockArena,
	nssILockSession = 1,
	nssILockObject = 2,
	nssILockRefLock = 3,
	nssILockCert = 4,
	nssILockCertDB = 5,
	nssILockDBM = 6,
	nssILockCache = 7,
	nssILockSSL = 8,
	nssILockList = 9,
	nssILockSlot = 10,
	nssILockFreelist = 11,
	nssILockOID = 12,
	nssILockAttribute = 13,
	nssILockPK11cxt = 14,
	nssILockRWLock = 15,
	nssILockOther = 16,
	nssILockSelfServ = 17,
	nssILockKeyDB = 18,
	nssILockLast = 19
    } nssILockType;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
