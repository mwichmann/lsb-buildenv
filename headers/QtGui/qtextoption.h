#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTOPTION_H_
#define _QTGUI_QTEXTOPTION_H_

class QTextOption;
// *INDENT-OFF*

typedef class QFlags<QTextOption::Flag>
{
private:
public:
}Flags	
;

class QTextOption
{
private:
public:
     QTextOption();
     QTextOption(QFlags<Qt::AlignmentFlag>);
     ~QTextOption();
     QTextOption(QTextOption const&);
     operator=(QTextOption const&);
    void setTabArray(QList<double>);
    QList<double> tabArray() const;
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

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
