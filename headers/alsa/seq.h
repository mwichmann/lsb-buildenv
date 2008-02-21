#ifndef _ALSA_SEQ_H_
#define _ALSA_SEQ_H_

#include <sys/types.h>
#include <stddef.h>
#include <sys/poll.h>
#include <jpeglib.h>
#include <stdint.h>
#include <alsa/seq_event.h>

#ifdef __cplusplus
extern "C" {
#endif


#define snd_seq_ev_is_prior(ev)	 \
	(((ev)->flags & SND_SEQ_PRIORITY_MASK) == SND_SEQ_PRIORITY_HIGH)
#define snd_seq_ev_length_type(ev)	 \
	((ev)->flags & SND_SEQ_EVENT_LENGTH_MASK)
#define snd_seq_ev_timemode_type(ev)	 \
	((ev)->flags & SND_SEQ_TIME_MODE_MASK)
#define snd_seq_ev_timestamp_type(ev)	 \
	((ev)->flags & SND_SEQ_TIME_STAMP_MASK)
#define snd_seq_ev_is_channel_type(ev)	 \
	(snd_seq_event_types[(ev)->type] & (_SND_SEQ_TYPE(SND_SEQ_EVFLG_NOTE) \
	| _SND_SEQ_TYPE(SND_SEQ_EVFLG_CONTROL)))
#define snd_seq_type_check(ev,x)	 \
	(snd_seq_event_types[(ev)->type] & _SND_SEQ_TYPE(x))
#define snd_seq_ev_is_fixed(ev)	 \
	(snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_FIXED)
#define snd_seq_ev_is_variable(ev)	 \
	(snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_VARIABLE)
#define snd_seq_ev_is_varusr(ev)	 \
	(snd_seq_ev_length_type(ev) == SND_SEQ_EVENT_LENGTH_VARUSR)
#define snd_seq_ev_is_abstime(ev)	 \
	(snd_seq_ev_timemode_type(ev) == SND_SEQ_TIME_MODE_ABS)
#define snd_seq_ev_is_reltime(ev)	 \
	(snd_seq_ev_timemode_type(ev) == SND_SEQ_TIME_MODE_REL)
#define snd_seq_ev_is_real(ev)	 \
	(snd_seq_ev_timestamp_type(ev) == SND_SEQ_TIME_STAMP_REAL)
#define snd_seq_ev_is_tick(ev)	 \
	(snd_seq_ev_timestamp_type(ev) == SND_SEQ_TIME_STAMP_TICK)
#define snd_seq_ev_is_subscribe_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_CONNECTION)
#define snd_seq_ev_is_control_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_CONTROL)
#define snd_seq_ev_is_fixed_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_FIXED)
#define snd_seq_ev_is_instr_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_INSTR)
#define snd_seq_ev_is_message_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_MESSAGE)
#define snd_seq_ev_is_note_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_NOTE)
#define snd_seq_ev_is_queue_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_QUEUE)
#define snd_seq_ev_is_result_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_RESULT)
#define snd_seq_ev_is_sample_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_SAMPLE)
#define snd_seq_ev_is_user_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_USERS)
#define snd_seq_ev_is_variable_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_VARIABLE)
#define snd_seq_ev_is_varusr_type(ev)	 \
	snd_seq_type_check(ev, SND_SEQ_EVFLG_VARUSR)
#define snd_seq_ev_is_reserved(ev)	(! snd_seq_event_types[(ev)->type])
#define snd_seq_ev_is_direct(ev)	((ev)->queue == SND_SEQ_QUEUE_DIRECT)
#define _SND_SEQ_TYPE_OPT(x)	((x)<<24)
#define _SND_SEQ_TYPE(x)	(1<<(x))
#define SND_SEQ_PORT_CAP_READ	(1<<0)
#define SND_SEQ_PORT_TYPE_SPECIFIC	(1<<0)
#define SND_SEQ_REMOVE_INPUT	(1<<0)
#define SND_SEQ_PORT_CAP_WRITE	(1<<1)
#define SND_SEQ_PORT_TYPE_MIDI_GENERIC	(1<<1)
#define SND_SEQ_REMOVE_OUTPUT	(1<<1)
#define SND_SEQ_PORT_TYPE_SYNTH	(1<<10)
#define SND_SEQ_PORT_TYPE_DIRECT_SAMPLE	(1<<11)
#define SND_SEQ_PORT_TYPE_SAMPLE	(1<<12)
#define SND_SEQ_PORT_TYPE_HARDWARE	(1<<16)
#define SND_SEQ_PORT_TYPE_SOFTWARE	(1<<17)
#define SND_SEQ_PORT_TYPE_SYNTHESIZER	(1<<18)
#define SND_SEQ_PORT_TYPE_PORT	(1<<19)
#define SND_SEQ_PORT_CAP_SYNC_READ	(1<<2)
#define SND_SEQ_PORT_TYPE_MIDI_GM	(1<<2)
#define SND_SEQ_REMOVE_DEST	(1<<2)
#define SND_SEQ_PORT_TYPE_APPLICATION	(1<<20)
#define SND_SEQ_PORT_CAP_SYNC_WRITE	(1<<3)
#define SND_SEQ_PORT_TYPE_MIDI_GS	(1<<3)
#define SND_SEQ_REMOVE_DEST_CHANNEL	(1<<3)
#define SND_SEQ_PORT_CAP_DUPLEX	(1<<4)
#define SND_SEQ_PORT_TYPE_MIDI_XG	(1<<4)
#define SND_SEQ_REMOVE_TIME_BEFORE	(1<<4)
#define SND_SEQ_PORT_CAP_SUBS_READ	(1<<5)
#define SND_SEQ_PORT_TYPE_MIDI_MT32	(1<<5)
#define SND_SEQ_REMOVE_TIME_AFTER	(1<<5)
#define SND_SEQ_PORT_CAP_SUBS_WRITE	(1<<6)
#define SND_SEQ_PORT_TYPE_MIDI_GM2	(1<<6)
#define SND_SEQ_REMOVE_TIME_TICK	(1<<6)
#define SND_SEQ_PORT_CAP_NO_EXPORT	(1<<7)
#define SND_SEQ_REMOVE_EVENT_TYPE	(1<<7)
#define SND_SEQ_REMOVE_IGNORE_OFF	(1<<8)
#define SND_SEQ_REMOVE_TAG_MATCH	(1<<9)
#define SND_SEQ_OPEN_DUPLEX	(SND_SEQ_OPEN_OUTPUT|SND_SEQ_OPEN_INPUT)
#define SND_SEQ_CLIENT_SYSTEM	0
#define SND_SEQ_PORT_SYSTEM_TIMER	0
#define SND_SEQ_NONBLOCK	0x0001
#define SND_SEQ_OPEN_OUTPUT	1
#define SND_SEQ_PORT_SYSTEM_ANNOUNCE	1
#define SND_SEQ_OPEN_INPUT	2
#define SND_SEQ_ADDRESS_UNKNOWN	253
#define SND_SEQ_QUEUE_DIRECT	253
#define SND_SEQ_ADDRESS_SUBSCRIBERS	254
#define SND_SEQ_ADDRESS_BROADCAST	255


    typedef struct sndrv_seq_client_info snd_seq_client_info_t;

    typedef struct sndrv_seq_client_pool snd_seq_client_pool_t;

    typedef enum snd_seq_client_type {
	SND_SEQ_USER_CLIENT = 1,
	SND_SEQ_KERNEL_CLIENT = 2
    } snd_seq_client_type_t;

    typedef struct sndrv_seq_port_info snd_seq_port_info_t;

    typedef struct sndrv_seq_port_subscribe snd_seq_port_subscribe_t;

    typedef enum {
	SND_SEQ_QUERY_SUBS_READ,
	SND_SEQ_QUERY_SUBS_WRITE = 1
    } snd_seq_query_subs_type_t;

    typedef struct sndrv_seq_query_subs snd_seq_query_subscribe_t;

    typedef struct sndrv_seq_queue_info snd_seq_queue_info_t;

    typedef struct sndrv_seq_queue_status snd_seq_queue_status_t;

    typedef struct sndrv_seq_queue_tempo snd_seq_queue_tempo_t;

    typedef struct sndrv_seq_queue_timer snd_seq_queue_timer_t;

    typedef enum {
	SND_SEQ_TIMER_ALSA,
	SND_SEQ_TIMER_MIDI_CLOCK = 1,
	SND_SEQ_TIMER_MIDI_TICK = 2
    } snd_seq_queue_timer_type_t;

    typedef struct sndrv_seq_remove_events snd_seq_remove_events_t;

    typedef struct sndrv_seq_system_info snd_seq_system_info_t;

    typedef struct _snd_seq snd_seq_t;

    typedef enum _snd_seq_type {
	SND_SEQ_TYPE_HW,
	SND_SEQ_TYPE_SHM = 1,
	SND_SEQ_TYPE_INET = 2
    } snd_seq_type_t;






































    extern int snd_seq_alloc_named_queue(snd_seq_t *, const char *);
    extern int snd_seq_alloc_queue(snd_seq_t *);
    extern int snd_seq_client_id(snd_seq_t *);
    extern void snd_seq_client_info_copy(snd_seq_client_info_t *,
					 const snd_seq_client_info_t *);
    extern void snd_seq_client_info_free(snd_seq_client_info_t *);
    extern int snd_seq_client_info_get_client(const snd_seq_client_info_t
					      *);
    extern const char *snd_seq_client_info_get_name(snd_seq_client_info_t
						    *);
    extern int snd_seq_client_info_get_num_ports(const
						 snd_seq_client_info_t *);
    extern snd_seq_client_type_t snd_seq_client_info_get_type(const
							      snd_seq_client_info_t
							      *);
    extern int snd_seq_client_info_malloc(snd_seq_client_info_t * *);
    extern void snd_seq_client_info_set_client(snd_seq_client_info_t *,
					       int);
    extern void snd_seq_client_info_set_name(snd_seq_client_info_t *,
					     const char *);
    extern size_t snd_seq_client_info_sizeof(void);
    extern int snd_seq_close(snd_seq_t *);
    extern int snd_seq_create_port(snd_seq_t *, snd_seq_port_info_t *);
    extern int snd_seq_delete_port(snd_seq_t *, int);
    extern int snd_seq_drain_output(snd_seq_t *);
    extern int snd_seq_drop_output(snd_seq_t *);
    extern int snd_seq_drop_output_buffer(snd_seq_t *);
    extern int snd_seq_event_input(snd_seq_t *, snd_seq_event_t * *);
    extern int snd_seq_event_input_pending(snd_seq_t *, int);
    extern ssize_t snd_seq_event_length(snd_seq_event_t *);
    extern int snd_seq_event_output(snd_seq_t *, snd_seq_event_t *);
    extern int snd_seq_event_output_direct(snd_seq_t *, snd_seq_event_t *);
    extern int snd_seq_free_event(snd_seq_event_t *);
    extern int snd_seq_free_queue(snd_seq_t *, int);
    extern int snd_seq_get_any_client_info(snd_seq_t *, int,
					   snd_seq_client_info_t *);
    extern int snd_seq_get_any_port_info(snd_seq_t *, int, int,
					 snd_seq_port_info_t *);
    extern int snd_seq_get_client_info(snd_seq_t *,
				       snd_seq_client_info_t *);
    extern size_t snd_seq_get_input_buffer_size(snd_seq_t *);
    extern size_t snd_seq_get_output_buffer_size(snd_seq_t *);
    extern int snd_seq_get_port_info(snd_seq_t *, int,
				     snd_seq_port_info_t *);
    extern int snd_seq_get_port_subscription(snd_seq_t *,
					     snd_seq_port_subscribe_t *);
    extern int snd_seq_get_queue_status(snd_seq_t *, int,
					snd_seq_queue_status_t *);
    extern int snd_seq_get_queue_tempo(snd_seq_t *, int,
				       snd_seq_queue_tempo_t *);
    extern int snd_seq_nonblock(snd_seq_t *, int);
    extern int snd_seq_open(snd_seq_t * *, const char *, int, int);
    extern int snd_seq_poll_descriptors(snd_seq_t *, struct pollfd *,
					unsigned int, short int);
    extern int snd_seq_poll_descriptors_count(snd_seq_t *, short int);
    extern int snd_seq_poll_descriptors_revents(snd_seq_t *,
						struct pollfd *,
						unsigned int,
						short unsigned int *);
    extern void snd_seq_port_info_copy(snd_seq_port_info_t *,
				       const snd_seq_port_info_t *);
    extern void snd_seq_port_info_free(snd_seq_port_info_t *);
    extern const snd_seq_addr_t *snd_seq_port_info_get_addr(const
							    snd_seq_port_info_t
							    *);
    extern unsigned int snd_seq_port_info_get_capability(const
							 snd_seq_port_info_t
							 *);
    extern int snd_seq_port_info_get_client(const snd_seq_port_info_t *);
    extern const char *snd_seq_port_info_get_name(const snd_seq_port_info_t
						  *);
    extern int snd_seq_port_info_get_port(const snd_seq_port_info_t *);
    extern unsigned int snd_seq_port_info_get_type(const
						   snd_seq_port_info_t *);
    extern int snd_seq_port_info_malloc(snd_seq_port_info_t * *);
    extern void snd_seq_port_info_set_capability(snd_seq_port_info_t *,
						 unsigned int);
    extern void snd_seq_port_info_set_client(snd_seq_port_info_t *, int);
    extern void snd_seq_port_info_set_midi_channels(snd_seq_port_info_t *,
						    int);
    extern void snd_seq_port_info_set_name(snd_seq_port_info_t *,
					   const char *);
    extern void snd_seq_port_info_set_port(snd_seq_port_info_t *, int);
    extern void snd_seq_port_info_set_port_specified(snd_seq_port_info_t *,
						     int);
    extern void snd_seq_port_info_set_timestamp_queue(snd_seq_port_info_t
						      *, int);
    extern void snd_seq_port_info_set_timestamp_real(snd_seq_port_info_t *,
						     int);
    extern void snd_seq_port_info_set_timestamping(snd_seq_port_info_t *,
						   int);
    extern void snd_seq_port_info_set_type(snd_seq_port_info_t *,
					   unsigned int);
    extern size_t snd_seq_port_info_sizeof(void);
    extern void snd_seq_port_subscribe_copy(snd_seq_port_subscribe_t *,
					    const snd_seq_port_subscribe_t
					    *);
    extern void snd_seq_port_subscribe_free(snd_seq_port_subscribe_t *);
    extern const snd_seq_addr_t *snd_seq_port_subscribe_get_dest(const
								 snd_seq_port_subscribe_t
								 *);
    extern int snd_seq_port_subscribe_get_exclusive(const
						    snd_seq_port_subscribe_t
						    *);
    extern int snd_seq_port_subscribe_get_queue(const
						snd_seq_port_subscribe_t
						*);
    extern const snd_seq_addr_t *snd_seq_port_subscribe_get_sender(const
								   snd_seq_port_subscribe_t
								   *);
    extern int snd_seq_port_subscribe_get_time_real(const
						    snd_seq_port_subscribe_t
						    *);
    extern int snd_seq_port_subscribe_get_time_update(const
						      snd_seq_port_subscribe_t
						      *);
    extern int snd_seq_port_subscribe_malloc(snd_seq_port_subscribe_t * *);
    extern void snd_seq_port_subscribe_set_dest(snd_seq_port_subscribe_t *,
						const snd_seq_addr_t *);
    extern void
	snd_seq_port_subscribe_set_exclusive(snd_seq_port_subscribe_t *,
					     int);
    extern void snd_seq_port_subscribe_set_queue(snd_seq_port_subscribe_t
						 *, int);
    extern void snd_seq_port_subscribe_set_sender(snd_seq_port_subscribe_t
						  *,
						  const snd_seq_addr_t *);
    extern void
	snd_seq_port_subscribe_set_time_real(snd_seq_port_subscribe_t *,
					     int);
    extern void
	snd_seq_port_subscribe_set_time_update(snd_seq_port_subscribe_t *,
					       int);
    extern size_t snd_seq_port_subscribe_sizeof(void);
    extern int snd_seq_query_next_client(snd_seq_t *,
					 snd_seq_client_info_t *);
    extern int snd_seq_query_next_port(snd_seq_t *, snd_seq_port_info_t *);
    extern int snd_seq_query_port_subscribers(snd_seq_t *,
					      snd_seq_query_subscribe_t *);
    extern void snd_seq_query_subscribe_copy(snd_seq_query_subscribe_t *,
					     const
					     snd_seq_query_subscribe_t *);
    extern void snd_seq_query_subscribe_free(snd_seq_query_subscribe_t *);
    extern const snd_seq_addr_t *snd_seq_query_subscribe_get_addr(const
								  snd_seq_query_subscribe_t
								  *);
    extern int snd_seq_query_subscribe_get_exclusive(const
						     snd_seq_query_subscribe_t
						     *);
    extern int snd_seq_query_subscribe_get_index(const
						 snd_seq_query_subscribe_t
						 *);
    extern int snd_seq_query_subscribe_get_queue(const
						 snd_seq_query_subscribe_t
						 *);
    extern const snd_seq_addr_t *snd_seq_query_subscribe_get_root(const
								  snd_seq_query_subscribe_t
								  *);
    extern int snd_seq_query_subscribe_get_time_real(const
						     snd_seq_query_subscribe_t
						     *);
    extern int snd_seq_query_subscribe_get_time_update(const
						       snd_seq_query_subscribe_t
						       *);
    extern int snd_seq_query_subscribe_malloc(snd_seq_query_subscribe_t *
					      *);
    extern void snd_seq_query_subscribe_set_index(snd_seq_query_subscribe_t
						  *, int);
    extern void snd_seq_query_subscribe_set_root(snd_seq_query_subscribe_t
						 *,
						 const snd_seq_addr_t *);
    extern void snd_seq_query_subscribe_set_type(snd_seq_query_subscribe_t
						 *,
						 snd_seq_query_subs_type_t);
    extern size_t snd_seq_query_subscribe_sizeof(void);
    extern void snd_seq_queue_status_copy(snd_seq_queue_status_t *,
					  const snd_seq_queue_status_t *);
    extern void snd_seq_queue_status_free(snd_seq_queue_status_t *);
    extern const snd_seq_real_time_t
	*snd_seq_queue_status_get_real_time(const snd_seq_queue_status_t
					    *);
    extern snd_seq_tick_time_t snd_seq_queue_status_get_tick_time(const
								  snd_seq_queue_status_t
								  *);
    extern int snd_seq_queue_status_malloc(snd_seq_queue_status_t * *);
    extern size_t snd_seq_queue_status_sizeof(void);
    extern void snd_seq_queue_tempo_copy(snd_seq_queue_tempo_t *,
					 const snd_seq_queue_tempo_t *);
    extern void snd_seq_queue_tempo_free(snd_seq_queue_tempo_t *);
    extern int snd_seq_queue_tempo_get_ppq(const snd_seq_queue_tempo_t *);
    extern unsigned int snd_seq_queue_tempo_get_tempo(const
						      snd_seq_queue_tempo_t
						      *);
    extern int snd_seq_queue_tempo_malloc(snd_seq_queue_tempo_t * *);
    extern void snd_seq_queue_tempo_set_ppq(snd_seq_queue_tempo_t *, int);
    extern void snd_seq_queue_tempo_set_tempo(snd_seq_queue_tempo_t *,
					      unsigned int);
    extern size_t snd_seq_queue_tempo_sizeof(void);
    extern int snd_seq_set_client_info(snd_seq_t *,
				       snd_seq_client_info_t *);
    extern int snd_seq_set_input_buffer_size(snd_seq_t *, size_t);
    extern int snd_seq_set_output_buffer_size(snd_seq_t *, size_t);
    extern int snd_seq_set_port_info(snd_seq_t *, int,
				     snd_seq_port_info_t *);
    extern int snd_seq_set_queue_tempo(snd_seq_t *, int,
				       snd_seq_queue_tempo_t *);
    extern int snd_seq_subscribe_port(snd_seq_t *,
				      snd_seq_port_subscribe_t *);
    extern int snd_seq_system_info(snd_seq_t *, snd_seq_system_info_t *);
    extern void snd_seq_system_info_copy(snd_seq_system_info_t *,
					 const snd_seq_system_info_t *);
    extern void snd_seq_system_info_free(snd_seq_system_info_t *);
    extern int snd_seq_system_info_get_clients(const snd_seq_system_info_t
					       *);
    extern int snd_seq_system_info_get_ports(const snd_seq_system_info_t
					     *);
    extern int snd_seq_system_info_get_queues(const snd_seq_system_info_t
					      *);
    extern int snd_seq_system_info_malloc(snd_seq_system_info_t * *);
    extern size_t snd_seq_system_info_sizeof(void);
    extern int snd_seq_unsubscribe_port(snd_seq_t *,
					snd_seq_port_subscribe_t *);
    extern const unsigned int snd_seq_event_types[];
#ifdef __cplusplus
}
#endif
#endif