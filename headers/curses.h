

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

#define COLOR_BLACK	0
#define COLOR_RED	1
#define COLOR_GREEN	2
#define COLOR_YELLOW	3
#define COLOR_BLUE	4
#define COLOR_MAGENTA	5
#define COLOR_CYAN	6
#define COLOR_WHITE	7

#define _SUBWIN	0x01
#define _ENDLINE	0x02
#define _FULLWIN	0x04
#define _SCROLLWIN	0x08
#define _ISPAD	0x10
#define _HASMOVED	0x20
#define TRACE_MAXIMUM	0xffff

typedef unsigned long chtype;

typedef char bool;

typedef struct screen SCREEN;

typedef struct _win_st
{
  short _cury;
  short _curx;
  short _maxy;
  short _maxx;
  short _begy;
  short _begx;
  short _flags;
  attr_t _attrs;
  chtype _bkgd;
  bool _notimeout;
  bool _clear;
  bool _leaveok;
  bool _scroll;
  bool _idlok;
  bool _idcok;
  bool _immed;
  bool _sync;
  bool _use_keypad;
  int _delay;
  struct ldat *_line;
  short _regtop;
  short _regbottom;
  int _parx;
  int _pary;
  WINDOW *_parent;
  struct pdat _pad;
  short _yoffset;
}
WINDOW;

typedef chtype attr_t;


#define KEY_CODE_YES	0400
#define KEY_MIN	0401
#define KEY_BREAK	0401
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

