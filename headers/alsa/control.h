#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_CONTROL_H_
#define _ALSA_CONTROL_H_

#include <stddef.h>
#include <sys/poll.h>
#include <alsa/pcm.h>
#include <alsa/hwdep.h>
#include <alsa/global.h>
#include <alsa/rawmidi.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
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
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 32
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

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 32

    struct snd_aes_iec958 {
	unsigned char status[24];
	unsigned char subcode[147];
	unsigned char pad;
	unsigned char dig_subframe[4];
    };

#endif				/* __LSB_VERSION__ >= 3.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
    extern int snd_async_add_ctl_handler(snd_async_handler_t * *,
					 snd_ctl_t *, snd_async_callback_t,
					 void *);
    extern snd_ctl_t *snd_async_handler_get_ctl(snd_async_handler_t *);
    extern int snd_card_get_index(const char *);
    extern int snd_card_get_longname(int, char **);
    extern int snd_card_get_name(int, char **);
    extern int snd_card_load(int);
    extern int snd_card_next(int *);
    extern int snd_ctl_card_info(snd_ctl_t *, snd_ctl_card_info_t *);
    extern void snd_ctl_card_info_clear(snd_ctl_card_info_t *);
    extern void snd_ctl_card_info_copy(snd_ctl_card_info_t *,
				       const snd_ctl_card_info_t *);
    extern void snd_ctl_card_info_free(snd_ctl_card_info_t *);
    extern const char *snd_ctl_card_info_get_components(const
							snd_ctl_card_info_t
							*);
    extern const char *snd_ctl_card_info_get_driver(const
						    snd_ctl_card_info_t *);
    extern const char *snd_ctl_card_info_get_id(const snd_ctl_card_info_t
						*);
    extern const char *snd_ctl_card_info_get_longname(const
						      snd_ctl_card_info_t
						      *);
    extern const char *snd_ctl_card_info_get_mixername(const
						       snd_ctl_card_info_t
						       *);
    extern const char *snd_ctl_card_info_get_name(const snd_ctl_card_info_t
						  *);
    extern int snd_ctl_card_info_malloc(snd_ctl_card_info_t * *);
    extern size_t snd_ctl_card_info_sizeof(void);
    extern int snd_ctl_close(snd_ctl_t *);
    extern int snd_ctl_elem_add_boolean(snd_ctl_t *,
					const snd_ctl_elem_id_t *,
					unsigned int);
    extern int snd_ctl_elem_add_iec958(snd_ctl_t *,
				       const snd_ctl_elem_id_t *);
    extern int snd_ctl_elem_add_integer(snd_ctl_t *,
					const snd_ctl_elem_id_t *,
					unsigned int, long int, long int,
					long int);
    extern void snd_ctl_elem_id_clear(snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_id_copy(snd_ctl_elem_id_t *,
				     const snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_id_free(snd_ctl_elem_id_t *);
    extern unsigned int snd_ctl_elem_id_get_device(const snd_ctl_elem_id_t
						   *);
    extern unsigned int snd_ctl_elem_id_get_index(const snd_ctl_elem_id_t
						  *);
    extern snd_ctl_elem_iface_t snd_ctl_elem_id_get_interface(const
							      snd_ctl_elem_id_t
							      *);
    extern const char *snd_ctl_elem_id_get_name(const snd_ctl_elem_id_t *);
    extern unsigned int snd_ctl_elem_id_get_numid(const snd_ctl_elem_id_t
						  *);
    extern unsigned int snd_ctl_elem_id_get_subdevice(const
						      snd_ctl_elem_id_t *);
    extern int snd_ctl_elem_id_malloc(snd_ctl_elem_id_t * *);
    extern void snd_ctl_elem_id_set_device(snd_ctl_elem_id_t *,
					   unsigned int);
    extern void snd_ctl_elem_id_set_index(snd_ctl_elem_id_t *,
					  unsigned int);
    extern void snd_ctl_elem_id_set_interface(snd_ctl_elem_id_t *,
					      snd_ctl_elem_iface_t);
    extern void snd_ctl_elem_id_set_name(snd_ctl_elem_id_t *,
					 const char *);
    extern void snd_ctl_elem_id_set_numid(snd_ctl_elem_id_t *,
					  unsigned int);
    extern void snd_ctl_elem_id_set_subdevice(snd_ctl_elem_id_t *,
					      unsigned int);
    extern size_t snd_ctl_elem_id_sizeof(void);
    extern const char *snd_ctl_elem_iface_name(snd_ctl_elem_iface_t);
    extern int snd_ctl_elem_info(snd_ctl_t *, snd_ctl_elem_info_t *);
    extern void snd_ctl_elem_info_clear(snd_ctl_elem_info_t *);
    extern void snd_ctl_elem_info_copy(snd_ctl_elem_info_t *,
				       const snd_ctl_elem_info_t *);
    extern void snd_ctl_elem_info_free(snd_ctl_elem_info_t *);
    extern unsigned int snd_ctl_elem_info_get_count(const
						    snd_ctl_elem_info_t *);
    extern void snd_ctl_elem_info_get_id(const snd_ctl_elem_info_t *,
					 snd_ctl_elem_id_t *);
    extern const char *snd_ctl_elem_info_get_item_name(const
						       snd_ctl_elem_info_t
						       *);
    extern unsigned int snd_ctl_elem_info_get_items(const
						    snd_ctl_elem_info_t *);
    extern long int snd_ctl_elem_info_get_max(const snd_ctl_elem_info_t *);
    extern long long int snd_ctl_elem_info_get_max64(const
						     snd_ctl_elem_info_t
						     *);
    extern long int snd_ctl_elem_info_get_min(const snd_ctl_elem_info_t *);
    extern long long int snd_ctl_elem_info_get_min64(const
						     snd_ctl_elem_info_t
						     *);
    extern const char *snd_ctl_elem_info_get_name(const snd_ctl_elem_info_t
						  *);
    extern unsigned int snd_ctl_elem_info_get_numid(const
						    snd_ctl_elem_info_t *);
    extern long int snd_ctl_elem_info_get_step(const snd_ctl_elem_info_t
					       *);
    extern long long int snd_ctl_elem_info_get_step64(const
						      snd_ctl_elem_info_t
						      *);
    extern snd_ctl_elem_type_t snd_ctl_elem_info_get_type(const
							  snd_ctl_elem_info_t
							  *);
    extern int snd_ctl_elem_info_is_inactive(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_is_locked(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_is_readable(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_is_user(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_is_volatile(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_is_writable(const snd_ctl_elem_info_t *);
    extern int snd_ctl_elem_info_malloc(snd_ctl_elem_info_t * *);
    extern void snd_ctl_elem_info_set_id(snd_ctl_elem_info_t *,
					 const snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_info_set_item(snd_ctl_elem_info_t *,
					   unsigned int);
    extern size_t snd_ctl_elem_info_sizeof(void);
    extern int snd_ctl_elem_list(snd_ctl_t *, snd_ctl_elem_list_t *);
    extern int snd_ctl_elem_list_alloc_space(snd_ctl_elem_list_t *,
					     unsigned int);
    extern void snd_ctl_elem_list_clear(snd_ctl_elem_list_t *);
    extern void snd_ctl_elem_list_copy(snd_ctl_elem_list_t *,
				       const snd_ctl_elem_list_t *);
    extern void snd_ctl_elem_list_free(snd_ctl_elem_list_t *);
    extern void snd_ctl_elem_list_free_space(snd_ctl_elem_list_t *);
    extern unsigned int snd_ctl_elem_list_get_count(const
						    snd_ctl_elem_list_t *);
    extern void snd_ctl_elem_list_get_id(const snd_ctl_elem_list_t *,
					 unsigned int,
					 snd_ctl_elem_id_t *);
    extern const char *snd_ctl_elem_list_get_name(const snd_ctl_elem_list_t
						  *, unsigned int);
    extern unsigned int snd_ctl_elem_list_get_used(const
						   snd_ctl_elem_list_t *);
    extern int snd_ctl_elem_list_malloc(snd_ctl_elem_list_t * *);
    extern void snd_ctl_elem_list_set_offset(snd_ctl_elem_list_t *,
					     unsigned int);
    extern size_t snd_ctl_elem_list_sizeof(void);
    extern int snd_ctl_elem_read(snd_ctl_t *, snd_ctl_elem_value_t *);
    extern int snd_ctl_elem_remove(snd_ctl_t *, snd_ctl_elem_id_t *);
    extern const char *snd_ctl_elem_type_name(snd_ctl_elem_type_t);
    extern void snd_ctl_elem_value_clear(snd_ctl_elem_value_t *);
    extern void snd_ctl_elem_value_copy(snd_ctl_elem_value_t *,
					const snd_ctl_elem_value_t *);
    extern void snd_ctl_elem_value_free(snd_ctl_elem_value_t *);
    extern int snd_ctl_elem_value_get_boolean(const snd_ctl_elem_value_t *,
					      unsigned int);
    extern unsigned char snd_ctl_elem_value_get_byte(const
						     snd_ctl_elem_value_t
						     *, unsigned int);
    extern const void *snd_ctl_elem_value_get_bytes(const
						    snd_ctl_elem_value_t
						    *);
    extern unsigned int snd_ctl_elem_value_get_enumerated(const
							  snd_ctl_elem_value_t
							  *, unsigned int);
    extern void snd_ctl_elem_value_get_id(const snd_ctl_elem_value_t *,
					  snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_value_get_iec958(const snd_ctl_elem_value_t *,
					      snd_aes_iec958_t *);
    extern long int snd_ctl_elem_value_get_integer(const
						   snd_ctl_elem_value_t *,
						   unsigned int);
    extern long long int snd_ctl_elem_value_get_integer64(const
							  snd_ctl_elem_value_t
							  *, unsigned int);
    extern int snd_ctl_elem_value_malloc(snd_ctl_elem_value_t * *);
    extern void snd_ctl_elem_value_set_boolean(snd_ctl_elem_value_t *,
					       unsigned int, long int);
    extern void snd_ctl_elem_value_set_byte(snd_ctl_elem_value_t *,
					    unsigned int, unsigned char);
    extern void snd_ctl_elem_value_set_enumerated(snd_ctl_elem_value_t *,
						  unsigned int,
						  unsigned int);
    extern void snd_ctl_elem_value_set_id(snd_ctl_elem_value_t *,
					  const snd_ctl_elem_id_t *);
    extern void snd_ctl_elem_value_set_iec958(snd_ctl_elem_value_t *,
					      const snd_aes_iec958_t *);
    extern void snd_ctl_elem_value_set_integer(snd_ctl_elem_value_t *,
					       unsigned int, long int);
    extern void snd_ctl_elem_value_set_integer64(snd_ctl_elem_value_t *,
						 unsigned int,
						 long long int);
    extern size_t snd_ctl_elem_value_sizeof(void);
    extern int snd_ctl_elem_write(snd_ctl_t *, snd_ctl_elem_value_t *);
    extern void snd_ctl_event_clear(snd_ctl_event_t *);
    extern void snd_ctl_event_copy(snd_ctl_event_t *,
				   const snd_ctl_event_t *);
    extern void snd_ctl_event_elem_get_id(const snd_ctl_event_t *,
					  snd_ctl_elem_id_t *);
    extern unsigned int snd_ctl_event_elem_get_mask(const snd_ctl_event_t
						    *);
    extern void snd_ctl_event_free(snd_ctl_event_t *);
    extern int snd_ctl_event_malloc(snd_ctl_event_t * *);
    extern size_t snd_ctl_event_sizeof(void);
    extern int snd_ctl_hwdep_info(snd_ctl_t *, snd_hwdep_info_t *);
    extern int snd_ctl_hwdep_next_device(snd_ctl_t *, int *);
    extern const char *snd_ctl_name(snd_ctl_t *);
    extern int snd_ctl_nonblock(snd_ctl_t *, int);
    extern int snd_ctl_open(snd_ctl_t * *, const char *, int);
    extern int snd_ctl_pcm_info(snd_ctl_t *, snd_pcm_info_t *);
    extern int snd_ctl_pcm_next_device(snd_ctl_t *, int *);
    extern int snd_ctl_poll_descriptors(snd_ctl_t *, struct pollfd *,
					unsigned int);
    extern int snd_ctl_poll_descriptors_count(snd_ctl_t *);
    extern int snd_ctl_rawmidi_info(snd_ctl_t *, snd_rawmidi_info_t *);
    extern int snd_ctl_rawmidi_next_device(snd_ctl_t *, int *);
    extern int snd_ctl_read(snd_ctl_t *, snd_ctl_event_t *);
    extern int snd_ctl_subscribe_events(snd_ctl_t *, int);
    extern int snd_hctl_close(snd_hctl_t *);
    extern void *snd_hctl_elem_get_callback_private(const snd_hctl_elem_t
						    *);
    extern void snd_hctl_elem_get_id(const snd_hctl_elem_t *,
				     snd_ctl_elem_id_t *);
    extern int snd_hctl_elem_info(snd_hctl_elem_t *,
				  snd_ctl_elem_info_t *);
    extern snd_hctl_elem_t *snd_hctl_elem_next(snd_hctl_elem_t *);
    extern snd_hctl_elem_t *snd_hctl_elem_prev(snd_hctl_elem_t *);
    extern int snd_hctl_elem_read(snd_hctl_elem_t *,
				  snd_ctl_elem_value_t *);
    extern void snd_hctl_elem_set_callback(snd_hctl_elem_t *,
					   snd_hctl_elem_callback_t);
    extern void snd_hctl_elem_set_callback_private(snd_hctl_elem_t *,
						   void *);
    extern int snd_hctl_elem_write(snd_hctl_elem_t *,
				   snd_ctl_elem_value_t *);
    extern snd_hctl_elem_t *snd_hctl_find_elem(snd_hctl_t *,
					       const snd_ctl_elem_id_t *);
    extern snd_hctl_elem_t *snd_hctl_first_elem(snd_hctl_t *);
    extern int snd_hctl_free(snd_hctl_t *);
    extern void *snd_hctl_get_callback_private(snd_hctl_t *);
    extern snd_hctl_elem_t *snd_hctl_last_elem(snd_hctl_t *);
    extern int snd_hctl_load(snd_hctl_t *);
    extern int snd_hctl_open(snd_hctl_t * *, const char *, int);
    extern void snd_hctl_set_callback(snd_hctl_t *, snd_hctl_callback_t);
    extern void snd_hctl_set_callback_private(snd_hctl_t *, void *);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern unsigned int snd_hctl_get_count(snd_hctl_t *);
    extern int snd_hctl_handle_events(snd_hctl_t *);
    extern int snd_hctl_nonblock(snd_hctl_t *, int);
    extern int snd_hctl_wait(snd_hctl_t *, int);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
