#if (__LSB_VERSION__ >= 40 )
#ifndef _GL_GLU_H_
#define _GL_GLU_H_

#include <GL/gl.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define GLU_FALSE	0
#define GLU_EXT_nurbs_tessellator	1
#define GLU_EXT_object_space_tess	1
#define GLU_TRUE	1
#define GLU_VERSION_1_1	1
#define GLU_VERSION_1_2	1
#define GLU_VERSION_1_3	1
#define GLU_TESS_MAX_COORD	1.0e150
#define GLU_SMOOTH	100000
#define GLU_FLAT	100001
#define GLU_NONE	100002
#define GLU_POINT	100010
#define GLU_LINE	100011
#define GLU_FILL	100012
#define GLU_SILHOUETTE	100013
#define GLU_OUTSIDE	100020
#define GLU_INSIDE	100021
#define GLU_BEGIN	100100
#define GLU_TESS_BEGIN	100100
#define GLU_TESS_VERTEX	100101
#define GLU_VERTEX	100101
#define GLU_END	100102
#define GLU_TESS_END	100102
#define GLU_ERROR	100103
#define GLU_NURBS_ERROR	100103
#define GLU_TESS_ERROR	100103
#define GLU_EDGE_FLAG	100104
#define GLU_TESS_EDGE_FLAG	100104
#define GLU_TESS_COMBINE	100105
#define GLU_TESS_BEGIN_DATA	100106
#define GLU_TESS_VERTEX_DATA	100107
#define GLU_TESS_END_DATA	100108
#define GLU_TESS_ERROR_DATA	100109
#define GLU_TESS_EDGE_FLAG_DATA	100110
#define GLU_TESS_COMBINE_DATA	100111
#define GLU_CW	100120
#define GLU_CCW	100121
#define GLU_INTERIOR	100122
#define GLU_EXTERIOR	100123
#define GLU_UNKNOWN	100124
#define GLU_TESS_WINDING_ODD	100130
#define GLU_TESS_WINDING_NONZERO	100131
#define GLU_TESS_WINDING_POSITIVE	100132
#define GLU_TESS_WINDING_NEGATIVE	100133
#define GLU_TESS_WINDING_ABS_GEQ_TWO	100134
#define GLU_TESS_WINDING_RULE	100140
#define GLU_TESS_BOUNDARY_ONLY	100141
#define GLU_TESS_TOLERANCE	100142
#define GLU_TESS_ERROR1	100151
#define GLU_TESS_MISSING_BEGIN_POLYGON	100151
#define GLU_TESS_ERROR2	100152
#define GLU_TESS_MISSING_BEGIN_CONTOUR	100152
#define GLU_TESS_ERROR3	100153
#define GLU_TESS_MISSING_END_POLYGON	100153
#define GLU_TESS_ERROR4	100154
#define GLU_TESS_MISSING_END_CONTOUR	100154
#define GLU_TESS_COORD_TOO_LARGE	100155
#define GLU_TESS_ERROR5	100155
#define GLU_TESS_ERROR6	100156
#define GLU_TESS_NEED_COMBINE_CALLBACK	100156
#define GLU_TESS_ERROR7	100157
#define GLU_TESS_ERROR8	100158
#define GLU_NURBS_MODE	100160
#define GLU_NURBS_MODE_EXT	100160
#define GLU_NURBS_TESSELLATOR	100161
#define GLU_NURBS_TESSELLATOR_EXT	100161
#define GLU_NURBS_RENDERER	100162
#define GLU_NURBS_RENDERER_EXT	100162
#define GLU_NURBS_BEGIN	100164
#define GLU_NURBS_BEGIN_EXT	100164
#define GLU_NURBS_VERTEX	100165
#define GLU_NURBS_VERTEX_EXT	100165
#define GLU_NURBS_NORMAL	100166
#define GLU_NURBS_NORMAL_EXT	100166
#define GLU_NURBS_COLOR	100167
#define GLU_NURBS_COLOR_EXT	100167
#define GLU_NURBS_TEXTURE_COORD	100168
#define GLU_NURBS_TEX_COORD_EXT	100168
#define GLU_NURBS_END	100169
#define GLU_NURBS_END_EXT	100169
#define GLU_NURBS_BEGIN_DATA	100170
#define GLU_NURBS_BEGIN_DATA_EXT	100170
#define GLU_NURBS_VERTEX_DATA	100171
#define GLU_NURBS_VERTEX_DATA_EXT	100171
#define GLU_NURBS_NORMAL_DATA	100172
#define GLU_NURBS_NORMAL_DATA_EXT	100172
#define GLU_NURBS_COLOR_DATA	100173
#define GLU_NURBS_COLOR_DATA_EXT	100173
#define GLU_NURBS_TEXTURE_COORD_DATA	100174
#define GLU_NURBS_TEX_COORD_DATA_EXT	100174
#define GLU_NURBS_END_DATA	100175
#define GLU_NURBS_END_DATA_EXT	100175
#define GLU_AUTO_LOAD_MATRIX	100200
#define GLU_CULLING	100201
#define GLU_PARAMETRIC_TOLERANCE	100202
#define GLU_SAMPLING_TOLERANCE	100203
#define GLU_DISPLAY_MODE	100204
#define GLU_SAMPLING_METHOD	100205
#define GLU_U_STEP	100206
#define GLU_V_STEP	100207
#define GLU_OBJECT_PARAMETRIC_ERROR	100208
#define GLU_OBJECT_PARAMETRIC_ERROR_EXT	100208
#define GLU_OBJECT_PATH_LENGTH	100209
#define GLU_OBJECT_PATH_LENGTH_EXT	100209
#define GLU_MAP1_TRIM_2	100210
#define GLU_MAP1_TRIM_3	100211
#define GLU_PATH_LENGTH	100215
#define GLU_PARAMETRIC_ERROR	100216
#define GLU_DOMAIN_DISTANCE	100217
#define GLU_OUTLINE_POLYGON	100240
#define GLU_OUTLINE_PATCH	100241
#define GLU_NURBS_ERROR1	100251
#define GLU_NURBS_ERROR2	100252
#define GLU_NURBS_ERROR3	100253
#define GLU_NURBS_ERROR4	100254
#define GLU_NURBS_ERROR5	100255
#define GLU_NURBS_ERROR6	100256
#define GLU_NURBS_ERROR7	100257
#define GLU_NURBS_ERROR8	100258
#define GLU_NURBS_ERROR9	100259
#define GLU_NURBS_ERROR10	100260
#define GLU_NURBS_ERROR11	100261
#define GLU_NURBS_ERROR12	100262
#define GLU_NURBS_ERROR13	100263
#define GLU_NURBS_ERROR14	100264
#define GLU_NURBS_ERROR15	100265
#define GLU_NURBS_ERROR16	100266
#define GLU_NURBS_ERROR17	100267
#define GLU_NURBS_ERROR18	100268
#define GLU_NURBS_ERROR19	100269
#define GLU_NURBS_ERROR20	100270
#define GLU_NURBS_ERROR21	100271
#define GLU_NURBS_ERROR22	100272
#define GLU_NURBS_ERROR23	100273
#define GLU_NURBS_ERROR24	100274
#define GLU_NURBS_ERROR25	100275
#define GLU_NURBS_ERROR26	100276
#define GLU_NURBS_ERROR27	100277
#define GLU_NURBS_ERROR28	100278
#define GLU_NURBS_ERROR29	100279
#define GLU_NURBS_ERROR30	100280
#define GLU_NURBS_ERROR31	100281
#define GLU_NURBS_ERROR32	100282
#define GLU_NURBS_ERROR33	100283
#define GLU_NURBS_ERROR34	100284
#define GLU_NURBS_ERROR35	100285
#define GLU_NURBS_ERROR36	100286
#define GLU_NURBS_ERROR37	100287
#define GLU_VERSION	100800
#define GLU_EXTENSIONS	100801
#define GLU_INVALID_ENUM	100900
#define GLU_INVALID_VALUE	100901
#define GLU_OUT_OF_MEMORY	100902
#define GLU_INCOMPATIBLE_GL_VERSION	100903
#define GLU_INVALID_OPERATION	100904
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef void *_GLUfuncptr;

    typedef struct GLUtesselator GLUtesselatorObj;

    typedef struct GLUtesselator GLUtriangulatorObj;

    typedef struct GLUquadric GLUquadricObj;

    typedef struct GLUnurbs GLUnurbsObj;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    typedef struct GLUnurbs GLUnurbs;

    typedef struct GLUquadric GLUquadric;

    typedef struct GLUtesselator GLUtesselator;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 12






