#ifndef _X11_XRESOURCE_H_
#define _X11_XRESOURCE_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <X11/Xlib.h>




  extern void XrmCombineDatabase (XrmDatabase, XrmDatabase *, int);
  extern int XrmCombineFileDatabase (char *, XrmDatabase *, int);
  extern void XrmDestroyDatabase (XrmDatabase);
  extern int XrmEnumerateDatabase (XrmDatabase, XrmNameList, XrmClassList,
				   int, int, XPointer);
  extern XrmDatabase XrmGetDatabase (Display *);
  extern XrmDatabase XrmGetFileDatabase (char *);
  extern int XrmGetResource (XrmDatabase, char *, char *, char **,
			     XrmValue *);
  extern XrmDatabase XrmGetStringDatabase (char *);
  extern char *XrmLocaleOfDatabase (XrmDatabase);
  extern void XrmMergeDatabases (XrmDatabase, XrmDatabase *);
  extern void XrmParseCommand (XrmDatabase *, XrmOptionDescList, int, char *,
			       int *, char **);
  extern XrmQuark XrmPermStringToQuark (char *);
  extern void XrmPutFileDatabase (XrmDatabase, char *);
  extern void XrmPutLineResource (XrmDatabase *, char *);
  extern void XrmPutResource (XrmDatabase *, char *, char *, XrmValue *);
  extern void XrmPutStringResource (XrmDatabase *, char *, char *);
  extern int XrmQGetResource (XrmDatabase, XrmNameList, XrmClassList,
			      XrmRepresentation *, XrmValue *);
  extern int XrmQGetSearchList (XrmDatabase, XrmNameList, XrmClassList,
				XrmSearchList, int);
  extern int XrmQGetSearchResource (XrmSearchList, XrmName, XrmClass,
				    XrmRepresentation *, XrmValue *);
  extern void XrmQPutResource (XrmDatabase *, XrmBindingList, XrmQuarkList,
			       XrmRepresentation, XrmValue *);
  extern void XrmQPutStringResource (XrmDatabase *, XrmBindingList,
				     XrmQuarkList, char *);
  extern XrmString XrmQuarkToString (XrmQuark);
  extern void XrmSetDatabase (Display *, XrmDatabase);
  extern void XrmStringToBindingQuarkList (char *, XrmBindingList,
					   XrmQuarkList);
  extern XrmQuark XrmStringToQuark (char *);
  extern void XrmStringToQuarkList (char *, XrmQuarkList);
  extern XrmQuark XrmUniqueQuark (void);
#ifdef __cplusplus
}
#endif
#endif
