#ifndef _ALSA_CONTROL_H_
#define _ALSA_CONTROL_H_

#include <stddef.h>
#include <alsa/pcm.h>
#include <alsa/hwdep.h>
#include <alsa/rawmidi.h>

#ifdef __cplusplus
extern "C" {
#endif



#define SND_CTL_EVENT_MASK_VALUE	(1<<0)
#define SND_CTL_EVENT_MASK_INFO	(1<<1)
#define SND_CTL_EVENT_MASK_ADD	(1<<2)
#define SND_CTL_EVENT_MASK_TLV	(1<<3)
#define SND_CTL_POWER_D3hot	(SND_CTL_POWER_D3|0x0000)
#define SND_CTL_POWER_D3cold	(SND_CTL_POWER_D3|0x0001)
#define SND_CTL_EVENT_MASK_REMOVE	(~0U)
#define SND_CTL_TLV_DB_GAIN_MUTE	-9999999
#define SND_CTL_POWER_D0	0x0000
#define SND_CTL_TLVT_CONTAINER	0x0000
#define SND_CTL_NONBLOCK	0x0001
#define SND_CTL_TLVT_DB_SCALE	0x0001
#define SND_SCTL_NOFREE	0x0001
#define SND_CTL_ASYNC	0x0002
#define SND_CTL_TLVT_DB_LINEAR	0x0002
#define SND_CTL_TLVT_DB_RANGE	0x0003
#define SND_CTL_READONLY	0x0004
#define SND_CTL_POWER_D1	0x0100
#define SND_CTL_POWER_D2	0x0200
#define SND_CTL_POWER_D3	0x0300
#define SND_CTL_POWER_MASK	0xff00


    typedef struct snd_aes_iec958 snd_aes_iec958_t;

    typedef struct _snd_ctl_card_info snd_ctl_card_info_t;

    typedef struct sndrv_ctl_elem_id snd_ctl_elem_id_t;

    typedef enum _snd_ctl_elem_iface {
	SND_CTL_ELEM_IFACE_CARD,
	SND_CTL_ELEM_IFACE_HWDEP = 1,
	SND_CTL_ELEM_IFACE_MIXER = 2,
	SND_CTL_ELEM_IFACE_PCM = 3,
	SND_CTL_ELEM_IFACE_RAWMIDI = 4,
	SND_CTL_ELEM_IFACE_TIMER = 5,
	SND_CTL_ELEM_IFACE_SEQUENCER = 6,
	SND_CTL_ELEM_IFACE_LAST = 6
    } snd_ctl_elem_iface_t;

    typedef struct _snd_ctl_elem_info snd_ctl_elem_info_t;

    typedef struct sndrv_ctl_elem_list snd_ctl_elem_list_t;

    typedef enum _snd_ctl_elem_type {
	SND_CTL_ELEM_TYPE_NONE,
	SND_CTL_ELEM_TYPE_BOOLEAN = 1,
	SND_CTL_ELEM_TYPE_INTEGER = 2,
	SND_CTL_ELEM_TYPE_ENUMERATED = 3,
	SND_CTL_ELEM_TYPE_BYTES = 4,
	SND_CTL_ELEM_TYPE_IEC958 = 5,
	SND_CTL_ELEM_TYPE_INTEGER64 = 6,
	SND_CTL_ELEM_TYPE_LAST = 6
    } snd_ctl_elem_type_t;

    typedef struct _snd_ctl_elem_value snd_ctl_elem_value_t;

    typedef struct sndrv_ctl_event snd_ctl_event_t;

    typedef enum _snd_ctl_event_type {
	SND_CTL_EVENT_ELEM,
	SND_CTL_EVENT_LAST
    } snd_ctl_event_type_t;

    typedef struct _snd_ctl snd_ctl_t;

    typedef enum _snd_ctl_type {
	SND_CTL_TYPE_HW,
	SND_CTL_TYPE_SHM = 1,
	SND_CTL_TYPE_INET = 2,
	SND_CTL_TYPE_EXT = 3
    } snd_ctl_type_t;

    typedef struct _snd_hctl snd_hctl_t;

    typedef struct _snd_sctl snd_sctl_t;

    typedef struct _snd_hctl_elem snd_hctl_elem_t;

    typedef int (*snd_hctl_compare_t) (void);

    typedef int (*snd_hctl_callback_t) (void);

    typedef int (*snd_hctl_elem_callback_t) (void);


    struct snd_aes_iec958 {
	unsigned char status[24];
	unsigned char subcode[147];
	unsigned char pad;
	unsigned char dig_subframe[4];
    };
































    extern int snd_card_get_longname(int, char **);
    extern int snd_card_get_name(int, char **);
    extern int snd_card_next(int *);
    extern int snd_ctl_card_info(snd_ctl_t *, snd_ctl_card_info_t *);
    extern void snd_ctl_card_info_free(snd_ctl_card_info_t *);
    extern const char *snd_ctl_card_info_get_id(const snd_ctl_card_info_t
						*);
    extern const char *snd_ctl_card_info_get_mixername(const
						       snd_ctl_card_info_t
						       *);
    extern const char *snd_ctl_card_info_get_name(const snd_ctl_card_info_t
						  *);
    extern int snd_ctl_card_info_malloc(snd_ctl_card_info_t * *);
    extern size_t snd_ctl_card_info_sizeof(void);
    extern int snd_ctl_close(snd_ctl_t *);
    extern void snd_ctl_elem_id_clear(snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_id_free(snd_ctl_elem_id_t *);
    extern int snd_ctl_elem_id_malloc(snd_ctl_elem_id_t * *);
    extern void snd_ctl_elem_id_set_interface(snd_ctl_elem_id_t *,
					      snd_ctl_elem_iface_t);
    extern void snd_ctl_elem_id_set_name(snd_ctl_elem_id_t *,
					 const char *);
    extern void snd_ctl_elem_info_clear(snd_ctl_elem_info_t *);
    extern void snd_ctl_elem_info_free(snd_ctl_elem_info_t *);
    extern unsigned int snd_ctl_elem_info_get_count(const
						    snd_ctl_elem_info_t *);
    extern long int snd_ctl_elem_info_get_max(const snd_ctl_elem_info_t *);
    extern long int snd_ctl_elem_info_get_min(const snd_ctl_elem_info_t *);
    extern long int snd_ctl_elem_info_get_step(const snd_ctl_elem_info_t
					       *);
    extern int snd_ctl_elem_info_is_readable(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_malloc(snd_ctl_elem_info_t * *);
    extern void snd_ctl_elem_value_clear(snd_ctl_elem_value_t *);
    extern void snd_ctl_elem_value_free(snd_ctl_elem_value_t *);
    extern long int snd_ctl_elem_value_get_integer(const
						   snd_ctl_elem_value_t *,
						   unsigned int);
    extern int snd_ctl_elem_value_malloc(snd_ctl_elem_value_t * *);
    extern void snd_ctl_elem_value_set_integer(snd_ctl_elem_value_t *,
					       unsigned int, long int);
    extern int snd_ctl_hwdep_info(snd_ctl_t *, snd_hwdep_info_t *);
    extern int snd_ctl_hwdep_next_device(snd_ctl_t *, int *);
    extern const char *snd_ctl_name(snd_ctl_t *);
    extern int snd_ctl_open(snd_ctl_t * *, const char *, int);
    extern int snd_ctl_pcm_info(snd_ctl_t *, snd_pcm_info_t *);
    extern int snd_ctl_pcm_next_device(snd_ctl_t *, int *);
    extern int snd_ctl_rawmidi_info(snd_ctl_t *, snd_rawmidi_info_t *);
    extern int snd_ctl_rawmidi_next_device(snd_ctl_t *, int *);
    extern int snd_hctl_close(snd_hctl_t *);
    extern int snd_hctl_elem_info(snd_hctl_elem_t *,
				  snd_ctl_elem_info_t *);
    extern int snd_hctl_elem_read(snd_hctl_elem_t *,
				  snd_ctl_elem_value_t *);
    extern int snd_hctl_elem_write(snd_hctl_elem_t *,
				   snd_ctl_elem_value_t *);
    extern snd_hctl_elem_t *snd_hctl_find_elem(snd_hctl_t *,
					       const snd_ctl_elem_id_t *);
    extern int snd_hctl_free(snd_hctl_t *);
    extern int snd_hctl_load(snd_hctl_t *);
    extern int snd_hctl_open(snd_hctl_t * *, const char *, int);
#ifdef __cplusplus
}
#endif
#endif
