#ifndef _QTGUI_QTEXTOPTION_H_
#define _QTGUI_QTEXTOPTION_H_

class QTextOption;
// *INDENT-OFF*




typedef Flags	
;

class QTextOption
{
private:
public:
};

enum WrapMode	
{
NoWrap = 0,	
WordWrap = 1,	
ManualWrap = 2,	
WrapAnywhere = 3,	
WrapAtWordBoundaryOrAnywhere = 4
}
;

enum Flag	
{
IncludeTrailingSpaces = -2147483648
}
;

class QFlags<QTextOption::Flag>
{
private:
public:
};


extern QTextOption _ZN11QTextOptionC2Ev(void);
extern QTextOption _ZN11QTextOptionC1Ev(void);
extern QTextOption _ZN11QTextOptionC2E6QFlagsIN2Qt13AlignmentFlagEE(void);
extern QTextOption _ZN11QTextOptionC1E6QFlagsIN2Qt13AlignmentFlagEE(void);
extern QTextOption _ZN11QTextOptionD2Ev(void);
extern QTextOption _ZN11QTextOptionD1Ev(void);
extern QTextOption _ZN11QTextOptionC2ERKS_(void);
extern QTextOption _ZN11QTextOptionC1ERKS_(void);
extern QTextOption _ZN11QTextOptionaSERKS_(void);
extern void _ZN11QTextOption11setTabArrayE5QListIdE(void);
extern  _ZNK11QTextOption8tabArrayEv(void);
// *INDENT-ON*
#endif
