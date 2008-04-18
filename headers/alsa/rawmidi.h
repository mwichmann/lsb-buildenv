#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_RAWMIDI_H_
#define _ALSA_RAWMIDI_H_

#include <sys/types.h>
#include <stddef.h>
#include <sys/poll.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define SND_RAWMIDI_APPEND	0x0001
#define SND_RAWMIDI_NONBLOCK	0x0002
#define SND_RAWMIDI_SYNC	0x0004
#endif				// __LSB_VERSION__ >= 3.2



#if __LSB_VERSION__ >= 32
    typedef struct sndrv_rawmidi_info snd_rawmidi_info_t;

    typedef struct sndrv_rawmidi_params snd_rawmidi_params_t;

    typedef struct sndrv_rawmidi_status snd_rawmidi_status_t;

    typedef enum _snd_rawmidi_stream {
	SND_RAWMIDI_STREAM_OUTPUT,
	SND_RAWMIDI_STREAM_INPUT = 1,
	SND_RAWMIDI_STREAM_LAST = 1
    } snd_rawmidi_stream_t;

    typedef struct _snd_rawmidi snd_rawmidi_t;

    typedef enum _snd_rawmidi_type {
	SND_RAWMIDI_TYPE_HW,
	SND_RAWMIDI_TYPE_SHM = 1,
	SND_RAWMIDI_TYPE_INET = 2,
	SND_RAWMIDI_TYPE_VIRTUAL = 3
    } snd_rawmidi_type_t;

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern int snd_rawmidi_close(snd_rawmidi_t *);
    extern int snd_rawmidi_drain(snd_rawmidi_t *);
    extern int snd_rawmidi_drop(snd_rawmidi_t *);
    extern void snd_rawmidi_info_free(snd_rawmidi_info_t *);
    extern const char *snd_rawmidi_info_get_id(const snd_rawmidi_info_t *);
    extern const char *snd_rawmidi_info_get_name(const snd_rawmidi_info_t
						 *);
    extern unsigned int snd_rawmidi_info_get_subdevices_count(const
							      snd_rawmidi_info_t
							      *);
    extern int snd_rawmidi_info_malloc(snd_rawmidi_info_t * *);
    extern void snd_rawmidi_info_set_device(snd_rawmidi_info_t *,
					    unsigned int);
    extern void snd_rawmidi_info_set_stream(snd_rawmidi_info_t *,
					    snd_rawmidi_stream_t);
    extern void snd_rawmidi_info_set_subdevice(snd_rawmidi_info_t *,
					       unsigned int);
    extern int snd_rawmidi_nonblock(snd_rawmidi_t *, int);
    extern int snd_rawmidi_open(snd_rawmidi_t * *, snd_rawmidi_t * *,
				const char *, int);
    extern int snd_rawmidi_poll_descriptors(snd_rawmidi_t *,
					    struct pollfd *, unsigned int);
    extern int snd_rawmidi_poll_descriptors_count(snd_rawmidi_t *);
    extern int snd_rawmidi_poll_descriptors_revents(snd_rawmidi_t *,
						    struct pollfd *,
						    unsigned int,
						    short unsigned int *);
    extern ssize_t snd_rawmidi_read(snd_rawmidi_t *, void *, size_t);
    extern ssize_t snd_rawmidi_write(snd_rawmidi_t *, const void *,
				     size_t);
#endif				// __LSB_VERSION__ >= 3.2

#if __LSB_VERSION__ >= 40
    extern const char *snd_rawmidi_info_get_subdevice_name(const
							   snd_rawmidi_info_t
							   *);
    extern size_t snd_rawmidi_info_sizeof(void);
#endif				// __LSB_VERSION__ >= 4.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
