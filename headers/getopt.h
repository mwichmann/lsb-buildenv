#ifndef _GETOPT_H_
#define _GETOPT_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define no_argument	0
#define required_argument	1
#define optional_argument	2


  struct option
  {
    char *name;
    int has_arg;
    int *flag;
    int val;
  }
   ;


  extern int getopt_long (int, char *const[], const char *,
			  const struct option *, int *);
  extern int getopt_long_only (int, char *const[], const char *,
			       const struct option *, int *);
#ifdef __cplusplus
}
#endif
#endif
