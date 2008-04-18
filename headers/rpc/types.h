#if (__LSB_VERSION__ >= 13 )
#ifndef _RPC_TYPES_H_
#define _RPC_TYPES_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 13
    typedef int bool_t;

    typedef int enum_t;

    typedef unsigned long int rpcvers_t;

#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 20
    typedef unsigned long int rpcprog_t;

    typedef unsigned long int rpcproc_t;

    typedef unsigned long int rpcprot_t;

#endif				// __LSB_VERSION__ >= 2.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
