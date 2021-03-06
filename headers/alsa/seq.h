#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_SEQ_H_
#define _ALSA_SEQ_H_

#include <stddef.h>
#include <sys/poll.h>
#include <jpeglib.h>
#include <stdint.h>
#include <alsa/seq_event.h>
#include <lsb/types.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

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


/* Function prototypes */

    extern int snd_seq_alloc_named_queue(snd_seq_t * seq,
					 const char *name);
    extern int snd_seq_alloc_queue(snd_seq_t * handle);
    extern int snd_seq_client_id(snd_seq_t * handle);
    extern void snd_seq_client_info_copy(snd_seq_client_info_t * dst,
					 const snd_seq_client_info_t *
					 src);
    extern void snd_seq_client_info_free(snd_seq_client_info_t * ptr);
    extern int snd_seq_client_info_get_client(const snd_seq_client_info_t *
					      info);
    extern const char *snd_seq_client_info_get_name(snd_seq_client_info_t *
						    info);
    extern int snd_seq_client_info_get_num_ports(const
						 snd_seq_client_info_t *
						 info);
    extern snd_seq_client_type_t snd_seq_client_info_get_type(const
							      snd_seq_client_info_t
							      * info);
    extern int snd_seq_client_info_malloc(snd_seq_client_info_t * *ptr);
    extern void snd_seq_client_info_set_client(snd_seq_client_info_t *
					       info, int client);
    extern void snd_seq_client_info_set_name(snd_seq_client_info_t * info,
					     const char *name);
    extern size_t snd_seq_client_info_sizeof(void);
    extern int snd_seq_close(snd_seq_t * handle);
    extern int snd_seq_create_port(snd_seq_t * handle,
				   snd_seq_port_info_t * info);
    extern int snd_seq_delete_port(snd_seq_t * handle, int port);
    extern int snd_seq_drain_output(snd_seq_t * handle);
    extern int snd_seq_drop_output(snd_seq_t * handle);
    extern int snd_seq_drop_output_buffer(snd_seq_t * handle);
    extern int snd_seq_event_input(snd_seq_t * handle,
				   snd_seq_event_t * *ev);
    extern int snd_seq_event_input_pending(snd_seq_t * seq,
					   int fetch_sequencer);
    extern ssize_t snd_seq_event_length(snd_seq_event_t * ev);
    extern int snd_seq_event_output(snd_seq_t * handle,
				    snd_seq_event_t * ev);
    extern int snd_seq_event_output_direct(snd_seq_t * handle,
					   snd_seq_event_t * ev);
    extern const unsigned int snd_seq_event_types[];
    /* This function was used to release the event pointer which was allocated by snd_seq_event_input(). In the modern ALSA versions, the event record is not allocated, so you don't have to call this function any more. */
    extern int snd_seq_free_event(snd_seq_event_t * ev)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern int snd_seq_free_queue(snd_seq_t * handle, int q);
    extern int snd_seq_get_any_client_info(snd_seq_t * handle, int client,
					   snd_seq_client_info_t * info);
    extern int snd_seq_get_any_port_info(snd_seq_t * handle, int client,
					 int port,
					 snd_seq_port_info_t * info);
    extern int snd_seq_get_client_info(snd_seq_t * handle,
				       snd_seq_client_info_t * info);
    extern size_t snd_seq_get_input_buffer_size(snd_seq_t * handle);
    extern size_t snd_seq_get_output_buffer_size(snd_seq_t * handle);
    extern int snd_seq_get_port_info(snd_seq_t * handle, int port,
				     snd_seq_port_info_t * info);
    extern int snd_seq_get_port_subscription(snd_seq_t * handle,
					     snd_seq_port_subscribe_t *
					     sub);
    extern int snd_seq_get_queue_status(snd_seq_t * handle, int q,
					snd_seq_queue_status_t * status);
    extern int snd_seq_get_queue_tempo(snd_seq_t * handle, int q,
				       snd_seq_queue_tempo_t * tempo);
    extern int snd_seq_nonblock(snd_seq_t * handle, int nonblock);
    extern int snd_seq_open(snd_seq_t * *handle, const char *name,
			    int streams, int mode);
    extern int snd_seq_poll_descriptors(snd_seq_t * handle,
					struct pollfd *pfds,
					unsigned int space,
					short int events);
    extern int snd_seq_poll_descriptors_count(snd_seq_t * handle,
					      short int events);
    extern int snd_seq_poll_descriptors_revents(snd_seq_t * seq,
						struct pollfd *pfds,
						unsigned int nfds,
						short unsigned int
						*revents);
    extern void snd_seq_port_info_copy(snd_seq_port_info_t * dst,
				       const snd_seq_port_info_t * src);
    extern void snd_seq_port_info_free(snd_seq_port_info_t * ptr);
    extern const snd_seq_addr_t *snd_seq_port_info_get_addr(const
							    snd_seq_port_info_t
							    * info);
    extern unsigned int snd_seq_port_info_get_capability(const
							 snd_seq_port_info_t
							 * info);
    extern int snd_seq_port_info_get_client(const snd_seq_port_info_t *
					    info);
    extern const char *snd_seq_port_info_get_name(const snd_seq_port_info_t
						  * info);
    extern int snd_seq_port_info_get_port(const snd_seq_port_info_t *
					  info);
    extern unsigned int snd_seq_port_info_get_type(const
						   snd_seq_port_info_t *
						   info);
    extern int snd_seq_port_info_malloc(snd_seq_port_info_t * *ptr);
    extern void snd_seq_port_info_set_capability(snd_seq_port_info_t *
						 info,
						 unsigned int capability);
    extern void snd_seq_port_info_set_client(snd_seq_port_info_t * info,
					     int client);
    extern void snd_seq_port_info_set_midi_channels(snd_seq_port_info_t *
						    info, int channels);
    extern void snd_seq_port_info_set_name(snd_seq_port_info_t * info,
					   const char *name);
    extern void snd_seq_port_info_set_port(snd_seq_port_info_t * info,
					   int port);
    extern void snd_seq_port_info_set_port_specified(snd_seq_port_info_t *
						     info, int val);
    extern void snd_seq_port_info_set_timestamp_queue(snd_seq_port_info_t *
						      info, int queue);
    extern void snd_seq_port_info_set_timestamp_real(snd_seq_port_info_t *
						     info, int realtime);
    extern void snd_seq_port_info_set_timestamping(snd_seq_port_info_t *
						   info, int enable);
    extern void snd_seq_port_info_set_type(snd_seq_port_info_t * info,
					   unsigned int type);
    extern size_t snd_seq_port_info_sizeof(void);
    extern void snd_seq_port_subscribe_copy(snd_seq_port_subscribe_t * dst,
					    const snd_seq_port_subscribe_t
					    * src);
    extern void snd_seq_port_subscribe_free(snd_seq_port_subscribe_t *
					    ptr);
    extern const snd_seq_addr_t *snd_seq_port_subscribe_get_dest(const
								 snd_seq_port_subscribe_t
								 * info);
    extern int snd_seq_port_subscribe_get_exclusive(const
						    snd_seq_port_subscribe_t
						    * info);
    extern int snd_seq_port_subscribe_get_queue(const
						snd_seq_port_subscribe_t *
						info);
    extern const snd_seq_addr_t *snd_seq_port_subscribe_get_sender(const
								   snd_seq_port_subscribe_t
								   * info);
    extern int snd_seq_port_subscribe_get_time_real(const
						    snd_seq_port_subscribe_t
						    * info);
    extern int snd_seq_port_subscribe_get_time_update(const
						      snd_seq_port_subscribe_t
						      * info);
    extern int snd_seq_port_subscribe_malloc(snd_seq_port_subscribe_t *
					     *ptr);
    extern void snd_seq_port_subscribe_set_dest(snd_seq_port_subscribe_t *
						info,
						const snd_seq_addr_t *
						addr);
    extern void
	snd_seq_port_subscribe_set_exclusive(snd_seq_port_subscribe_t *
					     info, int val);
    extern void snd_seq_port_subscribe_set_queue(snd_seq_port_subscribe_t *
						 info, int q);
    extern void snd_seq_port_subscribe_set_sender(snd_seq_port_subscribe_t
						  * info,
						  const snd_seq_addr_t *
						  addr);
    extern void
	snd_seq_port_subscribe_set_time_real(snd_seq_port_subscribe_t *
					     info, int val);
    extern void
	snd_seq_port_subscribe_set_time_update(snd_seq_port_subscribe_t *
					       info, int val);
    extern size_t snd_seq_port_subscribe_sizeof(void);
    extern int snd_seq_query_next_client(snd_seq_t * handle,
					 snd_seq_client_info_t * info);
    extern int snd_seq_query_next_port(snd_seq_t * handle,
				       snd_seq_port_info_t * info);
    extern int snd_seq_query_port_subscribers(snd_seq_t * seq,
					      snd_seq_query_subscribe_t *
					      subs);
    extern void snd_seq_query_subscribe_copy(snd_seq_query_subscribe_t *
					     dst,
					     const
					     snd_seq_query_subscribe_t *
					     src);
    extern void snd_seq_query_subscribe_free(snd_seq_query_subscribe_t *
					     ptr);
    extern const snd_seq_addr_t *snd_seq_query_subscribe_get_addr(const
								  snd_seq_query_subscribe_t
								  * info);
    extern int snd_seq_query_subscribe_get_exclusive(const
						     snd_seq_query_subscribe_t
						     * info);
    extern int snd_seq_query_subscribe_get_index(const
						 snd_seq_query_subscribe_t
						 * info);
    extern int snd_seq_query_subscribe_get_queue(const
						 snd_seq_query_subscribe_t
						 * info);
    extern const snd_seq_addr_t *snd_seq_query_subscribe_get_root(const
								  snd_seq_query_subscribe_t
								  * info);
    extern int snd_seq_query_subscribe_get_time_real(const
						     snd_seq_query_subscribe_t
						     * info);
    extern int snd_seq_query_subscribe_get_time_update(const
						       snd_seq_query_subscribe_t
						       * info);
    extern int snd_seq_query_subscribe_malloc(snd_seq_query_subscribe_t *
					      *ptr);
    extern void snd_seq_query_subscribe_set_index(snd_seq_query_subscribe_t
						  * info, int _index);
    extern void snd_seq_query_subscribe_set_root(snd_seq_query_subscribe_t
						 * info,
						 const snd_seq_addr_t *
						 addr);
    extern void snd_seq_query_subscribe_set_type(snd_seq_query_subscribe_t
						 * info,
						 snd_seq_query_subs_type_t
						 type);
    extern size_t snd_seq_query_subscribe_sizeof(void);
    extern void snd_seq_queue_status_copy(snd_seq_queue_status_t * dst,
					  const snd_seq_queue_status_t *
					  src);
    extern void snd_seq_queue_status_free(snd_seq_queue_status_t * ptr);
    extern const snd_seq_real_time_t
	*snd_seq_queue_status_get_real_time(const snd_seq_queue_status_t *
					    info);
    extern snd_seq_tick_time_t snd_seq_queue_status_get_tick_time(const
								  snd_seq_queue_status_t
								  * info);
    extern int snd_seq_queue_status_malloc(snd_seq_queue_status_t * *ptr);
    extern size_t snd_seq_queue_status_sizeof(void);
    extern void snd_seq_queue_tempo_copy(snd_seq_queue_tempo_t * dst,
					 const snd_seq_queue_tempo_t *
					 src);
    extern void snd_seq_queue_tempo_free(snd_seq_queue_tempo_t * ptr);
    extern int snd_seq_queue_tempo_get_ppq(const snd_seq_queue_tempo_t *
					   info);
    extern unsigned int snd_seq_queue_tempo_get_tempo(const
						      snd_seq_queue_tempo_t
						      * info);
    extern int snd_seq_queue_tempo_malloc(snd_seq_queue_tempo_t * *ptr);
    extern void snd_seq_queue_tempo_set_ppq(snd_seq_queue_tempo_t * info,
					    int ppq);
    extern void snd_seq_queue_tempo_set_tempo(snd_seq_queue_tempo_t * info,
					      unsigned int tempo);
    extern size_t snd_seq_queue_tempo_sizeof(void);
    extern int snd_seq_set_client_info(snd_seq_t * handle,
				       snd_seq_client_info_t * info);
    extern int snd_seq_set_input_buffer_size(snd_seq_t * handle,
					     size_t size);
    extern int snd_seq_set_output_buffer_size(snd_seq_t * handle,
					      size_t size);
    extern int snd_seq_set_port_info(snd_seq_t * handle, int port,
				     snd_seq_port_info_t * info);
    extern int snd_seq_set_queue_tempo(snd_seq_t * handle, int q,
				       snd_seq_queue_tempo_t * tempo);
    extern int snd_seq_subscribe_port(snd_seq_t * handle,
				      snd_seq_port_subscribe_t * sub);
    extern int snd_seq_system_info(snd_seq_t * handle,
				   snd_seq_system_info_t * info);
    extern void snd_seq_system_info_copy(snd_seq_system_info_t * dst,
					 const snd_seq_system_info_t *
					 src);
    extern void snd_seq_system_info_free(snd_seq_system_info_t * ptr);
    extern int snd_seq_system_info_get_clients(const snd_seq_system_info_t
					       * info);
    extern int snd_seq_system_info_get_ports(const snd_seq_system_info_t *
					     info);
    extern int snd_seq_system_info_get_queues(const snd_seq_system_info_t *
					      info);
    extern int snd_seq_system_info_malloc(snd_seq_system_info_t * *ptr);
    extern size_t snd_seq_system_info_sizeof(void);
    extern int snd_seq_unsubscribe_port(snd_seq_t * handle,
					snd_seq_port_subscribe_t * sub);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
