#ifndef _X11_XRESOURCE_H_
#define _X11_XRESOURCE_H_

#include <X11/Xlib.h>


void XrmCombineDatabase (XrmDatabase, XrmDatabase *, int);
int XrmCombineFileDatabase (char *, XrmDatabase *, int);
void XrmDestroyDatabase (XrmDatabase);
int XrmEnumerateDatabase (XrmDatabase, XrmNameList, XrmClassList, int, int,
			  XPointer);
XrmDatabase XrmGetDatabase (Display *);
XrmDatabase XrmGetFileDatabase (char *);
int XrmGetResource (XrmDatabase, char *, char *, char **, XrmValue *);
XrmDatabase XrmGetStringDatabase (char *);
char *XrmLocaleOfDatabase (XrmDatabase);
void XrmMergeDatabases (XrmDatabase, XrmDatabase *);
void XrmParseCommand (XrmDatabase *, XrmOptionDescList, int, char *, int *,
		      char **);
XrmQuark XrmPermStringToQuark (char *);
void XrmPutFileDatabase (XrmDatabase, char *);
void XrmPutLineResource (XrmDatabase *, char *);
void XrmPutResource (XrmDatabase *, char *, char *, XrmValue *);
void XrmPutStringResource (XrmDatabase *, char *, char *);
int XrmQGetResource (XrmDatabase, XrmNameList, XrmClassList,
		     XrmRepresentation *, XrmValue *);
int XrmQGetSearchList (XrmDatabase, XrmNameList, XrmClassList, XrmSearchList,
		       int);
int XrmQGetSearchResource (XrmSearchList, XrmName, XrmClass,
			   XrmRepresentation *, XrmValue *);
void XrmQPutResource (XrmDatabase *, XrmBindingList, XrmQuarkList,
		      XrmRepresentation, XrmValue *);
void XrmQPutStringResource (XrmDatabase *, XrmBindingList, XrmQuarkList,
			    char *);
XrmString XrmQuarkToString (XrmQuark);
void XrmSetDatabase (Display *, XrmDatabase);
void XrmStringToBindingQuarkList (char *, XrmBindingList, XrmQuarkList);
XrmQuark XrmStringToQuark (char *);
void XrmStringToQuarkList (char *, XrmQuarkList);
XrmQuark XrmUniqueQuark (void);
#endif
