#if (__LSB_VERSION__ >= 10 )
#ifndef _GL_GL_H_
#define _GL_GL_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Datatypes*/
#if __LSB_VERSION__ >= 10
    typedef unsigned int GLenum;

    typedef unsigned int GLbitfield;

    typedef int GLsizei;

    typedef double GLclampd;

#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
    typedef unsigned char GLboolean;

    typedef void GLvoid;

    typedef char GLbyte;

    typedef short GLshort;

    typedef int GLint;

    typedef unsigned char GLubyte;

    typedef unsigned short GLushort;

    typedef unsigned int GLuint;

    typedef float GLfloat;

    typedef float GLclampf;

    typedef double GLdouble;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Data types*/
#if __LSB_VERSION__ >= 10
#define GL_BYTE	0x1400
#define GL_UNSIGNED_BYTE	0x1401
#define GL_SHORT	0x1402
#define GL_UNSIGNED_SHORT	0x1403
#define GL_INT	0x1404
#define GL_UNSIGNED_INT	0x1405
#define GL_FLOAT	0x1406
#define GL_2_BYTES	0x1407
#define GL_3_BYTES	0x1408
#define GL_4_BYTES	0x1409
#define GL_DOUBLE	0x140A
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Primitives*/
#if __LSB_VERSION__ >= 10
#define GL_POINTS	0x0000
#define GL_LINES	0x0001
#define GL_LINE_LOOP	0x0002
#define GL_LINE_STRIP	0x0003
#define GL_TRIANGLES	0x0004
#define GL_TRIANGLE_STRIP	0x0005
#define GL_TRIANGLE_FAN	0x0006
#define GL_QUADS	0x0007
#define GL_QUAD_STRIP	0x0008
#define GL_POLYGON	0x0009
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Vertex Arrays*/
#if __LSB_VERSION__ >= 10
#define GL_V2F	0x2A20
#define GL_V3F	0x2A21
#define GL_C4UB_V2F	0x2A22
#define GL_C4UB_V3F	0x2A23
#define GL_C3F_V3F	0x2A24
#define GL_N3F_V3F	0x2A25
#define GL_C4F_N3F_V3F	0x2A26
#define GL_T2F_V3F	0x2A27
#define GL_T4F_V4F	0x2A28
#define GL_T2F_C4UB_V3F	0x2A29
#define GL_T2F_C3F_V3F	0x2A2A
#define GL_T2F_N3F_V3F	0x2A2B
#define GL_T2F_C4F_N3F_V3F	0x2A2C
#define GL_T4F_C4F_N3F_V4F	0x2A2D
#define GL_VERTEX_ARRAY	0x8074
#define GL_NORMAL_ARRAY	0x8075
#define GL_COLOR_ARRAY	0x8076
#define GL_INDEX_ARRAY	0x8077
#define GL_TEXTURE_COORD_ARRAY	0x8078
#define GL_EDGE_FLAG_ARRAY	0x8079
#define GL_VERTEX_ARRAY_SIZE	0x807A
#define GL_VERTEX_ARRAY_TYPE	0x807B
#define GL_VERTEX_ARRAY_STRIDE	0x807C
#define GL_NORMAL_ARRAY_TYPE	0x807E
#define GL_NORMAL_ARRAY_STRIDE	0x807F
#define GL_COLOR_ARRAY_SIZE	0x8081
#define GL_COLOR_ARRAY_TYPE	0x8082
#define GL_COLOR_ARRAY_STRIDE	0x8083
#define GL_INDEX_ARRAY_TYPE	0x8085
#define GL_INDEX_ARRAY_STRIDE	0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE	0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE	0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE	0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE	0x808C
#define GL_VERTEX_ARRAY_POINTER	0x808E
#define GL_NORMAL_ARRAY_POINTER	0x808F
#define GL_COLOR_ARRAY_POINTER	0x8090
#define GL_INDEX_ARRAY_POINTER	0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER	0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER	0x8093
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Matrix Mode*/
#if __LSB_VERSION__ >= 10
#define GL_MATRIX_MODE	0x0BA0
#define GL_MODELVIEW	0x1700
#define GL_PROJECTION	0x1701
#define GL_TEXTURE	0x1702
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Points*/
#if __LSB_VERSION__ >= 10
#define GL_POINT_SMOOTH	0x0B10
#define GL_POINT_SIZE	0x0B11
#define GL_POINT_SIZE_RANGE	0x0B12
#define GL_POINT_SIZE_GRANULARITY	0x0B13
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Lines*/
#if __LSB_VERSION__ >= 10
#define GL_LINE_SMOOTH	0x0B20
#define GL_LINE_WIDTH	0x0B21
#define GL_LINE_WIDTH_RANGE	0x0B22
#define GL_LINE_WIDTH_GRANULARITY	0x0B23
#define GL_LINE_STIPPLE	0x0B24
#define GL_LINE_STIPPLE_PATTERN	0x0B25
#define GL_LINE_STIPPLE_REPEAT	0x0B26
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Polygons*/
#if __LSB_VERSION__ >= 10
#define GL_FRONT	0x0404
#define GL_BACK	0x0405
#define GL_CW	0x0900
#define GL_CCW	0x0901
#define GL_POLYGON_MODE	0x0B40
#define GL_POLYGON_SMOOTH	0x0B41
#define GL_POLYGON_STIPPLE	0x0B42
#define GL_EDGE_FLAG	0x0B43
#define GL_CULL_FACE	0x0B44
#define GL_CULL_FACE_MODE	0x0B45
#define GL_FRONT_FACE	0x0B46
#define GL_POINT	0x1B00
#define GL_LINE	0x1B01
#define GL_FILL	0x1B02
#define GL_POLYGON_OFFSET_UNITS	0x2A00
#define GL_POLYGON_OFFSET_POINT	0x2A01
#define GL_POLYGON_OFFSET_LINE	0x2A02
#define GL_POLYGON_OFFSET_FILL	0x8037
#define GL_POLYGON_OFFSET_FACTOR	0x8038
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Display Lists*/
#if __LSB_VERSION__ >= 10
#define GL_LIST_MODE	0x0B30
#define GL_LIST_BASE	0x0B32
#define GL_LIST_INDEX	0x0B33
#define GL_COMPILE	0x1300
#define GL_COMPILE_AND_EXECUTE	0x1301
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Depth buffer*/
#if __LSB_VERSION__ >= 10
#define GL_NEVER	0x0200
#define GL_LESS	0x0201
#define GL_EQUAL	0x0202
#define GL_LEQUAL	0x0203
#define GL_GREATER	0x0204
#define GL_NOTEQUAL	0x0205
#define GL_GEQUAL	0x0206
#define GL_ALWAYS	0x0207
#define GL_DEPTH_RANGE	0x0B70
#define GL_DEPTH_TEST	0x0B71
#define GL_DEPTH_WRITEMASK	0x0B72
#define GL_DEPTH_CLEAR_VALUE	0x0B73
#define GL_DEPTH_FUNC	0x0B74
#define GL_DEPTH_BITS	0x0D56
#define GL_DEPTH_COMPONENT	0x1902
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Lighting*/
#if __LSB_VERSION__ >= 10
#define GL_FRONT_AND_BACK	0x0408
#define GL_LIGHTING	0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER	0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE	0x0B52
#define GL_LIGHT_MODEL_AMBIENT	0x0B53
#define GL_SHADE_MODEL	0x0B54
#define GL_COLOR_MATERIAL_FACE	0x0B55
#define GL_COLOR_MATERIAL_PARAMETER	0x0B56
#define GL_COLOR_MATERIAL	0x0B57
#define GL_NORMALIZE	0x0BA1
#define GL_AMBIENT	0x1200
#define GL_DIFFUSE	0x1201
#define GL_SPECULAR	0x1202
#define GL_POSITION	0x1203
#define GL_SPOT_DIRECTION	0x1204
#define GL_SPOT_EXPONENT	0x1205
#define GL_SPOT_CUTOFF	0x1206
#define GL_CONSTANT_ATTENUATION	0x1207
#define GL_LINEAR_ATTENUATION	0x1208
#define GL_QUADRATIC_ATTENUATION	0x1209
#define GL_EMISSION	0x1600
#define GL_SHININESS	0x1601
#define GL_AMBIENT_AND_DIFFUSE	0x1602
#define GL_COLOR_INDEXES	0x1603
#define GL_FLAT	0x1D00
#define GL_SMOOTH	0x1D01
#define GL_LIGHT0	0x4000
#define GL_LIGHT1	0x4001
#define GL_LIGHT2	0x4002
#define GL_LIGHT3	0x4003
#define GL_LIGHT4	0x4004
#define GL_LIGHT5	0x4005
#define GL_LIGHT6	0x4006
#define GL_LIGHT7	0x4007
#endif				/* __LSB_VERSION__ >= 1.0 */




