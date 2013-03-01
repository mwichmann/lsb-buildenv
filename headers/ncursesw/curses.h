#if (__LSB_VERSION__ >= 50 )
#ifndef _NCURSESW_CURSES_H_
#define _NCURSESW_CURSES_H_

#include <stdio.h>
#include <curses.h>
#include <stddef.h>
#include <stdarg.h>
#include <ncursesw/ncurses_dll.h>

#ifdef __cplusplus
extern "C" {
#endif


#define CURSES	1
#define setsyx(y,x)	do { if (newscr) { \
				 if ((y) == -1 && (x) == -1) \
					 leaveok(newscr, TRUE); \
				 else { \
					 leaveok(newscr, FALSE); \
					 wmove(newscr, (y), (x)); \
				} \
			 } \
		  } while(0)
#define getsyx(y,x)	do { if (newscr) { \
				 if (is_leaveok(newscr)) \
					 (y) = (x) = -1; \
				 else \
					 getyx(newscr,(y), (x)); \
			 } \
		 } while(0)
#define CURSES_H	1
#define NCURSES_VERSION_MAJOR	5
#define NCURSES_VERSION_MINOR	9
#define NCURSES_VERSION_PATCH	20110404
#define NCURSES_VERSION	"5.9"
#define NCURSES_MOUSE_VERSION	1
#define NCURSES_ENABLE_STDBOOL_H	1
#define NCURSES_ATTR_T	int
#define NCURSES_INLINE	inline
#define NCURSES_COLOR_T	short
#define NCURSES_SIZE_T	short
#define NCURSES_TPARM_VARARGS	1
#define NCURSES_CH_T	cchar_t
#ifndef TRUE
#define TRUE	1
#endif
#define NCURSES_BOOL	bool
#ifdef __cplusplus
#  define NCURSES_CAST(type,value)        static_cast<type>(value)
#else
#  define NCURSES_CAST(type,value)        (type)(value)
#endif
#define WA_ATTRIBUTES	A_ATTRIBUTES
#define WA_NORMAL	A_NORMAL
#define WA_STANDOUT	A_STANDOUT
#define WA_UNDERLINE	A_UNDERLINE
#define WA_REVERSE	A_REVERSE
#define WA_BLINK	A_BLINK
#define WA_DIM	A_DIM
#define WA_BOLD	A_BOLD
#define WA_ALTCHARSET	A_ALTCHARSET
#define WA_INVIS	A_INVIS
#define WA_PROTECT	A_PROTECT
#define WA_HORIZONTAL	A_HORIZONTAL
#define WA_LEFT	A_LEFT
#define WA_LOW	A_LOW
#define WA_RIGHT	A_RIGHT
#define WA_TOP	A_TOP
#define WA_VERTICAL	A_VERTICAL
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7
#define NCURSES_ACS(c)	(acs_map[NCURSES_CAST(unsigned char,c)])
#define ACS_ULCORNER	NCURSES_ACS('l')
#define ACS_LLCORNER	NCURSES_ACS('m')
#define ACS_URCORNER	NCURSES_ACS('k')
#define ACS_LRCORNER	NCURSES_ACS('j')
#define ACS_LTEE	NCURSES_ACS('t')
#define ACS_RTEE	NCURSES_ACS('u')
#define ACS_BTEE	NCURSES_ACS('v')
#define ACS_TTEE	NCURSES_ACS('w')
#define ACS_HLINE	NCURSES_ACS('q')
#define ACS_VLINE	NCURSES_ACS('x')
#define ACS_PLUS	NCURSES_ACS('n')
#define ACS_S1	NCURSES_ACS('o')
#define ACS_S9	NCURSES_ACS('s')
#define ACS_DIAMOND	NCURSES_ACS('`')
#define ACS_CKBOARD	NCURSES_ACS('a')
#define ACS_DEGREE	NCURSES_ACS('f')
#define ACS_PLMINUS	NCURSES_ACS('g')
#define ACS_BULLET	NCURSES_ACS('~')
#define ACS_LARROW	NCURSES_ACS(',')
#define ACS_RARROW	NCURSES_ACS('+')
#define ACS_DARROW	NCURSES_ACS('.')
#define ACS_UARROW	NCURSES_ACS('-')
#define ACS_BOARD	NCURSES_ACS('h')
#define ACS_LANTERN	NCURSES_ACS('i')
#define ACS_BLOCK	NCURSES_ACS('0')
#define ACS_S3	NCURSES_ACS('p')
#define ACS_S7	NCURSES_ACS('r')
#define ACS_LEQUAL	NCURSES_ACS('y')
#define ACS_GEQUAL	NCURSES_ACS('z')
#define ACS_PI	NCURSES_ACS('{')
#define ACS_NEQUAL	NCURSES_ACS('|')
#define ACS_STERLING	NCURSES_ACS('}')
#define ACS_BSSB	ACS_ULCORNER
#define ACS_SSBB	ACS_LLCORNER
#define ACS_BBSS	ACS_URCORNER
#define ACS_SBBS	ACS_LRCORNER
#define ACS_SBSS	ACS_RTEE
#define ACS_SSSB	ACS_LTEE
#define ACS_SSBS	ACS_BTEE
#define ACS_BSSS	ACS_TTEE
#define ACS_BSBS	ACS_HLINE
#define ACS_SBSB	ACS_VLINE
#define ACS_SSSS	ACS_PLUS
#define ERR	(-1)
#define OK	(0)
#define _SUBWIN	0x01
#define _ENDLINE	0x02
#define _FULLWIN	0x04
#define _SCROLLWIN	0x08
#define _ISPAD	0x10
#define _HASMOVED	0x20
#define _WRAPPED	0x40
#define _NOCHANGE	-1
#define _NEWINDEX	-1
#define CCHARW_MAX	5
#define NCURSES_EXT_COLORS	20110404
#define GCC_PRINTFLIKE(fmt,var)	__attribute__((format(printf,fmt,var)))
#define GCC_SCANFLIKE(fmt,var)	__attribute__((format(scanf,fmt,var)))
#define vid_attr(a,pair,opts)	vidattr(a)
#define NCURSES_EXT_FUNCS	20110404
#define curses_version()	NCURSES_VERSION
#define NCURSES_SP_FUNCS	20110404
#define NCURSES_SP_OUTC	NCURSES_SP_NAME(NCURSES_OUTC)
#define NCURSES_SP_NAME(name)	name
#define NCURSES_ATTR_SHIFT	8
#define NCURSES_BITS(mask,shift)	((mask) << ((shift) + NCURSES_ATTR_SHIFT))
#define A_NORMAL	(1UL - 1UL)
#define A_ATTRIBUTES	NCURSES_BITS(~(1UL - 1UL),0)
#define A_CHARTEXT	(NCURSES_BITS(1UL,0) - 1UL)
#define A_COLOR	NCURSES_BITS(((1UL) << 8) - 1UL,0)
#define A_STANDOUT	NCURSES_BITS(1UL,8)
#define A_UNDERLINE	NCURSES_BITS(1UL,9)
#define A_REVERSE	NCURSES_BITS(1UL,10)
#define A_BLINK	NCURSES_BITS(1UL,11)
#define A_DIM	NCURSES_BITS(1UL,12)
#define A_BOLD	NCURSES_BITS(1UL,13)
#define A_ALTCHARSET	NCURSES_BITS(1UL,14)
#define A_INVIS	NCURSES_BITS(1UL,15)
#define A_PROTECT	NCURSES_BITS(1UL,16)
#define A_HORIZONTAL	NCURSES_BITS(1UL,17)
#define A_LEFT	NCURSES_BITS(1UL,18)
#define A_LOW	NCURSES_BITS(1UL,19)
#define A_RIGHT	NCURSES_BITS(1UL,20)
#define A_TOP	NCURSES_BITS(1UL,21)
#define A_VERTICAL	NCURSES_BITS(1UL,22)
#define getyx(win,y,x)	(y = getcury(win), x = getcurx(win))
#define getbegyx(win,y,x)	(y = getbegy(win), x = getbegx(win))
#define getmaxyx(win,y,x)	(y = getmaxy(win), x = getmaxx(win))
#define getparyx(win,y,x)	(y = getpary(win), x = getparx(win))
#define wgetstr(w, s)	wgetnstr(w, s, -1)
#define getnstr(s, n)	wgetnstr(stdscr, s, n)
#define setterm(term)	setupterm(term, 1, (int *)0)
#define fixterm()	reset_prog_mode()
#define resetterm()	reset_shell_mode()
#define saveterm()	def_prog_mode()
#define crmode()	cbreak()
#define nocrmode()	nocbreak()
#define getattrs(win)	NCURSES_CAST(int, (win) ? (win)->_attrs : A_NORMAL)
#define getcurx(win)	((win) ? (win)->_curx : ERR)
#define getcury(win)	((win) ? (win)->_cury : ERR)
#define getbegx(win)	((win) ? (win)->_begx : ERR)
#define getbegy(win)	((win) ? (win)->_begy : ERR)
#define getmaxx(win)	((win) ? ((win)->_maxx + 1) : ERR)
#define getmaxy(win)	((win) ? ((win)->_maxy + 1) : ERR)
#define getparx(win)	((win) ? (win)->_parx : ERR)
#define getpary(win)	((win) ? (win)->_pary : ERR)
#define wstandout(win)	(wattrset(win,A_STANDOUT))
#define wstandend(win)	(wattrset(win,A_NORMAL))
#define wattron(win,at)	wattr_on(win, NCURSES_CAST(attr_t, at), NULL)
#define wattroff(win,at)	wattr_off(win, NCURSES_CAST(attr_t, at), NULL)
#define scroll(win)	wscrl(win,1)
#define touchwin(win)	wtouchln((win), 0, getmaxy(win), 1)
#define touchline(win, s, c)	wtouchln((win), s, c, 1)
#define untouchwin(win)	wtouchln((win), 0, getmaxy(win), 0)
#define box(win, v, h)	wborder(win, v, v, h, h, 0, 0, 0, 0)
#define border(ls, rs, ts, bs, tl, tr, bl, br)	wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)
#define hline(ch, n)	whline(stdscr, ch, n)
#define vline(ch, n)	wvline(stdscr, ch, n)
#define winstr(w, s)	winnstr(w, s, -1)
#define winchstr(w, s)	winchnstr(w, s, -1)
#define winsstr(w, s)	winsnstr(w, s, -1)
#define redrawwin(win)	wredrawln(win, 0, (win)->_maxy+1)
#define waddstr(win,str)	waddnstr(win,str,-1)
#define waddchstr(win,str)	waddchnstr(win,str,-1)
#define COLOR_PAIR(n)	NCURSES_BITS(n, 0)
#define PAIR_NUMBER(a)	(NCURSES_CAST(int,((NCURSES_CAST(unsigned long,a) & A_COLOR) >> NCURSES_ATTR_SHIFT)))
#define addch(ch)	waddch(stdscr,ch)
#define addchnstr(str,n)	waddchnstr(stdscr,str,n)
#define addchstr(str)	waddchstr(stdscr,str)
#define addnstr(str,n)	waddnstr(stdscr,str,n)
#define addstr(str)	waddnstr(stdscr,str,-1)
#define attroff(at)	wattroff(stdscr,at)
#define attron(at)	wattron(stdscr,at)
#define attrset(at)	wattrset(stdscr,at)
#define attr_get(ap,cp,o)	wattr_get(stdscr,ap,cp,o)
#define attr_off(a,o)	wattr_off(stdscr,a,o)
#define attr_on(a,o)	wattr_on(stdscr,a,o)
#define attr_set(a,c,o)	wattr_set(stdscr,a,c,o)
#define bkgd(ch)	wbkgd(stdscr,ch)
#define bkgdset(ch)	wbkgdset(stdscr,ch)
#define chgat(n,a,c,o)	wchgat(stdscr,n,a,c,o)
#define clear()	wclear(stdscr)
#define clrtobot()	wclrtobot(stdscr)
#define clrtoeol()	wclrtoeol(stdscr)
#define color_set(c,o)	wcolor_set(stdscr,c,o)
#define delch()	wdelch(stdscr)
#define deleteln()	winsdelln(stdscr,-1)
#define echochar(c)	wechochar(stdscr,c)
#define erase()	werase(stdscr)
#define getch()	wgetch(stdscr)
#define getstr(str)	wgetstr(stdscr,str)
#define inch()	winch(stdscr)
#define inchnstr(s,n)	winchnstr(stdscr,s,n)
#define inchstr(s)	winchstr(stdscr,s)
#define innstr(s,n)	winnstr(stdscr,s,n)
#define insch(c)	winsch(stdscr,c)
#define insdelln(n)	winsdelln(stdscr,n)
#define insertln()	winsdelln(stdscr,1)
#define insnstr(s,n)	winsnstr(stdscr,s,n)
#define insstr(s)	winsstr(stdscr,s)
#define instr(s)	winstr(stdscr,s)
#define move(y,x)	wmove(stdscr,y,x)
#define refresh()	wrefresh(stdscr)
#define scrl(n)	wscrl(stdscr,n)
#define setscrreg(t,b)	wsetscrreg(stdscr,t,b)
#define standend()	wstandend(stdscr)
#define standout()	wstandout(stdscr)
#define timeout(delay)	wtimeout(stdscr,delay)
#define wdeleteln(win)	winsdelln(win,-1)
#define winsertln(win)	winsdelln(win,1)
#define mvwaddch(win,y,x,ch)	(wmove(win,y,x) == ERR ? ERR : waddch(win,ch))
#define mvwaddchnstr(win,y,x,str,n)	(wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,n))
#define mvwaddchstr(win,y,x,str)	(wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,-1))
#define mvwaddnstr(win,y,x,str,n)	(wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,n))
#define mvwaddstr(win,y,x,str)	(wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,-1))
#define mvwdelch(win,y,x)	(wmove(win,y,x) == ERR ? ERR : wdelch(win))
#define mvwchgat(win,y,x,n,a,c,o)	(wmove(win,y,x) == ERR ? ERR : wchgat(win,n,a,c,o))
#define mvwgetch(win,y,x)	(wmove(win,y,x) == ERR ? ERR : wgetch(win))
#define mvwgetnstr(win,y,x,str,n)	(wmove(win,y,x) == ERR ? ERR : wgetnstr(win,str,n))
#define mvwgetstr(win,y,x,str)	(wmove(win,y,x) == ERR ? ERR : wgetstr(win,str))
#define mvwhline(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : whline(win,c,n))
#define mvwinch(win,y,x)	(wmove(win,y,x) == ERR ? NCURSES_CAST(chtype, ERR) : winch(win))
#define mvwinchnstr(win,y,x,s,n)	(wmove(win,y,x) == ERR ? ERR : winchnstr(win,s,n))
#define mvwinchstr(win,y,x,s)	(wmove(win,y,x) == ERR ? ERR : winchstr(win,s))
#define mvwinnstr(win,y,x,s,n)	(wmove(win,y,x) == ERR ? ERR : winnstr(win,s,n))
#define mvwinsch(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : winsch(win,c))
#define mvwinsnstr(win,y,x,s,n)	(wmove(win,y,x) == ERR ? ERR : winsnstr(win,s,n))
#define mvwinsstr(win,y,x,s)	(wmove(win,y,x) == ERR ? ERR : winsstr(win,s))
#define mvwinstr(win,y,x,s)	(wmove(win,y,x) == ERR ? ERR : winstr(win,s))
#define mvwvline(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : wvline(win,c,n))
#define mvaddch(y,x,ch)	mvwaddch(stdscr,y,x,ch)
#define mvaddchnstr(y,x,str,n)	mvwaddchnstr(stdscr,y,x,str,n)
#define mvaddchstr(y,x,str)	mvwaddchstr(stdscr,y,x,str)
#define mvaddnstr(y,x,str,n)	mvwaddnstr(stdscr,y,x,str,n)
#define mvaddstr(y,x,str)	mvwaddstr(stdscr,y,x,str)
#define mvchgat(y,x,n,a,c,o)	mvwchgat(stdscr,y,x,n,a,c,o)
#define mvdelch(y,x)	mvwdelch(stdscr,y,x)
#define mvgetch(y,x)	mvwgetch(stdscr,y,x)
#define mvgetnstr(y,x,str,n)	mvwgetnstr(stdscr,y,x,str,n)
#define mvgetstr(y,x,str)	mvwgetstr(stdscr,y,x,str)
#define mvhline(y,x,c,n)	mvwhline(stdscr,y,x,c,n)
#define mvinch(y,x)	mvwinch(stdscr,y,x)
#define mvinchnstr(y,x,s,n)	mvwinchnstr(stdscr,y,x,s,n)
#define mvinchstr(y,x,s)	mvwinchstr(stdscr,y,x,s)
#define mvinnstr(y,x,s,n)	mvwinnstr(stdscr,y,x,s,n)
#define mvinsch(y,x,c)	mvwinsch(stdscr,y,x,c)
#define mvinsnstr(y,x,s,n)	mvwinsnstr(stdscr,y,x,s,n)
#define mvinsstr(y,x,s)	mvwinsstr(stdscr,y,x,s)
#define mvinstr(y,x,s)	mvwinstr(stdscr,y,x,s)
#define mvvline(y,x,c,n)	mvwvline(stdscr,y,x,c,n)
#define getbkgd(win)	((win)->_bkgd)
#define slk_attr_off(a,v)	((v) ? ERR : slk_attroff(a))
#define slk_attr_on(a,v)	((v) ? ERR : slk_attron(a))
#define wattr_set(win,a,p,opts)	((win)->_attrs = (((a) & ~A_COLOR) | (attr_t)COLOR_PAIR(p)), OK)
#define vw_printw	vwprintw
#define vw_scanw	vwscanw
#define vsscanf(a,b,c)	_nc_vsscanf(a,b,c)
#define is_cleared(win)	((win) ? (win)->_clear : FALSE)
#define is_idcok(win)	((win) ? (win)->_idcok : FALSE)
#define is_idlok(win)	((win) ? (win)->_idlok : FALSE)
#define is_immedok(win)	((win) ? (win)->_immed : FALSE)
#define is_keypad(win)	((win) ? (win)->_use_keypad : FALSE)
#define is_leaveok(win)	((win) ? (win)->_leaveok : FALSE)
#define is_nodelay(win)	((win) ? ((win)->_delay == 0) : FALSE)
#define is_notimeout(win)	((win) ? (win)->_notimeout : FALSE)
#define is_pad(win)	((win) ? ((win)->_flags & _ISPAD) != 0 : FALSE)
#define is_scrollok(win)	((win) ? (win)->_scroll : FALSE)
#define is_subwin(win)	((win) ? ((win)->_flags & _SUBWIN) != 0 : FALSE)
#define is_syncok(win)	((win) ? (win)->_sync : FALSE)
#define wgetparent(win)	((win) ? (win)->_parent : 0)
#define wgetscrreg(win,t,b)	((win) ? (*(t) = (win)->_regtop, *(b) = (win)->_regbottom, OK) : ERR)
#define KEY_CODE_YES	0400
#define KEY_MIN	0401
#define KEY_BREAK	0401
#define KEY_SRESET	0530
#define KEY_RESET	0531
#define KEY_DOWN	0402
#define KEY_UP	0403
#define KEY_LEFT	0404
#define KEY_RIGHT	0405
#define KEY_HOME	0406
#define KEY_BACKSPACE	0407
#define KEY_F0	0410
#define KEY_F(n)	(KEY_F0+(n))
#define KEY_DL	0510
#define KEY_IL	0511
#define KEY_DC	0512
#define KEY_IC	0513
#define KEY_EIC	0514
#define KEY_CLEAR	0515
#define KEY_EOS	0516
#define KEY_EOL	0517
#define KEY_SF	0520
#define KEY_SR	0521
#define KEY_NPAGE	0522
#define KEY_PPAGE	0523
#define KEY_STAB	0524
#define KEY_CTAB	0525
#define KEY_CATAB	0526
#define KEY_ENTER	0527
#define KEY_PRINT	0532
#define KEY_LL	0533
#define KEY_A1	0534
#define KEY_A3	0535
#define KEY_B2	0536
#define KEY_C1	0537
#define KEY_C3	0540
#define KEY_BTAB	0541
#define KEY_BEG	0542
#define KEY_CANCEL	0543
#define KEY_CLOSE	0544
#define KEY_COMMAND	0545
#define KEY_COPY	0546
#define KEY_CREATE	0547
#define KEY_END	0550
#define KEY_EXIT	0551
#define KEY_FIND	0552
#define KEY_HELP	0553
#define KEY_MARK	0554
#define KEY_MESSAGE	0555
#define KEY_MOVE	0556
#define KEY_NEXT	0557
#define KEY_OPEN	0560
#define KEY_OPTIONS	0561
#define KEY_PREVIOUS	0562
#define KEY_REDO	0563
#define KEY_REFERENCE	0564
#define KEY_REFRESH	0565
#define KEY_REPLACE	0566
#define KEY_RESTART	0567
#define KEY_RESUME	0570
#define KEY_SAVE	0571
#define KEY_SBEG	0572
#define KEY_SCANCEL	0573
#define KEY_SCOMMAND	0574
#define KEY_SCOPY	0575
#define KEY_SCREATE	0576
#define KEY_SDC	0577
#define KEY_SDL	0600
#define KEY_SELECT	0601
#define KEY_SEND	0602
#define KEY_SEOL	0603
#define KEY_SEXIT	0604
#define KEY_SFIND	0605
#define KEY_SHELP	0606
#define KEY_SHOME	0607
#define KEY_SIC	0610
#define KEY_SLEFT	0611
#define KEY_SMESSAGE	0612
#define KEY_SMOVE	0613
#define KEY_SNEXT	0614
#define KEY_SOPTIONS	0615
#define KEY_SPREVIOUS	0616
#define KEY_SPRINT	0617
#define KEY_SREDO	0620
#define KEY_SREPLACE	0621
#define KEY_SRIGHT	0622
#define KEY_SRSUME	0623
#define KEY_SSAVE	0624
#define KEY_SSUSPEND	0625
#define KEY_SUNDO	0626
#define KEY_SUSPEND	0627
#define KEY_UNDO	0630
#define KEY_MOUSE	0631
#define KEY_RESIZE	0632
#define KEY_EVENT	0633
#define KEY_MAX	0777
#define _XOPEN_CURSES	1
#define NCURSES_WACS(c)	(&_nc_wacs[(unsigned char)c])
#define WACS_BSSB	NCURSES_WACS('l')
#define WACS_SSBB	NCURSES_WACS('m')
#define WACS_BBSS	NCURSES_WACS('k')
#define WACS_SBBS	NCURSES_WACS('j')
#define WACS_SBSS	NCURSES_WACS('u')
#define WACS_SSSB	NCURSES_WACS('t')
#define WACS_SSBS	NCURSES_WACS('v')
#define WACS_BSSS	NCURSES_WACS('w')
#define WACS_BSBS	NCURSES_WACS('q')
#define WACS_SBSB	NCURSES_WACS('x')
#define WACS_SSSS	NCURSES_WACS('n')
#define WACS_ULCORNER	WACS_BSSB
#define WACS_LLCORNER	WACS_SSBB
#define WACS_URCORNER	WACS_BBSS
#define WACS_LRCORNER	WACS_SBBS
#define WACS_RTEE	WACS_SBSS
#define WACS_LTEE	WACS_SSSB
#define WACS_BTEE	WACS_SSBS
#define WACS_TTEE	WACS_BSSS
#define WACS_HLINE	WACS_BSBS
#define WACS_VLINE	WACS_SBSB
#define WACS_PLUS	WACS_SSSS
#define WACS_S1	NCURSES_WACS('o')
#define WACS_S9	NCURSES_WACS('s')
#define WACS_DIAMOND	NCURSES_WACS('`')
#define WACS_CKBOARD	NCURSES_WACS('a')
#define WACS_DEGREE	NCURSES_WACS('f')
#define WACS_PLMINUS	NCURSES_WACS('g')
#define WACS_BULLET	NCURSES_WACS('~')
#define WACS_LARROW	NCURSES_WACS(',')
#define WACS_RARROW	NCURSES_WACS('+')
#define WACS_DARROW	NCURSES_WACS('.')
#define WACS_UARROW	NCURSES_WACS('-')
#define WACS_BOARD	NCURSES_WACS('h')
#define WACS_LANTERN	NCURSES_WACS('i')
#define WACS_BLOCK	NCURSES_WACS('0')
#define WACS_S3	NCURSES_WACS('p')
#define WACS_S7	NCURSES_WACS('r')
#define WACS_LEQUAL	NCURSES_WACS('y')
#define WACS_GEQUAL	NCURSES_WACS('z')
#define WACS_PI	NCURSES_WACS('{')
#define WACS_NEQUAL	NCURSES_WACS('|')
#define WACS_STERLING	NCURSES_WACS('}')
#define WACS_BDDB	NCURSES_WACS('C')
#define WACS_DDBB	NCURSES_WACS('D')
#define WACS_BBDD	NCURSES_WACS('B')
#define WACS_DBBD	NCURSES_WACS('A')
#define WACS_DBDD	NCURSES_WACS('G')
#define WACS_DDDB	NCURSES_WACS('F')
#define WACS_DDBD	NCURSES_WACS('H')
#define WACS_BDDD	NCURSES_WACS('I')
#define WACS_BDBD	NCURSES_WACS('R')
#define WACS_DBDB	NCURSES_WACS('Y')
#define WACS_DDDD	NCURSES_WACS('E')
#define WACS_D_ULCORNER	WACS_BDDB
#define WACS_D_LLCORNER	WACS_DDBB
#define WACS_D_URCORNER	WACS_BBDD
#define WACS_D_LRCORNER	WACS_DBBD
#define WACS_D_RTEE	WACS_DBDD
#define WACS_D_LTEE	WACS_DDDB
#define WACS_D_BTEE	WACS_DDBD
#define WACS_D_TTEE	WACS_BDDD
#define WACS_D_HLINE	WACS_BDBD
#define WACS_D_VLINE	WACS_DBDB
#define WACS_D_PLUS	WACS_DDDD
#define WACS_BTTB	NCURSES_WACS('L')
#define WACS_TTBB	NCURSES_WACS('M')
#define WACS_BBTT	NCURSES_WACS('K')
#define WACS_TBBT	NCURSES_WACS('J')
#define WACS_TBTT	NCURSES_WACS('U')
#define WACS_TTTB	NCURSES_WACS('T')
#define WACS_TTBT	NCURSES_WACS('V')
#define WACS_BTTT	NCURSES_WACS('W')
#define WACS_BTBT	NCURSES_WACS('Q')
#define WACS_TBTB	NCURSES_WACS('X')
#define WACS_TTTT	NCURSES_WACS('N')
#define WACS_T_ULCORNER	WACS_BTTB
#define WACS_T_LLCORNER	WACS_TTBB
#define WACS_T_URCORNER	WACS_BBTT
#define WACS_T_LRCORNER	WACS_TBBT
#define WACS_T_RTEE	WACS_TBTT
#define WACS_T_LTEE	WACS_TTTB
#define WACS_T_BTEE	WACS_TTBT
#define WACS_T_TTEE	WACS_BTTT
#define WACS_T_HLINE	WACS_BTBT
#define WACS_T_VLINE	WACS_TBTB
#define WACS_T_PLUS	WACS_TTTT
#define add_wch(c)	wadd_wch(stdscr,c)
#define add_wchnstr(str,n)	wadd_wchnstr(stdscr,str,n)
#define add_wchstr(str)	wadd_wchstr(stdscr,str)
#define addnwstr(wstr,n)	waddnwstr(stdscr,wstr,n)
#define addwstr(wstr)	waddwstr(stdscr,wstr)
#define bkgrnd(c)	wbkgrnd(stdscr,c)
#define bkgrndset(c)	wbkgrndset(stdscr,c)
#define border_set(l,r,t,b,tl,tr,bl,br)	wborder_set(stdscr,l,r,t,b,tl,tr,bl,br)
#define box_set(w,v,h)	wborder_set(w,v,v,h,h,0,0,0,0)
#define echo_wchar(c)	wecho_wchar(stdscr,c)
#define get_wch(c)	wget_wch(stdscr,c)
#define get_wstr(t)	wget_wstr(stdscr,t)
#define getbkgrnd(wch)	wgetbkgrnd(stdscr,wch)
#define getn_wstr(t,n)	wgetn_wstr(stdscr,t,n)
#define hline_set(c,n)	whline_set(stdscr,c,n)
#define in_wch(c)	win_wch(stdscr,c)
#define in_wchnstr(c,n)	win_wchnstr(stdscr,c,n)
#define in_wchstr(c)	win_wchstr(stdscr,c)
#define innwstr(c,n)	winnwstr(stdscr,c,n)
#define ins_nwstr(t,n)	wins_nwstr(stdscr,t,n)
#define ins_wch(c)	wins_wch(stdscr,c)
#define ins_wstr(t)	wins_wstr(stdscr,t)
#define inwstr(c)	winwstr(stdscr,c)
#define vline_set(c,n)	wvline_set(stdscr,c,n)
#define wadd_wchstr(win,str)	wadd_wchnstr(win,str,-1)
#define waddwstr(win,wstr)	waddnwstr(win,wstr,-1)
#define wget_wstr(w,t)	wgetn_wstr(w,t,-1)
#define win_wchstr(w,c)	win_wchnstr(w,c,-1)
#define wins_wstr(w,t)	wins_nwstr(w,t,-1)
#define wgetbkgrnd(win,wch)	(*wch = win->_bkgrnd, OK)
#define mvadd_wch(y,x,c)	mvwadd_wch(stdscr,y,x,c)
#define mvadd_wchnstr(y,x,s,n)	mvwadd_wchnstr(stdscr,y,x,s,n)
#define mvadd_wchstr(y,x,s)	mvwadd_wchstr(stdscr,y,x,s)
#define mvaddnwstr(y,x,wstr,n)	mvwaddnwstr(stdscr,y,x,wstr,n)
#define mvaddwstr(y,x,wstr)	mvwaddwstr(stdscr,y,x,wstr)
#define mvget_wch(y,x,c)	mvwget_wch(stdscr,y,x,c)
#define mvget_wstr(y,x,t)	mvwget_wstr(stdscr,y,x,t)
#define mvgetn_wstr(y,x,t,n)	mvwgetn_wstr(stdscr,y,x,t,n)
#define mvhline_set(y,x,c,n)	mvwhline_set(stdscr,y,x,c,n)
#define mvin_wch(y,x,c)	mvwin_wch(stdscr,y,x,c)
#define mvin_wchnstr(y,x,c,n)	mvwin_wchnstr(stdscr,y,x,c,n)
#define mvin_wchstr(y,x,c)	mvwin_wchstr(stdscr,y,x,c)
#define mvinnwstr(y,x,c,n)	mvwinnwstr(stdscr,y,x,c,n)
#define mvins_nwstr(y,x,t,n)	mvwins_nwstr(stdscr,y,x,t,n)
#define mvins_wch(y,x,c)	mvwins_wch(stdscr,y,x,c)
#define mvins_wstr(y,x,t)	mvwins_wstr(stdscr,y,x,t)
#define mvinwstr(y,x,c)	mvwinwstr(stdscr,y,x,c)
#define mvvline_set(y,x,c,n)	mvwvline_set(stdscr,y,x,c,n)
#define mvwadd_wch(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : wadd_wch(win,c))
#define mvwadd_wchnstr(win,y,x,s,n)	(wmove(win,y,x) == ERR ? ERR : wadd_wchnstr(win,s,n))
#define mvwadd_wchstr(win,y,x,s)	(wmove(win,y,x) == ERR ? ERR : wadd_wchstr(win,s))
#define mvwaddnwstr(win,y,x,wstr,n)	(wmove(win,y,x) == ERR ? ERR : waddnwstr(win,wstr,n))
#define mvwaddwstr(win,y,x,wstr)	(wmove(win,y,x) == ERR ? ERR : waddwstr(win,wstr))
#define mvwget_wch(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : wget_wch(win,c))
#define mvwget_wstr(win,y,x,t)	(wmove(win,y,x) == ERR ? ERR : wget_wstr(win,t))
#define mvwgetn_wstr(win,y,x,t,n)	(wmove(win,y,x) == ERR ? ERR : wgetn_wstr(win,t,n))
#define mvwhline_set(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : whline_set(win,c,n))
#define mvwin_wch(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : win_wch(win,c))
#define mvwin_wchnstr(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : win_wchnstr(win,c,n))
#define mvwin_wchstr(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : win_wchstr(win,c))
#define mvwinnwstr(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : winnwstr(win,c,n))
#define mvwins_nwstr(win,y,x,t,n)	(wmove(win,y,x) == ERR ? ERR : wins_nwstr(win,t,n))
#define mvwins_wch(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : wins_wch(win,c))
#define mvwins_wstr(win,y,x,t)	(wmove(win,y,x) == ERR ? ERR : wins_wstr(win,t))
#define mvwinwstr(win,y,x,c)	(wmove(win,y,x) == ERR ? ERR : winwstr(win,c))
#define mvwvline_set(win,y,x,c,n)	(wmove(win,y,x) == ERR ? ERR : wvline_set(win,c,n))
#define NCURSES_MOUSE_MASK(b,m)	((m) << (((b) - 1) * 6))
#define NCURSES_BUTTON_RELEASED	001L
#define NCURSES_BUTTON_PRESSED	002L
#define NCURSES_BUTTON_CLICKED	004L
#define NCURSES_DOUBLE_CLICKED	010L
#define NCURSES_TRIPLE_CLICKED	020L
#define NCURSES_RESERVED_EVENT	040L
#define BUTTON1_RELEASED	NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_RELEASED)
#define BUTTON1_PRESSED	NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_PRESSED)
#define BUTTON1_CLICKED	NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_CLICKED)
#define BUTTON1_DOUBLE_CLICKED	NCURSES_MOUSE_MASK(1, NCURSES_DOUBLE_CLICKED)
#define BUTTON1_TRIPLE_CLICKED	NCURSES_MOUSE_MASK(1, NCURSES_TRIPLE_CLICKED)
#define BUTTON2_RELEASED	NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_RELEASED)
#define BUTTON2_PRESSED	NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_PRESSED)
#define BUTTON2_CLICKED	NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_CLICKED)
#define BUTTON2_DOUBLE_CLICKED	NCURSES_MOUSE_MASK(2, NCURSES_DOUBLE_CLICKED)
#define BUTTON2_TRIPLE_CLICKED	NCURSES_MOUSE_MASK(2, NCURSES_TRIPLE_CLICKED)
#define BUTTON3_RELEASED	NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_RELEASED)
#define BUTTON3_PRESSED	NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_PRESSED)
#define BUTTON3_CLICKED	NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_CLICKED)
#define BUTTON3_DOUBLE_CLICKED	NCURSES_MOUSE_MASK(3, NCURSES_DOUBLE_CLICKED)
#define BUTTON3_TRIPLE_CLICKED	NCURSES_MOUSE_MASK(3, NCURSES_TRIPLE_CLICKED)
#define BUTTON4_RELEASED	NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_RELEASED)
#define BUTTON4_PRESSED	NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_PRESSED)
#define BUTTON4_CLICKED	NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_CLICKED)
#define BUTTON4_DOUBLE_CLICKED	NCURSES_MOUSE_MASK(4, NCURSES_DOUBLE_CLICKED)
#define BUTTON4_TRIPLE_CLICKED	NCURSES_MOUSE_MASK(4, NCURSES_TRIPLE_CLICKED)
#define BUTTON5_RELEASED	NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_RELEASED)
#define BUTTON5_PRESSED	NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_PRESSED)
#define BUTTON5_CLICKED	NCURSES_MOUSE_MASK(5, NCURSES_BUTTON_CLICKED)
#define BUTTON5_DOUBLE_CLICKED	NCURSES_MOUSE_MASK(5, NCURSES_DOUBLE_CLICKED)
#define BUTTON5_TRIPLE_CLICKED	NCURSES_MOUSE_MASK(5, NCURSES_TRIPLE_CLICKED)
#define BUTTON_CTRL	NCURSES_MOUSE_MASK(6, 0001L)
#define BUTTON_SHIFT	NCURSES_MOUSE_MASK(6, 0002L)
#define BUTTON_ALT	NCURSES_MOUSE_MASK(6, 0004L)
#define REPORT_MOUSE_POSITION	NCURSES_MOUSE_MASK(6, 0010L)
#define BUTTON1_RESERVED_EVENT	NCURSES_MOUSE_MASK(1, NCURSES_RESERVED_EVENT)
#define BUTTON2_RESERVED_EVENT	NCURSES_MOUSE_MASK(2, NCURSES_RESERVED_EVENT)
#define BUTTON3_RESERVED_EVENT	NCURSES_MOUSE_MASK(3, NCURSES_RESERVED_EVENT)
#define BUTTON4_RESERVED_EVENT	NCURSES_MOUSE_MASK(4, NCURSES_RESERVED_EVENT)
#define ALL_MOUSE_EVENTS	(REPORT_MOUSE_POSITION - 1)
#define BUTTON_RELEASE(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 001))
#define BUTTON_PRESS(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 002))
#define BUTTON_CLICK(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 004))
#define BUTTON_DOUBLE_CLICK(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 010))
#define BUTTON_TRIPLE_CLICK(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 020))
#define BUTTON_RESERVED_EVENT(e,	x) ((e) & NCURSES_MOUSE_MASK(x, 040))
#define mouse_trafo(y,x,to_screen)	wmouse_trafo(stdscr,y,x,to_screen)
#define _tracech_t	_tracecchar_t
#define _tracech_t2	_tracecchar_t2
#define TRACE_DISABLE	0x0000
#define TRACE_TIMES	0x0001
#define TRACE_TPUTS	0x0002
#define TRACE_UPDATE	0x0004
#define TRACE_MOVE	0x0008
#define TRACE_CHARPUT	0x0010
#define TRACE_ORDINARY	0x001F
#define TRACE_CALLS	0x0020
#define TRACE_VIRTPUT	0x0040
#define TRACE_IEVENT	0x0080
#define TRACE_BITS	0x0100
#define TRACE_ICALLS	0x0200
#define TRACE_CCALLS	0x0400
#define TRACE_DATABASE	0x0800
#define TRACE_ATTRS	0x1000
#define TRACE_SHIFT	13
#define TRACE_MAXIMUM	((1 << TRACE_SHIFT) - 1)
#define OPTIMIZE_MVCUR	0x01
#define OPTIMIZE_HASHMAP	0x02
#define OPTIMIZE_SCROLL	0x04
#define OPTIMIZE_ALL	0xff



    typedef unsigned long int chtype;

    typedef chtype attr_t;


    typedef struct {
	attr_t attr;
	wchar_t chars[CCHARW_MAX];
    } cchar_t;

    typedef struct screen SCREEN;

    typedef struct _win_st WINDOW;

    typedef unsigned long int mmask_t;

    typedef unsigned char bool;

    struct pdat {
	short _pad_y;
	short _pad_x;
	short _pad_top;
	short _pad_left;
	short _pad_bottom;
	short _pad_right;
    };

    struct _win_st {
	short _cury;		/* current cursor position */
	short _curx;
	short _maxy;		/* maximums of x and y, NOT window size */
	short _maxx;
	short _begy;		/* screen coords of upper-left-hand corner */
	short _begx;
	short _flags;		/* window state flags */
	attr_t _attrs;		/* current attribute for non-space character */
	chtype _bkgd;		/* current background char/attribute pair */
	bool _notimeout;	/* no time out on function-key entry? */
	bool _clear;		/* consider all data in the window invalid? */
	bool _leaveok;		/* OK to not reset cursor on exit? */
	bool _scroll;		/* OK to scroll this window? */
	bool _idlok;		/* OK to use insert/delete line? */
	bool _idcok;		/* OK to use insert/delete char? */
	bool _immed;		/* window in immed mode? (not yet used) */
	bool _sync;		/* window in sync mode? */
	bool _use_keypad;	/* process function keys into KEY_ symbols? */
	int _delay;		/* 0 = nodelay, <0 = blocking, >0 = delay */
	struct ldat *_line;	/* the actual line data */
	short _regtop;		/* top line of scrolling region */
	short _regbottom;	/* bottom line of scrolling region */
	int _parx;		/* x coordinate of this window in parent */
	int _pary;		/* y coordinate of this window in parent */
	WINDOW *_parent;	/* pointer to parent if a sub-window */
	struct pdat _pad;
	short _yoffset;		/* real begy is _begy + _yoffset */
	cchar_t _bkgrnd;	/* current background char/attribute pair */
    };


    typedef unsigned char NCURSES_BOOL;

    typedef int (*NCURSES_OUTC) (int);

    typedef int (*NCURSES_WINDOW_CB) (WINDOW *, void *);

    typedef int (*NCURSES_SCREEN_CB) (SCREEN *, void *);

    typedef struct {
	short id;
	int x;
	int y;
	int z;
	mmask_t bstate;
    } MEVENT;

    typedef unsigned int wint_t;

    int (*bstate) (WINDOW *, int);

    struct ldat;


