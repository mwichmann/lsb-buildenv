#ifndef _CURSES_H_
#define _CURSES_H_

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define ERR	(-1)
#define OK	(0)
#define ACS_RARROW	(acs_map['+'])
#define ACS_LARROW	(acs_map[','])
#define ACS_UARROW	(acs_map['-'])
#define ACS_DARROW	(acs_map['.'])
#define ACS_BLOCK	(acs_map['0'])
#define ACS_CKBOARD	(acs_map['a'])
#define ACS_DEGREE	(acs_map['f'])
#define ACS_PLMINUS	(acs_map['g'])
#define ACS_BOARD	(acs_map['h'])
#define ACS_LANTERN	(acs_map['i'])
#define ACS_LRCORNER	(acs_map['j'])
#define ACS_URCORNER	(acs_map['k'])
#define ACS_ULCORNER	(acs_map['l'])
#define ACS_LLCORNER	(acs_map['m'])
#define ACS_PLUS	(acs_map['n'])
#define ACS_S1	(acs_map['o'])
#define ACS_HLINE	(acs_map['q'])
#define ACS_S9	(acs_map['s'])
#define ACS_LTEE	(acs_map['t'])
#define ACS_RTEE	(acs_map['u'])
#define ACS_BTEE	(acs_map['v'])
#define ACS_TTEE	(acs_map['w'])
#define ACS_VLINE	(acs_map['x'])
#define ACS_DIAMOND	(acs_map['`'])
#define ACS_BULLET	(acs_map['~'])
#define getmaxyx(win,y,x)	(y=(win)?((win)->_maxy+1):ERR,x=(win)?((win)->_maxx+1):ERR)
#define getbegyx(win,y,x)	(y=(win)?(win)->_begy:ERR,x=(win)?(win)->_begx:ERR)
#define getyx(win,y,x)	(y=(win)?(win)->_cury:ERR,x=(win)?(win)->_curx:ERR)
#define getparyx(win,y,x)	(y=(win)?(win)->_pary:ERR,x=(win)?(win)->_parx:ERR)



/* Stuff needed to make other curses related headers happy*/
#define __NCURSES_H	1
#define NCURSES_EXPORT(type)	type
#define NCURSES_EXPORT_VAR(type)	type



#define WA_ALTCHARSET	A_ALTCHARSET
#define WA_ATTRIBUTES	A_ATTRIBUTES
#define WA_BLINK	A_BLINK
#define WA_BOLD	A_BOLD
#define WA_DIM	A_DIM
#define WA_HORIZONTAL	A_HORIZONTAL
#define WA_INVIS	A_INVIS
#define WA_LEFT	A_LEFT
#define WA_LOW	A_LOW
#define WA_NORMAL	A_NORMAL
#define WA_PROTECT	A_PROTECT
#define WA_REVERSE	A_REVERSE
#define WA_RIGHT	A_RIGHT
#define WA_STANDOUT	A_STANDOUT
#define WA_TOP	A_TOP
#define WA_UNDERLINE	A_UNDERLINE
#define WA_VERTICAL	A_VERTICAL
#define A_REVERSE	NCURSES_BITS(1UL,10)



/* colors*/
#define COLOR_BLACK	0
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7



/* values for the _flags member*/
#define _SUBWIN	0x01
#define _ENDLINE	0x02
#define _FULLWIN	0x04
#define _ISPAD	0x10
#define _HASMOVED	0x20



/* Boolean type*/


#if !defined(__cplusplus)
  typedef unsigned char bool;

#endif

