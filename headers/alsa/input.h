#ifndef _ALSA_INPUT_H_
#define _ALSA_INPUT_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef struct _snd_input snd_input_t;





    extern int snd_input_buffer_open(snd_input_t * *, const char *,
				     ssize_t);
    extern int snd_input_close(snd_input_t *);
    extern int snd_input_stdio_attach(snd_input_t * *, FILE *, int);
    extern int snd_input_stdio_open(snd_input_t * *, const char *,
				    const char *);
#ifdef __cplusplus
}
#endif
#endif
