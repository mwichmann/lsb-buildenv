

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


#define LC_ADDRESS	__LC_ADDRESS
#define LC_ALL	__LC_ALL
#define LC_COLLATE	__LC_COLLATE
#define LC_CTYPE	__LC_CTYPE
#define LC_IDENTIFICATION	__LC_IDENTIFICATION
#define LC_MEASUREMENT	__LC_MEASUREMENT
#define LC_MESSAGES	__LC_MESSAGES
#define LC_MONETARY	__LC_MONETARY
#define LC_NAME	__LC_NAME
#define LC_NUMERIC	__LC_NUMERIC
#define LC_PAPER	__LC_PAPER
#define LC_TELEPHONE	__LC_TELEPHONE
#define LC_TIME	__LC_TIME
struct lconv *localeconv (void);
char *setlocale (int, char *);