int addch (chtype);
int addchnstr (chtype *, int);
int addchstr (chtype *);
int addnstr (char *, int);
int addstr (char *);
int attroff (int);
int attron (int);
int attrset (int);
int attr_get (attr_t *, short *, void *);
int attr_off (attr_t, void *);
int attr_on (attr_t, void *);
int attr_set (attr_t, short, void *);
int baudrate (void);
int beep (void);
int bkgd (chtype);
void bkgdset (chtype);
int border (chtype, chtype, chtype, chtype, chtype, chtype, chtype, chtype);
int box (WINDOW *, chtype, chtype);
bool can_change_color (void);
int cbreak (void);
int chgat (int, attr_t, short, void *);
int clear (void);
int clearok (WINDOW *, bool);
int clrtobot (void);
int clrtoeol (void);
int color_content (short, short *, short *, short *);
int color_set (short, void *);
int copywin (WINDOW *, WINDOW *, int, int, int, int, int, int, int);
int curs_set (int);
int def_prog_mode (void);
int def_shell_mode (void);
int delay_output (int);
int delch (void);
void delscreen (SCREEN *);
int delwin (WINDOW *);
int deleteln (void);
WINDOW *derwin (WINDOW *, int, int, int, int);
int doupdate (void);
WINDOW *dupwin (WINDOW *);
int echo (void);
int echochar (chtype);
int erase (void);
int endwin (void);
char erasechar (void);
void filter (void);
int flash (void);
int flushinp (void);
chtype getbkgd (WINDOW *);
int getch (void);
int getnstr (char *, int);
int getstr (char *);
WINDOW *getwin (FILE *);
int halfdelay (int);
bool has_colors (void);
bool has_ic (void);
bool has_il (void);
int hline (chtype, int);
void idcok (WINDOW *, bool);
int idlok (WINDOW *, bool);
void immedok (WINDOW *, bool);
chtype inch (void);
int inchnstr (chtype *, int);
int inchstr (chtype *);
WINDOW *initscr (void);
int init_color (short, short, short, short);
int init_pair (short, short, short);
int innstr (char *, int);
int insch (chtype);
int insdelln (int);
int insertln (void);
int insnstr (char *, int);
int insstr (char *);
int instr (char *);
int intrflush (WINDOW *, bool);
bool isendwin (void);
bool is_linetouched (WINDOW *, int);
bool is_wintouched (WINDOW *);
char killchar (void);
int leaveok (WINDOW *, bool);
char *longname (void);
int meta (WINDOW *, bool);
int move (int, int);
int mvaddch (int, int, chtype);
int mvaddchnstr (int, int, chtype *, int);
int mvaddchstr (int, int, chtype *);
int mvaddnstr (int, int, char *, int);
int mvaddstr (int, int, char *);
int mvchgat (int, int, int, attr_t, short, void *);
int mvcur (int, int, int, int);
int mvdelch (int, int);
int mvderwin (WINDOW *, int, int);
int mvgetch (int, int);
int mvgetnstr (int, int, char *, int);
int mvgetstr (int, int, char *);
int mvhline (int, int, chtype, int);
chtype mvinch (int, int);
int mvinchnstr (int, int, chtype *, int);
int mvinchstr (int, int, chtype *);
int mvinnstr (int, int, char *, int);
int mvinsch (int, int, chtype);
int mvinsnstr (int, int, char *, int);
int mvinsstr (int, int, char *);
int mvinstr (int, int, char *);
int mvprintw (int, int, char *, ...);
int mvscanw (int, int, char *, ...);
int mvvline (int, int, chtype, int);
int mvwaddch (WINDOW *, int, int, chtype);
int mvwaddchnstr (WINDOW *, int, int, chtype *, int);
int mvwaddchstr (WINDOW *, int, int, chtype *);
int mvwaddnstr (WINDOW *, int, int, char *, int);
int mvwaddstr (WINDOW *, int, int, char *);
int mvwchgat (WINDOW *, int, int, int, attr_t, short, void *);
int mvwdelch (WINDOW *, int, int);
int mvwgetch (WINDOW *, int, int);
int mvwgetnstr (WINDOW *, int, int, char *, int);
int mvwgetstr (WINDOW *, int, int, char *);
int mvwhline (WINDOW *, int, int, chtype, int);
int mvwin (WINDOW *, int, int);
chtype mvwinch (WINDOW *, int, int);
int mvwinchnstr (WINDOW *, int, int, chtype *, int);
int mvwinchstr (WINDOW *, int, int, chtype *);
int mvwinnstr (WINDOW *, int, int, char *, int);
int mvwinsch (WINDOW *, int, int, chtype);
int mvwinsnstr (WINDOW *, int, int, char *, int);
int mvwinsstr (WINDOW *, int, int, char *);
int mvwinstr (WINDOW *, int, int, char *);
int mvwprintw (WINDOW *, int, int, char *, ...);
int mvwscanw (WINDOW *, int, int, char *, ...);
int mvwvline (WINDOW *, int, int, chtype, int);
int napms (int);
WINDOW *newpad (int, int);
SCREEN *newterm (char *, FILE *, FILE *);
WINDOW *newwin (int, int, int, int);
int nl (void);
int nocbreak (void);
int nodelay (WINDOW *, bool);
int noecho (void);
int nonl (void);
void noqiflush (void);
int noraw (void);
int notimeout (WINDOW *, bool);
int overlay (WINDOW *, WINDOW *);
int overwrite (WINDOW *, WINDOW *);
int pair_content (short, short *, short *);
int pechochar (WINDOW *, chtype);
int pnoutrefresh (WINDOW *, int, int, int, int, int, int);
int prefresh (WINDOW *, int, int, int, int, int, int);
int printw (char *, ...);
int putp (char *);
int putwin (WINDOW *, FILE *);
void qiflush (void);
int raw (void);
int redrawwin (WINDOW *);
int refresh (void);
int resetty (void);
int reset_prog_mode (void);
int reset_shell_mode (void);
int ripoffline (int, int);
int savetty (void);
int scanw (char *, ...);
int scr_dump (char *);
int scr_init (char *);
int scrl (int);
int scroll (WINDOW *);
int scrollok (WINDOW *, bool);
int scr_restore (char *);
int scr_set (char *);
int setscrreg (int, int);
SCREEN *set_term (SCREEN *);
int slk_attroff (chtype);
int slk_attron (chtype);
int slk_attrset (chtype);
int slk_attr_set (attr_t, short, void *);
int slk_clear (void);
int slk_color (short);
int slk_init (int);
char *slk_label (int);
int slk_noutrefresh (void);
int slk_refresh (void);
int slk_restore (void);
int slk_set (int, char *, int);
int slk_touch (void);
int standout (void);
int standend (void);
int start_color (void);
WINDOW *subpad (WINDOW *, int, int, int, int);
WINDOW *subwin (WINDOW *, int, int, int, int);
int syncok (WINDOW *, bool);
chtype termattrs (void);
char *termname (void);
int tigetflag (char *);
int tigetnum (char *);
char *tigetstr (char *);
void timeout (int);
char *tparm (char *, ...);
int typeahead (int);
int ungetch (int);
int untouchwin (WINDOW *);
void use_env (bool);
int vidattr (chtype);
int vidputs (chtype, int);
int vline (chtype, int);
int vwprintw (WINDOW *, char *, va_list);
int vw_printw (WINDOW *, char *, va_list);
int vwscanw (WINDOW *, char *, va_list);
int vw_scanw (WINDOW *, char *, va_list);
int waddch (WINDOW *, chtype);
int waddchnstr (WINDOW *, chtype *, int);
int waddchstr (WINDOW *, chtype *);
int waddnstr (WINDOW *, char *, int);
int waddstr (WINDOW *, char *);
int wattron (WINDOW *, int);
int wattroff (WINDOW *, int);
int wattrset (WINDOW *, int);
int wattr_get (WINDOW *, attr_t *, short *, void *);
int wattr_on (WINDOW *, attr_t, void *);
int wattr_off (WINDOW *, attr_t, void *);
int wattr_set (WINDOW *, attr_t, short, void *);
int wbkgd (WINDOW *, chtype);
void wbkgdset (WINDOW *, chtype);
int wborder (WINDOW *, chtype, chtype, chtype, chtype, chtype, chtype, chtype,
	     chtype);
