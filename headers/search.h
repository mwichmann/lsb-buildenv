#if (__LSB_VERSION__ >= 10 )
#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdlib.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



#if __LSB_VERSION__ >= 10
    typedef enum {
	FIND,
	ENTER
    } ACTION;

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 12
    typedef struct entry ENTRY;

    typedef enum {
	preorder,
	postorder,
	endorder,
	leaf
    } VISIT;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 12

    struct entry {
	char *key;
	void *data;
    };

#endif				// __LSB_VERSION__ >= 1.2


#if __LSB_VERSION__ >= 10
    typedef void (*__action_fn_t) (void *__nodep, VISIT __value,
				   int __level);

#endif				// __LSB_VERSION__ >= 1.0


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int hcreate(size_t);
    extern void hdestroy(void);
    extern ENTRY *hsearch(ENTRY, ACTION);
    extern void insque(void *, void *);
    extern void *lfind(const void *, const void *, size_t *, size_t,
		       __compar_fn_t);
    extern void *lsearch(const void *, void *, size_t *, size_t,
			 __compar_fn_t);
    extern void remque(void *);
    extern void *tfind(const void *, void *const *, __compar_fn_t);
    extern void *tsearch(const void *, void **, __compar_fn_t);
    extern void twalk(const void *, __action_fn_t);
#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 13
    extern void *tdelete(const void *, void **, __compar_fn_t);
#endif				// __LSB_VERSION__ >= 1.3

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
