#if (__LSB_VERSION__ >= 40 )
#ifndef _NSPR4_PLHASH_H_
#define _NSPR4_PLHASH_H_

#include <stddef.h>
#include <nspr4/prtypes.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef PRUint32 PLHashNumber;

    typedef PRIntn(*PLHashComparator) (const void *, const void *);

    typedef struct PLHashAllocOps PLHashAllocOps;

    typedef PLHashNumber(*PLHashFunction) (const void *);

    struct PLHashEntry {
	struct PLHashEntry *next;
	PLHashNumber keyHash;
	const void *key;
	void *value;
    };

    struct PLHashTable {
	struct PLHashEntry **buckets;
	PRUint32 nentries;
	PRUint32 shift;
	PLHashFunction keyHash;
	PLHashComparator keyCompare;
	PLHashComparator valueCompare;
	const PLHashAllocOps *allocOps;
	void *allocPriv;
    };


    struct PLHashAllocOps {
	void *(*allocTable) (void *, PRSize);
	void (*freeTable) (void *, void *);
	struct PLHashEntry *(*allocEntry) (void *, const void *);
	void (*freeEntry) (void *, struct PLHashEntry *, PRUintn);
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
