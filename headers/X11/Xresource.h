#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_XRESOURCE_H_
#define _X11_XRESOURCE_H_

#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef int XrmQuark;

    typedef int *XrmQuarkList;

    typedef char *XrmString;

    typedef enum {
	XrmBindTightly,
	XrmBindLoosely
    } XrmBinding;

    typedef enum *XrmBindingList;

    typedef XrmQuark XrmName;

    typedef XrmQuarkList XrmNameList;

    typedef XrmQuark XrmClass;

    typedef XrmQuarkList XrmClassList;

    typedef XrmQuark XrmRepresentation;

    typedef struct {
	unsigned int size;
	XPointer addr;
    } XrmValue;

    typedef struct {
	unsigned int size;
	XPointer addr;
    } *XrmValuePtr;

    typedef struct _XrmHashBucketRec *XrmHashBucket;

    typedef XrmHashBucket *XrmHashTable;

    typedef XrmHashTable XrmSearchList;

    typedef struct _XrmHashBucketRec *XrmDatabase;

    typedef enum {
	XrmoptionNoArg,
	XrmoptionIsArg,
	XrmoptionStickyArg,
	XrmoptionSepArg,
	XrmoptionResArg,
	XrmoptionSkipArg,
	XrmoptionSkipLine,
	XrmoptionSkipNArgs
    } XrmOptionKind;

    typedef struct {
	char *option;
	char *specifier;
	XrmOptionKind argKind;
	XPointer value;
    } XrmOptionDescRec;

    typedef struct {
	char *option;
	char *specifier;
	XrmOptionKind argKind;
	XPointer value;
    } *XrmOptionDescList;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 12
    enum {
	XrmBindTightly,
	XrmBindLoosely
    };

    enum {
	XrmBindTightly,
	XrmBindLoosely
    };

    struct {
	unsigned int size;
	XPointer addr;
    };

    struct {
	unsigned int size;
	XPointer addr;
    };

    enum {
	XrmoptionNoArg,
	XrmoptionIsArg,
	XrmoptionStickyArg,
	XrmoptionSepArg,
	XrmoptionResArg,
	XrmoptionSkipArg,
	XrmoptionSkipLine,
	XrmoptionSkipNArgs
    };

    struct {
	char *option;
	char *specifier;
	XrmOptionKind argKind;
	XPointer value;
    };

    struct {
	char *option;
	char *specifier;
	XrmOptionKind argKind;
	XPointer value;
    };

    XrmQuark *;

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern void XrmCombineDatabase(XrmDatabase, XrmDatabase *, int);
    extern int XrmCombineFileDatabase(const char *, XrmDatabase *, int);
    extern void XrmDestroyDatabase(XrmDatabase);
    extern int XrmEnumerateDatabase(XrmDatabase, XrmNameList, XrmClassList,
				    int, int, XPointer);
    extern XrmDatabase XrmGetDatabase(Display *);
    extern XrmDatabase XrmGetFileDatabase(const char *);
    extern int XrmGetResource(XrmDatabase, const char *, const char *,
			      char **, XrmValue *);
    extern XrmDatabase XrmGetStringDatabase(const char *);
    extern const char *XrmLocaleOfDatabase(XrmDatabase);
    extern void XrmMergeDatabases(XrmDatabase, XrmDatabase *);
    extern void XrmParseCommand(XrmDatabase *, XrmOptionDescList, int,
				const char *, int *, char **);
    extern XrmQuark XrmPermStringToQuark(const char *);
    extern void XrmPutFileDatabase(XrmDatabase, const char *);
    extern void XrmPutLineResource(XrmDatabase *, const char *);
    extern void XrmPutResource(XrmDatabase *, const char *, const char *,
			       XrmValue *);
    extern void XrmPutStringResource(XrmDatabase *, const char *,
				     const char *);
    extern int XrmQGetResource(XrmDatabase, XrmNameList, XrmClassList,
			       XrmRepresentation *, XrmValue *);
    extern int XrmQGetSearchList(XrmDatabase, XrmNameList, XrmClassList,
				 XrmSearchList, int);
    extern int XrmQGetSearchResource(XrmSearchList, XrmName, XrmClass,
				     XrmRepresentation *, XrmValue *);
    extern void XrmQPutResource(XrmDatabase *, XrmBindingList,
				XrmQuarkList, XrmRepresentation,
				XrmValue *);
    extern void XrmQPutStringResource(XrmDatabase *, XrmBindingList,
				      XrmQuarkList, const char *);
    extern XrmString XrmQuarkToString(XrmQuark);
    extern void XrmSetDatabase(Display *, XrmDatabase);
    extern void XrmStringToBindingQuarkList(const char *, XrmBindingList,
					    XrmQuarkList);
    extern XrmQuark XrmStringToQuark(const char *);
    extern void XrmStringToQuarkList(const char *, XrmQuarkList);
    extern XrmQuark XrmUniqueQuark(void);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
