#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_SHELL_H_
#define _X11_SHELL_H_

#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtNiconName	((char*)&XtShellStrings[0])
#define XtCDiscardCommand	((char*)&XtShellStrings[1001])
#define XtNenvironment	((char*)&XtShellStrings[1016])
#define XtCEnvironment	((char*)&XtShellStrings[1028])
#define XtNinteractCallback	((char*)&XtShellStrings[1040])
#define XtNvisual	((char*)&XtShellStrings[104])
#define XtNjoinSession	((char*)&XtShellStrings[1057])
#define XtCJoinSession	((char*)&XtShellStrings[1069])
#define XtNprogramPath	((char*)&XtShellStrings[1081])
#define XtCProgramPath	((char*)&XtShellStrings[1093])
#define XtNresignCommand	((char*)&XtShellStrings[1105])
#define XtCResignCommand	((char*)&XtShellStrings[1119])
#define XtCVisual	((char*)&XtShellStrings[111])
#define XtNrestartCommand	((char*)&XtShellStrings[1133])
#define XtCRestartCommand	((char*)&XtShellStrings[1148])
#define XtNrestartStyle	((char*)&XtShellStrings[1163])
#define XtCRestartStyle	((char*)&XtShellStrings[1176])
#define XtNsaveCallback	((char*)&XtShellStrings[1189])
#define XtNtitleEncoding	((char*)&XtShellStrings[118])
#define XtNsaveCompleteCallback	((char*)&XtShellStrings[1202])
#define XtNsessionID	((char*)&XtShellStrings[1223])
#define XtCSessionID	((char*)&XtShellStrings[1233])
#define XtNshutdownCommand	((char*)&XtShellStrings[1243])
#define XtCShutdownCommand	((char*)&XtShellStrings[1259])
#define XtNerrorCallback	((char*)&XtShellStrings[1275])
#define XtCTitleEncoding	((char*)&XtShellStrings[132])
#define XtNsaveUnder	((char*)&XtShellStrings[146])
#define XtCSaveUnder	((char*)&XtShellStrings[156])
#define XtNtransient	((char*)&XtShellStrings[166])
#define XtCTransient	((char*)&XtShellStrings[176])
#define XtNoverrideRedirect	((char*)&XtShellStrings[186])
#define XtNiconPixmap	((char*)&XtShellStrings[18])
#define XtCOverrideRedirect	((char*)&XtShellStrings[203])
#define XtNtransientFor	((char*)&XtShellStrings[220])
#define XtCTransientFor	((char*)&XtShellStrings[233])
#define XtNiconNameEncoding	((char*)&XtShellStrings[246])
#define XtCIconNameEncoding	((char*)&XtShellStrings[263])
#define XtNallowShellResize	((char*)&XtShellStrings[280])
#define XtCAllowShellResize	((char*)&XtShellStrings[297])
#define XtCIconPixmap	((char*)&XtShellStrings[29])
#define XtNcreatePopupChildProc	((char*)&XtShellStrings[314])
#define XtCCreatePopupChildProc	((char*)&XtShellStrings[335])
#define XtNtitle	((char*)&XtShellStrings[356])
#define XtCTitle	((char*)&XtShellStrings[362])
#define XtNargc	((char*)&XtShellStrings[373])
#define XtCArgc	((char*)&XtShellStrings[378])
#define XtNargv	((char*)&XtShellStrings[383])
#define XtCArgv	((char*)&XtShellStrings[388])
#define XtNiconX	((char*)&XtShellStrings[393])
#define XtCIconX	((char*)&XtShellStrings[399])
#define XtNiconY	((char*)&XtShellStrings[405])
#define XtNiconWindow	((char*)&XtShellStrings[40])
#define XtCIconY	((char*)&XtShellStrings[411])
#define XtNinput	((char*)&XtShellStrings[417])
#define XtCInput	((char*)&XtShellStrings[423])
#define XtNiconic	((char*)&XtShellStrings[429])
#define XtCIconic	((char*)&XtShellStrings[436])
#define XtNinitialState	((char*)&XtShellStrings[443])
#define XtCInitialState	((char*)&XtShellStrings[456])
#define XtNgeometry	((char*)&XtShellStrings[469])
#define XtCGeometry	((char*)&XtShellStrings[478])
#define XtNbaseWidth	((char*)&XtShellStrings[487])
#define XtCBaseWidth	((char*)&XtShellStrings[497])
#define XtNbaseHeight	((char*)&XtShellStrings[507])
#define XtCBaseHeight	((char*)&XtShellStrings[518])
#define XtCIconWindow	((char*)&XtShellStrings[51])
#define XtNwinGravity	((char*)&XtShellStrings[529])
#define XtCWinGravity	((char*)&XtShellStrings[540])
#define XtNminWidth	((char*)&XtShellStrings[551])
#define XtCMinWidth	((char*)&XtShellStrings[560])
#define XtNminHeight	((char*)&XtShellStrings[569])
#define XtCMinHeight	((char*)&XtShellStrings[579])
#define XtNmaxWidth	((char*)&XtShellStrings[589])
#define XtCMaxWidth	((char*)&XtShellStrings[598])
#define XtNmaxHeight	((char*)&XtShellStrings[607])
#define XtCMaxHeight	((char*)&XtShellStrings[617])
#define XtNwidthInc	((char*)&XtShellStrings[627])
#define XtNiconMask	((char*)&XtShellStrings[62])
#define XtCWidthInc	((char*)&XtShellStrings[636])
#define XtNheightInc	((char*)&XtShellStrings[645])
#define XtCHeightInc	((char*)&XtShellStrings[655])
#define XtNminAspectY	((char*)&XtShellStrings[665])
#define XtCMinAspectY	((char*)&XtShellStrings[676])
#define XtNmaxAspectY	((char*)&XtShellStrings[687])
#define XtCMaxAspectY	((char*)&XtShellStrings[698])
#define XtNminAspectX	((char*)&XtShellStrings[709])
#define XtCIconMask	((char*)&XtShellStrings[71])
#define XtCMinAspectX	((char*)&XtShellStrings[720])
#define XtNmaxAspectX	((char*)&XtShellStrings[731])
#define XtCMaxAspectX	((char*)&XtShellStrings[742])
#define XtNwmTimeout	((char*)&XtShellStrings[753])
#define XtCWmTimeout	((char*)&XtShellStrings[763])
#define XtNwaitForWm	((char*)&XtShellStrings[773])
#define XtCWaitForWm	((char*)&XtShellStrings[783])
#define XtNwaitforwm	((char*)&XtShellStrings[793])
#define XtCWaitforwm	((char*)&XtShellStrings[803])
#define XtNwindowGroup	((char*)&XtShellStrings[80])
#define XtNclientLeader	((char*)&XtShellStrings[813])
#define XtCClientLeader	((char*)&XtShellStrings[826])
#define XtNwindowRole	((char*)&XtShellStrings[839])
#define XtCWindowRole	((char*)&XtShellStrings[850])
#define XtNurgency	((char*)&XtShellStrings[861])
#define XtCUrgency	((char*)&XtShellStrings[869])
#define XtNcancelCallback	((char*)&XtShellStrings[877])
#define XtNcloneCommand	((char*)&XtShellStrings[892])
#define XtCCloneCommand	((char*)&XtShellStrings[905])
#define XtNconnection	((char*)&XtShellStrings[918])
#define XtCConnection	((char*)&XtShellStrings[929])
#define XtCWindowGroup	((char*)&XtShellStrings[92])
#define XtNcurrentDirectory	((char*)&XtShellStrings[940])
#define XtCCurrentDirectory	((char*)&XtShellStrings[957])
#define XtNdieCallback	((char*)&XtShellStrings[974])
#define XtNdiscardCommand	((char*)&XtShellStrings[986])
#define XtCIconName	((char*)&XtShellStrings[9])
#define _XtShell_h	1



/* Function prototypes */

    extern char XtShellStrings[];
    extern WidgetClass applicationShellWidgetClass;
    extern WidgetClass overrideShellWidgetClass;
    extern WidgetClass sessionShellWidgetClass;
    extern WidgetClass shellWidgetClass;
    extern WidgetClass topLevelShellWidgetClass;
    extern WidgetClass transientShellWidgetClass;
    extern WidgetClass wmShellWidgetClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
