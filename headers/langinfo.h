#if (__LSB_VERSION__ >= 10 )
#ifndef _LANGINFO_H_
#define _LANGINFO_H_

#include <nl_types.h>

#ifdef __cplusplus
extern "C" {
#endif



/* LC_TIME category: date and time formatting.*/

/* Abbreviated days of the week.*/
#if __LSB_VERSION__ >= 12
#define ABDAY_1	0x20000		/* Sun. */
#define ABDAY_2	0x20001
#define ABDAY_3	0x20002
#define ABDAY_4	0x20003
#define ABDAY_5	0x20004
#define ABDAY_6	0x20005
#define ABDAY_7	0x20006
#endif				// __LSB_VERSION__ >= 1.2




/* Long-named days of the week.*/
#if __LSB_VERSION__ >= 12
#define DAY_1	0x20007
#define DAY_2	0x20008
#define DAY_3	0x20009
#define DAY_4	0x2000A
#define DAY_5	0x2000B
#define DAY_6	0x2000C
#define DAY_7	0x2000D
#endif				// __LSB_VERSION__ >= 1.2




/* Abbreviated month names.*/
#if __LSB_VERSION__ >= 12
#define ABMON_1	0x2000E
#define ABMON_2	0x2000F
#define ABMON_3	0x20010
#define ABMON_4	0x20011
#define ABMON_5	0x20012
#define ABMON_6	0x20013
#define ABMON_7	0x20014
#define ABMON_8	0x20015
#define ABMON_9	0x20016
#define ABMON_10	0x20017
#define ABMON_11	0x20018
#define ABMON_12	0x20019
#endif				// __LSB_VERSION__ >= 1.2




/* Long month names.*/
#if __LSB_VERSION__ >= 12
#define MON_1	0x2001A
#define MON_2	0x2001B
#define MON_3	0x2001C
#define MON_4	0x2001D
#define MON_5	0x2001E
#define MON_6	0x2001F
#define MON_7	0x20020
#define MON_8	0x20021
#define MON_9	0x20022
#define MON_10	0x20023
#define MON_11	0x20024
#define MON_12	0x20025
#endif				// __LSB_VERSION__ >= 1.2




#if __LSB_VERSION__ >= 12
#define AM_STR	0x20026
#define PM_STR	0x20027
#endif				// __LSB_VERSION__ >= 1.2




#if __LSB_VERSION__ >= 12
#define D_T_FMT	0x20028
#define D_FMT	0x20029
#define T_FMT	0x2002A
#define T_FMT_AMPM	0x2002B
#endif				// __LSB_VERSION__ >= 1.2




#if __LSB_VERSION__ >= 12
#define ERA	0x2002C
#define ERA_D_FMT	0x2002E
#define ALT_DIGITS	0x2002F
#define ERA_D_T_FMT	0x20030
#define ERA_T_FMT	0x20031
#endif				// __LSB_VERSION__ >= 1.2




/*  LC_COLLATE category: text sorting. This information is accessed by the strcoll and strxfrm functions. These `nl_langinfo' names are used only internally.*/

/* LC_CTYPE category: character classification. This information is accessed by the functions in <ctype.h>.These 'nl_langinfo' names are used only internally.*/
#if __LSB_VERSION__ >= 12
#define CODESET	14
#endif				// __LSB_VERSION__ >= 1.2




/* LC_MONETARY category: formatting of monetary quantities. These items each correspond to a member of `struct lconv', defined in <locale.h>.*/
#if __LSB_VERSION__ >= 12
#define CRNCYSTR	0x4000F
#endif				// __LSB_VERSION__ >= 1.2




/* LC_NUMERIC category: formatting of numbers. These also correspond to members of `struct lconv'; see <locale.h>.*/
#if __LSB_VERSION__ >= 12
#define RADIXCHAR	0x10000
#define THOUSEP	0x10001
#define YESEXPR	0x50000
#define NOEXPR	0x50001
#define YESSTR	0x50002
#define NOSTR	0x50003
#endif				// __LSB_VERSION__ >= 1.2




// Function prototypes

#if __LSB_VERSION__ >= 10
    extern char *nl_langinfo(nl_item);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
