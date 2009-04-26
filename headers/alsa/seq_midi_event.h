#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_SEQ_MIDI_EVENT_H_
#define _ALSA_SEQ_MIDI_EVENT_H_

#include <stddef.h>
#include <alsa/seq_event.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct snd_midi_event snd_midi_event_t;


/* Function prototypes */

    extern long int snd_midi_event_decode(snd_midi_event_t * dev,
					  unsigned char *buf,
					  long int count,
					  const snd_seq_event_t * ev);
    extern long int snd_midi_event_encode(snd_midi_event_t * dev,
					  const unsigned char *buf,
					  long int count,
					  snd_seq_event_t * ev);
    extern int snd_midi_event_encode_byte(snd_midi_event_t * dev, int c,
					  snd_seq_event_t * ev);
    extern void snd_midi_event_free(snd_midi_event_t * dev);
    extern void snd_midi_event_init(snd_midi_event_t * dev);
    extern int snd_midi_event_new(size_t bufsize,
				  snd_midi_event_t * *rdev);
    extern void snd_midi_event_reset_decode(snd_midi_event_t * dev);
    extern void snd_midi_event_reset_encode(snd_midi_event_t * dev);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