/* curses related structures*/


  typedef unsigned long chtype;

  typedef struct screen SCREEN;

  typedef struct _win_st WINDOW;

  typedef chtype attr_t;

  typedef struct
  {
    attr_t attr;
    wchar_t chars[5];
  }
  cchar_t;

  struct pdat
  {
    short _pad_y;
    short _pad_x;
    short _pad_top;
    short _pad_left;
    short _pad_bottom;
    short _pad_right;
  }
   ;




  struct _win_st
  {
    short _cury;		/* current cursor position */
    short _curx;
    short _maxy;		/* maximums of x and y, NOT window size */
    short _maxx;
    short _begy;		/* screen coords of upper-left-hand corner */
    short _begx;
    short _flags;		/* window state flags */
    attr_t _attrs;		/* current attribute for non-space character */
    chtype _bkgd;		/* current background char/attribute pair */
    bool _notimeout;		/* no time out on function-key entry? */
    bool _clear;		/* consider all data in the window invalid? */
    bool _leaveok;		/* OK to not reset cursor on exit? */
    bool _scroll;		/* OK to scroll this window? */
    bool _idlok;		/* OK to use insert/delete line? */
    bool _idcok;		/* OK to use insert/delete char? */
    bool _immed;		/* window in immed mode? (not yet used) */
    bool _sync;			/* window in sync mode? */
    bool _use_keypad;		/* process function keys into KEY_ symbols? */
    int _delay;			/* 0 = nodelay, <0 = blocking, >0 = delay */
    struct ldat *_line;		/* the actual line data */
    short _regtop;		/* top line of scrolling region */
    short _regbottom;		/* bottom line of scrolling region */
    int _parx;			/* x coordinate of this window in parent */
    int _pary;			/* y coordinate of this window in parent */
    WINDOW *_parent;		/* pointer to parent if a sub-window */
    struct pdat _pad;
    short _yoffset;		/* real begy is _begy + _yoffset */
    cchar_t _bkgrnd;		/* current background char/attribute pair */
  }
   ;


/* Pseudo-character tokens outside ASCII range.*/
#define KEY_F(n)	(KEY_F0+(n))
#define KEY_CODE_YES	0400
#define KEY_BREAK	0401
#define KEY_MIN	0401
#define KEY_DOWN	0402
#define KEY_UP	0403
#define KEY_LEFT	0404
#define KEY_RIGHT	0405
#define KEY_HOME	0406
#define KEY_BACKSPACE	0407
#define KEY_F0	0410
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
#define KEY_SRESET	0530
#define KEY_RESET	0531
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
#define KEY_MAX	0777



/* event masks*/



