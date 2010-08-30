#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_OUTPUT_H_
#define _ALSA_OUTPUT_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _snd_output snd_output_t;


/* Function prototypes */

    extern int snd_output_buffer_open(snd_output_t * *outputp);
    extern size_t snd_output_buffer_string(snd_output_t * output,
					   char * *buf);
    extern int snd_output_close(snd_output_t * output);
    extern int snd_output_putc(snd_output_t * output, int c);
    extern int snd_output_puts(snd_output_t * output, const char *str);
    extern int snd_output_stdio_attach(snd_output_t * *outputp, FILE * fp,
				       int _close);
    extern int snd_output_stdio_open(snd_output_t * *outputp,
				     const char *file, const char *mode);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
