#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_PCM_EXTPLUG_H_
#define _ALSA_PCM_EXTPLUG_H_

#include <alsa/pcm.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define SND_PCM_EXTPLUG_VERSION	((SND_PCM_EXTPLUG_VERSION_MAJOR<<16) | (SND_PCM_EXTPLUG_VERSION_MINOR<<8) | (SND_PCM_EXTPLUG_VERSION_TINY))
#define SND_PCM_EXTPLUG_VERSION_MINOR	0
#define SND_PCM_EXTPLUG_VERSION_MAJOR	1
#define SND_PCM_EXTPLUG_VERSION_TINY	1
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 32
    typedef struct snd_pcm_extplug_callback snd_pcm_extplug_callback_t;

    typedef struct snd_pcm_extplug snd_pcm_extplug_t;

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32

    struct snd_pcm_extplug_callback {
	snd_pcm_sframes_t(*transfer) (void);
	int (*close) (void);
	int (*hw_params) (void);
	int (*hw_free) (void);
	void (*dump) (void);
	int (*init) (void);
    };


    struct snd_pcm_extplug {
	unsigned int version;
	const char *name;
	const snd_pcm_extplug_callback_t *callback;
	void *private_data;
	snd_pcm_t *pcm;
	snd_pcm_stream_t stream;
	snd_pcm_format_t format;
	snd_pcm_subformat_t subformat;
	unsigned int channels;
	unsigned int rate;
	snd_pcm_format_t slave_format;
	snd_pcm_subformat_t slave_subformat;
	unsigned int slave_channels;
    };

#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
