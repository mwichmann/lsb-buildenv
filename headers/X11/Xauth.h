#ifndef _X11_XAUTH_H_
#define _X11_XAUTH_H_

#include <stdio.h>

typedef struct xauth
{
  unsigned short family;
  unsigned short address_length;
  char *address;
  unsigned short number_length;
  char *number;
  unsigned short name_length;
  char *name;
  unsigned short data_length;
  char *data;
}
Xauth;


void XauDisposeAuth (Xauth *);
char *XauFileName (void);
Xauth *XauGetBestAuthByAddr (unsigned int, unsigned int, char *, unsigned int,
			     char *, int, char **, int *);
Xauth *XauReadAuth (FILE);
#endif