/* User clipping planes*/
#if __LSB_VERSION__ >= 10
#define GL_CLIP_PLANE0	0x3000
#define GL_CLIP_PLANE1	0x3001
#define GL_CLIP_PLANE2	0x3002
#define GL_CLIP_PLANE3	0x3003
#define GL_CLIP_PLANE4	0x3004
#define GL_CLIP_PLANE5	0x3005
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Accumulation buffer*/
#if __LSB_VERSION__ >= 10
#define GL_ACCUM	0x0100
#define GL_LOAD	0x0101
#define GL_RETURN	0x0102
#define GL_MULT	0x0103
#define GL_ADD	0x0104
#define GL_ACCUM_CLEAR_VALUE	0x0B80
#define GL_ACCUM_RED_BITS	0x0D58
#define GL_ACCUM_GREEN_BITS	0x0D59
#define GL_ACCUM_BLUE_BITS	0x0D5A
#define GL_ACCUM_ALPHA_BITS	0x0D5B
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Alpha testing*/
#if __LSB_VERSION__ >= 10
#define GL_ALPHA_TEST	0x0BC0
#define GL_ALPHA_TEST_FUNC	0x0BC1
#define GL_ALPHA_TEST_REF	0x0BC2
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Blending*/
#if __LSB_VERSION__ >= 10
#define GL_ZERO	0x0
#define GL_SRC_COLOR	0x0300
#define GL_ONE_MINUS_SRC_COLOR	0x0301
#define GL_SRC_ALPHA	0x0302
#define GL_ONE_MINUS_SRC_ALPHA	0x0303
#define GL_DST_ALPHA	0x0304
#define GL_ONE_MINUS_DST_ALPHA	0x0305
#define GL_DST_COLOR	0x0306
#define GL_ONE_MINUS_DST_COLOR	0x0307
#define GL_SRC_ALPHA_SATURATE	0x0308
#define GL_BLEND_DST	0x0BE0
#define GL_BLEND_SRC	0x0BE1
#define GL_BLEND	0x0BE2
#define GL_ONE	0x1
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Render Mode*/
#if __LSB_VERSION__ >= 10
#define GL_RENDER	0x1C00
#define GL_FEEDBACK	0x1C01
#define GL_SELECT	0x1C02
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Feedback*/
#if __LSB_VERSION__ >= 10
#define GL_2D	0x0600
#define GL_3D	0x0601
#define GL_3D_COLOR	0x0602
#define GL_3D_COLOR_TEXTURE	0x0603
#define GL_4D_COLOR_TEXTURE	0x0604
#define GL_PASS_THROUGH_TOKEN	0x0700
#define GL_POINT_TOKEN	0x0701
#define GL_LINE_TOKEN	0x0702
#define GL_POLYGON_TOKEN	0x0703
#define GL_BITMAP_TOKEN	0x0704
#define GL_DRAW_PIXEL_TOKEN	0x0705
#define GL_COPY_PIXEL_TOKEN	0x0706
#define GL_LINE_RESET_TOKEN	0x0707
#define GL_FEEDBACK_BUFFER_POINTER	0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE	0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE	0x0DF2
#define GL_ALPHA_BLEND_EQUATION_ATI	0x883D
#define GL_ATI_blend_equation_separate	1
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Boolean values*/
#if __LSB_VERSION__ >= 10
#define GL_FALSE	0x0
#define GL_TRUE	0x1
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Selection*/
#if __LSB_VERSION__ >= 10
#define GL_SELECTION_BUFFER_POINTER	0x0DF3
#define GL_SELECTION_BUFFER_SIZE	0x0DF4
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Fog*/
#if __LSB_VERSION__ >= 10
#define GL_EXP	0x0800
#define GL_EXP2	0x0801
#define GL_FOG	0x0B60
#define GL_FOG_INDEX	0x0B61
#define GL_FOG_DENSITY	0x0B62
#define GL_FOG_START	0x0B63
#define GL_FOG_END	0x0B64
#define GL_FOG_MODE	0x0B65
#define GL_FOG_COLOR	0x0B66
#define GL_LINEAR	0x2601
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Logic Ops*/
#if __LSB_VERSION__ >= 10
#define GL_LOGIC_OP_MODE	0x0BF0
#define GL_INDEX_LOGIC_OP	0x0BF1
#define GL_LOGIC_OP	0x0BF1
#define GL_COLOR_LOGIC_OP	0x0BF2
#define GL_CLEAR	0x1500
#define GL_AND	0x1501
#define GL_AND_REVERSE	0x1502
#define GL_COPY	0x1503
#define GL_AND_INVERTED	0x1504
#define GL_NOOP	0x1505
#define GL_XOR	0x1506
#define GL_OR	0x1507
#define GL_NOR	0x1508
#define GL_EQUIV	0x1509
#define GL_INVERT	0x150A
#define GL_OR_REVERSE	0x150B
#define GL_COPY_INVERTED	0x150C
#define GL_OR_INVERTED	0x150D
#define GL_NAND	0x150E
#define GL_SET	0x150F
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Stencil*/
#if __LSB_VERSION__ >= 10
#define GL_STENCIL_TEST	0x0B90
#define GL_STENCIL_CLEAR_VALUE	0x0B91
#define GL_STENCIL_FUNC	0x0B92
#define GL_STENCIL_VALUE_MASK	0x0B93
#define GL_STENCIL_FAIL	0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL	0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS	0x0B96
#define GL_STENCIL_REF	0x0B97
#define GL_STENCIL_WRITEMASK	0x0B98
#define GL_STENCIL_BITS	0x0D57
#define GL_STENCIL_INDEX	0x1901
#define GL_KEEP	0x1E00
#define GL_REPLACE	0x1E01
#define GL_INCR	0x1E02
#define GL_DECR	0x1E03
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Buffers, Pixel Drawing/Reading*/
#if __LSB_VERSION__ >= 10
#define GL_NONE	0x0
#define GL_FRONT_LEFT	0x0400
#define GL_FRONT_RIGHT	0x0401
#define GL_BACK_LEFT	0x0402
#define GL_BACK_RIGHT	0x0403
#define GL_LEFT	0x0406
#define GL_RIGHT	0x0407
#define GL_AUX0	0x0409
#define GL_AUX1	0x040A
#define GL_AUX2	0x040B
#define GL_AUX3	0x040C
#define GL_DITHER	0x0BD0
#define GL_AUX_BUFFERS	0x0C00
#define GL_DRAW_BUFFER	0x0C01
#define GL_READ_BUFFER	0x0C02
#define GL_DOUBLEBUFFER	0x0C32
#define GL_STEREO	0x0C33
#define GL_SUBPIXEL_BITS	0x0D50
#define GL_INDEX_BITS	0x0D51
#define GL_RED_BITS	0x0D52
#define GL_GREEN_BITS	0x0D53
#define GL_BLUE_BITS	0x0D54
#define GL_ALPHA_BITS	0x0D55
#define GL_COLOR	0x1800
#define GL_DEPTH	0x1801
#define GL_STENCIL	0x1802
#define GL_COLOR_INDEX	0x1900
#define GL_RED	0x1903
#define GL_GREEN	0x1904
#define GL_BLUE	0x1905
#define GL_ALPHA	0x1906
#define GL_RGB	0x1907
#define GL_RGBA	0x1908
#define GL_LUMINANCE	0x1909
#define GL_LUMINANCE_ALPHA	0x190A
#define GL_BITMAP	0x1A00
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Implementation limits*/
#if __LSB_VERSION__ >= 10
#define GL_MAX_LIST_NESTING	0x0B31
#define GL_MAX_EVAL_ORDER	0x0D30
#define GL_MAX_LIGHTS	0x0D31
#define GL_MAX_CLIP_PLANES	0x0D32
#define GL_MAX_TEXTURE_SIZE	0x0D33
#define GL_MAX_PIXEL_MAP_TABLE	0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH	0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH	0x0D36
#define GL_MAX_NAME_STACK_DEPTH	0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH	0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH	0x0D39
#define GL_MAX_VIEWPORT_DIMS	0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH	0x0D3B
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Gets*/
#if __LSB_VERSION__ >= 10
#define GL_CURRENT_COLOR	0x0B00
#define GL_CURRENT_INDEX	0x0B01
#define GL_CURRENT_NORMAL	0x0B02
#define GL_CURRENT_TEXTURE_COORDS	0x0B03
#define GL_CURRENT_RASTER_COLOR	0x0B04
#define GL_CURRENT_RASTER_INDEX	0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS	0x0B06
#define GL_CURRENT_RASTER_POSITION	0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID	0x0B08
#define GL_CURRENT_RASTER_DISTANCE	0x0B09
#define GL_VIEWPORT	0x0BA2
#define GL_MODELVIEW_STACK_DEPTH	0x0BA3
#define GL_PROJECTION_STACK_DEPTH	0x0BA4
#define GL_TEXTURE_STACK_DEPTH	0x0BA5
#define GL_MODELVIEW_MATRIX	0x0BA6
#define GL_PROJECTION_MATRIX	0x0BA7
#define GL_TEXTURE_MATRIX	0x0BA8
#define GL_ATTRIB_STACK_DEPTH	0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH	0x0BB1
#define GL_INDEX_CLEAR_VALUE	0x0C20
#define GL_INDEX_WRITEMASK	0x0C21
#define GL_COLOR_CLEAR_VALUE	0x0C22
#define GL_COLOR_WRITEMASK	0x0C23
#define GL_INDEX_MODE	0x0C30
#define GL_RGBA_MODE	0x0C31
#define GL_RENDER_MODE	0x0C40
#define GL_NAME_STACK_DEPTH	0x0D70
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Evaluators*/
#if __LSB_VERSION__ >= 10
#define GL_COEFF	0x0A00
#define GL_ORDER	0x0A01
#define GL_DOMAIN	0x0A02
#define GL_AUTO_NORMAL	0x0D80
#define GL_MAP1_COLOR_4	0x0D90
#define GL_MAP1_INDEX	0x0D91
#define GL_MAP1_NORMAL	0x0D92
#define GL_MAP1_TEXTURE_COORD_1	0x0D93
#define GL_MAP1_TEXTURE_COORD_2	0x0D94
#define GL_MAP1_TEXTURE_COORD_3	0x0D95
#define GL_MAP1_TEXTURE_COORD_4	0x0D96
#define GL_MAP1_VERTEX_3	0x0D97
#define GL_MAP1_VERTEX_4	0x0D98
#define GL_MAP2_COLOR_4	0x0DB0
#define GL_MAP2_INDEX	0x0DB1
#define GL_MAP2_NORMAL	0x0DB2
#define GL_MAP2_TEXTURE_COORD_1	0x0DB3
#define GL_MAP2_TEXTURE_COORD_2	0x0DB4
#define GL_MAP2_TEXTURE_COORD_3	0x0DB5
#define GL_MAP2_TEXTURE_COORD_4	0x0DB6
#define GL_MAP2_VERTEX_3	0x0DB7
#define GL_MAP2_VERTEX_4	0x0DB8
#define GL_MAP1_GRID_DOMAIN	0x0DD0
#define GL_MAP1_GRID_SEGMENTS	0x0DD1
#define GL_MAP2_GRID_DOMAIN	0x0DD2
#define GL_MAP2_GRID_SEGMENTS	0x0DD3
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Hints*/
#if __LSB_VERSION__ >= 10
#define GL_PERSPECTIVE_CORRECTION_HINT	0x0C50
#define GL_POINT_SMOOTH_HINT	0x0C51
#define GL_LINE_SMOOTH_HINT	0x0C52
#define GL_POLYGON_SMOOTH_HINT	0x0C53
#define GL_FOG_HINT	0x0C54
#define GL_DONT_CARE	0x1100
#define GL_FASTEST	0x1101
#define GL_NICEST	0x1102
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Scissor box*/
#if __LSB_VERSION__ >= 10
#define GL_SCISSOR_BOX	0x0C10
#define GL_SCISSOR_TEST	0x0C11
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Pixel Mode / Transfer*/
#if __LSB_VERSION__ >= 10
#define GL_PIXEL_MAP_I_TO_I	0x0C70
#define GL_PIXEL_MAP_S_TO_S	0x0C71
#define GL_PIXEL_MAP_I_TO_R	0x0C72
#define GL_PIXEL_MAP_I_TO_G	0x0C73
#define GL_PIXEL_MAP_I_TO_B	0x0C74
#define GL_PIXEL_MAP_I_TO_A	0x0C75
#define GL_PIXEL_MAP_R_TO_R	0x0C76
#define GL_PIXEL_MAP_G_TO_G	0x0C77
#define GL_PIXEL_MAP_B_TO_B	0x0C78
#define GL_PIXEL_MAP_A_TO_A	0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE	0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE	0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE	0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE	0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE	0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE	0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE	0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE	0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE	0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE	0x0CB9
#define GL_UNPACK_SWAP_BYTES	0x0CF0
#define GL_UNPACK_LSB_FIRST	0x0CF1
#define GL_UNPACK_ROW_LENGTH	0x0CF2
#define GL_UNPACK_SKIP_ROWS	0x0CF3
#define GL_UNPACK_SKIP_PIXELS	0x0CF4
#define GL_UNPACK_ALIGNMENT	0x0CF5
#define GL_PACK_SWAP_BYTES	0x0D00
#define GL_PACK_LSB_FIRST	0x0D01
#define GL_PACK_ROW_LENGTH	0x0D02
#define GL_PACK_SKIP_ROWS	0x0D03
#define GL_PACK_SKIP_PIXELS	0x0D04
#define GL_PACK_ALIGNMENT	0x0D05
#define GL_MAP_COLOR	0x0D10
#define GL_MAP_STENCIL	0x0D11
#define GL_INDEX_SHIFT	0x0D12
#define GL_INDEX_OFFSET	0x0D13
#define GL_RED_SCALE	0x0D14
#define GL_RED_BIAS	0x0D15
#define GL_ZOOM_X	0x0D16
#define GL_ZOOM_Y	0x0D17
#define GL_GREEN_SCALE	0x0D18
#define GL_GREEN_BIAS	0x0D19
#define GL_BLUE_SCALE	0x0D1A
#define GL_BLUE_BIAS	0x0D1B
#define GL_ALPHA_SCALE	0x0D1C
#define GL_ALPHA_BIAS	0x0D1D
#define GL_DEPTH_SCALE	0x0D1E
#define GL_DEPTH_BIAS	0x0D1F
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Texture mapping*/
#if __LSB_VERSION__ >= 10
#define GL_TEXTURE_GEN_S	0x0C60
#define GL_TEXTURE_GEN_T	0x0C61
#define GL_TEXTURE_GEN_R	0x0C62
#define GL_TEXTURE_GEN_Q	0x0C63
#define GL_TEXTURE_1D	0x0DE0
#define GL_TEXTURE_2D	0x0DE1
#define GL_TEXTURE_WIDTH	0x1000
#define GL_TEXTURE_HEIGHT	0x1001
#define GL_TEXTURE_COMPONENTS	0x1003
#define GL_TEXTURE_BORDER_COLOR	0x1004
#define GL_TEXTURE_BORDER	0x1005
#define GL_S	0x2000
#define GL_T	0x2001
#define GL_R	0x2002
#define GL_Q	0x2003
#define GL_MODULATE	0x2100
#define GL_DECAL	0x2101
#define GL_TEXTURE_ENV_MODE	0x2200
#define GL_TEXTURE_ENV_COLOR	0x2201
#define GL_TEXTURE_ENV	0x2300
#define GL_EYE_LINEAR	0x2400
#define GL_OBJECT_LINEAR	0x2401
#define GL_SPHERE_MAP	0x2402
#define GL_TEXTURE_GEN_MODE	0x2500
#define GL_OBJECT_PLANE	0x2501
#define GL_EYE_PLANE	0x2502
#define GL_NEAREST	0x2600
#define GL_NEAREST_MIPMAP_NEAREST	0x2700
#define GL_LINEAR_MIPMAP_NEAREST	0x2701
#define GL_NEAREST_MIPMAP_LINEAR	0x2702
#define GL_LINEAR_MIPMAP_LINEAR	0x2703
#define GL_TEXTURE_MAG_FILTER	0x2800
#define GL_TEXTURE_MIN_FILTER	0x2801
#define GL_TEXTURE_WRAP_S	0x2802
#define GL_TEXTURE_WRAP_T	0x2803
#define GL_CLAMP	0x2900
#define GL_REPEAT	0x2901
#define GL_TEXTURE_RED_SIZE	0x805C
#define GL_TEXTURE_GREEN_SIZE	0x805D
#define GL_TEXTURE_BLUE_SIZE	0x805E
#define GL_TEXTURE_ALPHA_SIZE	0x805F
#define GL_TEXTURE_LUMINANCE_SIZE	0x8060
#define GL_TEXTURE_INTENSITY_SIZE	0x8061
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Utility*/
#if __LSB_VERSION__ >= 10
#define GL_VENDOR	0x1F00
#define GL_RENDERER	0x1F01
#define GL_VERSION	0x1F02
#define GL_EXTENSIONS	0x1F03
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Errors*/
#if __LSB_VERSION__ >= 10
#define GL_NO_ERROR	0x0
#define GL_INVALID_ENUM	0x0500
#define GL_INVALID_VALUE	0x0501
#define GL_INVALID_OPERATION	0x0502
#define GL_STACK_OVERFLOW	0x0503
#define GL_STACK_UNDERFLOW	0x0504
#define GL_OUT_OF_MEMORY	0x0505
#endif				/* __LSB_VERSION__ >= 1.0 */




