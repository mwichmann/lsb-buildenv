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


int getopt_long (int, char **, char *, struct option *, int *);
int getopt_long_only (int, char **, char *, struct option *, int *);
#endif
