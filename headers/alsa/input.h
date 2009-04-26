#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_INPUT_H_
#define _ALSA_INPUT_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _snd_input snd_input_t;


/* Function prototypes */

    extern int snd_input_buffer_open(snd_input_t * *inputp,
				     const char *buffer, ssize_t size);
    extern int snd_input_close(snd_input_t * input);
    extern int snd_input_stdio_attach(snd_input_t * *inputp, FILE * fp,
				      int _close);
    extern int snd_input_stdio_open(snd_input_t * *inputp,
				    const char *file, const char *mode);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
