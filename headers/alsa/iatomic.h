#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_IATOMIC_H_
#define _ALSA_IATOMIC_H_


#ifdef __cplusplus
extern "C" {
#endif


#define atomic_set(v,i)	(((v)->counter) = (i))
#define atomic_read(v)	((v)->counter)
#define ATOMIC_INIT(i)	{ (i) }


    typedef struct {
	unsigned int begin;
	unsigned int end;
    } snd_atomic_write_t;

    typedef struct {
	const volatile snd_atomic_write_t *write;
	unsigned int end;
    } snd_atomic_read_t;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
