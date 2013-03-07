#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_RAWMIDI_H_
#define _ALSA_RAWMIDI_H_

#include <stddef.h>
#include <sys/poll.h>
#include <stdint.h>
#include <lsb/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SND_RAWMIDI_APPEND	0x0001
#define SND_RAWMIDI_NONBLOCK	0x0002
#define SND_RAWMIDI_SYNC	0x0004


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


/* Function prototypes */

    extern int snd_rawmidi_close(snd_rawmidi_t * rmidi);
    extern int snd_rawmidi_drain(snd_rawmidi_t * rmidi);
    extern int snd_rawmidi_drop(snd_rawmidi_t * rmidi);
    extern void snd_rawmidi_info_free(snd_rawmidi_info_t * obj);
    extern const char *snd_rawmidi_info_get_id(const snd_rawmidi_info_t *
					       obj);
    extern const char *snd_rawmidi_info_get_name(const snd_rawmidi_info_t *
						 obj);
    extern unsigned int snd_rawmidi_info_get_subdevices_count(const
							      snd_rawmidi_info_t
							      * obj);
    extern int snd_rawmidi_info_malloc(snd_rawmidi_info_t * *ptr);
    extern void snd_rawmidi_info_set_device(snd_rawmidi_info_t * obj,
					    unsigned int val);
    extern void snd_rawmidi_info_set_stream(snd_rawmidi_info_t * obj,
					    snd_rawmidi_stream_t val);
    extern void snd_rawmidi_info_set_subdevice(snd_rawmidi_info_t * obj,
					       unsigned int val);
    extern int snd_rawmidi_nonblock(snd_rawmidi_t * rmidi, int nonblock);
    extern int snd_rawmidi_open(snd_rawmidi_t * *in_rmidi,
				snd_rawmidi_t * *out_rmidi,
				const char *name, int mode);
    extern int snd_rawmidi_poll_descriptors(snd_rawmidi_t * rmidi,
					    struct pollfd *pfds,
					    unsigned int space);
    extern int snd_rawmidi_poll_descriptors_count(snd_rawmidi_t * rmidi);
    extern int snd_rawmidi_poll_descriptors_revents(snd_rawmidi_t *
						    rawmidi,
						    struct pollfd *pfds,
						    unsigned int nfds,
						    short unsigned int
						    *revent);
    extern ssize_t snd_rawmidi_read(snd_rawmidi_t * rmidi, void *buffer,
				    size_t size);
    extern ssize_t snd_rawmidi_write(snd_rawmidi_t * rmidi,
				     const void *buffer, size_t size);
#if __LSB_VERSION__ >= 40
    extern const char *snd_rawmidi_info_get_subdevice_name(const
							   snd_rawmidi_info_t
							   * obj);
    extern size_t snd_rawmidi_info_sizeof(void);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    extern int snd_rawmidi_info(snd_rawmidi_t * rmidi,
				snd_rawmidi_info_t * info);
    extern void snd_rawmidi_info_copy(snd_rawmidi_info_t * dst,
				      const snd_rawmidi_info_t * src);
    extern int snd_rawmidi_info_get_card(const snd_rawmidi_info_t * obj);
    extern unsigned int snd_rawmidi_info_get_device(const
						    snd_rawmidi_info_t *
						    obj);
    extern unsigned int snd_rawmidi_info_get_flags(const snd_rawmidi_info_t
						   * obj);
    extern snd_rawmidi_stream_t snd_rawmidi_info_get_stream(const
							    snd_rawmidi_info_t
							    * obj);
    extern unsigned int snd_rawmidi_info_get_subdevice(const
						       snd_rawmidi_info_t *
						       obj);
    extern unsigned int snd_rawmidi_info_get_subdevices_avail(const
							      snd_rawmidi_info_t
							      * obj);
#endif				/* __LSB_VERSION__ >= 4.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