/* glPush/PopAttrib bits*/
#if __LSB_VERSION__ >= 10
#define GL_CURRENT_BIT	0x00000001
#define GL_POINT_BIT	0x00000002
#define GL_LINE_BIT	0x00000004
#define GL_POLYGON_BIT	0x00000008
#define GL_POLYGON_STIPPLE_BIT	0x00000010
#define GL_PIXEL_MODE_BIT	0x00000020
#define GL_LIGHTING_BIT	0x00000040
#define GL_FOG_BIT	0x00000080
#define GL_DEPTH_BUFFER_BIT	0x00000100
#define GL_ACCUM_BUFFER_BIT	0x00000200
#define GL_STENCIL_BUFFER_BIT	0x00000400
#define GL_VIEWPORT_BIT	0x00000800
#define GL_TRANSFORM_BIT	0x00001000
#define GL_ENABLE_BIT	0x00002000
#define GL_COLOR_BUFFER_BIT	0x00004000
#define GL_HINT_BIT	0x00008000
#define GL_EVAL_BIT	0x00010000
#define GL_LIST_BIT	0x00020000
#define GL_TEXTURE_BIT	0x00040000
#define GL_SCISSOR_BIT	0x00080000
#define GL_ALL_ATTRIB_BITS	0x000FFFFF
#endif				/* __LSB_VERSION__ >= 1.0 */




