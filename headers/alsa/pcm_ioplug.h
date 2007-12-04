#ifndef _ALSA_PCM_IOPLUG_H_
#define _ALSA_PCM_IOPLUG_H_

#include <alsa/pcm.h>

#ifdef __cplusplus
extern "C" {
#endif



#define SND_PCM_IOPLUG_VERSION	((SND_PCM_IOPLUG_VERSION_MAJOR<<16) | (SND_PCM_IOPLUG_VERSION_MINOR<<8) | (SND_PCM_IOPLUG_VERSION_TINY))
#define SND_PCM_IOPLUG_FLAG_LISTED	(1<<0)
#define SND_PCM_IOPLUG_VERSION_MINOR	0
#if defined __i386__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __ia64__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __powerpc64__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __s390__ && !defined __s390x__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __x86_64__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#if defined __s390x__
#define SND_PCM_IOPLUG_VERSION_TINY	0
#endif
#define SND_PCM_IOPLUG_VERSION_MAJOR	1


    typedef struct snd_pcm_ioplug_callback snd_pcm_ioplug_callback_t;

    typedef struct snd_pcm_ioplug snd_pcm_ioplug_t;


    struct snd_pcm_ioplug_callback {
	int (*start) (void);
	int (*stop) (void);
	 snd_pcm_sframes_t(*pointer) (void);
	 snd_pcm_sframes_t(*transfer) (void);
	int (*close) (void);
	int (*hw_params) (void);
	int (*hw_free) (void);
	int (*sw_params) (void);
	int (*prepare) (void);
	int (*drain) (void);
	int (*pause) (void);
	int (*resume) (void);
	int (*poll_descriptors_count) (void);
	int (*poll_descriptors) (void);
	int (*poll_revents) (void);
	void (*dump) (void);
	int (*delay) (void);
    };


    struct snd_pcm_ioplug {
	unsigned int version;
	const char *name;
	unsigned int flags;
	int poll_fd;
	unsigned int poll_events;
	unsigned int mmap_rw;
	const snd_pcm_ioplug_callback_t *callback;
	void *private_data;
	snd_pcm_t *pcm;
	snd_pcm_stream_t stream;
	snd_pcm_state_t state;
	volatile snd_pcm_uframes_t appl_ptr;
	volatile snd_pcm_uframes_t hw_ptr;
	int nonblock;
	snd_pcm_access_t access;
	snd_pcm_format_t format;
	unsigned int channels;
	unsigned int rate;
	snd_pcm_uframes_t period_size;
	snd_pcm_uframes_t buffer_size;
    };


#ifdef __cplusplus
}
#endif
#endif
