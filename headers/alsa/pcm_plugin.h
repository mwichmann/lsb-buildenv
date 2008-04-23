#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_PCM_PLUGIN_H_
#define _ALSA_PCM_PLUGIN_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define SND_PCM_PLUGIN_ROUTE_HALF	0.5
#define SND_PCM_PLUGIN_ROUTE_FLOAT	1
#define SND_PCM_PLUGIN_ROUTE_FULL	1.0
#define SND_PCM_PLUGIN_ROUTE_RESOLUTION	16
#define SND_PCM_PLUGIN_RATE_MAX	192000
#define SND_PCM_PLUGIN_RATE_MIN	4000
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 32
    typedef float snd_pcm_route_ttable_entry_t;

#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