/* Function prototypes */

    extern int COLORS;
#undef COLOR_PAIR
    extern int COLOR_PAIR(int);
    extern int COLOR_PAIRS;
    extern int COLS;
    extern int ESCDELAY;
    extern int LINES;
#undef PAIR_NUMBER
    extern int PAIR_NUMBER(int);
    extern int TABSIZE;
    extern chtype acs_map[];
#undef add_wch
    extern int add_wch(cchar_t *);
#undef add_wchnstr
    extern int add_wchnstr(cchar_t *, int);
#undef add_wchstr
    extern int add_wchstr(cchar_t *);
#undef addch
    extern int addch(const chtype);
#undef addchnstr
    extern int addchnstr(const chtype *, int);
#undef addchstr
    extern int addchstr(const chtype *);
#undef addnstr
    extern int addnstr(const char *, int);
#undef addnwstr
    extern int addnwstr(wchar_t *, int);
#undef addstr
    extern int addstr(const char *);
#undef addwstr
    extern int addwstr(wchar_t *);
    extern int assume_default_colors(int, int);
#undef attr_get
    extern int attr_get(attr_t *, short *, void *);
#undef attr_off
    extern int attr_off(attr_t, void *);
#undef attr_on
    extern int attr_on(attr_t, void *);
#undef attr_set
    extern int attr_set(attr_t, short, void *);
