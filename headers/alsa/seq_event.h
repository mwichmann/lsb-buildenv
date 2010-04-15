#if (__LSB_VERSION__ >= 32 )
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

    typedef struct snd_seq_ev_ctrl snd_seq_ev_ctrl_t;

    typedef struct snd_seq_ev_ext snd_seq_ev_ext_t;

    typedef struct snd_seq_ev_note snd_seq_ev_note_t;

    typedef struct snd_seq_ev_queue_control snd_seq_ev_queue_control_t;

    typedef struct snd_seq_ev_raw32 snd_seq_ev_raw32_t;

    typedef struct snd_seq_ev_raw8 snd_seq_ev_raw8_t;

    typedef struct snd_seq_event snd_seq_event_t;

    typedef unsigned char snd_seq_event_type_t;

    typedef struct snd_seq_queue_skew snd_seq_queue_skew_t;

    typedef struct snd_seq_real_time snd_seq_real_time_t;

    typedef struct snd_seq_result snd_seq_result_t;

    typedef unsigned int snd_seq_tick_time_t;

    typedef union snd_seq_timestamp snd_seq_timestamp_t;

#if __LSB_VERSION__ < 40
    typedef struct snd_seq_ev_cluster snd_seq_ev_cluster_t;

    typedef struct snd_seq_ev_instr_begin snd_seq_ev_instr_begin_t;

    typedef struct snd_seq_ev_loop snd_seq_ev_loop_t;

    typedef struct snd_seq_ev_sample_control snd_seq_ev_sample_control_t;

    typedef struct snd_seq_ev_sample snd_seq_ev_sample_t;

    typedef struct snd_seq_ev_volume snd_seq_ev_volume_t;

    typedef int snd_seq_frequency_t;

    typedef unsigned int snd_seq_instr_cluster_t;

    typedef struct snd_seq_instr snd_seq_instr_t;

    typedef unsigned int snd_seq_position_t;

    typedef enum snd_seq_stop_mode {
	SND_SEQ_SAMPLE_STOP_IMMEDIATELY,
	SND_SEQ_SAMPLE_STOP_VENVELOPE = 1,
	SND_SEQ_SAMPLE_STOP_LOOP = 2
    } snd_seq_stop_mode_t;

#endif				/* __LSB_VERSION__ < 4.0 */

    struct snd_seq_real_time {
	unsigned int tv_sec;
	unsigned int tv_nsec;
    };

    struct snd_seq_queue_skew {
	unsigned int value;
	unsigned int base;
    };

    union snd_seq_timestamp {
	snd_seq_tick_time_t tick;
	struct snd_seq_real_time time;
    };

    struct snd_seq_result {
	int event;
	int result;
    };

#if __LSB_VERSION__ < 40
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

#endif				/* __LSB_VERSION__ < 4.0 */

