#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_MIXER_ABST_H_
#define _ALSA_MIXER_ABST_H_

#include <alsa/control.h>

#ifdef __cplusplus
extern "C" {
#endif


#define sm_selem(x)	((sm_selem_t *)((x)->private_data))
#define sm_selem_ops(x)	((sm_selem_t *)((x)->private_data))->ops
#define SM_CAP_GVOLUME	(1<<1)
#define SM_CAP_CSWITCH_JOIN	(1<<10)
#define SM_CAP_CSWITCH_EXCL	(1<<11)
#define SM_CAP_PENUM	(1<<12)
#define SM_CAP_CENUM	(1<<13)
#define SM_CAP_GSWITCH	(1<<2)
#define SM_CAP_PVOLUME	(1<<3)
#define SM_CAP_PVOLUME_JOIN	(1<<4)
#define SM_CAP_PSWITCH	(1<<5)
#define SM_CAP_PSWITCH_JOIN	(1<<6)
#define SM_CAP_CVOLUME	(1<<7)
#define SM_CAP_CVOLUME_JOIN	(1<<8)
#define SM_CAP_CSWITCH	(1<<9)
#define SM_OPS_IS_ACTIVE	0
#define SM_OPS_IS_MONO	1
#define SM_OPS_IS_CHANNEL	2
#define SM_OPS_IS_ENUMERATED	3
#define SM_OPS_IS_ENUMCNT	4


    typedef struct _sm_class_basic sm_class_basic_t;


    struct _sm_class_basic {
	char *device;
	snd_ctl_t *ctl;
	snd_hctl_t *hctl;
	snd_ctl_card_info_t *info;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
