#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_CONF_H_
#define _ALSA_CONF_H_

#include <alsa/output.h>
#include <alsa/input.h>

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


/* Function prototypes */

    extern snd_config_t *snd_config;
    extern int snd_config_add(snd_config_t * config, snd_config_t * leaf);
    extern int snd_config_copy(snd_config_t * *dst, snd_config_t * src);
    extern int snd_config_delete(snd_config_t * config);
    extern int snd_config_get_ascii(const snd_config_t * config,
				    char **value);
    extern int snd_config_get_id(const snd_config_t * config,
				 const char **value);
    extern int snd_config_get_integer(const snd_config_t * config,
				      long int *value);
    extern int snd_config_get_integer64(const snd_config_t * config,
					long long int *value);
    extern int snd_config_get_string(const snd_config_t * config,
				     const char **value);
    extern snd_config_type_t snd_config_get_type(const snd_config_t *
						 config);
    extern int snd_config_imake_integer(snd_config_t * *config,
					const char *key,
					const long int value);
    extern int snd_config_imake_integer64(snd_config_t * *config,
					  const char *key,
					  const long long int value);
    extern int snd_config_imake_string(snd_config_t * *config,
				       const char *key, const char *ascii);
    extern snd_config_iterator_t snd_config_iterator_end(const snd_config_t
							 * node);
    extern snd_config_t *snd_config_iterator_entry(const
						   snd_config_iterator_t
						   iterator);
    extern snd_config_iterator_t snd_config_iterator_first(const
							   snd_config_t *
							   node);
    extern snd_config_iterator_t snd_config_iterator_next(const
							  snd_config_iterator_t
							  iterator);
    extern int snd_config_load(snd_config_t * config, snd_input_t * in);
    extern int snd_config_make_compound(snd_config_t * *config,
					const char *key, int join);
    extern int snd_config_make_integer(snd_config_t * *config,
				       const char *key);
    extern int snd_config_make_integer64(snd_config_t * *config,
					 const char *key);
    extern int snd_config_make_string(snd_config_t * *config,
				      const char *key);
    extern int snd_config_save(snd_config_t * config, snd_output_t * out);
    extern int snd_config_search(snd_config_t * config, const char *key,
				 snd_config_t * *result);
    extern int snd_config_searchv(snd_config_t * config,
				  snd_config_t * *result, ...);
    extern int snd_config_set_ascii(snd_config_t * config,
				    const char *ascii);
    extern int snd_config_set_integer(snd_config_t * config,
				      long int value);
    extern int snd_config_set_integer64(snd_config_t * config,
					long long int value);
    extern int snd_config_set_string(snd_config_t * config,
				     const char *value);
    extern int snd_config_top(snd_config_t * *config);
    extern int snd_config_update(void);
    extern int snd_config_update_free_global(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
