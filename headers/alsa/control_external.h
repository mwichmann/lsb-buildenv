#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_CONTROL_EXTERNAL_H_
#define _ALSA_CONTROL_EXTERNAL_H_

#include <alsa/control.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define SND_CTL_EXT_VERSION	((SND_CTL_EXT_VERSION_MAJOR<<16) | (SND_CTL_EXT_VERSION_MINOR<<8) | (SND_CTL_EXT_VERSION_TINY))
#define SND_CTL_EXT_KEY_NOT_FOUND	(snd_ctl_ext_key_t)(-1)
#define SND_CTL_EXT_VERSION_MINOR	0
#define SND_CTL_EXT_VERSION_TINY	0
#define SND_CTL_EXT_VERSION_MAJOR	1
#endif				// __LSB_VERSION__ >= 3.2



#if __LSB_VERSION__ >= 32
    typedef struct snd_ctl_ext_callback snd_ctl_ext_callback_t;

    typedef long unsigned int snd_ctl_ext_key_t;

    typedef struct snd_ctl_ext snd_ctl_ext_t;

#endif				// __LSB_VERSION__ >= 3.2

#if __LSB_VERSION__ >= 32

    struct snd_ctl_ext_callback {
	void (*close) (void);
	int (*elem_count) (void);
	int (*elem_list) (void);
	 snd_ctl_ext_key_t(*find_elem) (void);
	void (*free_key) (void);
	int (*get_attribute) (void);
	int (*get_integer_info) (void);
	int (*get_integer64_info) (void);
	int (*get_enumerated_info) (void);
	int (*get_enumerated_name) (void);
	int (*read_integer) (void);
	int (*read_integer64) (void);
	int (*read_enumerated) (void);
	int (*read_bytes) (void);
	int (*read_iec958) (void);
	int (*write_integer) (void);
	int (*write_integer64) (void);
	int (*write_enumerated) (void);
	int (*write_bytes) (void);
	int (*write_iec958) (void);
	void (*subscribe_events) (void);
	int (*read_event) (void);
	int (*poll_descriptors_count) (void);
	int (*poll_descriptors) (void);
	int (*poll_revents) (void);
    };


    struct snd_ctl_ext {
	unsigned int version;
	int card_idx;
	char id[16];
	char driver[16];
	char name[32];
	char longname[80];
	char mixername[80];
	int poll_fd;
	const snd_ctl_ext_callback_t *callback;
	void *private_data;
	snd_ctl_t *handle;
	int nonblock;
	int subscribed;
    };

#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
