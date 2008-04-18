#if (__LSB_VERSION__ >= 10 )
#ifndef _MONETARY_H_
#define _MONETARY_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern ssize_t strfmon(char *, size_t, const char *, ...);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
