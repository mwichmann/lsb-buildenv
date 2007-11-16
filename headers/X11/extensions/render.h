#ifndef _X11_EXTENSIONS_RENDER_H_
#define _X11_EXTENSIONS_RENDER_H_


#ifdef __cplusplus
extern "C" {
#endif



#define FilterBest	"best"
#define FilterBilinear	"bilinear"
#define FilterConvolution	"convolution"
#define FilterFast	"fast"
#define FilterGood	"good"
#define FilterNearest	"nearest"
#define RENDER_NAME	"RENDER"
#define CPRepeat	(1 << 0)
#define CPAlphaMap	(1 << 1)
#define CPPolyMode	(1 << 10)
#define CPDither	(1 << 11)
#define CPComponentAlpha	(1 << 12)
#define CPAlphaXOrigin	(1 << 2)
#define CPAlphaYOrigin	(1 << 3)
#define CPClipXOrigin	(1 << 4)
#define CPClipYOrigin	(1 << 5)
#define CPClipMask	(1 << 6)
#define CPGraphicsExposure	(1 << 7)
#define CPSubwindowMode	(1 << 8)
#define CPPolyEdge	(1 << 9)
#define RenderNumberErrors	(BadGlyph+1)
#define RenderNumberRequests	(X_RenderCreateConicalGradient+1)
#define FilterAliasNone	-1
#define BadPictFormat	0
#define PictOpClear	0
#define PictOpMinimum	0
#define PictTypeIndexed	0
#define PolyEdgeSharp	0
#define PolyModePrecise	0
#define RENDER_MAJOR	0
#define RepeatNone	0
#define SubPixelUnknown	0
#define X_RenderQueryVersion	0
#define PictOpDisjointClear	0x10
#define PictOpDisjointMinimum	0x10
#define PictOpDisjointSrc	0x11
#define PictOpDisjointDst	0x12
#define PictOpDisjointOver	0x13
#define PictOpDisjointOverReverse	0x14
#define PictOpDisjointIn	0x15
#define PictOpDisjointInReverse	0x16
#define PictOpDisjointOut	0x17
#define PictOpDisjointOutReverse	0x18
#define PictOpDisjointAtop	0x19
#define PictOpDisjointAtopReverse	0x1a
#define PictOpDisjointMaximum	0x1b
#define PictOpDisjointXor	0x1b
#define PictOpConjointClear	0x20
#define PictOpConjointMinimum	0x20
#define PictOpConjointSrc	0x21
#define PictOpConjointDst	0x22
#define PictOpConjointOver	0x23
#define PictOpConjointOverReverse	0x24
#define PictOpConjointIn	0x25
#define PictOpConjointInReverse	0x26
#define PictOpConjointOut	0x27
#define PictOpConjointOutReverse	0x28
#define PictOpConjointAtop	0x29
#define PictOpConjointAtopReverse	0x2a
#define PictOpConjointMaximum	0x2b
#define PictOpConjointXor	0x2b
#define BadPicture	1
#define PictOpSrc	1
#define PictTypeDirect	1
#define PolyEdgeSmooth	1
#define PolyModeImprecise	1
#define RepeatNormal	1
#define SubPixelHorizontalRGB	1
#define X_RenderQueryPictFormats	1
#define PictOpAtopReverse	10
#define RENDER_MINOR	10
#define X_RenderTrapezoids	10
#define PictOpXor	11
#define X_RenderTriangles	11
#define CPLastBit	12
#define PictOpAdd	12
#define X_RenderTriStrip	12
#define PictOpMaximum	13
#define PictOpSaturate	13
#define X_RenderTriFan	13
#define X_RenderColorTrapezoids	14
#define X_RenderColorTriangles	15
#define X_RenderCreateGlyphSet	17
#define X_RenderReferenceGlyphSet	18
#define X_RenderFreeGlyphSet	19
#define BadPictOp	2
#define PictOpDst	2
#define RepeatPad	2
#define SubPixelHorizontalBGR	2
#define X_RenderQueryPictIndexValues	2
#define X_RenderAddGlyphs	20
#define X_RenderAddGlyphsFromPicture	21
#define X_RenderFreeGlyphs	22
#define X_RenderCompositeGlyphs8	23
#define X_RenderCompositeGlyphs16	24
#define X_RenderCompositeGlyphs32	25
#define X_RenderFillRectangles	26
#define X_RenderCreateCursor	27
#define X_RenderSetPictureTransform	28
#define X_RenderQueryFilters	29
#define BadGlyphSet	3
#define PictOpOver	3
#define RepeatReflect	3
#define SubPixelVerticalRGB	3
#define X_RenderQueryDithers	3
#define X_RenderSetPictureFilter	30
#define X_RenderCreateAnimCursor	31
#define X_RenderAddTraps	32
#define X_RenderCreateSolidFill	33
#define X_RenderCreateLinearGradient	34
#define X_RenderCreateRadialGradient	35
#define X_RenderCreateConicalGradient	36
#define BadGlyph	4
#define PictOpOverReverse	4
#define SubPixelVerticalBGR	4
#define X_RenderCreatePicture	4
#define PictOpIn	5
#define SubPixelNone	5
#define X_RenderChangePicture	5
#define PictOpInReverse	6
#define X_RenderSetPictureClipRectangles	6
#define PictOpOut	7
#define X_RenderFreePicture	7
#define PictOpOutReverse	8
#define X_RenderComposite	8
#define PictOpAtop	9
#define X_RenderScale	9


    typedef long unsigned int Picture;


#ifdef __cplusplus
}
#endif
#endif
