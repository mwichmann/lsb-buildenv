#ifndef _GETOPT_H_
#define _GETOPT_H_




struct option
{
  char *name;
  int has_arg;
  int *flag;
  int val;
}
 ;


extern int getopt_long (int, char **, char *, struct option *, int *);
extern int getopt_long_only (int, char **, char *, struct option *, int *);
#endif
