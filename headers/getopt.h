#if (__LSB_VERSION__ >= 11 )
#ifndef _GETOPT_H_
#define _GETOPT_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 20
#define no_argument	0
#define required_argument	1
#define optional_argument	2
#endif				/* __LSB_VERSION__ >= 2.0 */



#if __LSB_VERSION__ >= 12
    struct option {
	const char *name;
	int has_arg;
	int *flag;
	int val;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int getopt_long(int ___argc, char *const ___argv[],
			   const char *__shortopts,
			   const struct option *__longopts,
			   int *__longind);
    extern int getopt_long_only(int ___argc, char *const ___argv[],
				const char *__shortopts,
				const struct option *__longopts,
				int *__longind);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
