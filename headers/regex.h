/*
 * 35 Default HeaderGroup for regex.h
 */
typedef unsigned long reg_syntax_t;

typedef struct re_pattern_buffer {
    unsigned char *buffer;
    unsigned long allocated;
    unsigned long used;
    reg_syntax_t syntax;
    char *fastmap;
    char *translate;
    size_t re_nsub;
    unsigned int can_be_null;
    unsigned int regs_allocated;
    unsigned int fastmap_accurate;
    unsigned int no_sub;
    unsigned int not_bol;
    unsigned int not_eol;
    unsigned int newline_anchor;
} regex_t;

typedef int regoff_t;

typedef struct {
    regoff_t rm_so;
    regoff_t rm_eo;
} regmatch_t;


int regcomp(regex_t *, char *, int);
size_t regerror(int, regex_t *, char *, size_t);
int regexec(regex_t *, char *, size_t, regmatch_t, int);
void regfree(regex_t *);
