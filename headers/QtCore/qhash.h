#ifndef _QTCORE_QHASH_H_
#define _QTCORE_QHASH_H_


#ifdef __cplusplus
extern "C" {
#endif




    struct QHashData;

    struct N9QHashData4NodeE;

    struct QHashDummyValue;


    extern uint _Z5qHashRK10QByteArray(void);
    extern uint _Z5qHashRK7QString(void);
    extern void _ZN9QHashData12allocateNodeEv(void);
    extern void _ZN9QHashData8freeNodeEPv(void);
    extern struct QHashData
	_ZN9QHashData13detach_helperEPFvPNS_4NodeEPvEi(void);
    extern void _ZN9QHashData6rehashEi(void);
    extern void _ZN9QHashData14destroyAndFreeEv(void);
    extern struct N9QHashData4NodeE
	_ZN9QHashData8nextNodeEPNS_4NodeE(void);
    extern struct N9QHashData4NodeE
	_ZN9QHashData12previousNodeEPNS_4NodeE(void);
    extern struct QHashData _ZN9QHashData11shared_nullE;
#ifdef __cplusplus
}
#endif
#endif