/* attributes*/
#define PAIR_NUMBER(a)	(((a)&A_COLOR)>>8)
#define NCURSES_BITS(mask,shift)	((mask)<<((shift)+8))
#define A_CHARTEXT	(NCURSES_BITS(1UL,0)-1UL)
#define A_NORMAL	0L
#define NCURSES_ATTR_SHIFT	8
#define A_COLOR	NCURSES_BITS(((1UL)<<8)-1UL,0)
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
#define A_STANDOUT	NCURSES_BITS(1UL,8)
#define A_UNDERLINE	NCURSES_BITS(1UL,9)
#define COLOR_PAIR(n)	NCURSES_BITS(n,0)
#define A_ATTRIBUTES	NCURSES_BITS(~(1UL-1UL),0)



  extern int addch (const chtype);
  extern int addchnstr (const chtype, int);
  extern int addchstr (const chtype);
  extern int addnstr (const char *, int);
  extern int addstr (const char *);
  extern int attroff (int);
  extern int attron (int);
  extern int attrset (int);
  extern int attr_get (attr_t *, short *, void *);
  extern int attr_off (attr_t, void *);
  extern int attr_on (attr_t, void *);
  extern int attr_set (attr_t, short, void *);
  extern int baudrate (void);
  extern int beep (void);
  extern int bkgd (chtype);
  extern void bkgdset (chtype);
  extern int border (chtype, chtype, chtype, chtype, chtype, chtype, chtype,
		     chtype);
  extern int box (WINDOW *, chtype, chtype);
  extern bool can_change_color (void);
  extern int cbreak (void);
  extern int chgat (int, attr_t, short, const void *);
  extern int clear (void);
  extern int clearok (WINDOW *, bool);
  extern int clrtobot (void);
  extern int clrtoeol (void);
  extern int color_content (short, short *, short *, short *);
  extern int color_set (short, void *);
  extern int copywin (const WINDOW *, WINDOW *, int, int, int, int, int, int,
		      int);
  extern int curs_set (int);
  extern int def_prog_mode (void);
  extern int def_shell_mode (void);
  extern int delay_output (int);
  extern int delch (void);
  extern void delscreen (SCREEN *);
  extern int delwin (WINDOW *);
  extern int deleteln (void);
  extern WINDOW *derwin (WINDOW *, int, int, int, int);
  extern int doupdate (void);
  extern WINDOW *dupwin (WINDOW *);
  extern int echo (void);
  extern int echochar (const chtype);
  extern int erase (void);
  extern int endwin (void);
  extern char erasechar (void);
  extern void filter (void);
  extern int flash (void);
  extern int flushinp (void);
  extern chtype getbkgd (WINDOW *);
  extern int getch (void);
  extern int getnstr (char *, int);
  extern int getstr (char *);
  extern WINDOW *getwin (FILE *);
  extern int halfdelay (int);
  extern bool has_colors (void);
  extern bool has_ic (void);
  extern bool has_il (void);
  extern int hline (chtype, int);
  extern void idcok (WINDOW *, bool);
  extern int idlok (WINDOW *, bool);
  extern void immedok (WINDOW *, bool);
  extern chtype inch (void);
  extern int inchnstr (chtype *, int);
  extern int inchstr (chtype *);
  extern WINDOW *initscr (void);
  extern int init_color (short, short, short, short);
  extern int init_pair (short, short, short);
  extern int innstr (char *, int);
  extern int insch (chtype);
  extern int insdelln (int);
  extern int insertln (void);
  extern int insnstr (const char *, int);
  extern int insstr (const char *);
  extern int instr (char *);
  extern int intrflush (WINDOW *, bool);
  extern bool isendwin (void);
  extern bool is_linetouched (WINDOW *, int);
  extern bool is_wintouched (WINDOW *);
  extern char *keyname (int);
  extern int keypad (WINDOW *, bool);
  extern char killchar (void);
  extern int leaveok (WINDOW *, bool);
  extern char *longname (void);
  extern int meta (WINDOW *, bool);
  extern int move (int, int);
  extern int mvaddch (int, int, const chtype);
  extern int mvaddchnstr (int, int, const chtype *, int);
  extern int mvaddchstr (int, int, const chtype *);
  extern int mvaddnstr (int, int, const char *, int);
  extern int mvaddstr (int, int, const char *);
  extern int mvchgat (int, int, int, attr_t, short, const void *);
  extern int mvcur (int, int, int, int);
  extern int mvdelch (int, int);
  extern int mvderwin (WINDOW *, int, int);
  extern int mvgetch (int, int);
  extern int mvgetnstr (int, int, char *, int);
  extern int mvgetstr (int, int, char *);
  extern int mvhline (int, int, chtype, int);
  extern chtype mvinch (int, int);
  extern int mvinchnstr (int, int, chtype *, int);
  extern int mvinchstr (int, int, chtype *);
  extern int mvinnstr (int, int, char *, int);
  extern int mvinsch (int, int, chtype);
  extern int mvinsnstr (int, int, const char *, int);
  extern int mvinsstr (int, int, const char *);
  extern int mvinstr (int, int, char *);
  extern int mvprintw (int, int, char *, ...);
  extern int mvscanw (int, int, char *, ...);
  extern int mvvline (int, int, chtype, int);
  extern int mvwaddch (WINDOW *, int, int, const chtype);
  extern int mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
  extern int mvwaddchstr (WINDOW *, int, int, const chtype *);
  extern int mvwaddnstr (WINDOW *, int, int, const char *, int);
  extern int mvwaddstr (WINDOW *, int, int, const char *);
  extern int mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
  extern int mvwdelch (WINDOW *, int, int);
  extern int mvwgetch (WINDOW *, int, int);
  extern int mvwgetnstr (WINDOW *, int, int, char *, int);
  extern int mvwgetstr (WINDOW *, int, int, char *);
  extern int mvwhline (WINDOW *, int, int, chtype, int);
  extern int mvwin (WINDOW *, int, int);
  extern chtype mvwinch (WINDOW *, int, int);
  extern int mvwinchnstr (WINDOW *, int, int, chtype *, int);
  extern int mvwinchstr (WINDOW *, int, int, chtype *);
  extern int mvwinnstr (WINDOW *, int, int, char *, int);
  extern int mvwinsch (WINDOW *, int, int, chtype);
  extern int mvwinsnstr (WINDOW *, int, int, const char *, int);
  extern int mvwinsstr (WINDOW *, int, int, const char *);
  extern int mvwinstr (WINDOW *, int, int, char *);
  extern int mvwprintw (WINDOW *, int, int, char *, ...);
  extern int mvwscanw (WINDOW *, int, int, char *, ...);
  extern int mvwvline (WINDOW *, int, int, chtype, int);
  extern int napms (int);
  extern WINDOW *newpad (int, int);
  extern SCREEN *newterm (char *, FILE *, FILE *);
  extern WINDOW *newwin (int, int, int, int);
  extern int nl (void);
  extern int nocbreak (void);
  extern int nodelay (WINDOW *, bool);
  extern int noecho (void);
  extern int nonl (void);
  extern void noqiflush (void);
  extern int noraw (void);
  extern int notimeout (WINDOW *, bool);
  extern int overlay (const WINDOW *, WINDOW *);
  extern int overwrite (const WINDOW *, WINDOW *);
  extern int pair_content (short, short *, short *);
  extern int pechochar (WINDOW *, chtype);
  extern int pnoutrefresh (WINDOW *, int, int, int, int, int, int);
  extern int prefresh (WINDOW *, int, int, int, int, int, int);
  extern int printw (char *, ...);
  extern int putwin (WINDOW *, FILE *);
  extern void qiflush (void);
  extern int raw (void);
  extern int redrawwin (WINDOW *);
  extern int refresh (void);
  extern int resetty (void);
  extern int reset_prog_mode (void);
  extern int reset_shell_mode (void);
  extern int ripoffline (int, int (*init) (WINDOW *, int));
  extern int savetty (void);
  extern int scanw (char *, ...);
  extern int scr_dump (const char *);
  extern int scr_init (const char *);
  extern int scrl (int);
  extern int scroll (WINDOW *);
  extern int scrollok (WINDOW *, bool);
  extern int scr_restore (const char *);
  extern int scr_set (const char *);
  extern int setscrreg (int, int);
  extern SCREEN *set_term (SCREEN *);
  extern int slk_attroff (const chtype);
  extern int slk_attron (const chtype);
  extern int slk_attrset (const chtype);
  extern int slk_attr_set (const attr_t, short, void *);
  extern int slk_clear (void);
  extern int slk_color (short);
  extern int slk_init (int);
  extern char *slk_label (int);
  extern int slk_noutrefresh (void);
  extern int slk_refresh (void);
  extern int slk_restore (void);
  extern int slk_set (int, const char *, int);
  extern int slk_touch (void);
  extern int standout (void);
  extern int standend (void);
  extern int start_color (void);
  extern WINDOW *subpad (WINDOW *, int, int, int, int);
  extern WINDOW *subwin (WINDOW *, int, int, int, int);
  extern int syncok (WINDOW *, bool);
  extern chtype termattrs (void);
  extern char *termname (void);
  extern void timeout (int);
  extern int typeahead (int);
  extern int ungetch (int);
  extern int untouchwin (WINDOW *);
  extern void use_env (bool);
  extern int vidattr (chtype);
  extern int vidputs (chtype, int (*vidputs_int) (int));
  extern int vline (chtype, int);
  extern int vwprintw (WINDOW *, char *, va_list);
  extern int vw_printw (WINDOW *, char *, va_list);
  extern int vwscanw (WINDOW *, char *, va_list);
  extern int vw_scanw (WINDOW *, char *, va_list);
  extern int waddch (WINDOW *, const chtype);
  extern int waddchnstr (WINDOW *, const chtype *, int);
  extern int waddchstr (WINDOW *, const chtype *);
  extern int waddnstr (WINDOW *, const char *, int);
  extern int waddstr (WINDOW *, const char *);
  extern int wattron (WINDOW *, int);
  extern int wattroff (WINDOW *, int);
  extern int wattrset (WINDOW *, int);
  extern int wattr_get (WINDOW *, attr_t *, short *, void *);
  extern int wattr_on (WINDOW *, attr_t, void *);
  extern int wattr_off (WINDOW *, attr_t, void *);
  extern int wattr_set (WINDOW *, attr_t, short, void *);
  extern int wbkgd (WINDOW *, chtype);
  extern void wbkgdset (WINDOW *, chtype);
  extern int wborder (WINDOW *, chtype, chtype, chtype, chtype, chtype,
		      chtype, chtype, chtype);
  extern int wchgat (WINDOW *, int, attr_t, short, const void *);
  extern int wclear (WINDOW *);
  extern int wclrtobot (WINDOW *);
  extern int wclrtoeol (WINDOW *);
  extern int wcolor_set (WINDOW *, short, void *);
  extern void wcursyncup (WINDOW *);
  extern int wdelch (WINDOW *);
  extern int wdeleteln (WINDOW *);
  extern int wechochar (WINDOW *, const chtype);
  extern int werase (WINDOW *);
  extern int wgetch (WINDOW *);
  extern int wgetnstr (WINDOW *, char *, int);
  extern int wgetstr (WINDOW *, char *);
  extern int whline (WINDOW *, chtype, int);
  extern chtype winch (WINDOW *);
  extern int winchnstr (WINDOW *, chtype *, int);
  extern int winchstr (WINDOW *, chtype *);
  extern int winnstr (WINDOW *, char *, int);
  extern int winsch (WINDOW *, chtype);
  extern int winsdelln (WINDOW *, int);
  extern int winsertln (WINDOW *);
  extern int winsnstr (WINDOW *, const char *, int);
  extern int winsstr (WINDOW *, const char *);
  extern int winstr (WINDOW *, char *);
  extern int wmove (WINDOW *, int, int);
  extern int wnoutrefresh (WINDOW *);
  extern int wprintw (WINDOW *, char *, ...);
  extern int wredrawln (WINDOW *, int, int);
  extern int wrefresh (WINDOW *);
  extern int wscanw (WINDOW *, char *, ...);
  extern int wscrl (WINDOW *, int);
  extern int wsetscrreg (WINDOW *, int, int);
  extern int wstandout (WINDOW *);
  extern int wstandend (WINDOW *);
  extern void wsyncdown (WINDOW *);
  extern void wsyncup (WINDOW *);
  extern void wtimeout (WINDOW *, int);
  extern int wtouchln (WINDOW *, int, int, int);
  extern int wvline (WINDOW *, chtype, int);
  extern char *unctrl (chtype);
  extern int COLORS;
  extern int COLOR_PAIRS;
  extern chtype acs_map[128];
  extern WINDOW *curscr;
  extern WINDOW *stdscr;
  extern int COLS;
  extern int LINES;
  extern int touchline (WINDOW *, int, int);
  extern int touchwin (WINDOW *);
#ifdef __cplusplus
}
#endif
#endif
