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

/*
 * 38 Default HeaderGroup for search.h
 */
typedef struct entry {
    char *key;
    void *data;
} ENTRY;

typedef void (*__action_fn_t) (void *__nodep, VISIT __value, int __level)
;


int hcreate(size_t);
ENTRY *hsearch(ENTRY, ACTION);
void insque(void *, void *);
void *lfind(void *, void *, size_t *, size_t, __compar_fn_t);
void *lsearch(void *, void *, size_t *, size_t, __compar_fn_t);
void remque(void *);
void hdestroy(void);
void *tfind(void *, void **, __compar_fn_t);
void *tsearch(void *, void **, __compar_fn_t);
void twalk(void *, __action_fn_t);