int wchgat (WINDOW *, int, attr_t, short, void *);
int wclear (WINDOW *);
int wclrtobot (WINDOW *);
int wclrtoeol (WINDOW *);
int wcolor_set (WINDOW *, short, void *);
void wcursyncup (WINDOW *);
int wdelch (WINDOW *);
int wdeleteln (WINDOW *);
int wechochar (WINDOW *, chtype);
int werase (WINDOW *);
int wgetch (WINDOW *);
int wgetnstr (WINDOW *, char *, int);
int wgetstr (WINDOW *, char *);
int whline (WINDOW *, chtype, int);
chtype winch (WINDOW *);
int winchnstr (WINDOW *, chtype *, int);
int winchstr (WINDOW *, chtype *);
int winnstr (WINDOW *, char *, int);
int winsch (WINDOW *, chtype);
int winsdelln (WINDOW *, int);
int winsertln (WINDOW *);
int winsnstr (WINDOW *, char *, int);
int winsstr (WINDOW *, char *);
int winstr (WINDOW *, char *);
int wmove (WINDOW *, int, int);
int wnoutrefresh (WINDOW *);
int wprintw (WINDOW *, char *, ...);
int wredrawln (WINDOW *, int, int);
int wrefresh (WINDOW *);
int wscanw (WINDOW *, char *, ...);
int wscrl (WINDOW *, int);
int wsetscrreg (WINDOW *, int, int);
int wstandout (WINDOW *);
int wstandend (WINDOW *);
void wsyncdown (WINDOW *);
void wsyncup (WINDOW *);
void wtimeout (WINDOW *, int);
int wtouchln (WINDOW *, int, int, int);
int wvline (WINDOW *, chtype, int);
WINDOW *curscr;
WINDOW *stdscr;