#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 40
    extern void gluBeginCurve(GLUnurbs *);
    extern void gluBeginPolygon(GLUtesselator *);
    extern void gluBeginSurface(GLUnurbs *);
    extern void gluBeginTrim(GLUnurbs *);
    extern GLint gluBuild1DMipmapLevels(GLenum, GLint, GLsizei, GLenum,
					GLenum, GLint, GLint, GLint,
					const void *);
    extern GLint gluBuild1DMipmaps(GLenum, GLint, GLsizei, GLenum, GLenum,
				   const void *);
    extern GLint gluBuild2DMipmapLevels(GLenum, GLint, GLsizei, GLsizei,
					GLenum, GLenum, GLint, GLint,
					GLint, const void *);
    extern GLint gluBuild2DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLenum,
				   GLenum, const void *);
    extern GLint gluBuild3DMipmapLevels(GLenum, GLint, GLsizei, GLsizei,
					GLsizei, GLenum, GLenum, GLint,
					GLint, GLint, const void *);
    extern GLint gluBuild3DMipmaps(GLenum, GLint, GLsizei, GLsizei,
				   GLsizei, GLenum, GLenum, const void *);
    extern GLboolean gluCheckExtension(const GLubyte *, const GLubyte *);
    extern void gluCylinder(GLUquadric *, GLdouble, GLdouble, GLdouble,
			    GLint, GLint);
    extern void gluDeleteNurbsRenderer(GLUnurbs *);
    extern void gluDeleteQuadric(GLUquadric *);
    extern void gluDeleteTess(GLUtesselator *);
    extern void gluDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint);
    extern void gluEndCurve(GLUnurbs *);
    extern void gluEndPolygon(GLUtesselator *);
    extern void gluEndSurface(GLUnurbs *);
    extern void gluEndTrim(GLUnurbs *);
    extern const GLubyte *gluErrorString(GLenum);
    extern void gluGetNurbsProperty(GLUnurbs *, GLenum, GLfloat *);
    extern const GLubyte *gluGetString(GLenum);
    extern void gluGetTessProperty(GLUtesselator *, GLenum, GLdouble *);
    extern void gluLoadSamplingMatrices(GLUnurbs *, const GLfloat *,
					const GLfloat *, const GLint *);
    extern void gluLookAt(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble,
			  GLdouble, GLdouble, GLdouble, GLdouble);
    extern GLUnurbs *gluNewNurbsRenderer(void);
    extern GLUquadric *gluNewQuadric(void);
    extern GLUtesselator *gluNewTess(void);
    extern void gluNextContour(GLUtesselator *, GLenum);
    extern void gluNurbsCallback(GLUnurbs *, GLenum, _GLUfuncptr);
    extern void gluNurbsCallbackData(GLUnurbs *, GLvoid *);
    extern void gluNurbsCallbackDataEXT(GLUnurbs *, GLvoid *);
    extern void gluNurbsCurve(GLUnurbs *, GLint, GLfloat *, GLint,
			      GLfloat *, GLint, GLenum);
    extern void gluNurbsProperty(GLUnurbs *, GLenum, GLfloat);
    extern void gluNurbsSurface(GLUnurbs *, GLint, GLfloat *, GLint,
				GLfloat *, GLint, GLint, GLfloat *, GLint,
				GLint, GLenum);
    extern void gluOrtho2D(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void gluPartialDisk(GLUquadric *, GLdouble, GLdouble, GLint,
			       GLint, GLdouble, GLdouble);
    extern void gluPerspective(GLdouble, GLdouble, GLdouble, GLdouble);
    extern void gluPickMatrix(GLdouble, GLdouble, GLdouble, GLdouble,
			      GLint *);
    extern GLint gluProject(GLdouble, GLdouble, GLdouble, const GLdouble *,
			    const GLdouble *, const GLint *, GLdouble *,
			    GLdouble *, GLdouble *);
    extern void gluPwlCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLenum);
    extern void gluQuadricCallback(GLUquadric *, GLenum, _GLUfuncptr);
    extern void gluQuadricDrawStyle(GLUquadric *, GLenum);
    extern void gluQuadricNormals(GLUquadric *, GLenum);
    extern void gluQuadricOrientation(GLUquadric *, GLenum);
    extern void gluQuadricTexture(GLUquadric *, GLboolean);
    extern GLint gluScaleImage(GLenum, GLsizei, GLsizei, GLenum,
			       const void *, GLsizei, GLsizei, GLenum,
			       GLvoid *);
    extern void gluSphere(GLUquadric *, GLdouble, GLint, GLint);
    extern void gluTessBeginContour(GLUtesselator *);
    extern void gluTessBeginPolygon(GLUtesselator *, GLvoid *);
    extern void gluTessCallback(GLUtesselator *, GLenum, _GLUfuncptr);
    extern void gluTessEndContour(GLUtesselator *);
    extern void gluTessEndPolygon(GLUtesselator *);
    extern void gluTessNormal(GLUtesselator *, GLdouble, GLdouble,
			      GLdouble);
    extern void gluTessProperty(GLUtesselator *, GLenum, GLdouble);
    extern void gluTessVertex(GLUtesselator *, GLdouble *, GLvoid *);
    extern GLint gluUnProject(GLdouble, GLdouble, GLdouble,
			      const GLdouble *, const GLdouble *,
			      const GLint *, GLdouble *, GLdouble *,
			      GLdouble *);
    extern GLint gluUnProject4(GLdouble, GLdouble, GLdouble, GLdouble,
			       const GLdouble *, const GLdouble *,
			       const GLint *, GLdouble, GLdouble,
			       GLdouble *, GLdouble *, GLdouble *,
			       GLdouble *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
