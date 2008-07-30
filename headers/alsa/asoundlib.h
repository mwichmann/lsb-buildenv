#if (__LSB_VERSION__ >= 40 )
#ifndef _ALSA_ASOUNDLIB_H_
#define _ALSA_ASOUNDLIB_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <endian.h>
#include <sys/poll.h>
#include <errno.h>
#include <stdarg.h>
#include <alsa/asoundef.h>
#include <alsa/version.h>
#include <alsa/global.h>
#include <alsa/input.h>
#include <alsa/output.h>
#include <alsa/error.h>
#include <alsa/conf.h>
#include <alsa/pcm.h>
#include <alsa/rawmidi.h>
#include <alsa/timer.h>
#include <alsa/hwdep.h>
#include <alsa/control.h>
#include <alsa/mixer.h>
#include <alsa/seq_event.h>
#include <alsa/seq.h>
#include <alsa/seqmid.h>
#include <alsa/seq_midi_event.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