/* OpenGL 1.1*/
#if __LSB_VERSION__ >= 10
#define GL_CLIENT_PIXEL_STORE_BIT	0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT	0x00000002
#define GL_TEXTURE_INTERNAL_FORMAT	0x1003
#define GL_R3_G3_B2	0x2A10
#define GL_ALPHA4	0x803B
#define GL_ALPHA8	0x803C
#define GL_ALPHA12	0x803D
#define GL_ALPHA16	0x803E
#define GL_LUMINANCE4	0x803F
#define GL_LUMINANCE8	0x8040
#define GL_LUMINANCE12	0x8041
#define GL_LUMINANCE16	0x8042
#define GL_LUMINANCE4_ALPHA4	0x8043
#define GL_LUMINANCE6_ALPHA2	0x8044
#define GL_LUMINANCE8_ALPHA8	0x8045
#define GL_LUMINANCE12_ALPHA4	0x8046
#define GL_LUMINANCE12_ALPHA12	0x8047
#define GL_LUMINANCE16_ALPHA16	0x8048
#define GL_INTENSITY	0x8049
#define GL_INTENSITY4	0x804A
#define GL_INTENSITY8	0x804B
#define GL_INTENSITY12	0x804C
#define GL_INTENSITY16	0x804D
#define GL_RGB4	0x804F
#define GL_RGB5	0x8050
#define GL_RGB8	0x8051
#define GL_RGB10	0x8052
#define GL_RGB12	0x8053
#define GL_RGB16	0x8054
#define GL_RGBA2	0x8055
#define GL_RGBA4	0x8056
#define GL_RGB5_A1	0x8057
#define GL_RGBA8	0x8058
#define GL_RGB10_A2	0x8059
#define GL_RGBA12	0x805A
#define GL_RGBA16	0x805B
#define GL_PROXY_TEXTURE_1D	0x8063
#define GL_PROXY_TEXTURE_2D	0x8064
#define GL_TEXTURE_PRIORITY	0x8066
#define GL_TEXTURE_RESIDENT	0x8067
#define GL_TEXTURE_BINDING_1D	0x8068
#define GL_TEXTURE_BINDING_2D	0x8069
#define GL_ALL_CLIENT_ATTRIB_BITS	0xFFFFFFFF
#define GL_CLIENT_ALL_ATTRIB_BITS	0xFFFFFFFF
#endif				/* __LSB_VERSION__ >= 1.0 */




/* OpenGL 1.2*/
#if __LSB_VERSION__ >= 10
#define GL_SMOOTH_POINT_SIZE_RANGE	0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY	0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE	0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY	0x0B23
#define GL_UNSIGNED_BYTE_3_3_2	0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4	0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1	0x8034
#define GL_UNSIGNED_INT_8_8_8_8	0x8035
#define GL_UNSIGNED_INT_10_10_10_2	0x8036
#define GL_RESCALE_NORMAL	0x803A
#define GL_TEXTURE_BINDING_3D	0x806A
#define GL_PACK_SKIP_IMAGES	0x806B
#define GL_PACK_IMAGE_HEIGHT	0x806C
#define GL_UNPACK_SKIP_IMAGES	0x806D
#define GL_UNPACK_IMAGE_HEIGHT	0x806E
#define GL_TEXTURE_3D	0x806F
#define GL_PROXY_TEXTURE_3D	0x8070
#define GL_TEXTURE_DEPTH	0x8071
#define GL_TEXTURE_WRAP_R	0x8072
#define GL_MAX_3D_TEXTURE_SIZE	0x8073
#define GL_BGR	0x80E0
#define GL_BGRA	0x80E1
#define GL_MAX_ELEMENTS_VERTICES	0x80E8
#define GL_MAX_ELEMENTS_INDICES	0x80E9
#define GL_CLAMP_TO_EDGE	0x812F
#define GL_TEXTURE_MIN_LOD	0x813A
#define GL_TEXTURE_MAX_LOD	0x813B
#define GL_TEXTURE_BASE_LEVEL	0x813C
#define GL_TEXTURE_MAX_LEVEL	0x813D
#define GL_LIGHT_MODEL_COLOR_CONTROL	0x81F8
#define GL_SINGLE_COLOR	0x81F9
#define GL_SEPARATE_SPECULAR_COLOR	0x81FA
#define GL_UNSIGNED_BYTE_2_3_3_REV	0x8362
#define GL_UNSIGNED_SHORT_5_6_5	0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV	0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV	0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV	0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV	0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV	0x8368
#define GL_ALIASED_POINT_SIZE_RANGE	0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE	0x846E
#endif				/* __LSB_VERSION__ >= 1.0 */




/* GL_ARB_imaging*/
#if __LSB_VERSION__ >= 10
#define GL_CONSTANT_COLOR	0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR	0x8002
#define GL_CONSTANT_ALPHA	0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA	0x8004
#define GL_BLEND_COLOR	0x8005
#define GL_FUNC_ADD	0x8006
#define GL_MIN	0x8007
#define GL_MAX	0x8008
#define GL_BLEND_EQUATION	0x8009
#define GL_FUNC_SUBTRACT	0x800A
#define GL_FUNC_REVERSE_SUBTRACT	0x800B
#define GL_CONVOLUTION_1D	0x8010
#define GL_CONVOLUTION_2D	0x8011
#define GL_SEPARABLE_2D	0x8012
#define GL_CONVOLUTION_BORDER_MODE	0x8013
#define GL_CONVOLUTION_FILTER_SCALE	0x8014
#define GL_CONVOLUTION_FILTER_BIAS	0x8015
#define GL_REDUCE	0x8016
#define GL_CONVOLUTION_FORMAT	0x8017
#define GL_CONVOLUTION_WIDTH	0x8018
#define GL_CONVOLUTION_HEIGHT	0x8019
#define GL_MAX_CONVOLUTION_WIDTH	0x801A
#define GL_MAX_CONVOLUTION_HEIGHT	0x801B
#define GL_POST_CONVOLUTION_RED_SCALE	0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE	0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE	0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE	0x801F
#define GL_POST_CONVOLUTION_RED_BIAS	0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS	0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS	0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS	0x8023
#define GL_HISTOGRAM	0x8024
#define GL_PROXY_HISTOGRAM	0x8025
#define GL_HISTOGRAM_WIDTH	0x8026
#define GL_HISTOGRAM_FORMAT	0x8027
#define GL_HISTOGRAM_RED_SIZE	0x8028
#define GL_HISTOGRAM_GREEN_SIZE	0x8029
#define GL_HISTOGRAM_BLUE_SIZE	0x802A
#define GL_HISTOGRAM_ALPHA_SIZE	0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE	0x802C
#define GL_HISTOGRAM_SINK	0x802D
#define GL_MINMAX	0x802E
#define GL_MINMAX_FORMAT	0x802F
#define GL_MINMAX_SINK	0x8030
#define GL_TABLE_TOO_LARGE	0x8031
#define GL_COLOR_MATRIX	0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH	0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH	0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE	0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE	0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE	0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE	0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS	0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS	0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS	0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS	0x80BB
#define GL_COLOR_TABLE	0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE	0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE	0x80D2
#define GL_PROXY_COLOR_TABLE	0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE	0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE	0x80D5
#define GL_COLOR_TABLE_SCALE	0x80D6
#define GL_COLOR_TABLE_BIAS	0x80D7
#define GL_COLOR_TABLE_FORMAT	0x80D8
#define GL_COLOR_TABLE_WIDTH	0x80D9
#define GL_COLOR_TABLE_RED_SIZE	0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE	0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE	0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE	0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE	0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE	0x80DF
#define GL_CONSTANT_BORDER	0x8151
#define GL_REPLICATE_BORDER	0x8153
#define GL_CONVOLUTION_BORDER_COLOR	0x8154
#endif				/* __LSB_VERSION__ >= 1.0 */




