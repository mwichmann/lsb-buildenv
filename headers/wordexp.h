typedef struct {
    int we_wordc;
    char **we_wordv;
    int we_offs;
} wordexp_t;

int wordexp(char *, wordexp_t *, int);
void wordfree(wordexp_t *);
