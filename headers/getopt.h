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
#endif				// __LSB_VERSION__ >= 2.0



#if __LSB_VERSION__ >= 12
    struct option {
	const char *name;
	int has_arg;
	int *flag;
	int val;
    };

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int getopt_long(int, char *const[], const char *,
			   const struct option *, int *);
    extern int getopt_long_only(int, char *const[], const char *,
				const struct option *, int *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
