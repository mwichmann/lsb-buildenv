#if (__LSB_VERSION__ >= 10 )
#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdlib.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



    typedef enum {
	FIND,
	ENTER
    } ACTION;

#if __LSB_VERSION__ >= 12
    typedef struct entry ENTRY;

    typedef enum {
	preorder,
	postorder,
	endorder,
	leaf
    } VISIT;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    struct _ENTRY;

    struct hsearch_data {
	struct _ENTRY *table;
	unsigned int size;
	unsigned int filled;
    };

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 12
    struct entry {
	char *key;
	void *data;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


    typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
				   int __level);


/* Function prototypes */

    extern int hcreate(size_t __nel);
    extern void hdestroy(void);
    extern ENTRY *hsearch(ENTRY __item, ACTION __action);
    extern void insque(void *__elem, void *__prev);
    extern void *lfind(const void *__key, const void *__base,
		       size_t * __nmemb, size_t __size,
		       __compar_fn_t __compar);
    extern void *lsearch(const void *__key, void *__base, size_t * __nmemb,
			 size_t __size, __compar_fn_t __compar);
    extern void remque(void *__elem);
    extern void *tfind(const void *__key, void *const *__rootp,
		       __compar_fn_t __compar);
    extern void *tsearch(const void *__key, void **__rootp,
			 __compar_fn_t __compar);
    extern void twalk(const void *__root, __action_fn_t __action);
#if __LSB_VERSION__ >= 13
    extern void *tdelete(const void *__key, void **__rootp,
			 __compar_fn_t __compar);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 40
    extern int hcreate_r(size_t __nel, struct hsearch_data *__htab);
    extern void hdestroy_r(struct hsearch_data *__htab);
    extern int hsearch_r(ENTRY __item, ACTION __action, ENTRY * *__retval,
			 struct hsearch_data *__htab);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
