#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_TIMER_H_
#define _ALSA_TIMER_H_

#include <sys/types.h>
#include <stddef.h>
#include <sys/poll.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SND_TIMER_OPEN_NONBLOCK	(1<<0)
#define SND_TIMER_OPEN_TREAD	(1<<1)
#define SND_TIMER_GLOBAL_SYSTEM	0
#define SND_TIMER_GLOBAL_RTC	1
#define SND_TIMER_GLOBAL_HPET	2


    typedef struct sndrv_timer_ginfo snd_timer_ginfo_t;

    typedef struct sndrv_timer_gparams snd_timer_gparams_t;

    typedef struct sndrv_timer_gstatus snd_timer_gstatus_t;

    typedef struct sndrv_timer_id snd_timer_id_t;

    typedef struct sndrv_timer_info snd_timer_info_t;

    typedef struct sndrv_timer_params snd_timer_params_t;

    typedef struct _snd_timer_query snd_timer_query_t;

    typedef struct sndrv_timer_status snd_timer_status_t;

    typedef struct _snd_timer snd_timer_t;

    typedef enum _snd_timer_type {
	SND_TIMER_TYPE_HW,
	SND_TIMER_TYPE_SHM = 1,
	SND_TIMER_TYPE_INET = 2
    } snd_timer_type_t;

#if __LSB_VERSION__ >= 41
    typedef enum _snd_timer_class {
	SND_TIMER_CLASS_NONE = -1,	/* invalid */
	SND_TIMER_CLASS_SLAVE = 0,	/* slave timer */
	SND_TIMER_CLASS_GLOBAL,	/* global timer */
	SND_TIMER_CLASS_CARD,	/* card timer */
	SND_TIMER_CLASS_PCM,	/* PCM timer */
	SND_TIMER_CLASS_LAST	/* last timer */
    } snd_timer_class_t;

#endif				/* __LSB_VERSION__ >= 4.1 */


/* Function prototypes */

    extern int snd_timer_close(snd_timer_t * handle);
    extern int snd_timer_continue(snd_timer_t * handle);
    extern void snd_timer_id_copy(snd_timer_id_t * dst,
				  const snd_timer_id_t * src);
    extern void snd_timer_id_free(snd_timer_id_t * obj);
    extern int snd_timer_id_get_card(snd_timer_id_t * id);
    extern int snd_timer_id_get_class(snd_timer_id_t * id);
    extern int snd_timer_id_get_device(snd_timer_id_t * id);
    extern int snd_timer_id_get_sclass(snd_timer_id_t * id);
    extern int snd_timer_id_get_subdevice(snd_timer_id_t * id);
    extern int snd_timer_id_malloc(snd_timer_id_t * *ptr);
    extern void snd_timer_id_set_card(snd_timer_id_t * id, int card);
    extern void snd_timer_id_set_class(snd_timer_id_t * id, int dev_class);
    extern void snd_timer_id_set_device(snd_timer_id_t * id, int device);
    extern void snd_timer_id_set_sclass(snd_timer_id_t * id,
					int dev_sclass);
    extern void snd_timer_id_set_subdevice(snd_timer_id_t * id,
					   int subdevice);
    extern size_t snd_timer_id_sizeof(void);
    extern int snd_timer_info(snd_timer_t * handle,
			      snd_timer_info_t * timer);
    extern void snd_timer_info_copy(snd_timer_info_t * dst,
				    const snd_timer_info_t * src);
    extern void snd_timer_info_free(snd_timer_info_t * obj);
    extern int snd_timer_info_get_card(snd_timer_info_t * info);
    extern const char *snd_timer_info_get_id(snd_timer_info_t * info);
    extern const char *snd_timer_info_get_name(snd_timer_info_t * info);
    extern long int snd_timer_info_get_resolution(snd_timer_info_t * info);
    extern int snd_timer_info_malloc(snd_timer_info_t * *ptr);
    extern size_t snd_timer_info_sizeof(void);
    extern int snd_timer_open(snd_timer_t * *handle, const char *name,
			      int mode);
    extern int snd_timer_params(snd_timer_t * handle,
				snd_timer_params_t * params);
    extern long int snd_timer_params_get_ticks(snd_timer_params_t *
					       params);
    extern int snd_timer_params_malloc(snd_timer_params_t * *ptr);
    extern int snd_timer_params_set_auto_start(snd_timer_params_t * params,
					       int auto_start);
    extern void snd_timer_params_set_ticks(snd_timer_params_t * params,
					   long int ticks);
    extern int snd_timer_poll_descriptors(snd_timer_t * handle,
					  struct pollfd *pfds,
					  unsigned int space);
    extern int snd_timer_poll_descriptors_count(snd_timer_t * handle);
    extern ssize_t snd_timer_read(snd_timer_t * handle, void *buffer,
				  size_t size);
    extern int snd_timer_start(snd_timer_t * handle);
    extern int snd_timer_status(snd_timer_t * handle,
				snd_timer_status_t * status);
    extern int snd_timer_stop(snd_timer_t * handle);
#if __LSB_VERSION__ >= 41
    extern void snd_timer_status_free(snd_timer_status_t * obj);
    extern long int snd_timer_status_get_lost(snd_timer_status_t * status);
    extern long int snd_timer_status_get_overrun(snd_timer_status_t *
						 status);
    extern long int snd_timer_status_get_queue(snd_timer_status_t *
					       status);
    extern long int snd_timer_status_get_resolution(snd_timer_status_t *
						    status);
    extern int snd_timer_status_malloc(snd_timer_status_t * *ptr);
#endif				/* __LSB_VERSION__ >= 4.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
