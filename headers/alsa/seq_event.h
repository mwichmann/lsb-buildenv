#ifndef _ALSA_SEQ_EVENT_H_
#define _ALSA_SEQ_EVENT_H_

#include <cups/raster.h>

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

    typedef struct snd_seq_connect snd_seq_connect_t;

    typedef struct snd_seq_ev_cluster snd_seq_ev_cluster_t;

    typedef struct snd_seq_ev_ctrl snd_seq_ev_ctrl_t;

    typedef struct snd_seq_ev_ext snd_seq_ev_ext_t;

    typedef struct snd_seq_ev_instr_begin snd_seq_ev_instr_begin_t;

    typedef struct snd_seq_ev_loop snd_seq_ev_loop_t;

    typedef struct snd_seq_ev_note snd_seq_ev_note_t;

    typedef struct snd_seq_ev_queue_control snd_seq_ev_queue_control_t;

    typedef struct snd_seq_ev_raw32 snd_seq_ev_raw32_t;

    typedef struct snd_seq_ev_raw8 snd_seq_ev_raw8_t;

    typedef struct snd_seq_ev_sample_control snd_seq_ev_sample_control_t;

    typedef struct snd_seq_ev_sample snd_seq_ev_sample_t;

    typedef struct snd_seq_ev_volume snd_seq_ev_volume_t;

    typedef struct snd_seq_event snd_seq_event_t;

    typedef unsigned char snd_seq_event_type_t;

    typedef int snd_seq_frequency_t;

    typedef unsigned int snd_seq_instr_cluster_t;

    typedef struct snd_seq_instr snd_seq_instr_t;

    typedef unsigned int snd_seq_position_t;

    typedef struct snd_seq_queue_skew snd_seq_queue_skew_t;

    typedef struct snd_seq_real_time snd_seq_real_time_t;

    typedef struct snd_seq_result snd_seq_result_t;

    typedef enum snd_seq_stop_mode {
	SND_SEQ_SAMPLE_STOP_IMMEDIATELY,
	SND_SEQ_SAMPLE_STOP_VENVELOPE = 1,
	SND_SEQ_SAMPLE_STOP_LOOP = 2
    } snd_seq_stop_mode_t;

    typedef unsigned int snd_seq_tick_time_t;

    typedef union snd_seq_timestamp snd_seq_timestamp_t;

    struct snd_seq_ev_queue_control {
	unsigned char queue;
	unsigned char unused[3];
	union {
	    int value;		/* affected value (e.g. tempo) */
	    snd_seq_timestamp_t time;	/* time */
	    unsigned int position;	/* sync position */
	    snd_seq_queue_skew_t skew;	/* queue skew */
	    unsigned int d32[2];	/* any data */
	    unsigned char d8[8];	/* any data */
	} param;
    };

    struct snd_seq_ev_sample {
	unsigned int std;
	short unsigned int bank;
	short unsigned int prg;
    };

    struct snd_seq_ev_volume {
	short int volume;
	short int lr;
	short int fr;
	short int du;
    };

    struct snd_seq_real_time {
	unsigned int tv_sec;
	unsigned int tv_nsec;
    };

    union snd_seq_timestamp {
	snd_seq_tick_time_t tick;
	struct snd_seq_real_time time;
    };

    struct snd_seq_result {
	int event;
	int result;
    };


    struct snd_seq_addr {
	unsigned char client;
	unsigned char port;
    };


    struct snd_seq_connect {
	snd_seq_addr_t sender;
	snd_seq_addr_t dest;
    };


    struct snd_seq_ev_cluster {
	snd_seq_instr_cluster_t cluster;
    };


    struct snd_seq_ev_ctrl {
	unsigned char channel;
	unsigned char unused[3];
	unsigned int param;
	int value;
    };


    struct snd_seq_ev_ext {
	unsigned int len;
	void *ptr;
    };


    struct snd_seq_ev_instr_begin {
	int timeout;
    };


    struct snd_seq_ev_loop {
	unsigned int start;
	unsigned int end;
    };


    struct snd_seq_ev_note {
	unsigned char channel;
	unsigned char note;
	unsigned char velocity;
	unsigned char off_velocity;
	unsigned int duration;
    };


    struct snd_seq_ev_raw32 {
	unsigned int d[3];
    };


    struct snd_seq_ev_raw8 {
	unsigned char d[12];
    };


    struct snd_seq_ev_sample_control {
	unsigned char channel;
	unsigned char unused[3];
	union {
	    snd_seq_ev_sample_t sample;	/* sample number */
	    snd_seq_ev_cluster_t cluster;	/* cluster number */
	    snd_seq_position_t position;	/* position */
	    snd_seq_stop_mode_t stop_mode;	/* stop mode */
	    snd_seq_frequency_t frequency;	/* frequency */
	    snd_seq_ev_volume_t volume;	/* volume */
	    snd_seq_ev_loop_t loop;	/* loop control */
	    unsigned char raw8[8];	/* raw 8-bit */
	} param;
    };


    struct snd_seq_event {
	snd_seq_event_type_t type;
	unsigned char flags;
	unsigned char tag;
	unsigned char queue;
	snd_seq_timestamp_t time;
	snd_seq_addr_t source;
	snd_seq_addr_t dest;
	union {
	    snd_seq_ev_note_t note;	/* note information */
	    snd_seq_ev_ctrl_t control;	/* MIDI control information */
	    snd_seq_ev_raw8_t raw8;	/* raw8 data */
	    snd_seq_ev_raw32_t raw32;	/* raw32 data */
	    snd_seq_ev_ext_t ext;	/* external data */
	    snd_seq_ev_queue_control_t queue;	/* queue control */
	    snd_seq_timestamp_t time;	/* timestamp */
	    snd_seq_addr_t addr;	/* address */
	    snd_seq_connect_t connect;	/* connect information */
	    snd_seq_result_t result;	/* operation result code */
	    snd_seq_ev_instr_begin_t instr_begin;	/* instrument */
	    snd_seq_ev_sample_control_t sample;
	} data;
    };


    struct snd_seq_instr {
	snd_seq_instr_cluster_t cluster;
	unsigned int std;
	short unsigned int bank;
	short unsigned int prg;
    };


    struct snd_seq_queue_skew {
	unsigned int value;
	unsigned int base;
    };


#ifdef __cplusplus
}
#endif
#endif