/* multitexture*/
#if __LSB_VERSION__ >= 10
#define GL_TEXTURE0	0x84C0
#define GL_TEXTURE1	0x84C1
#define GL_TEXTURE2	0x84C2
#define GL_TEXTURE3	0x84C3
#define GL_TEXTURE4	0x84C4
#define GL_TEXTURE5	0x84C5
#define GL_TEXTURE6	0x84C6
#define GL_TEXTURE7	0x84C7
#define GL_TEXTURE8	0x84C8
#define GL_TEXTURE9	0x84C9
#define GL_TEXTURE10	0x84CA
#define GL_TEXTURE11	0x84CB
#define GL_TEXTURE12	0x84CC
#define GL_TEXTURE13	0x84CD
#define GL_TEXTURE14	0x84CE
#define GL_TEXTURE15	0x84CF
#define GL_TEXTURE16	0x84D0
#define GL_TEXTURE17	0x84D1
#define GL_TEXTURE18	0x84D2
#define GL_TEXTURE19	0x84D3
#define GL_TEXTURE20	0x84D4
#define GL_TEXTURE21	0x84D5
#define GL_TEXTURE22	0x84D6
#define GL_TEXTURE23	0x84D7
#define GL_TEXTURE24	0x84D8
#define GL_TEXTURE25	0x84D9
#define GL_TEXTURE26	0x84DA
#define GL_TEXTURE27	0x84DB
#define GL_TEXTURE28	0x84DC
#define GL_TEXTURE29	0x84DD
#define GL_TEXTURE30	0x84DE
#define GL_TEXTURE31	0x84DF
#define GL_ACTIVE_TEXTURE	0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE	0x84E1
#define GL_MAX_TEXTURE_UNITS	0x84E2
#endif				/* __LSB_VERSION__ >= 1.0 */




/* texture_cube_map*/
#if __LSB_VERSION__ >= 10
#define GL_NORMAL_MAP	0x8511
#define GL_REFLECTION_MAP	0x8512
#define GL_TEXTURE_CUBE_MAP	0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP	0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X	0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X	0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y	0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y	0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z	0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z	0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP	0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE	0x851C
#endif				/* __LSB_VERSION__ >= 1.0 */




/* texture_compression*/
#if __LSB_VERSION__ >= 10
#define GL_COMPRESSED_ALPHA	0x84E9
#define GL_COMPRESSED_LUMINANCE	0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA	0x84EB
#define GL_COMPRESSED_INTENSITY	0x84EC
#define GL_COMPRESSED_RGB	0x84ED
#define GL_COMPRESSED_RGBA	0x84EE
#define GL_TEXTURE_COMPRESSION_HINT	0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE	0x86A0
#define GL_TEXTURE_COMPRESSED	0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS	0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS	0x86A3
#endif				/* __LSB_VERSION__ >= 1.0 */




/* multisample*/
#if __LSB_VERSION__ >= 10
#define GL_MULTISAMPLE_BIT	0x20000000
#define GL_MULTISAMPLE	0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE	0x809E
#define GL_SAMPLE_ALPHA_TO_ONE	0x809F
#define GL_SAMPLE_COVERAGE	0x80A0
#define GL_SAMPLE_BUFFERS	0x80A8
#define GL_SAMPLES	0x80A9
#define GL_SAMPLE_COVERAGE_VALUE	0x80AA
#define GL_SAMPLE_COVERAGE_INVERT	0x80AB
#endif				/* __LSB_VERSION__ >= 1.0 */




/* transpose_matrix*/
#if __LSB_VERSION__ >= 10
#define GL_TRANSPOSE_MODELVIEW_MATRIX	0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX	0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX	0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX	0x84E6
#endif				/* __LSB_VERSION__ >= 1.0 */




/* texture_env_combine*/
#if __LSB_VERSION__ >= 10
#define GL_SUBTRACT	0x84E7
#define GL_COMBINE	0x8570
#define GL_COMBINE_RGB	0x8571
#define GL_COMBINE_ALPHA	0x8572
#define GL_RGB_SCALE	0x8573
#define GL_ADD_SIGNED	0x8574
#define GL_INTERPOLATE	0x8575
#define GL_CONSTANT	0x8576
#define GL_PRIMARY_COLOR	0x8577
#define GL_PREVIOUS	0x8578
#define GL_SOURCE0_RGB	0x8580
#define GL_SOURCE1_RGB	0x8581
#define GL_SOURCE2_RGB	0x8582
#define GL_SOURCE0_ALPHA	0x8588
#define GL_SOURCE1_ALPHA	0x8589
#define GL_SOURCE2_ALPHA	0x858A
#define GL_OPERAND0_RGB	0x8590
#define GL_OPERAND1_RGB	0x8591
#define GL_OPERAND2_RGB	0x8592
#define GL_OPERAND0_ALPHA	0x8598
#define GL_OPERAND1_ALPHA	0x8599
#define GL_OPERAND2_ALPHA	0x859A
#endif				/* __LSB_VERSION__ >= 1.0 */




/* texture_env_dot3*/
#if __LSB_VERSION__ >= 10
#define GL_DOT3_RGB	0x86AE
#define GL_DOT3_RGBA	0x86AF
#endif				/* __LSB_VERSION__ >= 1.0 */




/* texture_border_clamp*/
#if __LSB_VERSION__ >= 10
#define GL_CLAMP_TO_BORDER	0x812D
#endif				/* __LSB_VERSION__ >= 1.0 */




