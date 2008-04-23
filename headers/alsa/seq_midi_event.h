#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_SEQ_MIDI_EVENT_H_
#define _ALSA_SEQ_MIDI_EVENT_H_

#include <stddef.h>
#include <alsa/seq_event.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
    typedef struct snd_midi_event snd_midi_event_t;

#endif				/* __LSB_VERSION__ >= 3.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 32
    extern long int snd_midi_event_decode(snd_midi_event_t *,
					  unsigned char *, long int,
					  const snd_seq_event_t *);
    extern long int snd_midi_event_encode(snd_midi_event_t *,
					  const unsigned char *, long int,
					  snd_seq_event_t *);
    extern int snd_midi_event_encode_byte(snd_midi_event_t *, int,
					  snd_seq_event_t *);
    extern void snd_midi_event_free(snd_midi_event_t *);
    extern void snd_midi_event_init(snd_midi_event_t *);
    extern int snd_midi_event_new(size_t, snd_midi_event_t * *);
    extern void snd_midi_event_reset_decode(snd_midi_event_t *);
    extern void snd_midi_event_reset_encode(snd_midi_event_t *);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
