#ifndef _LOCALE_H_
#define _LOCALE_H_


#define LC_CTYPE	0

struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
}
 ;


#define LC_PAPER	0
#define LC_ADDRESS	0
#define LC_MEASUREMENT	0
#define LC_TIME	0
#define LC_MONETARY	0
#define LC_ALL	0
#define LC_NAME	0
#define LC_TELEPHONE	0
#define LC_NUMERIC	0
#define LC_IDENTIFICATION	0
#define LC_COLLATE	0
#define LC_MESSAGES	0

struct lconv *localeconv (void);
char *setlocale (int, char *);
#endif
