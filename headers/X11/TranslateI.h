#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_TRANSLATEI_H_
#define _X11_TRANSLATEI_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xresource.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _ActionsRec *ActionPtr;

    typedef struct _ActionsRec ActionRec;

    typedef long unsigned int TMLongCard;

    typedef struct _LateBindings *LateBindingsPtr;

    typedef struct _TMTypeMatchRec *TMTypeMatch;

    typedef struct _TMModifierMatchRec *TMModifierMatch;

    typedef struct _TMEventRec *TMEventPtr;

    typedef Boolean(*MatchProc) (TMTypeMatch, TMModifierMatch, TMEventPtr);

    typedef struct _EventRec Event;

    typedef short unsigned int TMShortCard;

    typedef struct _TMBranchHeadRec TMBranchHeadRec;

    typedef struct _TMSimpleStateTreeRec TMSimpleStateTreeRec;

    typedef struct _XtStateRec *StatePtr;

    typedef struct _TMParseStateTreeRec TMParseStateTreeRec;

    typedef struct _TMComplexStateTreeRec TMComplexStateTreeRec;

    typedef union _TMStateTreeRec *TMStateTree;

    typedef Boolean(*_XtTraversalProc) (StatePtr, XtPointer);

    typedef struct _TMSimpleBindProcsRec TMSimpleBindProcsRec;

    typedef struct _TMSimpleBindDataRec TMSimpleBindDataRec;

    typedef struct _TMComplexBindProcsRec TMComplexBindProcsRec;

    typedef struct _TMComplexBindDataRec TMComplexBindDataRec;

    typedef union _TMBindDataRec *TMBindData;

    typedef struct _TMParseStateTreeRec *TMParseStateTree;

    typedef struct _EventSeqRec *EventSeqPtr;

    typedef struct _TMBranchHeadRec *TMBranchHead;

    typedef unsigned int _XtTranslateOp;

    struct _TranslationData {
	unsigned char hasBindings;
	unsigned char operation;
	TMShortCard numStateTrees;
	struct _TranslationData *composers[2];
	EventMask eventMask;
	TMStateTree stateTreeTbl[1];
    };

    struct _ActionsRec {
	int idx;
	String *params;
	Cardinal num_params;
	ActionPtr next;
    };

    struct _LateBindings {
	unsigned int knot:1;
	unsigned int pair:1;
	short unsigned int ref_count;
	KeySym keysym;
    };

    struct _TMTypeMatchRec {
	TMLongCard eventType;
	TMLongCard eventCode;
	TMLongCard eventCodeMask;
	MatchProc matchEvent;
    };

    struct _TMModifierMatchRec {
	TMLongCard modifiers;
	TMLongCard modifierMask;
	LateBindingsPtr lateModifiers;
	Boolean standard;
    };

    struct _EventRec {
	TMLongCard modifiers;
	TMLongCard modifierMask;
	LateBindingsPtr lateModifiers;
	TMLongCard eventType;
	TMLongCard eventCode;
	TMLongCard eventCodeMask;
	MatchProc matchEvent;
	Boolean standard;
    };

    struct _TMEventRec {
	XEvent *xev;
	Event event;
    };

    struct _TMBranchHeadRec {
	unsigned int isSimple:1;
	unsigned int hasActions:1;
	unsigned int hasCycles:1;
	unsigned int more:13;
	TMShortCard typeIndex;
	TMShortCard modIndex;
    };

    struct _TMSimpleStateTreeRec {
	unsigned int isSimple:1;
	unsigned int isAccelerator:1;
	unsigned int mappingNotifyInterest:1;
	unsigned int refCount:13;
	TMShortCard numBranchHeads;
	TMShortCard numQuarks;
	TMShortCard unused;
	TMBranchHeadRec *branchHeadTbl;
	XrmQuark *quarkTbl;
    };

    struct _XtStateRec {
	unsigned int isCycleStart:1;
	unsigned int isCycleEnd:1;
	TMShortCard typeIndex;
	TMShortCard modIndex;
	ActionPtr actions;
	StatePtr nextLevel;
    };

    struct _TMParseStateTreeRec {
	unsigned int isSimple:1;
	unsigned int isAccelerator:1;
	unsigned int mappingNotifyInterest:1;
	unsigned int isStackQuarks:1;
	unsigned int isStackBranchHeads:1;
	unsigned int isStackComplexBranchHeads:1;
	unsigned int unused:10;
	TMShortCard numBranchHeads;
	TMShortCard numQuarks;
	TMShortCard numComplexBranchHeads;
	TMBranchHeadRec *branchHeadTbl;
	XrmQuark *quarkTbl;
	StatePtr *complexBranchHeadTbl;
	TMShortCard branchHeadTblSize;
	TMShortCard quarkTblSize;
	TMShortCard complexBranchHeadTblSize;
	StatePtr head;
    };

    struct _TMComplexStateTreeRec {
	unsigned int isSimple:1;
	unsigned int isAccelerator:1;
	unsigned int mappingNotifyInterest:1;
	unsigned int refCount:13;
	TMShortCard numBranchHeads;
	TMShortCard numQuarks;
	TMShortCard numComplexBranchHeads;
	TMBranchHeadRec *branchHeadTbl;
	XrmQuark *quarkTbl;
	StatePtr *complexBranchHeadTbl;
    };

    union _TMStateTreeRec {
	TMSimpleStateTreeRec simple;
	TMParseStateTreeRec parse;
	TMComplexStateTreeRec complex;
    };

    struct _TMSimpleBindProcsRec {
	XtActionProc *procs;
    };

    struct _TMSimpleBindDataRec {
	unsigned int isComplex:1;
	TMSimpleBindProcsRec bindTbl[8];
    };

    struct _TMComplexBindProcsRec {
	Widget widget;
	XtTranslations aXlations;
	XtActionProc *procs;
    };

    struct _ATranslationData {
	unsigned char hasBindings;
	unsigned char operation;
	struct _TranslationData *xlations;
	struct _ATranslationData *next;
	TMComplexBindProcsRec bindTbl[24];
    };

    struct _TMComplexBindDataRec {
	unsigned int isComplex:1;
	struct _ATranslationData *accel_context;
	TMComplexBindProcsRec bindTbl[24];
    };

    union _TMBindDataRec {
	TMSimpleBindDataRec simple;
	TMComplexBindDataRec complex;
    };

    struct _EventSeqRec {
	Event event;
	StatePtr state;
	EventSeqPtr next;
	ActionPtr actions;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