#undef attroff
    extern int attroff(int);
#undef attron
    extern int attron(int);
#undef attrset
    extern int attrset(int);
    extern int baudrate(void);
    extern int beep(void);
#undef bkgd
    extern int bkgd(chtype);
#undef bkgdset
    extern void bkgdset(chtype);
#undef bkgrnd
    extern int bkgrnd(cchar_t *);
#undef bkgrndset
    extern void bkgrndset(cchar_t *);
#undef border
    extern int border(chtype, chtype, chtype, chtype, chtype, chtype,
		      chtype, chtype);
#undef border_set
    extern int border_set(cchar_t *, cchar_t *, cchar_t *, cchar_t *,
			  cchar_t *, cchar_t *, cchar_t *, cchar_t *);
#undef box
    extern int box(WINDOW *, chtype, chtype);
#undef box_set
    extern int box_set(WINDOW *, cchar_t *, cchar_t *);
    extern unsigned char can_change_color(void);
    extern int cbreak(void);
#undef chgat
    extern int chgat(int, attr_t, short, const void *);
#undef clear
    extern int clear(void);
    extern int clearok(WINDOW *, unsigned char);
#undef clrtobot
    extern int clrtobot(void);
#undef clrtoeol
    extern int clrtoeol(void);
    extern int color_content(short, short *, short *, short *);
