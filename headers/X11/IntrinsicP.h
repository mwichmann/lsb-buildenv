
void XtConfigureWidget (Widget, int, int, unsigned int, unsigned int,
			unsigned int);
void XtCreateWindow (Widget, unsigned int, Visual *, XtValueMask,
		     XSetWindowAttributes *);
void XtMoveWidget (Widget, int, int);
void XtProcessLock (void);
void XtProcessUnlock (void);
void XtResizeWidget (Widget, unsigned int, unsigned int, unsigned int);
void XtResizeWindow (Widget);
void _XtInherit (void);
