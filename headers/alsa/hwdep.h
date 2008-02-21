#ifndef _ALSA_HWDEP_H_
#define _ALSA_HWDEP_H_

#include <sys/types.h>
#include <stddef.h>
#include <sys/poll.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SND_HWDEP_OPEN_NONBLOCK	(O_NONBLOCK)
#define SND_HWDEP_OPEN_READ	(O_RDONLY)
#define SND_HWDEP_OPEN_DUPLEX	(O_RDWR)
#define SND_HWDEP_OPEN_WRITE	(O_WRONLY)


    typedef struct sndrv_hwdep_dsp_image snd_hwdep_dsp_image_t;

    typedef struct sndrv_hwdep_dsp_status snd_hwdep_dsp_status_t;

    typedef enum _snd_hwdep_iface {
	SND_HWDEP_IFACE_OPL2,
	SND_HWDEP_IFACE_OPL3 = 1,
	SND_HWDEP_IFACE_OPL4 = 2,
	SND_HWDEP_IFACE_SB16CSP = 3,
	SND_HWDEP_IFACE_EMU10K1 = 4,
	SND_HWDEP_IFACE_YSS225 = 5,
	SND_HWDEP_IFACE_ICS2115 = 6,
	SND_HWDEP_IFACE_SSCAPE = 7,
	SND_HWDEP_IFACE_VX = 8,
	SND_HWDEP_IFACE_MIXART = 9,
	SND_HWDEP_IFACE_USX2Y = 10,
	SND_HWDEP_IFACE_EMUX_WAVETABLE = 11,
	SND_HWDEP_IFACE_BLUETOOTH = 12,
	SND_HWDEP_IFACE_USX2Y_PCM = 13,
	SND_HWDEP_IFACE_PCXHR = 14,
	SND_HWDEP_IFACE_SB_RC = 15,
	SND_HWDEP_IFACE_LAST = 15
    } snd_hwdep_iface_t;

    typedef struct sndrv_hwdep_info snd_hwdep_info_t;

    typedef struct _snd_hwdep snd_hwdep_t;

    typedef enum _snd_hwdep_type {
	SND_HWDEP_TYPE_HW,
	SND_HWDEP_TYPE_SHM = 1,
	SND_HWDEP_TYPE_INET = 2
    } snd_hwdep_type_t;














    extern int snd_hwdep_close(snd_hwdep_t *);
    extern void snd_hwdep_dsp_image_copy(snd_hwdep_dsp_image_t *,
					 const snd_hwdep_dsp_image_t *);
    extern void snd_hwdep_dsp_image_free(snd_hwdep_dsp_image_t *);
    extern const void *snd_hwdep_dsp_image_get_image(const
						     snd_hwdep_dsp_image_t
						     *);
    extern unsigned int snd_hwdep_dsp_image_get_index(const
						      snd_hwdep_dsp_image_t
						      *);
    extern size_t snd_hwdep_dsp_image_get_length(const
						 snd_hwdep_dsp_image_t *);
    extern const char *snd_hwdep_dsp_image_get_name(const
						    snd_hwdep_dsp_image_t
						    *);
    extern int snd_hwdep_dsp_image_malloc(snd_hwdep_dsp_image_t * *);
    extern void snd_hwdep_dsp_image_set_image(snd_hwdep_dsp_image_t *,
					      void *);
    extern void snd_hwdep_dsp_image_set_index(snd_hwdep_dsp_image_t *,
					      unsigned int);
    extern void snd_hwdep_dsp_image_set_length(snd_hwdep_dsp_image_t *,
					       size_t);
    extern void snd_hwdep_dsp_image_set_name(snd_hwdep_dsp_image_t *,
					     const char *);
    extern size_t snd_hwdep_dsp_image_sizeof(void);
    extern int snd_hwdep_dsp_load(snd_hwdep_t *, snd_hwdep_dsp_image_t *);
    extern int snd_hwdep_dsp_status(snd_hwdep_t *,
				    snd_hwdep_dsp_status_t *);
    extern void snd_hwdep_dsp_status_copy(snd_hwdep_dsp_status_t *,
					  const snd_hwdep_dsp_status_t *);
    extern void snd_hwdep_dsp_status_free(snd_hwdep_dsp_status_t *);
    extern unsigned int snd_hwdep_dsp_status_get_chip_ready(const
							    snd_hwdep_dsp_status_t
							    *);
    extern unsigned int snd_hwdep_dsp_status_get_dsp_loaded(const
							    snd_hwdep_dsp_status_t
							    *);
    extern const char *snd_hwdep_dsp_status_get_id(const
						   snd_hwdep_dsp_status_t
						   *);
    extern unsigned int snd_hwdep_dsp_status_get_num_dsps(const
							  snd_hwdep_dsp_status_t
							  *);
    extern unsigned int snd_hwdep_dsp_status_get_version(const
							 snd_hwdep_dsp_status_t
							 *);
    extern int snd_hwdep_dsp_status_malloc(snd_hwdep_dsp_status_t * *);
    extern size_t snd_hwdep_dsp_status_sizeof(void);
    extern int snd_hwdep_info(snd_hwdep_t *, snd_hwdep_info_t *);
    extern void snd_hwdep_info_copy(snd_hwdep_info_t *,
				    const snd_hwdep_info_t *);
    extern void snd_hwdep_info_free(snd_hwdep_info_t *);
    extern int snd_hwdep_info_get_card(const snd_hwdep_info_t *);
    extern unsigned int snd_hwdep_info_get_device(const snd_hwdep_info_t
						  *);
    extern const char *snd_hwdep_info_get_id(const snd_hwdep_info_t *);
    extern snd_hwdep_iface_t snd_hwdep_info_get_iface(const
						      snd_hwdep_info_t *);
    extern const char *snd_hwdep_info_get_name(const snd_hwdep_info_t *);
    extern int snd_hwdep_info_malloc(snd_hwdep_info_t * *);
    extern void snd_hwdep_info_set_device(snd_hwdep_info_t *,
					  unsigned int);
    extern size_t snd_hwdep_info_sizeof(void);
    extern int snd_hwdep_ioctl(snd_hwdep_t *, unsigned int, void *);
    extern int snd_hwdep_open(snd_hwdep_t * *, const char *, int);
    extern int snd_hwdep_poll_descriptors(snd_hwdep_t *, struct pollfd *,
					  unsigned int);
    extern ssize_t snd_hwdep_read(snd_hwdep_t *, void *, size_t);
    extern ssize_t snd_hwdep_write(snd_hwdep_t *, const void *, size_t);
#ifdef __cplusplus
}
#endif
#endif