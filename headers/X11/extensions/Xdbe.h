
XdbeBackBuffer XdbeAllocateBackBufferName (Display *, Window, XdbeSwapAction);
int XdbeBeginIdiom (Display *);
int XdbeDeallocateBackBufferName (Display *, XdbeBackBuffer);
int XdbeEndIdiom (Display *);
void XdbeFreeVisualInfo (*);
XdbeBackBufferAttributes *XdbeGetBackBufferAttributes (Display *,
						       XdbeBackBuffer);
*XdbeGetVisualInfo (Display *, Drawable *, int *);
int XdbeQueryExtension (Display *, int *, int *);
int XdbeSwapBuffers (Display *, XdbeSwapInfo *, int);