#undef color_set
    extern int color_set(short, void *);
    extern int copywin(const WINDOW *, WINDOW *, int, int, int, int, int,
		       int, int);
    extern int curs_set(int);
    extern WINDOW *curscr;
#undef curses_version
    extern const char *curses_version(void);
    extern int def_prog_mode(void);
    extern int def_shell_mode(void);
    extern int define_key(const char *, int);
    extern int delay_output(int);
#undef delch
    extern int delch(void);
#undef deleteln
    extern int deleteln(void);
    extern void delscreen(SCREEN *);
    extern int delwin(WINDOW *);
    extern WINDOW *derwin(WINDOW *, int, int, int, int);
    extern int doupdate(void);
    extern WINDOW *dupwin(WINDOW *);
    extern int echo(void);
#undef echo_wchar
    extern int echo_wchar(cchar_t *);
#undef echochar
    extern int echochar(const chtype);
    extern int endwin(void);
#undef erase
    extern int erase(void);
    extern char erasechar(void);
    extern int erasewchar(wchar_t *);
    extern void filter(void);
    extern int flash(void);
    extern int flushinp(void);
#undef get_wch
    extern int get_wch(wint_t *);
#undef get_wstr
    extern int get_wstr(wint_t *);
#undef getbkgd
    extern chtype getbkgd(WINDOW *);
