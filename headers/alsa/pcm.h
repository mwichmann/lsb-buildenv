#ifndef _ALSA_PCM_H_
#define _ALSA_PCM_H_

#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>
#include <sys/poll.h>
#include <stdint.h>
#include <alsa/output.h>
#include <alsa/conf.h>
#include <alsa/global.h>

#ifdef __cplusplus
extern "C" {
#endif



#define SND_PCM_NONBLOCK	0x0001
#define SND_PCM_ASYNC	0x0002


    typedef struct sndrv_mask snd_pcm_access_mask_t;

    typedef enum _snd_pcm_access {
	SND_PCM_ACCESS_MMAP_INTERLEAVED,
	SND_PCM_ACCESS_MMAP_NONINTERLEAVED = 1,
	SND_PCM_ACCESS_MMAP_COMPLEX = 2,
	SND_PCM_ACCESS_RW_INTERLEAVED = 3,
	SND_PCM_ACCESS_RW_NONINTERLEAVED = 4,
	SND_PCM_ACCESS_LAST = 4
    } snd_pcm_access_t;

    typedef struct _snd_pcm_channel_area snd_pcm_channel_area_t;

    typedef enum _snd_pcm_class {
	SND_PCM_CLASS_GENERIC,
	SND_PCM_CLASS_MULTI = 1,
	SND_PCM_CLASS_MODEM = 2,
	SND_PCM_CLASS_DIGITIZER = 3,
	SND_PCM_CLASS_LAST = 3
    } snd_pcm_class_t;

    typedef struct sndrv_mask snd_pcm_format_mask_t;

    typedef enum _snd_pcm_format {
	SND_PCM_FORMAT_UNKNOWN = -1,
	SND_PCM_FORMAT_S8,
	SND_PCM_FORMAT_U8 = 1,
	SND_PCM_FORMAT_S16_LE = 2,
	SND_PCM_FORMAT_S16_BE = 3,
	SND_PCM_FORMAT_U16_LE = 4,
	SND_PCM_FORMAT_U16_BE = 5,
	SND_PCM_FORMAT_S24_LE = 6,
	SND_PCM_FORMAT_S24_BE = 7,
	SND_PCM_FORMAT_U24_LE = 8,
	SND_PCM_FORMAT_U24_BE = 9,
	SND_PCM_FORMAT_S32_LE = 10,
	SND_PCM_FORMAT_S32_BE = 11,
	SND_PCM_FORMAT_U32_LE = 12,
	SND_PCM_FORMAT_U32_BE = 13,
	SND_PCM_FORMAT_FLOAT_LE = 14,
	SND_PCM_FORMAT_FLOAT_BE = 15,
	SND_PCM_FORMAT_FLOAT64_LE = 16,
	SND_PCM_FORMAT_FLOAT64_BE = 17,
	SND_PCM_FORMAT_IEC958_SUBFRAME_LE = 18,
	SND_PCM_FORMAT_IEC958_SUBFRAME_BE = 19,
	SND_PCM_FORMAT_MU_LAW = 20,
	SND_PCM_FORMAT_A_LAW = 21,
	SND_PCM_FORMAT_IMA_ADPCM = 22,
	SND_PCM_FORMAT_MPEG = 23,
	SND_PCM_FORMAT_GSM = 24,
	SND_PCM_FORMAT_SPECIAL = 31,
	SND_PCM_FORMAT_S24_3LE = 32,
	SND_PCM_FORMAT_S24_3BE = 33,
	SND_PCM_FORMAT_U24_3LE = 34,
	SND_PCM_FORMAT_U24_3BE = 35,
	SND_PCM_FORMAT_S20_3LE = 36,
	SND_PCM_FORMAT_S20_3BE = 37,
	SND_PCM_FORMAT_U20_3LE = 38,
	SND_PCM_FORMAT_U20_3BE = 39,
	SND_PCM_FORMAT_S18_3LE = 40,
	SND_PCM_FORMAT_S18_3BE = 41,
	SND_PCM_FORMAT_U18_3LE = 42,
	SND_PCM_FORMAT_U18_3BE = 43,
	SND_PCM_FORMAT_LAST = 43,
	SND_PCM_FORMAT_S16 = 2,
	SND_PCM_FORMAT_U16 = 4,
	SND_PCM_FORMAT_S24 = 6,
	SND_PCM_FORMAT_U24 = 8,
	SND_PCM_FORMAT_S32 = 10,
	SND_PCM_FORMAT_U32 = 12,
	SND_PCM_FORMAT_FLOAT = 14,
	SND_PCM_FORMAT_FLOAT64 = 16,
	SND_PCM_FORMAT_IEC958_SUBFRAME = 18
    } snd_pcm_format_t;

    typedef struct _snd_pcm_hook snd_pcm_hook_t;

    typedef int (*snd_pcm_hook_func_t) (void);

    typedef enum _snd_pcm_hook_type {
	SND_PCM_HOOK_TYPE_HW_PARAMS,
	SND_PCM_HOOK_TYPE_HW_FREE = 1,
	SND_PCM_HOOK_TYPE_CLOSE = 2,
	SND_PCM_HOOK_TYPE_LAST = 2
    } snd_pcm_hook_type_t;

    typedef struct sndrv_pcm_hw_params snd_pcm_hw_params_t;

    typedef struct sndrv_pcm_info snd_pcm_info_t;

    typedef struct _snd_pcm_scope_ops snd_pcm_scope_ops_t;

    typedef struct _snd_pcm_scope snd_pcm_scope_t;

    typedef long int snd_pcm_sframes_t;

    typedef enum _snd_pcm_start {
	SND_PCM_START_DATA,
	SND_PCM_START_EXPLICIT = 1,
	SND_PCM_START_LAST = 1
    } snd_pcm_start_t;

    typedef enum _snd_pcm_state {
	SND_PCM_STATE_OPEN,
	SND_PCM_STATE_SETUP = 1,
	SND_PCM_STATE_PREPARED = 2,
	SND_PCM_STATE_RUNNING = 3,
	SND_PCM_STATE_XRUN = 4,
	SND_PCM_STATE_DRAINING = 5,
	SND_PCM_STATE_PAUSED = 6,
	SND_PCM_STATE_SUSPENDED = 7,
	SND_PCM_STATE_DISCONNECTED = 8,
	SND_PCM_STATE_LAST = 8
    } snd_pcm_state_t;

    typedef struct sndrv_pcm_status snd_pcm_status_t;

    typedef enum _snd_pcm_stream {
	SND_PCM_STREAM_PLAYBACK,
	SND_PCM_STREAM_CAPTURE = 1,
	SND_PCM_STREAM_LAST = 1
    } snd_pcm_stream_t;

    typedef enum _snd_pcm_subclass {
	SND_PCM_SUBCLASS_GENERIC_MIX,
	SND_PCM_SUBCLASS_MULTI_MIX = 1,
	SND_PCM_SUBCLASS_LAST = 1
    } snd_pcm_subclass_t;

    typedef struct sndrv_mask snd_pcm_subformat_mask_t;

    typedef enum _snd_pcm_subformat {
	SND_PCM_SUBFORMAT_STD,
	SND_PCM_SUBFORMAT_LAST
    } snd_pcm_subformat_t;

    typedef struct sndrv_pcm_sw_params snd_pcm_sw_params_t;

    typedef union _snd_pcm_sync_id snd_pcm_sync_id_t;

    typedef struct _snd_pcm snd_pcm_t;

    typedef enum _snd_pcm_tstamp {
	SND_PCM_TSTAMP_NONE,
	SND_PCM_TSTAMP_MMAP = 1,
	SND_PCM_TSTAMP_LAST = 1
    } snd_pcm_tstamp_t;

    typedef enum _snd_pcm_type {
	SND_PCM_TYPE_HW,
	SND_PCM_TYPE_HOOKS = 1,
	SND_PCM_TYPE_MULTI = 2,
	SND_PCM_TYPE_FILE = 3,
	SND_PCM_TYPE_NULL = 4,
	SND_PCM_TYPE_SHM = 5,
	SND_PCM_TYPE_INET = 6,
	SND_PCM_TYPE_COPY = 7,
	SND_PCM_TYPE_LINEAR = 8,
	SND_PCM_TYPE_ALAW = 9,
	SND_PCM_TYPE_MULAW = 10,
	SND_PCM_TYPE_ADPCM = 11,
	SND_PCM_TYPE_RATE = 12,
	SND_PCM_TYPE_ROUTE = 13,
	SND_PCM_TYPE_PLUG = 14,
	SND_PCM_TYPE_SHARE = 15,
	SND_PCM_TYPE_METER = 16,
	SND_PCM_TYPE_MIX = 17,
	SND_PCM_TYPE_DROUTE = 18,
	SND_PCM_TYPE_LBSERVER = 19,
	SND_PCM_TYPE_LINEAR_FLOAT = 20,
	SND_PCM_TYPE_LADSPA = 21,
	SND_PCM_TYPE_DMIX = 22,
	SND_PCM_TYPE_JACK = 23,
	SND_PCM_TYPE_DSNOOP = 24,
	SND_PCM_TYPE_DSHARE = 25,
	SND_PCM_TYPE_IEC958 = 26,
	SND_PCM_TYPE_SOFTVOL = 27,
	SND_PCM_TYPE_IOPLUG = 28,
	SND_PCM_TYPE_EXTPLUG = 29,
	SND_PCM_TYPE_LAST = 29
    } snd_pcm_type_t;

    typedef long unsigned int snd_pcm_uframes_t;

    typedef enum _snd_pcm_xrun {
	SND_PCM_XRUN_NONE,
	SND_PCM_XRUN_STOP = 1,
	SND_PCM_XRUN_LAST = 1
    } snd_pcm_xrun_t;

    typedef enum _snd_spcm_duplex_type {
	SND_SPCM_DUPLEX_LIBERAL,
	SND_SPCM_DUPLEX_PEDANTIC = 1
    } snd_spcm_duplex_type_t;

    typedef enum _snd_spcm_latency {
	SND_SPCM_LATENCY_STANDARD,
	SND_SPCM_LATENCY_MEDIUM = 1,
	SND_SPCM_LATENCY_REALTIME = 2
    } snd_spcm_latency_t;

    typedef enum _snd_spcm_xrun_type {
	SND_SPCM_XRUN_IGNORE,
	SND_SPCM_XRUN_STOP = 1
    } snd_spcm_xrun_type_t;





    struct _snd_pcm_channel_area {
	void *addr;
	unsigned int first;
	unsigned int step;
    };











    struct _snd_pcm_scope_ops {
	int (*enable) (void);
	void (*disable) (void);
	void (*start) (void);
	void (*stop) (void);
	void (*update) (void);
	void (*reset) (void);
	void (*close) (void);
    };










    union _snd_pcm_sync_id {
	unsigned char id[16];
	short unsigned int id16[8];
	unsigned int id32[4];
    };





    extern int snd_async_add_pcm_handler(snd_async_handler_t * *,
					 snd_pcm_t *, snd_async_callback_t,
					 void *);
    extern size_t snd_pcm_access_mask_sizeof(void);
    extern int snd_pcm_access_mask_test(const snd_pcm_access_mask_t *,
					snd_pcm_access_t);
    extern const char *snd_pcm_access_name(snd_pcm_access_t);
    extern int snd_pcm_area_copy(const snd_pcm_channel_area_t *,
				 snd_pcm_uframes_t,
				 const snd_pcm_channel_area_t *,
				 snd_pcm_uframes_t, unsigned int,
				 snd_pcm_format_t);
    extern int snd_pcm_areas_silence(const snd_pcm_channel_area_t *,
				     snd_pcm_uframes_t, unsigned int,
				     snd_pcm_uframes_t, snd_pcm_format_t);
    extern snd_pcm_sframes_t snd_pcm_avail_update(snd_pcm_t *);
    extern snd_pcm_format_t snd_pcm_build_linear_format(int, int, int,
							int);
    extern snd_pcm_sframes_t snd_pcm_bytes_to_frames(snd_pcm_t *, ssize_t);
    extern int snd_pcm_close(snd_pcm_t *);
    extern int snd_pcm_delay(snd_pcm_t *, snd_pcm_sframes_t *);
    extern int snd_pcm_drain(snd_pcm_t *);
    extern int snd_pcm_drop(snd_pcm_t *);
    extern int snd_pcm_dump(snd_pcm_t *, snd_output_t *);
    extern int snd_pcm_format_big_endian(snd_pcm_format_t);
    extern int snd_pcm_format_cpu_endian(snd_pcm_format_t);
    extern const char *snd_pcm_format_description(snd_pcm_format_t);
    extern int snd_pcm_format_linear(snd_pcm_format_t);
    extern void snd_pcm_format_mask_free(snd_pcm_format_mask_t *);
    extern int snd_pcm_format_mask_malloc(snd_pcm_format_mask_t * *);
    extern size_t snd_pcm_format_mask_sizeof(void);
    extern int snd_pcm_format_mask_test(const snd_pcm_format_mask_t *,
					snd_pcm_format_t);
    extern const char *snd_pcm_format_name(snd_pcm_format_t);
    extern int snd_pcm_format_physical_width(snd_pcm_format_t);
    extern int snd_pcm_format_set_silence(snd_pcm_format_t, void *,
					  unsigned int);
    extern int snd_pcm_format_signed(snd_pcm_format_t);
    extern ssize_t snd_pcm_format_size(snd_pcm_format_t, size_t);
    extern int snd_pcm_format_width(snd_pcm_format_t);
    extern ssize_t snd_pcm_frames_to_bytes(snd_pcm_t *, snd_pcm_sframes_t);
    extern int snd_pcm_hw_free(snd_pcm_t *);
    extern int snd_pcm_hw_params(snd_pcm_t *, snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_any(snd_pcm_t *, snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_can_mmap_sample_resolution(const
							    snd_pcm_hw_params_t
							    *);
    extern int snd_pcm_hw_params_can_overrange(const snd_pcm_hw_params_t
					       *);
    extern int snd_pcm_hw_params_can_pause(const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_can_resume(const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_can_sync_start(const snd_pcm_hw_params_t
						*);
    extern void snd_pcm_hw_params_copy(snd_pcm_hw_params_t *,
				       const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_dump(snd_pcm_hw_params_t *,
				      snd_output_t *);
    extern void snd_pcm_hw_params_free(snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_get_access_mask(snd_pcm_hw_params_t *,
						 snd_pcm_access_mask_t *);
    extern void snd_pcm_hw_params_get_format_mask(snd_pcm_hw_params_t *,
						  snd_pcm_format_mask_t *);
    extern int snd_pcm_hw_params_get_rate_numden(const snd_pcm_hw_params_t
						 *, unsigned int *,
						 unsigned int *);
    extern int snd_pcm_hw_params_get_sbits(const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_is_batch(const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_is_block_transfer(const
						   snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_is_double(const snd_pcm_hw_params_t *);
    extern int snd_pcm_hw_params_is_half_duplex(const snd_pcm_hw_params_t
						*);
    extern int snd_pcm_hw_params_is_joint_duplex(const snd_pcm_hw_params_t
						 *);
    extern int snd_pcm_hw_params_malloc(snd_pcm_hw_params_t * *);
    extern int snd_pcm_hw_params_set_access(snd_pcm_t *,
					    snd_pcm_hw_params_t *,
					    snd_pcm_access_t);
    extern int snd_pcm_hw_params_set_channels(snd_pcm_t *,
					      snd_pcm_hw_params_t *,
					      unsigned int);
    extern int snd_pcm_hw_params_set_format(snd_pcm_t *,
					    snd_pcm_hw_params_t *,
					    snd_pcm_format_t);
    extern int snd_pcm_hw_params_set_period_size(snd_pcm_t *,
						 snd_pcm_hw_params_t *,
						 snd_pcm_uframes_t, int);
    extern int snd_pcm_hw_params_set_periods(snd_pcm_t *,
					     snd_pcm_hw_params_t *,
					     unsigned int, int);
    extern int snd_pcm_hw_params_set_periods_integer(snd_pcm_t *,
						     snd_pcm_hw_params_t
						     *);
    extern int snd_pcm_hw_params_set_periods_min(snd_pcm_t *,
						 snd_pcm_hw_params_t *,
						 unsigned int *, int *);
    extern int snd_pcm_hw_params_set_rate(snd_pcm_t *,
					  snd_pcm_hw_params_t *,
					  unsigned int, int);
    extern size_t snd_pcm_hw_params_sizeof(void);
    extern int snd_pcm_hw_params_test_access(snd_pcm_t *,
					     snd_pcm_hw_params_t *,
					     snd_pcm_access_t);
    extern int snd_pcm_hw_params_test_channels(snd_pcm_t *,
					       snd_pcm_hw_params_t *,
					       unsigned int);
    extern int snd_pcm_hw_params_test_format(snd_pcm_t *,
					     snd_pcm_hw_params_t *,
					     snd_pcm_format_t);
    extern int snd_pcm_hw_params_test_period_size(snd_pcm_t *,
						  snd_pcm_hw_params_t *,
						  snd_pcm_uframes_t, int);
    extern int snd_pcm_hw_params_test_rate(snd_pcm_t *,
					   snd_pcm_hw_params_t *,
					   unsigned int, int);
    extern int snd_pcm_hwsync(snd_pcm_t *);
    extern int snd_pcm_info(snd_pcm_t *, snd_pcm_info_t *);
    extern void snd_pcm_info_free(snd_pcm_info_t *);
    extern const char *snd_pcm_info_get_id(const snd_pcm_info_t *);
    extern const char *snd_pcm_info_get_name(const snd_pcm_info_t *);
    extern unsigned int snd_pcm_info_get_subdevices_count(const
							  snd_pcm_info_t
							  *);
    extern int snd_pcm_info_malloc(snd_pcm_info_t * *);
    extern void snd_pcm_info_set_device(snd_pcm_info_t *, unsigned int);
    extern void snd_pcm_info_set_stream(snd_pcm_info_t *,
					snd_pcm_stream_t);
    extern void snd_pcm_info_set_subdevice(snd_pcm_info_t *, unsigned int);
    extern size_t snd_pcm_info_sizeof(void);
    extern int snd_pcm_link(snd_pcm_t *, snd_pcm_t *);
    extern int snd_pcm_mmap_begin(snd_pcm_t *,
				  const snd_pcm_channel_area_t * *,
				  snd_pcm_uframes_t *,
				  snd_pcm_uframes_t *);
    extern snd_pcm_sframes_t snd_pcm_mmap_commit(snd_pcm_t *,
						 snd_pcm_uframes_t,
						 snd_pcm_uframes_t);
    extern snd_pcm_sframes_t snd_pcm_mmap_readi(snd_pcm_t *, void *,
						snd_pcm_uframes_t);
    extern snd_pcm_sframes_t snd_pcm_mmap_writei(snd_pcm_t *, const void *,
						 snd_pcm_uframes_t);
    extern int snd_pcm_nonblock(snd_pcm_t *, int);
    extern int snd_pcm_open(snd_pcm_t * *, const char *, snd_pcm_stream_t,
			    int);
    extern int snd_pcm_open_lconf(snd_pcm_t * *, const char *,
				  snd_pcm_stream_t, int, snd_config_t *);
    extern int snd_pcm_pause(snd_pcm_t *, int);
    extern int snd_pcm_poll_descriptors(snd_pcm_t *, struct pollfd *,
					unsigned int);
    extern int snd_pcm_poll_descriptors_count(snd_pcm_t *);
    extern int snd_pcm_poll_descriptors_revents(snd_pcm_t *,
						struct pollfd *,
						unsigned int,
						short unsigned int *);
    extern int snd_pcm_prepare(snd_pcm_t *);
    extern snd_pcm_sframes_t snd_pcm_readi(snd_pcm_t *, void *,
					   snd_pcm_uframes_t);
    extern snd_pcm_sframes_t snd_pcm_readn(snd_pcm_t *, void **,
					   snd_pcm_uframes_t);
    extern int snd_pcm_resume(snd_pcm_t *);
    extern snd_pcm_sframes_t snd_pcm_rewind(snd_pcm_t *,
					    snd_pcm_uframes_t);
    extern int snd_pcm_start(snd_pcm_t *);
    extern snd_pcm_state_t snd_pcm_state(snd_pcm_t *);
    extern const char *snd_pcm_state_name(snd_pcm_state_t);
    extern int snd_pcm_status(snd_pcm_t *, snd_pcm_status_t *);
    extern int snd_pcm_status_dump(snd_pcm_status_t *, snd_output_t *);
    extern void snd_pcm_status_free(snd_pcm_status_t *);
    extern snd_pcm_uframes_t snd_pcm_status_get_avail(const
						      snd_pcm_status_t *);
    extern snd_pcm_uframes_t snd_pcm_status_get_avail_max(const
							  snd_pcm_status_t
							  *);
    extern snd_pcm_sframes_t snd_pcm_status_get_delay(const
						      snd_pcm_status_t *);
    extern snd_pcm_state_t snd_pcm_status_get_state(const snd_pcm_status_t
						    *);
    extern void snd_pcm_status_get_trigger_tstamp(const snd_pcm_status_t *,
						  snd_timestamp_t *);
    extern void snd_pcm_status_get_tstamp(const snd_pcm_status_t *,
					  snd_timestamp_t *);
    extern int snd_pcm_status_malloc(snd_pcm_status_t * *);
    extern size_t snd_pcm_status_sizeof(void);
    extern int snd_pcm_sw_params(snd_pcm_t *, snd_pcm_sw_params_t *);
    extern int snd_pcm_sw_params_current(snd_pcm_t *,
					 snd_pcm_sw_params_t *);
    extern int snd_pcm_sw_params_dump(snd_pcm_sw_params_t *,
				      snd_output_t *);
    extern void snd_pcm_sw_params_free(snd_pcm_sw_params_t *);
    extern int snd_pcm_sw_params_get_boundary(const snd_pcm_sw_params_t *,
					      snd_pcm_uframes_t *);
    extern int snd_pcm_sw_params_malloc(snd_pcm_sw_params_t * *);
    extern int snd_pcm_sw_params_set_avail_min(snd_pcm_t *,
					       snd_pcm_sw_params_t *,
					       snd_pcm_uframes_t);
    extern int snd_pcm_sw_params_set_silence_size(snd_pcm_t *,
						  snd_pcm_sw_params_t *,
						  snd_pcm_uframes_t);
    extern int snd_pcm_sw_params_set_silence_threshold(snd_pcm_t *,
						       snd_pcm_sw_params_t
						       *,
						       snd_pcm_uframes_t);
    extern int snd_pcm_sw_params_set_sleep_min(snd_pcm_t *,
					       snd_pcm_sw_params_t *,
					       unsigned int);
    extern int snd_pcm_sw_params_set_start_threshold(snd_pcm_t *,
						     snd_pcm_sw_params_t *,
						     snd_pcm_uframes_t);
    extern int snd_pcm_sw_params_set_stop_threshold(snd_pcm_t *,
						    snd_pcm_sw_params_t *,
						    snd_pcm_uframes_t);
    extern int snd_pcm_sw_params_set_tstamp_mode(snd_pcm_t *,
						 snd_pcm_sw_params_t *,
						 snd_pcm_tstamp_t);
    extern int snd_pcm_sw_params_set_xfer_align(snd_pcm_t *,
						snd_pcm_sw_params_t *,
						snd_pcm_uframes_t);
    extern size_t snd_pcm_sw_params_sizeof(void);
    extern snd_pcm_type_t snd_pcm_type(snd_pcm_t *);
    extern int snd_pcm_wait(snd_pcm_t *, int);
    extern snd_pcm_sframes_t snd_pcm_writei(snd_pcm_t *, const void *,
					    snd_pcm_uframes_t);
    extern snd_pcm_sframes_t snd_pcm_writen(snd_pcm_t *, void **,
					    snd_pcm_uframes_t);
    extern int snd_pcm_hw_params_get_rate_min(const snd_pcm_hw_params_t *,
					      unsigned int *, int *);
    extern int snd_pcm_hw_params_get_tick_time_min(const
						   snd_pcm_hw_params_t *,
						   unsigned int *, int *);
    extern int snd_pcm_hw_params_get_period_time(const snd_pcm_hw_params_t
						 *, unsigned int *, int *);
    extern int snd_pcm_hw_params_set_buffer_time_near(snd_pcm_t *,
						      snd_pcm_hw_params_t
						      *, unsigned int *,
						      int *);
    extern int snd_pcm_hw_params_get_format(const snd_pcm_hw_params_t *,
					    snd_pcm_format_t *);
    extern int snd_pcm_hw_params_get_channels_min(const snd_pcm_hw_params_t
						  *, unsigned int *);
    extern int snd_pcm_hw_params_get_tick_time(const snd_pcm_hw_params_t *,
					       unsigned int *, int *);
    extern int snd_pcm_hw_params_set_period_time_near(snd_pcm_t *,
						      snd_pcm_hw_params_t
						      *, unsigned int *,
						      int *);
    extern int snd_pcm_hw_params_set_channels_near(snd_pcm_t *,
						   snd_pcm_hw_params_t *,
						   unsigned int *);
    extern int snd_pcm_hw_params_get_rate_max(const snd_pcm_hw_params_t *,
					      unsigned int *, int *);
    extern int snd_pcm_hw_params_get_period_size(const snd_pcm_hw_params_t
						 *, snd_pcm_uframes_t *,
						 int *);
    extern int snd_pcm_hw_params_get_period_time_max(const
						     snd_pcm_hw_params_t *,
						     unsigned int *,
						     int *);
    extern int snd_pcm_hw_params_get_buffer_size(const snd_pcm_hw_params_t
						 *, snd_pcm_uframes_t *);
    extern int snd_pcm_hw_params_get_subformat(const snd_pcm_hw_params_t *,
					       snd_pcm_subformat_t *);
    extern int snd_pcm_hw_params_get_access(const snd_pcm_hw_params_t *,
					    snd_pcm_access_t *);
    extern int snd_pcm_hw_params_get_buffer_time_min(const
						     snd_pcm_hw_params_t *,
						     unsigned int *,
						     int *);
    extern int snd_pcm_hw_params_get_buffer_time(const snd_pcm_hw_params_t
						 *, unsigned int *, int *);
    extern int snd_pcm_hw_params_get_rate(const snd_pcm_hw_params_t *,
					  unsigned int *, int *);
    extern int snd_pcm_hw_params_get_period_size_max(const
						     snd_pcm_hw_params_t *,
						     snd_pcm_uframes_t *,
						     int *);
    extern int snd_pcm_hw_params_get_buffer_size_min(const
						     snd_pcm_hw_params_t *,
						     snd_pcm_uframes_t *);
    extern int snd_pcm_hw_params_get_periods(const snd_pcm_hw_params_t *,
					     unsigned int *, int *);
    extern int snd_pcm_hw_params_get_buffer_size_max(const
						     snd_pcm_hw_params_t *,
						     snd_pcm_uframes_t *);
    extern int snd_pcm_hw_params_set_period_size_near(snd_pcm_t *,
						      snd_pcm_hw_params_t
						      *,
						      snd_pcm_uframes_t *,
						      int *);
    extern int snd_pcm_hw_params_get_buffer_time_max(const
						     snd_pcm_hw_params_t *,
						     unsigned int *,
						     int *);
    extern int snd_pcm_hw_params_get_period_time_min(const
						     snd_pcm_hw_params_t *,
						     unsigned int *,
						     int *);
    extern int snd_pcm_hw_params_set_periods_near(snd_pcm_t *,
						  snd_pcm_hw_params_t *,
						  unsigned int *, int *);
    extern snd_pcm_sframes_t snd_pcm_forward(snd_pcm_t *,
					     snd_pcm_uframes_t);
    extern int snd_pcm_hw_params_set_rate_near(snd_pcm_t *,
					       snd_pcm_hw_params_t *,
					       unsigned int *, int *);
    extern int snd_pcm_hw_params_get_period_size_min(const
						     snd_pcm_hw_params_t *,
						     snd_pcm_uframes_t *,
						     int *);
    extern int snd_pcm_hw_params_get_tick_time_max(const
						   snd_pcm_hw_params_t *,
						   unsigned int *, int *);
    extern int snd_pcm_hw_params_get_periods_min(const snd_pcm_hw_params_t
						 *, unsigned int *, int *);
    extern int snd_pcm_hw_params_get_channels(const snd_pcm_hw_params_t *,
					      unsigned int *);
    extern int snd_pcm_hw_params_get_channels_max(const snd_pcm_hw_params_t
						  *, unsigned int *);
    extern int snd_pcm_hw_params_get_periods_max(const snd_pcm_hw_params_t
						 *, unsigned int *, int *);
    extern int snd_pcm_hw_params_set_buffer_size_near(snd_pcm_t *,
						      snd_pcm_hw_params_t
						      *,
						      snd_pcm_uframes_t *);
#ifdef __cplusplus
}
#endif
#endif
