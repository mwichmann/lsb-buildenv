#ifndef _ALSA_CONF_H_
#define _ALSA_CONF_H_


#ifdef __cplusplus
extern "C" {
#endif





    typedef struct _snd_config_iterator *snd_config_iterator_t;

    typedef struct _snd_config snd_config_t;

    typedef enum _snd_config_type {
	SND_CONFIG_TYPE_INTEGER,
	SND_CONFIG_TYPE_INTEGER64 = 1,
	SND_CONFIG_TYPE_REAL = 2,
	SND_CONFIG_TYPE_STRING = 3,
	SND_CONFIG_TYPE_POINTER = 4,
	SND_CONFIG_TYPE_COMPOUND = 1024
    } snd_config_type_t;

    typedef struct _snd_config_update snd_config_update_t;

    typedef struct snd_devname snd_devname_t;








    struct snd_devname {
	char *name;
	char *comment;
	snd_devname_t *next;
    };


    extern int snd_config_add(snd_config_t *, snd_config_t *);
    extern int snd_config_copy(snd_config_t * *, snd_config_t *);
    extern int snd_config_delete(snd_config_t *);
    extern int snd_config_get_ascii(const snd_config_t *, char **);
    extern int snd_config_get_id(const snd_config_t *, const char **);
    extern int snd_config_get_integer(const snd_config_t *, long int *);
    extern int snd_config_get_string(const snd_config_t *, const char **);
    extern snd_config_type_t snd_config_get_type(const snd_config_t *);
    extern int snd_config_imake_integer(snd_config_t * *, const char *,
					const long int);
    extern snd_config_iterator_t snd_config_iterator_end(const snd_config_t
							 *);
    extern snd_config_t *snd_config_iterator_entry(const
						   snd_config_iterator_t);
    extern snd_config_iterator_t snd_config_iterator_first(const
							   snd_config_t *);
    extern snd_config_iterator_t snd_config_iterator_next(const
							  snd_config_iterator_t);
    extern int snd_config_search(snd_config_t *, const char *,
				 snd_config_t * *);
    extern int snd_config_update(void);
    extern int snd_config_update_free_global(void);
    extern snd_config_t *snd_config;
#ifdef __cplusplus
}
#endif
#endif
