#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdlib.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



    typedef struct entry ENTRY;

    typedef enum {
	FIND,
	ENTER
    } ACTION;

    typedef enum {
	preorder,
	postorder,
	endorder,
	leaf
    } VISIT;


    struct entry {
	char *key;
	void *data;
    };


    typedef void (*__action_fn_t) (void *__nodep, VISIT __value,
				   int __level);


    extern int hcreate(size_t);
    extern ENTRY *hsearch(ENTRY, ACTION);
    extern void insque(void *, void *);
    extern void *lfind(const void *, const void *, size_t *, size_t,
		       __compar_fn_t);
    extern void *lsearch(const void *, void *, size_t *, size_t,
			 __compar_fn_t);
    extern void remque(void *);
    extern void hdestroy(void);
    extern void *tdelete(const void *, void **, __compar_fn_t);
    extern void *tfind(const void *, void *const *, __compar_fn_t);
    extern void *tsearch(const void *, void **, __compar_fn_t);
    extern void twalk(const void *, __action_fn_t);
#ifdef __cplusplus
}
#endif
#endif