/* GL_ARB_multitexture (ARB extension 1 and OpenGL 1.2.1)*/
#if __LSB_VERSION__ >= 10
#define GL_TEXTURE0_ARB	0x84C0
#define GL_TEXTURE1_ARB	0x84C1
#define GL_TEXTURE2_ARB	0x84C2
#define GL_TEXTURE3_ARB	0x84C3
#define GL_TEXTURE4_ARB	0x84C4
#define GL_TEXTURE5_ARB	0x84C5
#define GL_TEXTURE6_ARB	0x84C6
#define GL_TEXTURE7_ARB	0x84C7
#define GL_TEXTURE8_ARB	0x84C8
#define GL_TEXTURE9_ARB	0x84C9
#define GL_TEXTURE10_ARB	0x84CA
#define GL_TEXTURE11_ARB	0x84CB
#define GL_TEXTURE12_ARB	0x84CC
#define GL_TEXTURE13_ARB	0x84CD
#define GL_TEXTURE14_ARB	0x84CE
#define GL_TEXTURE15_ARB	0x84CF
#define GL_TEXTURE16_ARB	0x84D0
#define GL_TEXTURE17_ARB	0x84D1
#define GL_TEXTURE18_ARB	0x84D2
#define GL_TEXTURE19_ARB	0x84D3
#define GL_TEXTURE20_ARB	0x84D4
#define GL_TEXTURE21_ARB	0x84D5
#define GL_TEXTURE22_ARB	0x84D6
#define GL_TEXTURE23_ARB	0x84D7
#define GL_TEXTURE24_ARB	0x84D8
#define GL_TEXTURE25_ARB	0x84D9
#define GL_TEXTURE26_ARB	0x84DA
#define GL_TEXTURE27_ARB	0x84DB
#define GL_TEXTURE28_ARB	0x84DC
#define GL_TEXTURE29_ARB	0x84DD
#define GL_TEXTURE30_ARB	0x84DE
#define GL_TEXTURE31_ARB	0x84DF
#define GL_ACTIVE_TEXTURE_ARB	0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB	0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB	0x84E2
#define GL_ARB_multitexture	1
#endif				/* __LSB_VERSION__ >= 1.0 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void glAccum(GLenum, GLfloat);
    extern void glActiveTextureARB(GLenum);
    extern void glAlphaFunc(GLenum, GLclampf);
    extern GLboolean glAreTexturesResident(GLsizei, GLuint *, GLboolean *);
    extern void glArrayElement(GLint);
    extern void glBegin(GLenum);
    extern void glBindTexture(GLenum, GLuint);
    extern void glBitmap(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat,
			 GLfloat, const GLubyte *);
    extern void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf);
    extern void glBlendEquation(GLenum);
    extern void glBlendFunc(GLenum, GLenum);
    extern void glCallList(GLuint);
    extern void glCallLists(GLsizei, GLenum, GLvoid *);
    extern void glClear(GLbitfield);
    extern void glClearAccum(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf);
    extern void glClearDepth(GLclampd);
    extern void glClearIndex(GLfloat);
    extern void glClearStencil(GLint);
    extern void glClientActiveTextureARB(GLenum);
    extern void glClipPlane(GLenum, GLdouble *);
    extern void glColor3b(GLbyte, GLbyte, GLbyte);
    extern void glColor3bv(GLbyte *);
    extern void glColor3d(GLdouble, GLdouble, GLdouble);
    extern void glColor3dv(GLdouble *);
    extern void glColor3f(GLfloat, GLfloat, GLfloat);
    extern void glColor3fv(GLfloat *);
    extern void glColor3i(GLint, GLint, GLint);
    extern void glColor3iv(GLint *);
    extern void glColor3s(GLshort, GLshort, GLshort);
    extern void glColor3sv(GLshort *);
    extern void glColor3ub(GLubyte, GLubyte, GLubyte);
    extern void glColor3ubv(GLubyte *);
    extern void glColor3ui(GLuint, GLuint, GLuint);
    extern void glColor3uiv(GLuint *);
    extern void glColor3us(GLushort, GLushort, GLushort);
    extern void glColor3usv(GLushort *);
    extern void glColor4b(GLbyte, GLbyte, GLbyte, GLbyte);
    extern void glColor4bv(GLbyte *);
    extern void glColor4d(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glColor4dv(GLdouble *);
    extern void glColor4f(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glColor4fv(GLfloat *);
    extern void glColor4i(GLint, GLint, GLint, GLint);
    extern void glColor4iv(GLint *);
    extern void glColor4s(GLshort, GLshort, GLshort, GLshort);
    extern void glColor4sv(GLshort *);
    extern void glColor4ub(GLubyte, GLubyte, GLubyte, GLubyte);
    extern void glColor4ubv(GLubyte *);
    extern void glColor4ui(GLuint, GLuint, GLuint, GLuint);
    extern void glColor4uiv(GLuint *);
    extern void glColor4us(GLushort, GLushort, GLushort, GLushort);
    extern void glColor4usv(GLushort *);
    extern void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean);
    extern void glColorMaterial(GLenum, GLenum);
    extern void glColorPointer(GLint, GLenum, GLsizei, GLvoid *);
    extern void glColorSubTable(GLenum, GLsizei, GLsizei, GLenum, GLenum,
				GLvoid *);
    extern void glColorTable(GLenum, GLenum, GLsizei, GLenum, GLenum,
			     GLvoid *);
    extern void glColorTableParameterfv(GLenum, GLenum, GLfloat *);
    extern void glColorTableParameteriv(GLenum, GLenum, GLint *);
    extern void glConvolutionFilter1D(GLenum, GLenum, GLsizei, GLenum,
				      GLenum, GLvoid *);
    extern void glConvolutionFilter2D(GLenum, GLenum, GLsizei, GLsizei,
				      GLenum, GLenum, GLvoid *);
    extern void glConvolutionParameterf(GLenum, GLenum, GLfloat);
    extern void glConvolutionParameterfv(GLenum, GLenum, GLfloat *);
    extern void glConvolutionParameteri(GLenum, GLenum, GLint);
    extern void glConvolutionParameteriv(GLenum, GLenum, GLint *);
    extern void glCopyColorSubTable(GLenum, GLsizei, GLint, GLint,
				    GLsizei);
    extern void glCopyColorTable(GLenum, GLenum, GLint, GLint, GLsizei);
    extern void glCopyConvolutionFilter1D(GLenum, GLenum, GLint, GLint,
					  GLsizei);
    extern void glCopyConvolutionFilter2D(GLenum, GLenum, GLint, GLint,
					  GLsizei, GLsizei);
    extern void glCopyPixels(GLint, GLint, GLsizei, GLsizei, GLenum);
    extern void glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint,
				 GLsizei, GLint);
    extern void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint,
				 GLsizei, GLsizei, GLint);
    extern void glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint,
				    GLsizei);
    extern void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint,
				    GLint, GLsizei, GLsizei);
    extern void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint,
				    GLint, GLint, GLsizei, GLsizei);
    extern void glCullFace(GLenum);
    extern void glDeleteLists(GLuint, GLsizei);
    extern void glDeleteTextures(GLsizei, GLuint *);
    extern void glDepthFunc(GLenum);
    extern void glDepthMask(GLboolean);
    extern void glDepthRange(GLclampd, GLclampd);
    extern void glDisable(GLenum);
    extern void glDisableClientState(GLenum);
    extern void glDrawArrays(GLenum, GLint, GLsizei);
    extern void glDrawBuffer(GLenum);
    extern void glDrawElements(GLenum, GLsizei, GLenum, GLvoid *);
    extern void glDrawPixels(GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
    extern void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei,
				    GLenum, GLvoid *);
    extern void glEdgeFlag(GLboolean);
    extern void glEdgeFlagPointer(GLsizei, GLvoid *);
    extern void glEdgeFlagv(GLboolean *);
    extern void glEnable(GLenum);
    extern void glEnableClientState(GLenum);
    extern void glEnd(void);
    extern void glEndList(void);
    extern void glEvalCoord1d(GLdouble);
    extern void glEvalCoord1dv(GLdouble *);
    extern void glEvalCoord1f(GLfloat);
    extern void glEvalCoord1fv(GLfloat *);
    extern void glEvalCoord2d(GLdouble, GLdouble);
    extern void glEvalCoord2dv(GLdouble *);
    extern void glEvalCoord2f(GLfloat, GLfloat);
    extern void glEvalCoord2fv(GLfloat *);
    extern void glEvalMesh1(GLenum, GLint, GLint);
    extern void glEvalMesh2(GLenum, GLint, GLint, GLint, GLint);
    extern void glEvalPoint1(GLint);
    extern void glEvalPoint2(GLint, GLint);
    extern void glFeedbackBuffer(GLsizei, GLenum, GLfloat *);
    extern void glFinish(void);
    extern void glFlush(void);
    extern void glFogf(GLenum, GLfloat);
    extern void glFogfv(GLenum, GLfloat *);
    extern void glFogi(GLenum, GLint);
    extern void glFogiv(GLenum, GLint *);
    extern void glFrontFace(GLenum);
    extern void glFrustum(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble,
			  GLdouble);
    extern GLuint glGenLists(GLsizei);
    extern void glGenTextures(GLsizei, GLuint *);
    extern void glGetBooleanv(GLenum, GLboolean *);
    extern void glGetClipPlane(GLenum, GLdouble *);
    extern void glGetColorTable(GLenum, GLenum, GLenum, GLvoid *);
    extern void glGetColorTableParameterfv(GLenum, GLenum, GLfloat *);
    extern void glGetColorTableParameteriv(GLenum, GLenum, GLint *);
    extern void glGetConvolutionFilter(GLenum, GLenum, GLenum, GLvoid *);
    extern void glGetConvolutionParameterfv(GLenum, GLenum, GLfloat *);
    extern void glGetConvolutionParameteriv(GLenum, GLenum, GLint *);
    extern void glGetDoublev(GLenum, GLdouble *);
    extern GLenum glGetError(void);
    extern void glGetFloatv(GLenum, GLfloat *);
    extern void glGetHistogram(GLenum, GLboolean, GLenum, GLenum,
			       GLvoid *);
    extern void glGetHistogramParameterfv(GLenum, GLenum, GLfloat *);
    extern void glGetHistogramParameteriv(GLenum, GLenum, GLint *);
    extern void glGetIntegerv(GLenum, GLint *);
    extern void glGetLightfv(GLenum, GLenum, GLfloat *);
    extern void glGetLightiv(GLenum, GLenum, GLint *);
    extern void glGetMapdv(GLenum, GLenum, GLdouble *);
    extern void glGetMapfv(GLenum, GLenum, GLfloat *);
    extern void glGetMapiv(GLenum, GLenum, GLint *);
    extern void glGetMaterialfv(GLenum, GLenum, GLfloat *);
    extern void glGetMaterialiv(GLenum, GLenum, GLint *);
    extern void glGetMinmax(GLenum, GLboolean, GLenum, GLenum, GLvoid *);
    extern void glGetMinmaxParameterfv(GLenum, GLenum, GLfloat *);
    extern void glGetMinmaxParameteriv(GLenum, GLenum, GLint *);
    extern void glGetPixelMapfv(GLenum, GLfloat *);
    extern void glGetPixelMapuiv(GLenum, GLuint *);
    extern void glGetPixelMapusv(GLenum, GLushort *);
    extern void glGetPointerv(GLenum, void **);
    extern void glGetPolygonStipple(GLubyte *);
    extern void glGetSeparableFilter(GLenum, GLenum, GLenum, GLvoid *,
				     GLvoid *, GLvoid *);
    extern const GLubyte *glGetString(GLenum);
    extern void glGetTexEnvfv(GLenum, GLenum, GLfloat *);
    extern void glGetTexEnviv(GLenum, GLenum, GLint *);
    extern void glGetTexGendv(GLenum, GLenum, GLdouble *);
    extern void glGetTexGenfv(GLenum, GLenum, GLfloat *);
    extern void glGetTexGeniv(GLenum, GLenum, GLint *);
    extern void glGetTexImage(GLenum, GLint, GLenum, GLenum, GLvoid *);
    extern void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *);
    extern void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *);
    extern void glGetTexParameterfv(GLenum, GLenum, GLfloat *);
    extern void glGetTexParameteriv(GLenum, GLenum, GLint *);
    extern void glHint(GLenum, GLenum);
    extern void glHistogram(GLenum, GLsizei, GLenum, GLboolean);
    extern void glIndexMask(GLuint);
    extern void glIndexPointer(GLenum, GLsizei, GLvoid *);
    extern void glIndexd(GLdouble);
    extern void glIndexdv(GLdouble *);
    extern void glIndexf(GLfloat);
    extern void glIndexfv(GLfloat *);
    extern void glIndexi(GLint);
    extern void glIndexiv(GLint *);
    extern void glIndexs(GLshort);
    extern void glIndexsv(GLshort *);
    extern void glIndexub(GLubyte);
    extern void glIndexubv(GLubyte *);
    extern void glInitNames(void);
    extern void glInterleavedArrays(GLenum, GLsizei, GLvoid *);
    extern GLboolean glIsEnabled(GLenum);
    extern GLboolean glIsList(GLuint);
    extern GLboolean glIsTexture(GLuint);
    extern void glLightModelf(GLenum, GLfloat);
    extern void glLightModelfv(GLenum, GLfloat *);
    extern void glLightModeli(GLenum, GLint);
    extern void glLightModeliv(GLenum, GLint *);
    extern void glLightf(GLenum, GLenum, GLfloat);
    extern void glLightfv(GLenum, GLenum, GLfloat *);
    extern void glLighti(GLenum, GLenum, GLint);
    extern void glLightiv(GLenum, GLenum, GLint *);
    extern void glLineStipple(GLint, GLushort);
    extern void glLineWidth(GLfloat);
    extern void glListBase(GLuint);
    extern void glLoadIdentity(void);
    extern void glLoadMatrixd(GLdouble *);
    extern void glLoadMatrixf(GLfloat *);
    extern void glLoadName(GLuint);
    extern void glLogicOp(GLenum);
    extern void glMap1d(GLenum, GLdouble, GLdouble, GLint, GLint,
			GLdouble *);
    extern void glMap1f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat *);
    extern void glMap2d(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble,
			GLdouble, GLint, GLint, GLdouble *);
    extern void glMap2f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat,
			GLfloat, GLint, GLint, GLfloat *);
    extern void glMapGrid1d(GLint, GLdouble, GLdouble);
    extern void glMapGrid1f(GLint, GLfloat, GLfloat);
    extern void glMapGrid2d(GLint, GLdouble, GLdouble, GLint, GLdouble,
			    GLdouble);
    extern void glMapGrid2f(GLint, GLfloat, GLfloat, GLint, GLfloat,
			    GLfloat);
    extern void glMaterialf(GLenum, GLenum, GLfloat);
    extern void glMaterialfv(GLenum, GLenum, GLfloat *);
    extern void glMateriali(GLenum, GLenum, GLint);
    extern void glMaterialiv(GLenum, GLenum, GLint *);
    extern void glMatrixMode(GLenum);
    extern void glMinmax(GLenum, GLenum, GLboolean);
    extern void glMultMatrixd(GLdouble *);
    extern void glMultMatrixf(GLfloat *);
    extern void glMultiTexCoord1dARB(GLenum, GLdouble);
    extern void glMultiTexCoord1dvARB(GLenum, const GLdouble *);
    extern void glMultiTexCoord1fARB(GLenum, GLfloat);
    extern void glMultiTexCoord1fvARB(GLenum, const GLfloat *);
    extern void glMultiTexCoord1iARB(GLenum, GLint);
    extern void glMultiTexCoord1ivARB(GLenum, const GLint *);
    extern void glMultiTexCoord1sARB(GLenum, GLshort);
    extern void glMultiTexCoord1svARB(GLenum, const GLshort *);
    extern void glMultiTexCoord2dARB(GLenum, GLdouble, GLdouble);
    extern void glMultiTexCoord2dvARB(GLenum, const GLdouble *);
    extern void glMultiTexCoord2fARB(GLenum, GLfloat, GLfloat);
    extern void glMultiTexCoord2fvARB(GLenum, const GLfloat *);
    extern void glMultiTexCoord2iARB(GLenum, GLint, GLint);
    extern void glMultiTexCoord2ivARB(GLenum, const GLint *);
    extern void glMultiTexCoord2sARB(GLenum, GLshort, GLshort);
    extern void glMultiTexCoord2svARB(GLenum, const GLshort *);
    extern void glMultiTexCoord3dARB(GLenum, GLdouble, GLdouble, GLdouble);
    extern void glMultiTexCoord3dvARB(GLenum, const GLdouble *);
    extern void glMultiTexCoord3fARB(GLenum, GLfloat, GLfloat, GLfloat);
    extern void glMultiTexCoord3fvARB(GLenum, const GLfloat *);
    extern void glMultiTexCoord3iARB(GLenum, GLint, GLint, GLint);
    extern void glMultiTexCoord3ivARB(GLenum, const GLint *);
    extern void glMultiTexCoord3sARB(GLenum, GLshort, GLshort, GLshort);
    extern void glMultiTexCoord3svARB(GLenum, const GLshort *);
    extern void glMultiTexCoord4dARB(GLenum, GLdouble, GLdouble, GLdouble,
				     GLdouble);
    extern void glMultiTexCoord4dvARB(GLenum, const GLdouble *);
    extern void glMultiTexCoord4fARB(GLenum, GLfloat, GLfloat, GLfloat,
				     GLfloat);
    extern void glMultiTexCoord4fvARB(GLenum, const GLfloat *);
    extern void glMultiTexCoord4iARB(GLenum, GLint, GLint, GLint, GLint);
    extern void glMultiTexCoord4ivARB(GLenum, const GLint *);
    extern void glMultiTexCoord4sARB(GLenum, GLshort, GLshort, GLshort,
				     GLshort);
    extern void glMultiTexCoord4svARB(GLenum, const GLshort *);
    extern void glNewList(GLuint, GLenum);
    extern void glNormal3b(GLbyte, GLbyte, GLbyte);
    extern void glNormal3bv(GLbyte *);
    extern void glNormal3d(GLdouble, GLdouble, GLdouble);
    extern void glNormal3dv(GLdouble *);
    extern void glNormal3f(GLfloat, GLfloat, GLfloat);
    extern void glNormal3fv(GLfloat *);
    extern void glNormal3i(GLint, GLint, GLint);
    extern void glNormal3iv(GLint *);
    extern void glNormal3s(GLshort, GLshort, GLshort);
    extern void glNormal3sv(GLshort *);
    extern void glNormalPointer(GLenum, GLsizei, GLvoid *);
    extern void glOrtho(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble,
			GLdouble);
    extern void glPassThrough(GLfloat);
    extern void glPixelMapfv(GLenum, GLint, GLfloat *);
    extern void glPixelMapuiv(GLenum, GLint, GLuint *);
    extern void glPixelMapusv(GLenum, GLint, GLushort *);
    extern void glPixelStoref(GLenum, GLfloat);
    extern void glPixelStorei(GLenum, GLint);
    extern void glPixelTransferf(GLenum, GLfloat);
    extern void glPixelTransferi(GLenum, GLint);
    extern void glPixelZoom(GLfloat, GLfloat);
    extern void glPointSize(GLfloat);
    extern void glPolygonMode(GLenum, GLenum);
    extern void glPolygonOffset(GLfloat, GLfloat);
    extern void glPolygonStipple(GLubyte *);
    extern void glPopAttrib(void);
    extern void glPopClientAttrib(void);
    extern void glPopMatrix(void);
    extern void glPopName(void);
    extern void glPrioritizeTextures(GLsizei, GLuint *, GLclampf *);
    extern void glPushAttrib(GLbitfield);
    extern void glPushClientAttrib(GLbitfield);
    extern void glPushMatrix(void);
    extern void glPushName(GLuint);
    extern void glRasterPos2d(GLdouble, GLdouble);
    extern void glRasterPos2dv(GLdouble *);
    extern void glRasterPos2f(GLfloat, GLfloat);
    extern void glRasterPos2fv(GLfloat *);
    extern void glRasterPos2i(GLint, GLint);
    extern void glRasterPos2iv(GLint *);
    extern void glRasterPos2s(GLshort, GLshort);
    extern void glRasterPos2sv(GLshort *);
    extern void glRasterPos3d(GLdouble, GLdouble, GLdouble);
    extern void glRasterPos3dv(GLdouble *);
    extern void glRasterPos3f(GLfloat, GLfloat, GLfloat);
    extern void glRasterPos3fv(GLfloat *);
    extern void glRasterPos3i(GLint, GLint, GLint);
    extern void glRasterPos3iv(GLint *);
    extern void glRasterPos3s(GLshort, GLshort, GLshort);
    extern void glRasterPos3sv(GLshort *);
    extern void glRasterPos4d(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glRasterPos4dv(GLdouble *);
    extern void glRasterPos4f(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glRasterPos4fv(GLfloat *);
    extern void glRasterPos4i(GLint, GLint, GLint, GLint);
    extern void glRasterPos4iv(GLint *);
    extern void glRasterPos4s(GLshort, GLshort, GLshort, GLshort);
    extern void glRasterPos4sv(GLshort *);
    extern void glReadBuffer(GLenum);
    extern void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum,
			     GLenum, GLvoid *);
    extern void glRectd(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glRectdv(GLdouble *, GLdouble *);
    extern void glRectf(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glRectfv(GLfloat *, GLfloat *);
    extern void glRecti(GLint, GLint, GLint, GLint);
    extern void glRectiv(GLint *, GLint *);
    extern void glRects(GLshort, GLshort, GLshort, GLshort);
    extern void glRectsv(GLshort *, GLshort *);
    extern GLint glRenderMode(GLenum);
    extern void glResetHistogram(GLenum);
    extern void glResetMinmax(GLenum);
    extern void glRotated(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glRotatef(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glScaled(GLdouble, GLdouble, GLdouble);
    extern void glScalef(GLfloat, GLfloat, GLfloat);
    extern void glScissor(GLint, GLint, GLsizei, GLsizei);
    extern void glSelectBuffer(GLsizei, GLuint *);
    extern void glSeparableFilter2D(GLenum, GLenum, GLsizei, GLsizei,
				    GLenum, GLenum, GLvoid *, GLvoid *);
    extern void glShadeModel(GLenum);
    extern void glStencilFunc(GLenum, GLint, GLuint);
    extern void glStencilMask(GLuint);
    extern void glStencilOp(GLenum, GLenum, GLenum);
    extern void glTexCoord1d(GLdouble);
    extern void glTexCoord1dv(GLdouble *);
    extern void glTexCoord1f(GLfloat);
    extern void glTexCoord1fv(GLfloat *);
    extern void glTexCoord1i(GLint);
    extern void glTexCoord1iv(GLint *);
    extern void glTexCoord1s(GLshort);
    extern void glTexCoord1sv(GLshort *);
    extern void glTexCoord2d(GLdouble, GLdouble);
    extern void glTexCoord2dv(GLdouble *);
    extern void glTexCoord2f(GLfloat, GLfloat);
    extern void glTexCoord2fv(GLfloat *);
    extern void glTexCoord2i(GLint, GLint);
    extern void glTexCoord2iv(GLint *);
    extern void glTexCoord2s(GLshort, GLshort);
    extern void glTexCoord2sv(GLshort *);
    extern void glTexCoord3d(GLdouble, GLdouble, GLdouble);
    extern void glTexCoord3dv(GLdouble *);
    extern void glTexCoord3f(GLfloat, GLfloat, GLfloat);
    extern void glTexCoord3fv(GLfloat *);
    extern void glTexCoord3i(GLint, GLint, GLint);
    extern void glTexCoord3iv(GLint *);
    extern void glTexCoord3s(GLshort, GLshort, GLshort);
    extern void glTexCoord3sv(GLshort *);
    extern void glTexCoord4d(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glTexCoord4dv(GLdouble *);
    extern void glTexCoord4f(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glTexCoord4fv(GLfloat *);
    extern void glTexCoord4i(GLint, GLint, GLint, GLint);
    extern void glTexCoord4iv(GLint *);
    extern void glTexCoord4s(GLshort, GLshort, GLshort, GLshort);
    extern void glTexCoord4sv(GLshort *);
    extern void glTexCoordPointer(GLint, GLenum, GLsizei, GLvoid *);
    extern void glTexEnvf(GLenum, GLenum, GLfloat);
    extern void glTexEnvfv(GLenum, GLenum, GLfloat *);
    extern void glTexEnvi(GLenum, GLenum, GLint);
    extern void glTexEnviv(GLenum, GLenum, GLint *);
    extern void glTexGend(GLenum, GLenum, GLdouble);
    extern void glTexGendv(GLenum, GLenum, GLdouble *);
    extern void glTexGenf(GLenum, GLenum, GLfloat);
    extern void glTexGenfv(GLenum, GLenum, GLfloat *);
    extern void glTexGeni(GLenum, GLenum, GLint);
    extern void glTexGeniv(GLenum, GLenum, GLint *);
    extern void glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum,
			     GLenum, GLvoid *);
    extern void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint,
			     GLenum, GLenum, GLvoid *);
    extern void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei,
			     GLsizei, GLint, GLenum, GLenum, GLvoid *);
    extern void glTexParameterf(GLenum, GLenum, GLfloat);
    extern void glTexParameterfv(GLenum, GLenum, GLfloat *);
    extern void glTexParameteri(GLenum, GLenum, GLint);
    extern void glTexParameteriv(GLenum, GLenum, GLint *);
    extern void glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum,
				GLenum, GLvoid *);
    extern void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei,
				GLsizei, GLenum, GLenum, GLvoid *);
    extern void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint,
				GLsizei, GLsizei, GLsizei, GLenum, GLenum,
				GLvoid *);
    extern void glTranslated(GLdouble, GLdouble, GLdouble);
    extern void glTranslatef(GLfloat, GLfloat, GLfloat);
    extern void glVertex2d(GLdouble, GLdouble);
    extern void glVertex2dv(GLdouble *);
    extern void glVertex2f(GLfloat, GLfloat);
    extern void glVertex2fv(GLfloat *);
    extern void glVertex2i(GLint, GLint);
    extern void glVertex2iv(GLint *);
    extern void glVertex2s(GLshort, GLshort);
    extern void glVertex2sv(GLshort *);
    extern void glVertex3d(GLdouble, GLdouble, GLdouble);
    extern void glVertex3dv(GLdouble *);
    extern void glVertex3f(GLfloat, GLfloat, GLfloat);
    extern void glVertex3fv(GLfloat *);
    extern void glVertex3i(GLint, GLint, GLint);
    extern void glVertex3iv(GLint *);
    extern void glVertex3s(GLshort, GLshort, GLshort);
    extern void glVertex3sv(GLshort *);
    extern void glVertex4d(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void glVertex4dv(GLdouble *);
    extern void glVertex4f(GLfloat, GLfloat, GLfloat, GLfloat);
    extern void glVertex4fv(GLfloat *);
    extern void glVertex4i(GLint, GLint, GLint, GLint);
    extern void glVertex4iv(GLint *);
    extern void glVertex4s(GLshort, GLshort, GLshort, GLshort);
    extern void glVertex4sv(GLshort *);
    extern void glVertexPointer(GLint, GLenum, GLsizei, GLvoid *);
    extern void glViewport(GLint, GLint, GLsizei, GLsizei);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
