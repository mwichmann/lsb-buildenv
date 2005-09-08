#ifndef _LOCALE_H_
#define _LOCALE_H_


#ifdef __cplusplus
extern "C"
{
#endif





/* Structure giving information about numeric and monetary notation*/


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
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
  }
   ;


/* These are the possibilities for the first argument to setlocale.*/
#define LC_GLOBAL_LOCALE	((locale_t) -1L)
#define LC_CTYPE	0
#define LC_NUMERIC	1
#define LC_TELEPHONE	10
#define LC_MEASUREMENT	11
#define LC_IDENTIFICATION	12
#define LC_TIME	2
#define LC_COLLATE	3
#define LC_MONETARY	4
#define LC_MESSAGES	5
#define LC_ALL	6
#define LC_PAPER	7
#define LC_NAME	8
#define LC_ADDRESS	9





  typedef struct __locale_struct
  {
    struct locale_data *__locales[13];
    const unsigned short *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
  }
   *__locale_t;







  typedef struct __locale_struct *locale_t;


/* These are the bits that can be set in the CATEGORY_MASK argument to newlocale().*/
#define LC_ADDRESS_MASK	(1 << LC_ADDRESS)
#define LC_COLLATE_MASK	(1 << LC_COLLATE)
#define LC_IDENTIFICATION_MASK	(1 << LC_IDENTIFICATION)
#define LC_MEASUREMENT_MASK	(1 << LC_MEASUREMENT)
#define LC_MESSAGES_MASK	(1 << LC_MESSAGES)
#define LC_MONETARY_MASK	(1 << LC_MONETARY)
#define LC_NAME_MASK	(1 << LC_NAME)
#define LC_NUMERIC_MASK	(1 << LC_NUMERIC)
#define LC_PAPER_MASK	(1 << LC_PAPER)
#define LC_TELEPHONE_MASK	(1 << LC_TELEPHONE)
#define LC_TIME_MASK	(1 << LC_TIME)
#define LC_CTYPE_MASK	(1<<LC_CTYPE)
#define LC_ALL_MASK	\
        (LC_CTYPE_MASK| LC_NUMERIC_MASK| LC_TIME_MASK| LC_COLLATE_MASK| LC_MONETARY_MASK|\
         LC_MESSAGES_MASK| LC_PAPER_MASK| LC_NAME_MASK| LC_ADDRESS_MASK| LC_TELEPHONE_MASK|\
         LC_MEASUREMENT_MASK| LC_IDENTIFICATION_MASK)



  extern struct lconv *localeconv (void);
  extern char *setlocale (int, const char *);
  extern locale_t uselocale (locale_t);
  extern void freelocale (locale_t);
  extern locale_t duplocale (locale_t);
  extern locale_t newlocale (int, const char *, locale_t);
#ifdef __cplusplus
}
#endif
#endif