#undef getbkgrnd
    extern int getbkgrnd(cchar_t *);
    extern int getcchar(cchar_t *, wchar_t *, attr_t *, short *, void *);
#undef getch
    extern int getch(void);
    extern int getmouse(MEVENT *);
#undef getn_wstr
    extern int getn_wstr(wint_t *, int);
#undef getnstr
    extern int getnstr(char *, int);
#undef getstr
    extern int getstr(char *);
    extern WINDOW *getwin(FILE *);
    extern int halfdelay(int);
    extern unsigned char has_colors(void);
    extern unsigned char has_ic(void);
    extern unsigned char has_il(void);
    extern int has_key(void);
    extern bool has_mouse(void);
#undef hline
    extern int hline(chtype, int);
#undef hline_set
    extern int hline_set(cchar_t *, int);
    extern void idcok(WINDOW *, unsigned char);
    extern int idlok(WINDOW *, unsigned char);
    extern void immedok(WINDOW *, unsigned char);
#undef in_wch
    extern int in_wch(cchar_t *);
#undef in_wchnstr
    extern int in_wchnstr(cchar_t *, int);
#undef in_wchstr
    extern int in_wchstr(cchar_t *);
#undef inch
    extern chtype inch(void);
#undef inchnstr
    extern int inchnstr(chtype *, int);
