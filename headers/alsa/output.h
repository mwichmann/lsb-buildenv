#ifndef _ALSA_OUTPUT_H_
#define _ALSA_OUTPUT_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef struct _snd_output snd_output_t;





    extern int snd_output_close(snd_output_t *);
    extern int snd_output_stdio_attach(snd_output_t * *, FILE *, int);
#ifdef __cplusplus
}
#endif
#endif
