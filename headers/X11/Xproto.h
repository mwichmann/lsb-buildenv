#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_XPROTO_H_
#define _X11_XPROTO_H_

#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ELFlagFocus	(1<<0)
#define ELFlagSameScreen	(1<<1)
#define XEventSize	(sizeof(xEvent))
#define X_Error	0
#define xFalse	0
#define X_CreateWindow	1
#define X_Reply	1
#define xTrue	1
#define X_UnmapWindow	10
#define X_ChangeKeyboardMapping	100
#define X_GetKeyboardMapping	101
#define X_ChangeKeyboardControl	102
#define X_GetKeyboardControl	103
#define X_Bell	104
#define X_ChangePointerControl	105
#define X_GetPointerControl	106
#define X_SetScreenSaver	107
#define X_GetScreenSaver	108
#define X_ChangeHosts	109
#define X_UnmapSubwindows	11
#define X_ListHosts	110
#define X_SetAccessControl	111
#define X_SetCloseDownMode	112
#define X_KillClient	113
#define X_RotateProperties	114
#define X_ForceScreenSaver	115
#define X_SetPointerMapping	116
#define X_GetPointerMapping	117
#define X_SetModifierMapping	118
#define X_GetModifierMapping	119
#define X_ConfigureWindow	12
#define sz_xAllocColorCellsReq	12
#define sz_xAllocNamedColorReq	12
#define sz_xArc	12
#define sz_xChangeGCReq	12
#define sz_xChangePointerControlReq	12
#define sz_xChangeWindowAttributesReq	12
#define sz_xCharInfo	12
#define sz_xColorItem	12
#define sz_xConfigureWindowReq	12
#define sz_xConnClientPrefix	12
#define sz_xCopyColormapAndFreeReq	12
#define sz_xDeletePropertyReq	12
#define sz_xFreeColorsReq	12
#define sz_xLookupColorReq	12
#define sz_xOpenFontReq	12
#define sz_xPolyArcReq	12
#define sz_xPolyFillArcReq	12
#define sz_xPolyFillRectangleReq	12
#define sz_xPolyLineReq	12
#define sz_xPolyPointReq	12
#define sz_xPolyRectangleReq	12
#define sz_xPolySegmentReq	12
#define sz_xQueryBestSizeReq	12
#define sz_xRotatePropertiesReq	12
#define sz_xSetClipRectanglesReq	12
#define sz_xSetDashesReq	12
#define sz_xSetInputFocusReq	12
#define sz_xSetScreenSaverReq	12
#define sz_xUngrabButtonReq	12
#define sz_xUngrabKeyReq	12
#define X_NoOperation	127
#define X_CirculateWindow	13
#define X_GetGeometry	14
#define X_QueryTree	15
#define X_InternAtom	16
#define sz_xAllocColorPlanesReq	16
#define sz_xAllocColorReq	16
#define sz_xChangeActivePointerGrabReq	16
#define sz_xClearAreaReq	16
#define sz_xCopyGCReq	16
#define sz_xCreateColormapReq	16
#define sz_xCreateGCReq	16
#define sz_xCreatePixmapReq	16
#define sz_xFillPolyReq	16
#define sz_xGetMotionEventsReq	16
#define sz_xGrabKeyReq	16
#define sz_xGrabKeyboardReq	16
#define sz_xImageText16Req	16
#define sz_xImageText8Req	16
#define sz_xImageTextReq	16
#define sz_xPolyText16Req	16
#define sz_xPolyText8Req	16
#define sz_xPolyTextReq	16
#define sz_xReparentWindowReq	16
#define sz_xSetSelectionOwnerReq	16
#define sz_xStoreNamedColorReq	16
#define sz_xTranslateCoordsReq	16
#define X_GetAtomName	17
#define X_ChangeProperty	18
#define X_DeleteProperty	19
#define X_ChangeWindowAttributes	2
#define sz_xTextElt	2
#define X_GetProperty	20
#define sz_xGetImageReq	20
#define sz_xRecolorCursorReq	20
#define X_ListProperties	21
#define X_SetSelectionOwner	22
#define X_GetSelectionOwner	23
#define X_ConvertSelection	24
#define sz_xChangePropertyReq	24
#define sz_xConvertSelectionReq	24
#define sz_xGetPropertyReq	24
#define sz_xGrabButtonReq	24
#define sz_xGrabPointerReq	24
#define sz_xPropIconSize	24
#define sz_xPutImageReq	24
#define sz_xVisualType	24
#define sz_xWarpPointerReq	24
#define X_SendEvent	25
#define X_GrabPointer	26
#define X_UngrabPointer	27
#define X_GrabButton	28
#define sz_xCopyAreaReq	28
#define X_UngrabButton	29
#define X_GetWindowAttributes	3
#define X_ChangeActivePointerGrab	30
#define X_GrabKeyboard	31
#define X_UngrabKeyboard	32
#define sz_xAllocColorCellsReply	32
#define sz_xAllocColorPlanesReply	32
#define sz_xAllocColorReply	32
#define sz_xAllocNamedColorReply	32
#define sz_xConnSetup	32
#define sz_xCopyPlaneReq	32
#define sz_xCreateCursorReq	32
#define sz_xCreateGlyphCursorReq	32
#define sz_xCreateWindowReq	32
#define sz_xError	32
#define sz_xEvent	32
#define sz_xGenericReply	32
#define sz_xGetAtomNameReply	32
#define sz_xGetFontPathReply	32
#define sz_xGetGeometryReply	32
#define sz_xGetImageReply	32
#define sz_xGetInputFocusReply	32
#define sz_xGetKeyboardMappingReply	32
#define sz_xGetModifierMappingReply	32
#define sz_xGetMotionEventsReply	32
#define sz_xGetPointerControlReply	32
#define sz_xGetPointerMappingReply	32
#define sz_xGetPropertyReply	32
#define sz_xGetScreenSaverReply	32
#define sz_xGetSelectionOwnerReply	32
#define sz_xGrabKeyboardReply	32
#define sz_xGrabPointerReply	32
#define sz_xInternAtomReply	32
#define sz_xKeymapEvent	32
#define sz_xListExtensionsReply	32
#define sz_xListFontsReply	32
#define sz_xListHostsReply	32
#define sz_xListInstalledColormapsReply	32
#define sz_xListPropertiesReply	32
#define sz_xLookupColorReply	32
#define sz_xQueryBestSizeReply	32
#define sz_xQueryColorsReply	32
#define sz_xQueryExtensionReply	32
#define sz_xQueryPointerReply	32
#define sz_xQueryTextExtentsReply	32
#define sz_xQueryTreeReply	32
#define sz_xReply	32
#define sz_xSetMappingReply	32
#define sz_xSetModifierMappingReply	32
#define sz_xSetPointerMappingReply	32
#define sz_xTranslateCoordsReply	32
#define X_GrabKey	33
#define X_UngrabKey	34
#define X_AllowEvents	35
#define X_GrabServer	36
#define X_UngrabServer	37
#define X_QueryPointer	38
#define X_GetMotionEvents	39
#define X_DestroyWindow	4
#define sz_xBellReq	4
#define sz_xChangeModeReq	4
#define sz_xForceScreenSaverReq	4
#define sz_xHostEntry	4
#define sz_xListHostsReq	4
#define sz_xPoint	4
#define sz_xReq	4
#define sz_xSetAccessControlReq	4
#define sz_xSetCloseDownModeReq	4
#define sz_xSetModifierMappingReq	4
#define sz_xSetPointerMappingReq	4
#define X_TranslateCoords	40
#define sz_xQueryKeymapReply	40
#define sz_xWindowRoot	40
#define X_WarpPointer	41
#define X_SetInputFocus	42
#define X_GetInputFocus	43
#define X_QueryKeymap	44
#define sz_xGetWindowAttributesReply	44
#define sz_xSendEventReq	44
#define X_OpenFont	45
#define X_CloseFont	46
#define X_QueryFont	47
#define X_QueryTextExtents	48
#define X_ListFonts	49
#define X_DestroySubwindows	5
#define X_ListFontsWithInfo	50
#define X_SetFontPath	51
#define X_GetFontPath	52
#define sz_xGetKeyboardControlReply	52
#define X_CreatePixmap	53
#define X_FreePixmap	54
#define X_CreateGC	55
#define X_ChangeGC	56
#define X_CopyGC	57
#define X_SetDashes	58
#define X_SetClipRectangles	59
#define X_ChangeSaveSet	6
#define X_FreeGC	60
#define sz_xListFontsWithInfoReply	60
#define sz_xQueryFontReply	60
#define X_TCP_PORT	6000
#define X_ClearArea	61
#define X_CopyArea	62
#define X_CopyPlane	63
#define X_PolyPoint	64
#define X_PolyLine	65
#define X_PolySegment	66
#define X_PolyRectangle	67
#define X_PolyArc	68
#define X_FillPoly	69
#define X_ReparentWindow	7
#define X_PolyFillRectangle	70
#define X_PolyFillArc	71
#define X_PutImage	72
#define X_GetImage	73
#define X_PolyText8	74
#define X_PolyText16	75
#define X_ImageText8	76
#define X_ImageText16	77
#define X_CreateColormap	78
#define X_FreeColormap	79
#define X_MapWindow	8
#define sz_xAllowEventsReq	8
#define sz_xChangeHostsReq	8
#define sz_xChangeKeyboardControlReq	8
#define sz_xChangeKeyboardMappingReq	8
#define sz_xChangeSaveSetReq	8
#define sz_xCirculateWindowReq	8
#define sz_xConnSetupPrefix	8
#define sz_xDepth	8
#define sz_xFontProp	8
#define sz_xGetKeyboardMappingReq	8
#define sz_xInternAtomReq	8
#define sz_xListFontsReq	8
#define sz_xListFontsWithInfoReq	8
#define sz_xPixmapFormat	8
#define sz_xQueryColorsReq	8
#define sz_xQueryExtensionReq	8
#define sz_xQueryTextExtentsReq	8
#define sz_xRectangle	8
#define sz_xResourceReq	8
#define sz_xSegment	8
#define sz_xSetFontPathReq	8
#define sz_xStoreColorsReq	8
#define sz_xTimecoord	8
#define sz_xrgb	8
#define X_CopyColormapAndFree	80
#define X_InstallColormap	81
#define X_UninstallColormap	82
#define X_ListInstalledColormaps	83
#define X_AllocColor	84
#define X_AllocNamedColor	85
#define X_AllocColorCells	86
#define X_AllocColorPlanes	87
#define X_FreeColors	88
#define X_StoreColors	89
#define X_MapSubwindows	9
#define X_StoreNamedColor	90
#define X_QueryColors	91
#define X_LookupColor	92
#define X_CreateCursor	93
#define X_CreateGlyphCursor	94
#define X_FreeCursor	95
#define X_RecolorCursor	96
#define X_QueryBestSize	97
#define X_QueryExtension	98
#define X_ListExtensions	99
#define Atom	CARD32
#define Colormap	CARD32
#define Cursor	CARD32
#define Drawable	CARD32
#define Font	CARD32
#define GContext	CARD32
#define KeySym	CARD32
#define Pixmap	CARD32
#define Time	CARD32
#define VisualID	CARD32
#define Window	CARD32
#define KeyCode	CARD8


    typedef struct {
	BYTE type;
	BYTE errorCode;
	CARD16 sequenceNumber;
	CARD32 resourceID;
	CARD16 minorCode;
	CARD8 majorCode;
	BYTE pad1;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xError;

    typedef struct _xEvent xEvent;

    typedef CARD16 KeyButMask;

    typedef struct {
	CARD8 byteOrder;
	BYTE pad;
	CARD16 majorVersion;
	CARD16 minorVersion;
	CARD16 nbytesAuthProto;
	CARD16 nbytesAuthString;
	CARD16 pad2;
    } xConnClientPrefix;

    typedef struct {
	CARD8 success;
	BYTE lengthReason;
	CARD16 majorVersion;
	CARD16 minorVersion;
	CARD16 length;
    } xConnSetupPrefix;

    typedef struct {
	CARD32 release;
	CARD32 ridBase;
	CARD32 ridMask;
	CARD32 motionBufferSize;
	CARD16 nbytesVendor;
	CARD16 maxRequestSize;
	CARD8 numRoots;
	CARD8 numFormats;
	CARD8 imageByteOrder;
	CARD8 bitmapBitOrder;
	CARD8 bitmapScanlineUnit;
	CARD8 bitmapScanlinePad;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD32 pad2;
    } xConnSetup;

    typedef struct {
	CARD8 depth;
	CARD8 bitsPerPixel;
	CARD8 scanLinePad;
	CARD8 pad1;
	CARD32 pad2;
    } xPixmapFormat;

    typedef struct {
	CARD8 depth;
	CARD8 pad1;
	CARD16 nVisuals;
	CARD32 pad2;
    } xDepth;

    typedef struct {
	CARD32 visualID;
	CARD8 c_class;
	CARD8 bitsPerRGB;
	CARD16 colormapEntries;
	CARD32 redMask;
	CARD32 greenMask;
	CARD32 blueMask;
	CARD32 pad;
    } xVisualType;

    typedef struct {
	CARD32 windowId;
	CARD32 defaultColormap;
	CARD32 whitePixel;
	CARD32 blackPixel;
	CARD32 currentInputMask;
	CARD16 pixWidth;
	CARD16 pixHeight;
	CARD16 mmWidth;
	CARD16 mmHeight;
	CARD16 minInstalledMaps;
	CARD16 maxInstalledMaps;
	CARD32 rootVisualID;
	CARD8 backingStore;
	BOOL saveUnders;
	CARD8 rootDepth;
	CARD8 nDepths;
    } xWindowRoot;

    typedef struct {
	CARD32 time;
	INT16 x;
	INT16 y;
    } xTimecoord;

    typedef struct {
	CARD8 family;
	BYTE pad;
	CARD16 length;
    } xHostEntry;

    typedef struct {
	INT16 leftSideBearing;
	INT16 rightSideBearing;
	INT16 characterWidth;
	INT16 ascent;
	INT16 descent;
	CARD16 attributes;
    } xCharInfo;

    typedef struct {
	CARD32 name;
	CARD32 value;
    } xFontProp;

    typedef struct {
	CARD8 len;
	INT8 delta;
    } xTextElt;

    typedef struct {
	CARD32 pixel;
	CARD16 red;
	CARD16 green;
	CARD16 blue;
	CARD8 flags;
	CARD8 pad;
    } xColorItem;

    typedef struct {
	CARD16 red;
	CARD16 green;
	CARD16 blue;
	CARD16 pad;
    } xrgb;

    typedef unsigned char KEYCODE;

    typedef struct {
	BYTE type;
	BYTE data1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 data00;
	CARD32 data01;
	CARD32 data02;
	CARD32 data03;
	CARD32 data04;
	CARD32 data05;
    } xGenericReply;

    typedef struct {
	BYTE type;
	CARD8 backingStore;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 visualID;
	CARD16 c_class;
	CARD8 bitGravity;
	CARD8 winGravity;
	CARD32 backingBitPlanes;
	CARD32 backingPixel;
	BOOL saveUnder;
	BOOL mapInstalled;
	CARD8 mapState;
	BOOL override;
	CARD32 colormap;
	CARD32 allEventMasks;
	CARD32 yourEventMask;
	CARD16 doNotPropagateMask;
	CARD16 pad;
    } xGetWindowAttributesReply;

    typedef struct {
	BYTE type;
	CARD8 depth;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 root;
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
	CARD16 borderWidth;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
    } xGetGeometryReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 root;
	CARD32 parent;
	CARD16 nChildren;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xQueryTreeReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 atom;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xInternAtomReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nameLength;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xGetAtomNameReply;

    typedef struct {
	BYTE type;
	CARD8 format;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 propertyType;
	CARD32 bytesAfter;
	CARD32 nItems;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
    } xGetPropertyReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nProperties;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xListPropertiesReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 owner;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetSelectionOwnerReply;

    typedef struct {
	BYTE type;
	BYTE status;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGrabPointerReply;

    typedef xGrabPointerReply xGrabKeyboardReply;

    typedef struct {
	BYTE type;
	BOOL sameScreen;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 root;
	CARD32 child;
	INT16 rootX;
	INT16 rootY;
	INT16 winX;
	INT16 winY;
	CARD16 mask;
	CARD16 pad1;
	CARD32 pad;
    } xQueryPointerReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 nEvents;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetMotionEventsReply;

    typedef struct {
	BYTE type;
	BOOL sameScreen;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 child;
	INT16 dstX;
	INT16 dstY;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xTranslateCoordsReply;

    typedef struct {
	BYTE type;
	CARD8 revertTo;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 focus;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xGetInputFocusReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	BYTE map[32];
    } xQueryKeymapReply;

    typedef struct _xQueryFontReply xQueryFontReply;

    typedef struct {
	BYTE type;
	CARD8 drawDirection;
	CARD16 sequenceNumber;
	CARD32 length;
	INT16 fontAscent;
	INT16 fontDescent;
	INT16 overallAscent;
	INT16 overallDescent;
	INT32 overallWidth;
	INT32 overallLeft;
	INT32 overallRight;
	CARD32 pad;
    } xQueryTextExtentsReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nFonts;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xListFontsReply;

    typedef struct {
	BYTE type;
	CARD8 nameLength;
	CARD16 sequenceNumber;
	CARD32 length;
	xCharInfo minBounds;
	CARD32 walign1;
	xCharInfo maxBounds;
	CARD32 walign2;
	CARD16 minCharOrByte2;
	CARD16 maxCharOrByte2;
	CARD16 defaultChar;
	CARD16 nFontProps;
	CARD8 drawDirection;
	CARD8 minByte1;
	CARD8 maxByte1;
	BOOL allCharsExist;
	INT16 fontAscent;
	INT16 fontDescent;
	CARD32 nReplies;
    } xListFontsWithInfoReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nPaths;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xGetFontPathReply;

    typedef struct {
	BYTE type;
	CARD8 depth;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 visual;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xGetImageReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nColormaps;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xListInstalledColormapsReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 red;
	CARD16 green;
	CARD16 blue;
	CARD16 pad2;
	CARD32 pixel;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xAllocColorReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pixel;
	CARD16 exactRed;
	CARD16 exactGreen;
	CARD16 exactBlue;
	CARD16 screenRed;
	CARD16 screenGreen;
	CARD16 screenBlue;
	CARD32 pad2;
	CARD32 pad3;
    } xAllocNamedColorReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nPixels;
	CARD16 nMasks;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xAllocColorCellsReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nPixels;
	CARD16 pad2;
	CARD32 redMask;
	CARD32 greenMask;
	CARD32 blueMask;
	CARD32 pad3;
	CARD32 pad4;
    } xAllocColorPlanesReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nColors;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xQueryColorsReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 exactRed;
	CARD16 exactGreen;
	CARD16 exactBlue;
	CARD16 screenRed;
	CARD16 screenGreen;
	CARD16 screenBlue;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    } xLookupColorReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 width;
	CARD16 height;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xQueryBestSizeReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	BOOL present;
	CARD8 major_opcode;
	CARD8 first_event;
	CARD8 first_error;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xQueryExtensionReply;

    typedef struct {
	BYTE type;
	CARD8 nExtensions;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xListExtensionsReply;

    typedef struct {
	BYTE type;
	CARD8 success;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xSetMappingReply;

    typedef xSetMappingReply xSetPointerMappingReply;

    typedef xSetMappingReply xSetModifierMappingReply;

    typedef struct {
	BYTE type;
	CARD8 nElts;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xGetPointerMappingReply;

    typedef struct {
	BYTE type;
	CARD8 keySymsPerKeyCode;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xGetKeyboardMappingReply;

    typedef struct {
	BYTE type;
	CARD8 numKeyPerModifier;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetModifierMappingReply;

    typedef struct {
	BYTE type;
	BOOL globalAutoRepeat;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 ledMask;
	CARD8 keyClickPercent;
	CARD8 bellPercent;
	CARD16 bellPitch;
	CARD16 bellDuration;
	CARD16 pad;
	BYTE map[32];
    } xGetKeyboardControlReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 accelNumerator;
	CARD16 accelDenominator;
	CARD16 threshold;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetPointerControlReply;

    typedef struct {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 timeout;
	CARD16 interval;
	BOOL preferBlanking;
	BOOL allowExposures;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetScreenSaverReply;

    typedef struct {
	BYTE type;
	BOOL enabled;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nHosts;
	CARD16 pad1;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    } xListHostsReply;

    typedef struct {
	BYTE type;
	BYTE map[31];
    } xKeymapEvent;

    typedef struct _xReq xReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 id;
    } xResourceReq;

    typedef struct {
	CARD8 reqType;
	CARD8 depth;
	CARD16 length;
	CARD32 wid;
	CARD32 parent;
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
	CARD16 borderWidth;
	CARD16 c_class;
	CARD32 visual;
	CARD32 mask;
    } xCreateWindowReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD32 valueMask;
    } xChangeWindowAttributesReq;

    typedef struct {
	CARD8 reqType;
	BYTE mode;
	CARD16 length;
	CARD32 window;
    } xChangeSaveSetReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD32 parent;
	INT16 x;
	INT16 y;
    } xReparentWindowReq;

    typedef struct {
	CARD8 reqType;
	CARD8 pad;
	CARD16 length;
	CARD32 window;
	CARD16 mask;
	CARD16 pad2;
    } xConfigureWindowReq;

    typedef struct {
	CARD8 reqType;
	CARD8 direction;
	CARD16 length;
	CARD32 window;
    } xCirculateWindowReq;

    typedef struct {
	CARD8 reqType;
	BOOL onlyIfExists;
	CARD16 length;
	CARD16 nbytes;
	CARD16 pad;
    } xInternAtomReq;

    typedef struct {
	CARD8 reqType;
	CARD8 mode;
	CARD16 length;
	CARD32 window;
	CARD32 property;
	CARD32 type;
	CARD8 format;
	BYTE pad[3];
	CARD32 nUnits;
    } xChangePropertyReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD32 property;
    } xDeletePropertyReq;

    typedef struct {
	CARD8 reqType;
	BOOL c_delete;
	CARD16 length;
	CARD32 window;
	CARD32 property;
	CARD32 type;
	CARD32 longOffset;
	CARD32 longLength;
    } xGetPropertyReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD32 selection;
	CARD32 time;
    } xSetSelectionOwnerReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 requestor;
	CARD32 selection;
	CARD32 target;
	CARD32 property;
	CARD32 time;
    } xConvertSelectionReq;

    typedef struct {
	CARD8 reqType;
	BOOL ownerEvents;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 eventMask;
	BYTE pointerMode;
	BYTE keyboardMode;
	CARD32 confineTo;
	CARD32 cursor;
	CARD32 time;
    } xGrabPointerReq;

    typedef struct {
	CARD8 reqType;
	BOOL ownerEvents;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 eventMask;
	BYTE pointerMode;
	BYTE keyboardMode;
	CARD32 confineTo;
	CARD32 cursor;
	CARD8 button;
	BYTE pad;
	CARD16 modifiers;
    } xGrabButtonReq;

    typedef struct {
	CARD8 reqType;
	CARD8 button;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 modifiers;
	CARD16 pad;
    } xUngrabButtonReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cursor;
	CARD32 time;
	CARD16 eventMask;
	CARD16 pad2;
    } xChangeActivePointerGrabReq;

    typedef struct {
	CARD8 reqType;
	BOOL ownerEvents;
	CARD16 length;
	CARD32 grabWindow;
	CARD32 time;
	BYTE pointerMode;
	BYTE keyboardMode;
	CARD16 pad;
    } xGrabKeyboardReq;

    typedef struct {
	CARD8 reqType;
	BOOL ownerEvents;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 modifiers;
	CARD8 key;
	BYTE pointerMode;
	BYTE keyboardMode;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGrabKeyReq;

    typedef struct {
	CARD8 reqType;
	CARD8 key;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 modifiers;
	CARD16 pad;
    } xUngrabKeyReq;

    typedef struct {
	CARD8 reqType;
	CARD8 mode;
	CARD16 length;
	CARD32 time;
    } xAllowEventsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD32 start;
	CARD32 stop;
    } xGetMotionEventsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 srcWid;
	CARD32 dstWid;
	INT16 srcX;
	INT16 srcY;
    } xTranslateCoordsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 srcWid;
	CARD32 dstWid;
	INT16 srcX;
	INT16 srcY;
	CARD16 srcWidth;
	CARD16 srcHeight;
	INT16 dstX;
	INT16 dstY;
    } xWarpPointerReq;

    typedef struct {
	CARD8 reqType;
	CARD8 revertTo;
	CARD16 length;
	CARD32 focus;
	CARD32 time;
    } xSetInputFocusReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 fid;
	CARD16 nbytes;
	BYTE pad1;
	BYTE pad2;
    } xOpenFontReq;

    typedef struct {
	CARD8 reqType;
	BOOL oddLength;
	CARD16 length;
	CARD32 fid;
    } xQueryTextExtentsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD16 maxNames;
	CARD16 nbytes;
    } xListFontsReq;

    typedef xListFontsReq xListFontsWithInfoReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD16 nFonts;
	BYTE pad1;
	BYTE pad2;
    } xSetFontPathReq;

    typedef struct {
	CARD8 reqType;
	CARD8 depth;
	CARD16 length;
	CARD32 pid;
	CARD32 drawable;
	CARD16 width;
	CARD16 height;
    } xCreatePixmapReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 gc;
	CARD32 drawable;
	CARD32 mask;
    } xCreateGCReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 gc;
	CARD32 mask;
    } xChangeGCReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 srcGC;
	CARD32 dstGC;
	CARD32 mask;
    } xCopyGCReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 gc;
	CARD16 dashOffset;
	CARD16 nDashes;
    } xSetDashesReq;

    typedef struct {
	CARD8 reqType;
	BYTE ordering;
	CARD16 length;
	CARD32 gc;
	INT16 xOrigin;
	INT16 yOrigin;
    } xSetClipRectanglesReq;

    typedef struct {
	CARD8 reqType;
	BOOL exposures;
	CARD16 length;
	CARD32 window;
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
    } xClearAreaReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 srcDrawable;
	CARD32 dstDrawable;
	CARD32 gc;
	INT16 srcX;
	INT16 srcY;
	INT16 dstX;
	INT16 dstY;
	CARD16 width;
	CARD16 height;
    } xCopyAreaReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 srcDrawable;
	CARD32 dstDrawable;
	CARD32 gc;
	INT16 srcX;
	INT16 srcY;
	INT16 dstX;
	INT16 dstY;
	CARD16 width;
	CARD16 height;
	CARD32 bitPlane;
    } xCopyPlaneReq;

    typedef struct {
	CARD8 reqType;
	BYTE coordMode;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
    } xPolyPointReq;

    typedef xPolyPointReq xPolyLineReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
    } xPolySegmentReq;

    typedef xPolySegmentReq xPolyArcReq;

    typedef xPolySegmentReq xPolyRectangleReq;

    typedef xPolySegmentReq xPolyFillRectangleReq;

    typedef xPolySegmentReq xPolyFillArcReq;

    typedef struct _FillPolyReq xFillPolyReq;

    typedef struct _PutImageReq xPutImageReq;

    typedef struct {
	CARD8 reqType;
	CARD8 format;
	CARD16 length;
	CARD32 drawable;
	INT16 x;
	INT16 y;
	CARD16 width;
	CARD16 height;
	CARD32 planeMask;
    } xGetImageReq;

    typedef struct {
	CARD8 reqType;
	CARD8 pad;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
	INT16 x;
	INT16 y;
    } xPolyTextReq;

    typedef xPolyTextReq xPolyText8Req;

    typedef xPolyTextReq xPolyText16Req;

    typedef struct {
	CARD8 reqType;
	BYTE nChars;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
	INT16 x;
	INT16 y;
    } xImageTextReq;

    typedef xImageTextReq xImageText8Req;

    typedef xImageTextReq xImageText16Req;

    typedef struct {
	CARD8 reqType;
	BYTE alloc;
	CARD16 length;
	CARD32 mid;
	CARD32 window;
	CARD32 visual;
    } xCreateColormapReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 mid;
	CARD32 srcCmap;
    } xCopyColormapAndFreeReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
	CARD16 red;
	CARD16 green;
	CARD16 blue;
	CARD16 pad2;
    } xAllocColorReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
	CARD16 nbytes;
	BYTE pad1;
	BYTE pad2;
    } xAllocNamedColorReq;

    typedef struct {
	CARD8 reqType;
	BOOL contiguous;
	CARD16 length;
	CARD32 cmap;
	CARD16 colors;
	CARD16 planes;
    } xAllocColorCellsReq;

    typedef struct {
	CARD8 reqType;
	BOOL contiguous;
	CARD16 length;
	CARD32 cmap;
	CARD16 colors;
	CARD16 red;
	CARD16 green;
	CARD16 blue;
    } xAllocColorPlanesReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
	CARD32 planeMask;
    } xFreeColorsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
    } xStoreColorsReq;

    typedef struct {
	CARD8 reqType;
	CARD8 flags;
	CARD16 length;
	CARD32 cmap;
	CARD32 pixel;
	CARD16 nbytes;
	BYTE pad1;
	BYTE pad2;
    } xStoreNamedColorReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
    } xQueryColorsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cmap;
	CARD16 nbytes;
	BYTE pad1;
	BYTE pad2;
    } xLookupColorReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cid;
	CARD32 source;
	CARD32 mask;
	CARD16 foreRed;
	CARD16 foreGreen;
	CARD16 foreBlue;
	CARD16 backRed;
	CARD16 backGreen;
	CARD16 backBlue;
	CARD16 x;
	CARD16 y;
    } xCreateCursorReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cid;
	CARD32 source;
	CARD32 mask;
	CARD16 sourceChar;
	CARD16 maskChar;
	CARD16 foreRed;
	CARD16 foreGreen;
	CARD16 foreBlue;
	CARD16 backRed;
	CARD16 backGreen;
	CARD16 backBlue;
    } xCreateGlyphCursorReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 cursor;
	CARD16 foreRed;
	CARD16 foreGreen;
	CARD16 foreBlue;
	CARD16 backRed;
	CARD16 backGreen;
	CARD16 backBlue;
    } xRecolorCursorReq;

    typedef struct {
	CARD8 reqType;
	CARD8 c_class;
	CARD16 length;
	CARD32 drawable;
	CARD16 width;
	CARD16 height;
    } xQueryBestSizeReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD16 nbytes;
	BYTE pad1;
	BYTE pad2;
    } xQueryExtensionReq;

    typedef struct {
	CARD8 reqType;
	CARD8 numKeyPerModifier;
	CARD16 length;
    } xSetModifierMappingReq;

    typedef struct {
	CARD8 reqType;
	CARD8 nElts;
	CARD16 length;
    } xSetPointerMappingReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD8 firstKeyCode;
	CARD8 count;
	CARD16 pad1;
    } xGetKeyboardMappingReq;

    typedef struct {
	CARD8 reqType;
	CARD8 keyCodes;
	CARD16 length;
	CARD8 firstKeyCode;
	CARD8 keySymsPerKeyCode;
	CARD16 pad1;
    } xChangeKeyboardMappingReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 mask;
    } xChangeKeyboardControlReq;

    typedef struct {
	CARD8 reqType;
	INT8 percent;
	CARD16 length;
    } xBellReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	INT16 accelNum;
	INT16 accelDenum;
	INT16 threshold;
	BOOL doAccel;
	BOOL doThresh;
    } xChangePointerControlReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	INT16 timeout;
	INT16 interval;
	BYTE preferBlank;
	BYTE allowExpose;
	CARD16 pad2;
    } xSetScreenSaverReq;

    typedef struct {
	CARD8 reqType;
	BYTE mode;
	CARD16 length;
	CARD8 hostFamily;
	BYTE pad;
	CARD16 hostLength;
    } xChangeHostsReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
    } xListHostsReq;

    typedef struct {
	CARD8 reqType;
	BYTE mode;
	CARD16 length;
    } xChangeModeReq;

    typedef xChangeModeReq xSetAccessControlReq;

    typedef xChangeModeReq xSetCloseDownModeReq;

    typedef xChangeModeReq xForceScreenSaverReq;

    typedef struct {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 window;
	CARD16 nAtoms;
	INT16 nPositions;
    } xRotatePropertiesReq;


    struct _xEvent {
	union {
	    struct {
		BYTE type;
		BYTE detail;
		CARD16 sequenceNumber;
	    } u;
	    struct {
		CARD32 pad00;
		CARD32 time;
		CARD32 root;
		CARD32 event;
		CARD32 child;
		INT16 rootX;
		INT16 rootY;
		INT16 eventX;
		INT16 eventY;
		KeyButMask state;
		BOOL sameScreen;
		BYTE pad1;
	    } keyButtonPointer;
	    struct {
		CARD32 pad00;
		CARD32 time;
		CARD32 root;
		CARD32 event;
		CARD32 child;
		INT16 rootX;
		INT16 rootY;
		INT16 eventX;
		INT16 eventY;
		KeyButMask state;
		BYTE mode;
		BYTE flags;
	    } enterLeave;
	    struct {
		CARD32 pad00;
		CARD32 window;
		BYTE mode;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } focus;
	    struct {
		CARD32 pad00;
		CARD32 window;
		CARD16 x;
		CARD16 y;
		CARD16 width;
		CARD16 height;
		CARD16 count;
		CARD16 pad2;
	    } expose;
	    struct {
		CARD32 pad00;
		CARD32 drawable;
		CARD16 x;
		CARD16 y;
		CARD16 width;
		CARD16 height;
		CARD16 minorEvent;
		CARD16 count;
		BYTE majorEvent;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } graphicsExposure;
	    struct {
		CARD32 pad00;
		CARD32 drawable;
		CARD16 minorEvent;
		BYTE majorEvent;
		BYTE bpad;
	    } noExposure;
	    struct {
		CARD32 pad00;
		CARD32 window;
		CARD8 state;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } visibility;
	    struct {
		CARD32 pad00;
		CARD32 parent;
		CARD32 window;
		INT16 x;
		INT16 y;
		CARD16 width;
		CARD16 height;
		CARD16 borderWidth;
		BOOL override;
		BYTE bpad;
	    } createNotify;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
	    } destroyNotify;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		BOOL fromConfigure;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } unmapNotify;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		BOOL override;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } mapNotify;
	    struct {
		CARD32 pad00;
		CARD32 parent;
		CARD32 window;
	    } mapRequest;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		CARD32 parent;
		INT16 x;
		INT16 y;
		BOOL override;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } reparent;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		CARD32 aboveSibling;
		INT16 x;
		INT16 y;
		CARD16 width;
		CARD16 height;
		CARD16 borderWidth;
		BOOL override;
		BYTE bpad;
	    } configureNotify;
	    struct {
		CARD32 pad00;
		CARD32 parent;
		CARD32 window;
		CARD32 sibling;
		INT16 x;
		INT16 y;
		CARD16 width;
		CARD16 height;
		CARD16 borderWidth;
		CARD16 valueMask;
		CARD32 pad1;
	    } configureRequest;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		INT16 x;
		INT16 y;
		CARD32 pad1;
		CARD32 pad2;
		CARD32 pad3;
		CARD32 pad4;
	    } gravity;
	    struct {
		CARD32 pad00;
		CARD32 window;
		CARD16 width;
		CARD16 height;
	    } resizeRequest;
	    struct {
		CARD32 pad00;
		CARD32 event;
		CARD32 window;
		CARD32 parent;
		BYTE place;
		BYTE pad1;
		BYTE pad2;
		BYTE pad3;
	    } circulate;
	    struct {
		CARD32 pad00;
		CARD32 window;
		CARD32 atom;
		CARD32 time;
		BYTE state;
		BYTE pad1;
		CARD16 pad2;
	    } property;
	    struct {
		CARD32 pad00;
		CARD32 time;
		CARD32 window;
		CARD32 atom;
	    } selectionClear;
	    struct {
		CARD32 pad00;
		CARD32 time;
		CARD32 owner;
		CARD32 requestor;
		CARD32 selection;
		CARD32 target;
		CARD32 property;
	    } selectionRequest;
	    struct {
		CARD32 pad00;
		CARD32 time;
		CARD32 requestor;
		CARD32 selection;
		CARD32 target;
		CARD32 property;
	    } selectionNotify;
	    struct {
		CARD32 pad00;
		CARD32 window;
		CARD32 colormap;
		BOOL c_new;
		BYTE state;
		BYTE pad1;
		BYTE pad2;
	    } colormap;
	    struct {
		CARD32 pad00;
		CARD8 request;
		CARD8 firstKeyCode;
		CARD8 count;
		BYTE pad1;
	    } mappingNotify;
	    struct {
		CARD32 pad00;
		CARD32 window;
		union {
		    struct {
			CARD32 type;
			INT32 longs0;
			INT32 longs1;
			INT32 longs2;
			INT32 longs3;
			INT32 longs4;
		    } l;
		    struct {
			CARD32 type;
			INT16 shorts0;
			INT16 shorts1;
			INT16 shorts2;
			INT16 shorts3;
			INT16 shorts4;
			INT16 shorts5;
			INT16 shorts6;
			INT16 shorts7;
			INT16 shorts8;
			INT16 shorts9;
		    } s;
		    struct {
			CARD32 type;
			INT8 bytes[20];
		    } b;
		} u;
	    } clientMessage;
	} u;
    };


    struct _xQueryFontReply {
	BYTE type;
	BYTE pad1;
	CARD16 sequenceNumber;
	CARD32 length;
	xCharInfo minBounds;
	CARD32 walign1;
	xCharInfo maxBounds;
	CARD32 walign2;
	CARD16 minCharOrByte2;
	CARD16 maxCharOrByte2;
	CARD16 defaultChar;
	CARD16 nFontProps;
	CARD8 drawDirection;
	CARD8 minByte1;
	CARD8 maxByte1;
	BOOL allCharsExist;
	INT16 fontAscent;
	INT16 fontDescent;
	CARD32 nCharInfos;
    };


    struct _xReq {
	CARD8 reqType;
	CARD8 data;
	CARD16 length;
    };


    struct _FillPolyReq {
	CARD8 reqType;
	BYTE pad;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
	BYTE shape;
	BYTE coordMode;
	CARD16 pad1;
    };


    struct _PutImageReq {
	CARD8 reqType;
	CARD8 format;
	CARD16 length;
	CARD32 drawable;
	CARD32 gc;
	CARD16 width;
	CARD16 height;
	INT16 dstX;
	INT16 dstY;
	CARD8 leftPad;
	CARD8 depth;
	CARD16 pad;
    };


    typedef union {
	xGenericReply generic;
	xGetGeometryReply geom;
	xQueryTreeReply tree;
	xInternAtomReply atom;
	xGetAtomNameReply atomName;
	xGetPropertyReply property;
	xListPropertiesReply listProperties;
	xGetSelectionOwnerReply selection;
	xGrabPointerReply grabPointer;
	xGrabKeyboardReply grabKeyboard;
	xQueryPointerReply pointer;
	xGetMotionEventsReply motionEvents;
	xTranslateCoordsReply coords;
	xGetInputFocusReply inputFocus;
	xQueryTextExtentsReply textExtents;
	xListFontsReply fonts;
	xGetFontPathReply fontPath;
	xGetImageReply image;
	xListInstalledColormapsReply colormaps;
	xAllocColorReply allocColor;
	xAllocNamedColorReply allocNamedColor;
	xAllocColorCellsReply colorCells;
	xAllocColorPlanesReply colorPlanes;
	xQueryColorsReply colors;
	xLookupColorReply lookupColor;
	xQueryBestSizeReply bestSize;
	xQueryExtensionReply extension;
	xListExtensionsReply extensions;
	xSetModifierMappingReply setModifierMapping;
	xGetModifierMappingReply getModifierMapping;
	xSetPointerMappingReply setPointerMapping;
	xGetKeyboardMappingReply getKeyboardMapping;
	xGetPointerMappingReply getPointerMapping;
	xGetPointerControlReply pointerControl;
	xGetScreenSaverReply screenSaver;
	xListHostsReply hosts;
	xError error;
	xEvent event;
    } xReply;

    typedef struct {
	CARD8 reqType;
	BOOL propagate;
	CARD16 length;
	CARD32 destination;
	CARD32 eventMask;
	xEvent event;
    } xSendEventReq;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