#undef inchstr
    extern int inchstr(chtype *);
    extern int init_color(short, short, short, short);
    extern int init_pair(short, short, short);
    extern WINDOW *initscr(void);
#undef innstr
    extern int innstr(char *, int);
#undef innwstr
    extern int innwstr(wchar_t *, int);
#undef ins_nwstr
    extern int ins_nwstr(wchar_t *, int);
#undef ins_wch
    extern int ins_wch(cchar_t *);
#undef ins_wstr
    extern int ins_wstr(wchar_t *);
#undef insch
    extern int insch(chtype);
#undef insdelln
    extern int insdelln(int);
#undef insertln
    extern int insertln(void);
#undef insnstr
    extern int insnstr(const char *, int);
#undef insstr
    extern int insstr(const char *);
#undef instr
    extern int instr(char *);
    extern int intrflush(WINDOW *, unsigned char);
#undef inwstr
    extern int inwstr(wchar_t *);
    extern unsigned char is_linetouched(WINDOW *, int);
    extern unsigned char is_wintouched(WINDOW *);
    extern unsigned char isendwin(void);
    extern char *key_name(wchar_t);
    extern char *keybound(int, int);
    extern char *keyname(int);
    extern int keyok(int, unsigned char);
    extern int keypad(WINDOW *, unsigned char);
    extern char killchar(void);
    extern int killwchar(wchar_t *);
    extern int leaveok(WINDOW *, unsigned char);
    extern char *longname(void);
    extern int mcprint(void);
    extern int meta(WINDOW *, unsigned char);
#undef mouse_trafo
    extern bool mouse_trafo(int *, int *, bool);
    extern int mouseinterval(int);
    extern mmask_t mousemask(mmask_t, mmask_t *);
#undef move
    extern int move(int, int);
#undef mvadd_wch
    extern int mvadd_wch(int, int, cchar_t *);
#undef mvadd_wchnstr
    extern int mvadd_wchnstr(int, int, cchar_t *, int);
#undef mvadd_wchstr
    extern int mvadd_wchstr(int, int, cchar_t *);
#undef mvaddch
    extern int mvaddch(const chtype, const chtype, const chtype);
#undef mvaddchnstr
    extern int mvaddchnstr(int, int, const chtype *, int);
#undef mvaddchstr
    extern int mvaddchstr(int, int, const chtype *);
