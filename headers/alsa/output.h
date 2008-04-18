#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_OUTPUT_H_
#define _ALSA_OUTPUT_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef struct _snd_output snd_output_t;

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern int snd_output_buffer_open(snd_output_t * *);
    extern size_t snd_output_buffer_string(snd_output_t *, char **);
    extern int snd_output_close(snd_output_t *);
    extern int snd_output_putc(snd_output_t *, int);
    extern int snd_output_puts(snd_output_t *, const char *);
    extern int snd_output_stdio_attach(snd_output_t * *, FILE *, int);
    extern int snd_output_stdio_open(snd_output_t * *, const char *,
				     const char *);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
