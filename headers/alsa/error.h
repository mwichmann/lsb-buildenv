#ifndef _ALSA_ERROR_H_
#define _ALSA_ERROR_H_


#ifdef __cplusplus
extern "C" {
#endif



#define SND_ERROR_INCOMPATIBLE_VERSION	(SND_ERROR_BEGIN+0)
#define SND_ERROR_ALISP_NIL	(SND_ERROR_BEGIN+1)
#define SND_ERROR_BEGIN	500000


    typedef void (*snd_lib_error_handler_t) (void);


    extern int snd_lib_error_set_handler(snd_lib_error_handler_t);
    extern const char *snd_strerror(int);
#ifdef __cplusplus
}
#endif
#endif
