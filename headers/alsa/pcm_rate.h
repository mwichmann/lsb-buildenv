#ifndef _ALSA_PCM_RATE_H_
#define _ALSA_PCM_RATE_H_

#include <alsa/pcm.h>

#ifdef __cplusplus
extern "C" {
#endif



#define SND_PCM_RATE_PLUGIN_VERSION	0x010001


    typedef struct snd_pcm_rate_ops snd_pcm_rate_ops_t;


    struct snd_pcm_rate_ops {
	void (*close) (void);
	int (*init) (void);
	void (*free) (void);
	void (*reset) (void);
	int (*adjust_pitch) (void);
	void (*convert) (void);
	void (*convert_s16) (void);
	 snd_pcm_uframes_t(*input_frames) (void);
	 snd_pcm_uframes_t(*output_frames) (void);
    };


#ifdef __cplusplus
}
#endif
#endif
