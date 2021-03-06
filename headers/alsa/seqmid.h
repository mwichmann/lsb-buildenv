#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_SEQMID_H_
#define _ALSA_SEQMID_H_

#include <alsa/seq_event.h>
#include <alsa/seq.h>

#ifdef __cplusplus
extern "C" {
#endif


#define snd_seq_ev_set_dest(ev,c,p)	 \
	((ev)->dest.client = (c), (ev)->dest.port = (p))
#define snd_seq_ev_set_broadcast(ev)	 \
	((ev)->dest.client = SND_SEQ_ADDRESS_BROADCAST, (ev)->dest.port = \
	SND_SEQ_ADDRESS_BROADCAST)
#define snd_seq_ev_set_subs(ev)	 \
	((ev)->dest.client = SND_SEQ_ADDRESS_SUBSCRIBERS, (ev)->dest.port = \
	SND_SEQ_ADDRESS_UNKNOWN)
#define snd_seq_ev_set_fixed(ev)	 \
	((ev)->flags &= ~SND_SEQ_EVENT_LENGTH_MASK, (ev)->flags |= \
	SND_SEQ_EVENT_LENGTH_FIXED)
#define snd_seq_ev_set_chanpress(ev,ch,val)	 \
	((ev)->type = SND_SEQ_EVENT_CHANPRESS, snd_seq_ev_set_fixed(ev), \
	(ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_controller(ev,ch,cc,val)	 \
	((ev)->type = SND_SEQ_EVENT_CONTROLLER, snd_seq_ev_set_fixed(ev), \
	(ev)->data.control.channel = (ch), (ev)->data.control.param = (cc), \
	(ev)->data.control.value = (val))
#define snd_seq_ev_set_keypress(ev,ch,key,vel)	 \
	((ev)->type = SND_SEQ_EVENT_KEYPRESS, snd_seq_ev_set_fixed(ev), \
	(ev)->data.note.channel = (ch), (ev)->data.note.note = (key), \
	(ev)->data.note.velocity = (vel))
#define snd_seq_ev_set_pgmchange(ev,ch,val)	 \
	((ev)->type = SND_SEQ_EVENT_PGMCHANGE, snd_seq_ev_set_fixed(ev), \
	(ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_pitchbend(ev,ch,val)	 \
	((ev)->type = SND_SEQ_EVENT_PITCHBEND, snd_seq_ev_set_fixed(ev), \
	(ev)->data.control.channel = (ch), (ev)->data.control.value = (val))
#define snd_seq_ev_set_direct(ev)	((ev)->queue = SND_SEQ_QUEUE_DIRECT)
#define snd_seq_ev_set_source(ev,p)	((ev)->source.port = (p))
#define snd_seq_ev_set_tag(ev,t)	((ev)->tag = (t))
#define snd_seq_ev_clear(ev)	memset(ev, 0, sizeof(snd_seq_event_t))



/* Function prototypes */

    extern int snd_seq_connect_from(snd_seq_t * seq, int my_port,
				    int src_client, int src_port);
    extern int snd_seq_connect_to(snd_seq_t * seq, int my_port,
				  int dest_client, int dest_port);
    extern int snd_seq_control_queue(snd_seq_t * seq, int q, int type,
				     int value, snd_seq_event_t * ev);
    extern int snd_seq_create_simple_port(snd_seq_t * seq,
					  const char *name,
					  unsigned int caps,
					  unsigned int type);
    extern int snd_seq_delete_simple_port(snd_seq_t * seq, int port);
    extern int snd_seq_disconnect_from(snd_seq_t * seq, int my_port,
				       int src_client, int src_port);
    extern int snd_seq_disconnect_to(snd_seq_t * seq, int my_port,
				     int dest_client, int dest_port);
    extern int snd_seq_parse_address(snd_seq_t * seq,
				     snd_seq_addr_t * addr,
				     const char *str);
    extern int snd_seq_set_client_name(snd_seq_t * seq, const char *name);
    extern int snd_seq_sync_output_queue(snd_seq_t * seq);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
