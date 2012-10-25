#if (__LSB_VERSION__ >= 50 )
#ifndef _FFITARGET_H_
#define _FFITARGET_H_


#ifdef __cplusplus
extern "C" {
#endif


#define FFI_TRAMPOLINE_SIZE	10
#if defined __x86_64__
#define FFI_TRAMPOLINE_SIZE	24
#endif


    typedef unsigned long int ffi_arg;

    typedef long int ffi_sarg;

    typedef enum ffi_abi {
	FFI_FIRST_ABI,
	FFI_SYSV,
	FFI_UNIX64,
	FFI_LAST_ABI,
	FFI_DEFAULT_ABI
    } ffi_abi;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