#undef mvaddnstr
    extern int mvaddnstr(int, int, const char *, int);
#undef mvaddnwstr
    extern int mvaddnwstr(int, int, wchar_t *, int);
#undef mvaddstr
    extern int mvaddstr(int, int, const char *);
#undef mvaddwstr
    extern int mvaddwstr(int, int, wchar_t *);
#undef mvchgat
    extern int mvchgat(int, int, int, attr_t, short, const void *);
    extern int mvcur(int, int, int, int);
#undef mvdelch
    extern int mvdelch(int, int);
    extern int mvderwin(WINDOW *, int, int);
#undef mvget_wch
    extern int mvget_wch(int, int, wint_t *);
#undef mvget_wstr
    extern int mvget_wstr(int, int, wint_t *);
#undef mvgetch
    extern int mvgetch(int, int);
#undef mvgetn_wstr
    extern int mvgetn_wstr(int, int, wint_t *, int);
#undef mvgetnstr
    extern int mvgetnstr(int, int, char *, int);
#undef mvgetstr
    extern int mvgetstr(int, int, char *);
#undef mvhline
    extern int mvhline(int, int, chtype, int);
#undef mvhline_set
    extern int mvhline_set(int, int, cchar_t *, int);
#undef mvin_wch
    extern int mvin_wch(int, int, cchar_t *);
#undef mvin_wchnstr
    extern int mvin_wchnstr(int, int, cchar_t *, int);
#undef mvin_wchstr
    extern int mvin_wchstr(int, int, cchar_t *);
#undef mvinch
    extern chtype mvinch(int, int);
#undef mvinchnstr
    extern int mvinchnstr(int, int, chtype *, int);
#undef mvinchstr
    extern int mvinchstr(int, int, chtype *);
#undef mvinnstr
    extern int mvinnstr(int, int, char *, int);
#undef mvinnwstr
    extern int mvinnwstr(int, int, wchar_t *, int);
#undef mvins_nwstr
    extern int mvins_nwstr(int, int, wchar_t *, int);
#undef mvins_wch
    extern int mvins_wch(int, int, cchar_t *);
#undef mvins_wstr
    extern int mvins_wstr(int, int, wchar_t *);
#undef mvinsch
    extern int mvinsch(int, int, chtype);
#undef mvinsnstr
    extern int mvinsnstr(int, int, const char *, int);
#undef mvinsstr
    extern int mvinsstr(int, int, const char *);
#undef mvinstr
    extern int mvinstr(int, int, char *);
#undef mvinwstr
    extern int mvinwstr(int, int, wchar_t *);
    extern int mvprintw(int, int, const char *, ...);
    extern int mvscanw(int, int, char *, ...);
#undef mvvline
    extern int mvvline(int, int, chtype, int);
#undef mvvline_set
    extern int mvvline_set(int, int, cchar_t *, int);
#undef mvwadd_wch
    extern int mvwadd_wch(WINDOW *, int, int, cchar_t *);
#undef mvwadd_wchnstr
    extern int mvwadd_wchnstr(WINDOW *, int, int, cchar_t *, int);
#undef mvwadd_wchstr
    extern int mvwadd_wchstr(WINDOW *, int, int, cchar_t *);
#undef mvwaddch
    extern int mvwaddch(const chtype, const chtype, const chtype,
			const chtype);
#undef mvwaddchnstr
    extern int mvwaddchnstr(WINDOW *, int, int, const chtype *, int);
#undef mvwaddchstr
    extern int mvwaddchstr(WINDOW *, int, int, const chtype *);
#undef mvwaddnstr
    extern int mvwaddnstr(WINDOW *, int, int, const char *, int);
#undef mvwaddnwstr
    extern int mvwaddnwstr(WINDOW *, int, int, wchar_t *, int);
#undef mvwaddstr
    extern int mvwaddstr(WINDOW *, int, int, const char *);
#undef mvwaddwstr
    extern int mvwaddwstr(WINDOW *, int, int, wchar_t *);
#undef mvwchgat
    extern int mvwchgat(WINDOW *, int, int, int, attr_t, short,
			const void *);
#undef mvwdelch
    extern int mvwdelch(WINDOW *, int, int);
#undef mvwget_wch
    extern int mvwget_wch(WINDOW *, int, int, wint_t *);
#undef mvwget_wstr
    extern int mvwget_wstr(WINDOW *, int, int, wint_t *);
#undef mvwgetch
    extern int mvwgetch(WINDOW *, int, int);
#undef mvwgetn_wstr
    extern int mvwgetn_wstr(WINDOW *, int, int, wint_t *, int);
#undef mvwgetnstr
    extern int mvwgetnstr(WINDOW *, int, int, char *, int);
#undef mvwgetstr
    extern int mvwgetstr(WINDOW *, int, int, char *);
#undef mvwhline
    extern int mvwhline(WINDOW *, int, int, chtype, int);
#undef mvwhline_set
    extern int mvwhline_set(WINDOW *, int, int, cchar_t *, int);
    extern int mvwin(WINDOW *, int, int);
#undef mvwin_wch
    extern int mvwin_wch(WINDOW *, int, int, cchar_t *);
#undef mvwin_wchnstr
    extern int mvwin_wchnstr(WINDOW *, int, int, cchar_t *, int);
#undef mvwin_wchstr
    extern int mvwin_wchstr(WINDOW *, int, int, cchar_t *);
#undef mvwinch
    extern chtype mvwinch(WINDOW *, int, int);
#undef mvwinchnstr
    extern int mvwinchnstr(WINDOW *, int, int, chtype *, int);
#undef mvwinchstr
    extern int mvwinchstr(WINDOW *, int, int, chtype *);
#undef mvwinnstr
    extern int mvwinnstr(WINDOW *, int, int, char *, int);
#undef mvwinnwstr
    extern int mvwinnwstr(WINDOW *, int, int, wchar_t *, int);
#undef mvwins_nwstr
    extern int mvwins_nwstr(WINDOW *, int, int, wchar_t *, int);
#undef mvwins_wch
    extern int mvwins_wch(WINDOW *, int, int, cchar_t *);
#undef mvwins_wstr
    extern int mvwins_wstr(WINDOW *, int, int, wchar_t *);
#undef mvwinsch
    extern int mvwinsch(WINDOW *, int, int, chtype);
#undef mvwinsnstr
    extern int mvwinsnstr(WINDOW *, int, int, const char *, int);
#undef mvwinsstr
    extern int mvwinsstr(WINDOW *, int, int, const char *);
#undef mvwinstr
    extern int mvwinstr(WINDOW *, int, int, char *);
#undef mvwinwstr
    extern int mvwinwstr(WINDOW *, int, int, wchar_t *);
    extern int mvwprintw(WINDOW *, int, int, const char *, ...);
    extern int mvwscanw(WINDOW *, int, int, char *, ...);
#undef mvwvline
    extern int mvwvline(WINDOW *, int, int, chtype, int);
#undef mvwvline_set
    extern int mvwvline_set(WINDOW *, int, int, cchar_t *, int);
    extern int napms(int);
    extern WINDOW *newpad(int, int);
    extern WINDOW *newscr;
    extern SCREEN *newterm(char *, FILE *, FILE *);
    extern WINDOW *newwin(int, int, int, int);
    extern int nl(void);
    extern int nocbreak(void);
    extern int nodelay(WINDOW *, unsigned char);
    extern int noecho(void);
    extern int nonl(void);
    extern void noqiflush(void);
    extern int noraw(void);
    extern int notimeout(WINDOW *, unsigned char);
    extern int overlay(const WINDOW *, WINDOW *);
    extern int overwrite(const WINDOW *, WINDOW *);
    extern int pair_content(short, short *, short *);
    extern int pecho_wchar(WINDOW *, cchar_t *);
    extern int pechochar(const chtype, const chtype);
    extern int pnoutrefresh(WINDOW *, int, int, int, int, int, int);
    extern int prefresh(WINDOW *, int, int, int, int, int, int);
    extern int printw(const char *, ...);
    extern int putwin(WINDOW *, FILE *);
    extern void qiflush(void);
    extern int raw(void);
#undef redrawwin
    extern int redrawwin(WINDOW *);
