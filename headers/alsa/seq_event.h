#ifndef _ALSA_SEQ_EVENT_H_
#define _ALSA_SEQ_EVENT_H_


#ifdef __cplusplus
extern "C" {
#endif



#define SND_SEQ_TIME_STAMP_TICK	(0<<0)
#define SND_SEQ_TIME_MODE_ABS	(0<<1)
#define SND_SEQ_EVENT_LENGTH_FIXED	(0<<2)
#define SND_SEQ_PRIORITY_NORMAL	(0<<4)
#define SND_SEQ_TIME_STAMP_MASK	(1<<0)
#define SND_SEQ_TIME_STAMP_REAL	(1<<0)
#define SND_SEQ_TIME_MODE_MASK	(1<<1)
#define SND_SEQ_TIME_MODE_REL	(1<<1)
#define SND_SEQ_EVENT_LENGTH_VARIABLE	(1<<2)
#define SND_SEQ_PRIORITY_HIGH	(1<<4)
#define SND_SEQ_PRIORITY_MASK	(1<<4)
#define SND_SEQ_EVENT_LENGTH_VARUSR	(2<<2)
#define SND_SEQ_EVENT_LENGTH_MASK	(3<<2)


    typedef struct snd_seq_addr snd_seq_addr_t;

    typedef struct snd_seq_event snd_seq_event_t;

    typedef unsigned char snd_seq_event_type_t;

    typedef unsigned int snd_seq_instr_cluster_t;

    typedef struct snd_seq_instr snd_seq_instr_t;

    typedef struct snd_seq_real_time snd_seq_real_time_t;

    typedef unsigned int snd_seq_tick_time_t;

    typedef union snd_seq_timestamp snd_seq_timestamp_t;

    struct snd_seq_real_time {
	unsigned int tv_sec;
	unsigned int tv_nsec;
    };

    union snd_seq_timestamp {
	snd_seq_tick_time_t tick;
	struct snd_seq_real_time time;
    };


    struct snd_seq_addr {
	unsigned char client;
	unsigned char port;
    };


    struct snd_seq_event {
	snd_seq_event_type_t type;
	unsigned char flags;
	unsigned char tag;
	unsigned char queue;
	snd_seq_timestamp_t time;
	snd_seq_addr_t source;
	snd_seq_addr_t dest;
	union data;
    };


    struct snd_seq_instr {
	snd_seq_instr_cluster_t cluster;
	unsigned int std;
	short unsigned int bank;
	short unsigned int prg;
    };


#ifdef __cplusplus
}
#endif
#endif
