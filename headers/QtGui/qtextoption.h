#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTOPTION_H_
#define _QTGUI_QTEXTOPTION_H_

class QTextOption;
// *INDENT-OFF*

typedef class QFlags<QTextOption::Flag>QTextOption::Flags	
;

class QTextOption;

enum QTextOption::WrapMode	
{
NoWrap = 0,	
WordWrap = 1,	
ManualWrap = 2,	
WrapAnywhere = 3,	
WrapAtWordBoundaryOrAnywhere = 4
}
;

enum QTextOption::Flag	
{
IncludeTrailingSpaces = -2147483648
}
;

class QFlags<QTextOption::Flag>;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
