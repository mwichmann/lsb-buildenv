#ifndef _REGEX_H_
#define _REGEX_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif





/* The following bits are used to determine the regexp syntax we    recognize.  The set/not-set meanings are chosen so that Emacs syntax    remains the value 0.  The bits are given in alphabetical order, and    the definitions shifted by one from the previous bit; thus, when we    add or remove a bit, only one other definition need change.*/
#define RE_BACKSLASH_ESCAPE_IN_LISTS	((unsigned long int)1)
#define RE_BK_PLUS_QM	(RE_BACKSLASH_ESCAPE_IN_LISTS<<1)
#define RE_SYNTAX_AWK	(RE_BACKSLASH_ESCAPE_IN_LISTS|RE_DOT_NOT_NULL|RE_NO_BK_PARENS| RE_NO_BK_REFS| RE_NO_BK_VBAR| RE_NO_EMPTY_RANGES| RE_DOT_NEWLINE| RE_CONTEXT_INDEP_ANCHORS| RE_UNMATCHED_RIGHT_PAREN_ORD | RE_NO_GNU_OPS)
#define RE_CHAR_CLASSES	(RE_BK_PLUS_QM<<1)
#define RE_SYNTAX_GREP	(RE_BK_PLUS_QM|RE_CHAR_CLASSES|RE_HAT_LISTS_NOT_NEWLINE|RE_INTERVALS|RE_NEWLINE_ALT)
#define RE_CONTEXT_INDEP_ANCHORS	(RE_CHAR_CLASSES<<1)
#define RE_SYNTAX_EGREP	(RE_CHAR_CLASSES|RE_CONTEXT_INDEP_ANCHORS| RE_CONTEXT_INDEP_OPS|RE_HAT_LISTS_NOT_NEWLINE|RE_NEWLINE_ALT|RE_NO_BK_PARENS|RE_NO_BK_VBAR)
#define _RE_SYNTAX_POSIX_COMMON	(RE_CHAR_CLASSES|RE_DOT_NEWLINE|RE_DOT_NOT_NULL|RE_INTERVALS|RE_NO_EMPTY_RANGES)
#define RE_CONTEXT_INDEP_OPS	(RE_CONTEXT_INDEP_ANCHORS<<1)
#define RE_CONTEXT_INVALID_OPS	(RE_CONTEXT_INDEP_OPS<<1)
#define RE_DOT_NEWLINE	(RE_CONTEXT_INVALID_OPS<<1)
#define RE_INVALID_INTERVAL_ORD	(RE_DEBUG<<1)
#define RE_DOT_NOT_NULL	(RE_DOT_NEWLINE<<1)
#define RE_HAT_LISTS_NOT_NEWLINE	(RE_DOT_NOT_NULL<<1)
#define RE_INTERVALS	(RE_HAT_LISTS_NOT_NEWLINE<<1)
#define RE_LIMITED_OPS	(RE_INTERVALS<<1)
#define RE_NEWLINE_ALT	(RE_LIMITED_OPS<<1)
#define RE_NO_BK_BRACES	(RE_NEWLINE_ALT<<1)
#define RE_NO_BK_PARENS	(RE_NO_BK_BRACES<<1)
#define RE_NO_BK_REFS	(RE_NO_BK_PARENS<<1)
#define RE_NO_BK_VBAR	(RE_NO_BK_REFS<<1)
#define RE_NO_EMPTY_RANGES	(RE_NO_BK_VBAR<<1)
#define RE_UNMATCHED_RIGHT_PAREN_ORD	(RE_NO_EMPTY_RANGES<<1)
#define RE_DEBUG	(RE_NO_GNU_OPS<<1)
#define RE_NO_GNU_OPS	(RE_NO_POSIX_BACKTRACKING<<1)
#define RE_SYNTAX_POSIX_EGREP	(RE_SYNTAX_EGREP|RE_INTERVALS|RE_NO_BK_BRACES|RE_INVALID_INTERVAL_ORD)
#define RE_SYNTAX_POSIX_AWK	(RE_SYNTAX_POSIX_EXTENDED|RE_BACKSLASH_ESCAPE_IN_LISTS|RE_INTERVALS|RE_NO_GNU_OPS)
#define RE_NO_POSIX_BACKTRACKING	(RE_UNMATCHED_RIGHT_PAREN_ORD<<1)
#define RE_SYNTAX_POSIX_BASIC	(_RE_SYNTAX_POSIX_COMMON|RE_BK_PLUS_QM)
#define RE_SYNTAX_POSIX_EXTENDED	(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INDEP_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_VBAR|RE_CONTEXT_INVALID_OPS|RE_UNMATCHED_RIGHT_PAREN_ORD)
#define RE_SYNTAX_POSIX_MINIMAL_EXTENDED	(_RE_SYNTAX_POSIX_COMMON|RE_CONTEXT_INDEP_ANCHORS|RE_CONTEXT_INVALID_OPS|RE_NO_BK_BRACES|RE_NO_BK_PARENS|RE_NO_BK_REFS|RE_NO_BK_VBAR|RE_UNMATCHED_RIGHT_PAREN_ORD)
#define RE_SYNTAX_POSIX_MINIMAL_BASIC	(_RE_SYNTAX_POSIX_COMMON|RE_LIMITED_OPS)
#define RE_SYNTAX_ED	RE_SYNTAX_POSIX_BASIC
#define RE_SYNTAX_SED	RE_SYNTAX_POSIX_BASIC


  typedef unsigned long reg_syntax_t;


/* regex error codes*/





  typedef struct re_pattern_buffer
  {
    unsigned char *buffer;
    unsigned long allocated;
    unsigned long used;
    reg_syntax_t syntax;
    char *fastmap;
    char *translate;
    size_t re_nsub;
    unsigned int can_be_null:1;
    unsigned int regs_allocated:2;
    unsigned int fastmap_accurate:1;
    unsigned int no_sub:1;
    unsigned int not_bol:1;
    unsigned int not_eol:1;
    unsigned int newline_anchor:1;
  }
  regex_t;

  typedef int regoff_t;

  typedef struct
  {
    regoff_t rm_so;
    regoff_t rm_eo;
  }
  regmatch_t;


/* POSIX `cflags' bits (i.e., information for `regcomp').*/
#define REG_NOTEOL	(1<<1)
#define REG_ICASE	(REG_EXTENDED<<1)
#define REG_NEWLINE	(REG_ICASE<<1)
#define REG_NOSUB	(REG_NEWLINE<<1)
#define REG_NOMATCH	-1
#define REG_EXTENDED	1
#define REG_NOTBOL	1



  extern int regcomp (regex_t *, const char *, int);
  extern size_t regerror (int, regex_t *, char *, size_t);
  extern int regexec (regex_t *, const char *, size_t, regmatch_t[], int);
  extern void regfree (regex_t *);
#ifdef __cplusplus
}
#endif
#endif
