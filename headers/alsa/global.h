#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_GLOBAL_H_
#define _ALSA_GLOBAL_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _snd_async_handler snd_async_handler_t;

    typedef void (*snd_async_callback_t) (snd_async_handler_t *);

    typedef struct timespec snd_htimestamp_t;

    typedef struct timeval snd_timestamp_t;


/* Function prototypes */

    extern const char *snd_asoundlib_version(void);
    extern int snd_async_add_handler(snd_async_handler_t * *handler,
				     int fd, snd_async_callback_t callback,
				     void *private_data);
    extern int snd_async_del_handler(snd_async_handler_t * handler);
    extern void *snd_async_handler_get_callback_private(snd_async_handler_t
							* handler);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
