#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_INPUT_H_
#define _ALSA_INPUT_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef struct _snd_input snd_input_t;

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern int snd_input_buffer_open(snd_input_t * *, const char *,
				     ssize_t);
    extern int snd_input_close(snd_input_t *);
    extern int snd_input_stdio_attach(snd_input_t * *, FILE *, int);
    extern int snd_input_stdio_open(snd_input_t * *, const char *,
				    const char *);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