#if __LSB_VERSION__ >= 41
    enum snd_seq_event_type {
	SND_SEQ_EVENT_SYSTEM = 0,	/* system status; event data type = #snd_seq_result_t */
	SND_SEQ_EVENT_RESULT,	/* returned result status; event data type = #snd_seq_result_t */
	SND_SEQ_EVENT_NOTE = 5,	/* note on and off with duration; event data type = #snd_seq_ev_note_t */
	SND_SEQ_EVENT_NOTEON,	/* note on; event data type = #snd_seq_ev_note_t */
	SND_SEQ_EVENT_NOTEOFF,	/* note off; event data type = #snd_seq_ev_note_t */
	SND_SEQ_EVENT_KEYPRESS,	/* key pressure change (aftertouch); event data type = #snd_seq_ev_note_t */
	SND_SEQ_EVENT_CONTROLLER = 10,	/* controller; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_PGMCHANGE,	/* program change; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_CHANPRESS,	/* channel pressure; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_PITCHBEND,	/* pitchwheel; event data type = #snd_seq_ev_ctrl_t; data is from -8192 to 8191) */
	SND_SEQ_EVENT_CONTROL14,	/* 14 bit controller value; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_NONREGPARAM,	/* 14 bit NRPN;  event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_REGPARAM,	/* 14 bit RPN; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_SONGPOS = 20,	/* SPP with LSB and MSB values; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_SONGSEL,	/* Song Select with song ID number; event data type = #snd_seq_ev_ctrl_ */
	SND_SEQ_EVENT_QFRAME,	/* midi time code quarter frame; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_TIMESIGN,	/* SMF Time Signature event; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_KEYSIGN,	/* SMF Key Signature event; event data type = #snd_seq_ev_ctrl_t */
	SND_SEQ_EVENT_START = 30,	/* MIDI Real Time Start message; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_CONTINUE,	/* MIDI Real Time Continue message; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_STOP,	/* MIDI Real Time Stop message; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_SETPOS_TICK,	/* Set tick queue position; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_SETPOS_TIME,	/* Set real-time queue position; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_TEMPO,	/* (SMF) Tempo event; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_CLOCK,	/* MIDI Real Time Clock message; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_TICK,	/* MIDI Real Time Tick message; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_QUEUE_SKEW,	/* Queue timer skew; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_SYNC_POS,	/* Sync position changed; event data type = #snd_seq_ev_queue_control_t */
	SND_SEQ_EVENT_TUNE_REQUEST = 40,	/* Tune request; event data type = none */
	SND_SEQ_EVENT_RESET,	/* Reset to power-on state; event data type = none */
	SND_SEQ_EVENT_SENSING,	/* Active sensing event; event data type = none */
	SND_SEQ_EVENT_ECHO = 50,	/* Echo-back event; event data type = any type */
	SND_SEQ_EVENT_OSS,	/* OSS emulation raw event; event data type = any type */
	SND_SEQ_EVENT_CLIENT_START = 60,	/* New client has connected; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_CLIENT_EXIT,	/* Client has left the system; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_CLIENT_CHANGE,	/* Client status/info has changed; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_PORT_START,	/* New port was created; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_PORT_EXIT,	/* Port was deleted from system; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_PORT_CHANGE,	/* Port status/info has changed; event data type = #snd_seq_addr_t */
	SND_SEQ_EVENT_PORT_SUBSCRIBED,	/* Ports connected; event data type = #snd_seq_connect_t */
	SND_SEQ_EVENT_PORT_UNSUBSCRIBED,	/* Ports disconnected; event data type = #snd_seq_connect_t */
	SND_SEQ_EVENT_USR0 = 90,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR1,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR2,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR3,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR4,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR5,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR6,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR7,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR8,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_USR9,	/* user-defined event; event data type = any (fixed size) */
	SND_SEQ_EVENT_SYSEX = 130,	/* system exclusive data (variable length);  event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_BOUNCE,	/* error event;  event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_USR_VAR0 = 135,	/* reserved for user apps; event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_USR_VAR1,	/* reserved for user apps; event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_USR_VAR2,	/* reserved for user apps; event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_USR_VAR3,	/* reserved for user apps; event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_USR_VAR4,	/* reserved for user apps; event data type = #snd_seq_ev_ext_t */
	SND_SEQ_EVENT_NONE = 255	/* NOP; ignored in any case */
    };

#endif				/* __LSB_VERSION__ >= 4.1 */

    struct snd_seq_addr {
	unsigned char client;
	unsigned char port;
    };

    struct snd_seq_connect {
	snd_seq_addr_t sender;
	snd_seq_addr_t dest;
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

    struct snd_seq_ev_note {
	unsigned char channel;
	unsigned char note;
	unsigned char velocity;
	unsigned char off_velocity;
	unsigned int duration;
    };

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

    struct snd_seq_ev_raw32 {
	unsigned int d[3];
    };

    struct snd_seq_ev_raw8 {
	unsigned char d[12];
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
	} data;
    };

#if __LSB_VERSION__ < 40
    struct snd_seq_ev_cluster {
	snd_seq_instr_cluster_t cluster;
    };

    struct snd_seq_ev_instr_begin {
	int timeout;
    };

    struct snd_seq_ev_loop {
	unsigned int start;
	unsigned int end;
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

    struct snd_seq_instr {
	snd_seq_instr_cluster_t cluster;
	unsigned int std;
	short unsigned int bank;
	short unsigned int prg;
    };

#endif				/* __LSB_VERSION__ < 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
