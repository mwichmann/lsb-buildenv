#ifndef _ALSA_MIXER_H_
#define _ALSA_MIXER_H_

#include <stddef.h>
#include <alsa/pcm.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef struct _snd_mixer snd_mixer_t;

    typedef struct _snd_mixer_elem snd_mixer_elem_t;

    typedef enum _snd_mixer_elem_type {
	SND_MIXER_ELEM_SIMPLE,
	SND_MIXER_ELEM_LAST
    } snd_mixer_elem_type_t;

    typedef struct _snd_mixer_class snd_mixer_class_t;

    typedef int (*snd_mixer_compare_t) (void);

    typedef int (*snd_mixer_elem_callback_t) (void);

    typedef int (*snd_mixer_callback_t) (void);

    typedef int (*snd_mixer_event_t) (void);

    typedef enum _snd_mixer_selem_channel_id {
	SND_MIXER_SCHN_UNKNOWN = -1,
	SND_MIXER_SCHN_FRONT_LEFT,
	SND_MIXER_SCHN_FRONT_RIGHT = 1,
	SND_MIXER_SCHN_REAR_LEFT = 2,
	SND_MIXER_SCHN_REAR_RIGHT = 3,
	SND_MIXER_SCHN_FRONT_CENTER = 4,
	SND_MIXER_SCHN_WOOFER = 5,
	SND_MIXER_SCHN_SIDE_LEFT = 6,
	SND_MIXER_SCHN_SIDE_RIGHT = 7,
	SND_MIXER_SCHN_REAR_CENTER = 8,
	SND_MIXER_SCHN_LAST = 31,
	SND_MIXER_SCHN_MONO
    } snd_mixer_selem_channel_id_t;

    typedef struct _snd_mixer_selem_id snd_mixer_selem_id_t;

    enum snd_mixer_selem_regopt_abstract {
	SND_MIXER_SABSTRACT_NONE,
	SND_MIXER_SABSTRACT_BASIC = 1
    };

    struct snd_mixer_selem_regopt {
	int ver;
	enum snd_mixer_selem_regopt_abstract abstract;
	const char *device;
	snd_pcm_t *playback_pcm;
	snd_pcm_t *capture_pcm;
    };














    extern int snd_mixer_attach(snd_mixer_t *, const char *);
    extern int snd_mixer_close(snd_mixer_t *);
    extern int snd_mixer_detach(snd_mixer_t *, const char *);
    extern snd_mixer_elem_type_t snd_mixer_elem_get_type(const
							 snd_mixer_elem_t
							 *);
    extern snd_mixer_elem_t *snd_mixer_elem_next(snd_mixer_elem_t *);
    extern snd_mixer_elem_t *snd_mixer_find_selem(snd_mixer_t *,
						  const
						  snd_mixer_selem_id_t *);
    extern snd_mixer_elem_t *snd_mixer_first_elem(snd_mixer_t *);
    extern int snd_mixer_load(snd_mixer_t *);
    extern int snd_mixer_open(snd_mixer_t * *, int);
    extern const char
	*snd_mixer_selem_channel_name(snd_mixer_selem_channel_id_t);
    extern int snd_mixer_selem_get_capture_switch(snd_mixer_elem_t *,
						  snd_mixer_selem_channel_id_t,
						  int *);
    extern int snd_mixer_selem_get_capture_volume(snd_mixer_elem_t *,
						  snd_mixer_selem_channel_id_t,
						  long int *);
    extern int snd_mixer_selem_get_capture_volume_range(snd_mixer_elem_t *,
							long int *,
							long int *);
    extern void snd_mixer_selem_get_id(snd_mixer_elem_t *,
				       snd_mixer_selem_id_t *);
    extern const char *snd_mixer_selem_get_name(snd_mixer_elem_t *);
    extern int snd_mixer_selem_get_playback_switch(snd_mixer_elem_t *,
						   snd_mixer_selem_channel_id_t,
						   int *);
    extern int snd_mixer_selem_get_playback_volume(snd_mixer_elem_t *,
						   snd_mixer_selem_channel_id_t,
						   long int *);
    extern int snd_mixer_selem_get_playback_volume_range(snd_mixer_elem_t
							 *, long int *,
							 long int *);
    extern int snd_mixer_selem_has_capture_channel(snd_mixer_elem_t *,
						   snd_mixer_selem_channel_id_t);
    extern int snd_mixer_selem_has_capture_switch(snd_mixer_elem_t *);
    extern int snd_mixer_selem_has_capture_volume(snd_mixer_elem_t *);
    extern int snd_mixer_selem_has_common_volume(snd_mixer_elem_t *);
    extern int snd_mixer_selem_has_playback_channel(snd_mixer_elem_t *,
						    snd_mixer_selem_channel_id_t);
    extern int snd_mixer_selem_has_playback_switch(snd_mixer_elem_t *);
    extern int snd_mixer_selem_has_playback_switch_joined(snd_mixer_elem_t
							  *);
    extern int snd_mixer_selem_has_playback_volume(snd_mixer_elem_t *);
    extern int snd_mixer_selem_has_playback_volume_joined(snd_mixer_elem_t
							  *);
    extern unsigned int snd_mixer_selem_id_get_index(const
						     snd_mixer_selem_id_t
						     *);
    extern const char *snd_mixer_selem_id_get_name(const
						   snd_mixer_selem_id_t *);
    extern void snd_mixer_selem_id_set_index(snd_mixer_selem_id_t *,
					     unsigned int);
    extern void snd_mixer_selem_id_set_name(snd_mixer_selem_id_t *,
					    const char *);
    extern size_t snd_mixer_selem_id_sizeof(void);
    extern int snd_mixer_selem_is_active(snd_mixer_elem_t *);
    extern int snd_mixer_selem_is_capture_mono(snd_mixer_elem_t *);
    extern int snd_mixer_selem_is_playback_mono(snd_mixer_elem_t *);
    extern int snd_mixer_selem_register(snd_mixer_t *,
					struct snd_mixer_selem_regopt *,
					snd_mixer_class_t * *);
    extern int snd_mixer_selem_set_capture_switch_all(snd_mixer_elem_t *,
						      int);
    extern int snd_mixer_selem_set_capture_volume(snd_mixer_elem_t *,
						  snd_mixer_selem_channel_id_t,
						  long int);
    extern int snd_mixer_selem_set_capture_volume_all(snd_mixer_elem_t *,
						      long int);
    extern int snd_mixer_selem_set_playback_switch(snd_mixer_elem_t *,
						   snd_mixer_selem_channel_id_t,
						   int);
    extern int snd_mixer_selem_set_playback_switch_all(snd_mixer_elem_t *,
						       int);
    extern int snd_mixer_selem_set_playback_volume(snd_mixer_elem_t *,
						   snd_mixer_selem_channel_id_t,
						   long int);
    extern int snd_mixer_selem_set_playback_volume_all(snd_mixer_elem_t *,
						       long int);
#ifdef __cplusplus
}
#endif
#endif
