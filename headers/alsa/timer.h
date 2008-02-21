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





























    extern int snd_timer_close(snd_timer_t *);
    extern int snd_timer_continue(snd_timer_t *);
    extern void snd_timer_id_copy(snd_timer_id_t *,
				  const snd_timer_id_t *);
    extern void snd_timer_id_free(snd_timer_id_t *);
    extern int snd_timer_id_get_card(snd_timer_id_t *);
    extern int snd_timer_id_get_class(snd_timer_id_t *);
    extern int snd_timer_id_get_device(snd_timer_id_t *);
    extern int snd_timer_id_get_sclass(snd_timer_id_t *);
    extern int snd_timer_id_get_subdevice(snd_timer_id_t *);
    extern int snd_timer_id_malloc(snd_timer_id_t * *);
    extern void snd_timer_id_set_card(snd_timer_id_t *, int);
    extern void snd_timer_id_set_class(snd_timer_id_t *, int);
    extern void snd_timer_id_set_device(snd_timer_id_t *, int);
    extern void snd_timer_id_set_sclass(snd_timer_id_t *, int);
    extern void snd_timer_id_set_subdevice(snd_timer_id_t *, int);
    extern size_t snd_timer_id_sizeof(void);
    extern int snd_timer_info(snd_timer_t *, snd_timer_info_t *);
    extern void snd_timer_info_copy(snd_timer_info_t *,
				    const snd_timer_info_t *);
    extern void snd_timer_info_free(snd_timer_info_t *);
    extern int snd_timer_info_get_card(snd_timer_info_t *);
    extern const char *snd_timer_info_get_id(snd_timer_info_t *);
    extern const char *snd_timer_info_get_name(snd_timer_info_t *);
    extern long int snd_timer_info_get_resolution(snd_timer_info_t *);
    extern int snd_timer_info_malloc(snd_timer_info_t * *);
    extern size_t snd_timer_info_sizeof(void);
    extern int snd_timer_open(snd_timer_t * *, const char *, int);
    extern int snd_timer_params(snd_timer_t *, snd_timer_params_t *);
    extern long int snd_timer_params_get_ticks(snd_timer_params_t *);
    extern int snd_timer_params_malloc(snd_timer_params_t * *);
    extern int snd_timer_params_set_auto_start(snd_timer_params_t *, int);
    extern void snd_timer_params_set_ticks(snd_timer_params_t *, long int);
    extern int snd_timer_poll_descriptors(snd_timer_t *, struct pollfd *,
					  unsigned int);
    extern int snd_timer_poll_descriptors_count(snd_timer_t *);
    extern ssize_t snd_timer_read(snd_timer_t *, void *, size_t);
    extern int snd_timer_start(snd_timer_t *);
    extern int snd_timer_status(snd_timer_t *, snd_timer_status_t *);
    extern int snd_timer_stop(snd_timer_t *);
#ifdef __cplusplus
}
#endif
#endif