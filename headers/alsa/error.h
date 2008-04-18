#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_ERROR_H_
#define _ALSA_ERROR_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define SND_ERROR_INCOMPATIBLE_VERSION	(SND_ERROR_BEGIN+0)
#define SND_ERROR_ALISP_NIL	(SND_ERROR_BEGIN+1)
#define SND_ERROR_BEGIN	500000
#endif				// __LSB_VERSION__ >= 3.2



#if __LSB_VERSION__ >= 32
    typedef void (*snd_lib_error_handler_t) (void);

#endif				// __LSB_VERSION__ >= 3.2


// Function prototypes

#if __LSB_VERSION__ >= 32
    extern int snd_lib_error_set_handler(snd_lib_error_handler_t);
    extern const char *snd_strerror(int);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