#undef refresh
    extern int refresh(void);
    extern int reset_prog_mode(void);
    extern int reset_shell_mode(void);
    extern int resetty(void);
    extern int resizeterm(int, int);
    extern int ripoffline(int, int (*)(WINDOW *, int));
    extern int savetty(void);
    extern int scanw(char *, ...);
    extern int scr_dump(const char *);
    extern int scr_init(const char *);
    extern int scr_restore(const char *);
    extern int scr_set(const char *);
#undef scrl
    extern int scrl(int);
#undef scroll
    extern int scroll(WINDOW *);
    extern int scrollok(WINDOW *, unsigned char);
    extern SCREEN *set_term(SCREEN *);
    extern int setcchar(cchar_t *, wchar_t *, attr_t, short, void *);
#undef setscrreg
    extern int setscrreg(int, int);
    extern attr_t slk_attr(void);
#undef slk_attr_off
    extern int slk_attr_off(attr_t, void *);
#undef slk_attr_on
    extern int slk_attr_on(attr_t, void *);
    extern int slk_attroff(const chtype);
    extern int slk_attron(const chtype);
    extern int slk_attrset(const chtype);
    extern int slk_clear(void);
    extern int slk_color(short);
    extern int slk_init(int);
    extern char *slk_label(int);
    extern int slk_noutrefresh(void);
    extern int slk_refresh(void);
    extern int slk_restore(void);
    extern int slk_set(int, const char *, int);
    extern int slk_touch(void);
    extern int slk_wset(int, const wchar_t *, int);
#undef standend
    extern int standend(void);
#undef standout
    extern int standout(void);
    extern int start_color(void);
    extern WINDOW *stdscr;
    extern WINDOW *subpad(WINDOW *, int, int, int, int);
    extern WINDOW *subwin(WINDOW *, int, int, int, int);
    extern int syncok(WINDOW *, unsigned char);
    extern attr_t term_attrs(void);
    extern chtype termattrs(void);
    extern char *termname(void);
#undef timeout
    extern void timeout(int);
#undef touchline
    extern int touchline(WINDOW *, int, int);
#undef touchwin
    extern int touchwin(WINDOW *);
    extern int typeahead(int);
    extern char *unctrl(chtype);
    extern int unget_wch(wchar_t);
    extern int ungetch(int);
    extern int ungetmouse(MEVENT *);
#undef untouchwin
    extern int untouchwin(WINDOW *);
    extern int use_default_colors(void);
    extern void use_env(unsigned char);
    extern int use_extended_names(unsigned char);
#undef vid_attr
    extern int vid_attr(attr_t, short, void *);
    extern int vid_puts(attr_t, short, void *, int);
    extern int vidattr(chtype);
    extern int vidputs(chtype, NCURSES_OUTC);
#undef vline
    extern int vline(chtype, int);
#undef vline_set
    extern int vline_set(cchar_t *, int);
    extern int vw_printw(WINDOW *, const char *, va_list);
    extern int vw_scanw(WINDOW *, char *, va_list);
    extern int vwprintw(WINDOW *, const char *, va_list);
    extern int vwscanw(WINDOW *, char *, va_list);
    extern int wadd_wch(WINDOW *, cchar_t *);
    extern int wadd_wchnstr(WINDOW *, cchar_t *, int);
#undef wadd_wchstr
    extern int wadd_wchstr(WINDOW *, cchar_t *);
    extern int waddch(WINDOW *, chtype);
    extern int waddchnstr(WINDOW *, const chtype *, int);
#undef waddchstr
    extern int waddchstr(WINDOW *, const chtype *);
    extern int waddnstr(WINDOW *, const char *, int);
    extern int waddnwstr(WINDOW *, wchar_t *, int);
#undef waddstr
    extern int waddstr(WINDOW *, const char *);
#undef waddwstr
    extern int waddwstr(WINDOW *, wchar_t *);
    extern int wattr_get(WINDOW *, attr_t *, short *, void *);
    extern int wattr_off(WINDOW *, attr_t, void *);
    extern int wattr_on(WINDOW *, attr_t, void *);
#undef wattr_set
    extern int wattr_set(WINDOW *, attr_t, short, void *);
#undef wattroff
    extern int wattroff(WINDOW *, int);
#undef wattron
    extern int wattron(WINDOW *, int);
    extern int wattrset(WINDOW *, int);
    extern int wbkgd(WINDOW *, chtype);
    extern void wbkgdset(WINDOW *, chtype);
    extern int wbkgrnd(WINDOW *, cchar_t *);
    extern void wbkgrndset(WINDOW *, cchar_t *);
    extern int wborder(WINDOW *, chtype, chtype, chtype, chtype, chtype,
		       chtype, chtype, chtype);
    extern int wborder_set(WINDOW *, cchar_t *, cchar_t *, cchar_t *,
			   cchar_t *, cchar_t *, cchar_t *, cchar_t *,
			   cchar_t *);
    extern int wchgat(WINDOW *, int, attr_t, short, const void *);
    extern int wclear(WINDOW *);
    extern int wclrtobot(WINDOW *);
    extern int wclrtoeol(WINDOW *);
    extern int wcolor_set(WINDOW *, short, void *);
    extern void wcursyncup(WINDOW *);
    extern int wdelch(WINDOW *);
#undef wdeleteln
    extern int wdeleteln(WINDOW *);
    extern int wecho_wchar(WINDOW *, cchar_t *);
    extern int wechochar(const chtype, const chtype);
    extern unsigned char wenclose(WINDOW *, int, int);
    extern int werase(WINDOW *);
    extern int wget_wch(WINDOW *, wint_t *);
#undef wget_wstr
    extern int wget_wstr(WINDOW *, wint_t *);
#undef wgetbkgrnd
    extern int wgetbkgrnd(WINDOW *, cchar_t *);
    extern int wgetch(WINDOW *);
    extern int wgetn_wstr(WINDOW *, wint_t *, int);
    extern int wgetnstr(WINDOW *, char *, int);
#undef wgetstr
    extern int wgetstr(WINDOW *, char *);
    extern int whline(WINDOW *, chtype, int);
    extern int whline_set(WINDOW *, cchar_t *, int);
    extern int win_wch(WINDOW *, cchar_t *);
    extern int win_wchnstr(WINDOW *, cchar_t *, int);
#undef win_wchstr
    extern int win_wchstr(WINDOW *, cchar_t *);
    extern chtype winch(WINDOW *);
    extern int winchnstr(WINDOW *, chtype *, int);
#undef winchstr
    extern int winchstr(WINDOW *, chtype *);
    extern int winnstr(WINDOW *, char *, int);
    extern int winnwstr(WINDOW *, wchar_t *, int);
    extern int wins_nwstr(WINDOW *, wchar_t *, int);
    extern int wins_wch(WINDOW *, cchar_t *);
#undef wins_wstr
    extern int wins_wstr(WINDOW *, wchar_t *);
    extern int winsch(WINDOW *, chtype);
    extern int winsdelln(WINDOW *, int);
#undef winsertln
    extern int winsertln(WINDOW *);
    extern int winsnstr(WINDOW *, const char *, int);
#undef winsstr
    extern int winsstr(WINDOW *, const char *);
#undef winstr
    extern int winstr(WINDOW *, char *);
    extern int winwstr(WINDOW *, wchar_t *);
    extern unsigned char wmouse_trafo(const WINDOW *, int *, int *, bool);
    extern int wmove(WINDOW *, int, int);
    extern int wnoutrefresh(WINDOW *);
    extern int wprintw(WINDOW *, const char *, ...);
    extern int wredrawln(WINDOW *, int, int);
    extern int wrefresh(WINDOW *);
    extern int wresize(WINDOW *, int, int);
    extern int wscanw(WINDOW *, char *, ...);
    extern int wscrl(WINDOW *, int);
    extern int wsetscrreg(WINDOW *, int, int);
#undef wstandend
    extern int wstandend(WINDOW *);
#undef wstandout
    extern int wstandout(WINDOW *);
    extern void wsyncdown(WINDOW *);
    extern void wsyncup(WINDOW *);
    extern void wtimeout(WINDOW *, int);
    extern int wtouchln(WINDOW *, int, int, int);
    extern wchar_t *wunctrl(cchar_t *);
    extern int wvline(WINDOW *, chtype, int);
    extern int wvline_set(WINDOW *, cchar_t *, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
