#ifndef _GL_GL_H_
#define _GL_GL_H_


#ifdef __cplusplus
extern "C"
{
#endif





/* Datatypes*/


  typedef unsigned int GLenum;

  typedef unsigned char GLboolean;

  typedef unsigned int GLbitfield;

  typedef void GLvoid;

  typedef char GLbyte;

  typedef short GLshort;

  typedef int GLint;

  typedef unsigned char GLubyte;

  typedef unsigned short GLushort;

  typedef unsigned int GLuint;

  typedef int GLsizei;

  typedef float GLfloat;

  typedef float GLclampf;

  typedef double GLdouble;

  typedef double GLclampd;


/* Constants*/



/* Data types*/
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



/* Primitives*/
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



/* Vertex Arrays*/
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



/* Matrix Mode*/
#define GL_MATRIX_MODE	0x0BA0
#define GL_MODELVIEW	0x1700
#define GL_PROJECTION	0x1701
#define GL_TEXTURE	0x1702



/* Points*/



/* Lines*/



/* Polygons*/



/* Display Lists*/



/* Depth buffer*/



/* Lighting*/



/* User clipping planes*/



/* Accumulation buffer*/



/* Alpha testing*/



/* Blending*/



/* Render Mode*/



/* Feedback*/



  extern void glAccum (GLenum, GLfloat);
  extern void glAlphaFunc (GLenum, GLclampf);
  extern GLboolean glAreTexturesResident (GLsizei, GLuint *, GLboolean *);
  extern void glArrayElement (GLint);
  extern void glBegin (GLenum);
  extern void glBindTexture (GLenum, GLuint);
  extern void glBitmap (GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat,
			GLubyte *);
  extern void glBlendFunc (GLenum, GLenum);
  extern void glCallList (GLuint);
  extern void glCallLists (GLsizei, GLenum, GLvoid *);
  extern void glClear (GLbitfield);
  extern void glClearAccum (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glClearColor (GLclampf, GLclampf, GLclampf, GLclampf);
  extern void glClearDepth (GLclampd);
  extern void glClearIndex (GLfloat);
  extern void glClearStencil (GLint);
  extern void glClipPlane (GLenum, GLdouble *);
  extern void glColor3b (GLbyte, GLbyte, GLbyte);
  extern void glColor3bv (GLbyte *);
  extern void glColor3d (GLdouble, GLdouble, GLdouble);
  extern void glColor3dv (GLdouble *);
  extern void glColor3f (GLfloat, GLfloat, GLfloat);
  extern void glColor3fv (GLfloat *);
  extern void glColor3i (GLint, GLint, GLint);
  extern void glColor3iv (GLint *);
  extern void glColor3s (GLshort, GLshort, GLshort);
  extern void glColor3sv (GLshort *);
  extern void glColor3ub (GLubyte, GLubyte, GLubyte);
  extern void glColor3ubv (GLubyte *);
  extern void glColor3ui (GLuint, GLuint, GLuint);
  extern void glColor3uiv (GLuint *);
  extern void glColor3us (GLushort, GLushort, GLushort);
  extern void glColor3usv (GLushort *);
  extern void glColor4b (GLbyte, GLbyte, GLbyte, GLbyte);
  extern void glColor4bv (GLbyte *);
  extern void glColor4d (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glColor4dv (GLdouble *);
  extern void glColor4f (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glColor4fv (GLfloat *);
  extern void glColor4i (GLint, GLint, GLint, GLint);
  extern void glColor4iv (GLint *);
  extern void glColor4s (GLshort, GLshort, GLshort, GLshort);
  extern void glColor4sv (GLshort *);
  extern void glColor4ub (GLubyte, GLubyte, GLubyte, GLubyte);
  extern void glColor4ubv (GLubyte *);
  extern void glColor4ui (GLuint, GLuint, GLuint, GLuint);
  extern void glColor4uiv (GLuint *);
  extern void glColor4us (GLushort, GLushort, GLushort, GLushort);
  extern void glColor4usv (GLushort *);
  extern void glColorMask (GLboolean, GLboolean, GLboolean, GLboolean);
  extern void glColorMaterial (GLenum, GLenum);
  extern void glColorPointer (GLint, GLenum, GLsizei, GLvoid *);
  extern void glCopyPixels (GLint, GLint, GLsizei, GLsizei, GLenum);
  extern void glCopyTexImage1D (GLenum, GLint, GLenum, GLint, GLint, GLsizei,
				GLint);
  extern void glCopyTexImage2D (GLenum, GLint, GLenum, GLint, GLint, GLsizei,
				GLsizei, GLint);
  extern void glCopyTexSubImage1D (GLenum, GLint, GLint, GLint, GLint,
				   GLsizei);
  extern void glCopyTexSubImage2D (GLenum, GLint, GLint, GLint, GLint, GLint,
				   GLsizei, GLsizei);
  extern void glCullFace (GLenum);
  extern void glDeleteLists (GLuint, GLsizei);
  extern void glDeleteTextures (GLsizei, GLuint *);
  extern void glDepthFunc (GLenum);
  extern void glDepthMask (GLboolean);
  extern void glDepthRange (GLclampd, GLclampd);
  extern void glDisable (GLenum);
  extern void glDisableClientState (GLenum);
  extern void glDrawArrays (GLenum, GLint, GLsizei);
  extern void glDrawBuffer (GLenum);
  extern void glDrawElements (GLenum, GLsizei, GLenum, GLvoid *);
  extern void glDrawPixels (GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
  extern void glEdgeFlag (GLboolean);
  extern void glEdgeFlagPointer (GLsizei, GLvoid *);
  extern void glEdgeFlagv (GLboolean *);
  extern void glEnable (GLenum);
  extern void glEnableClientState (GLenum);
  extern void glEnd (void);
  extern void glEndList (void);
  extern void glEvalCoord1d (GLdouble);
  extern void glEvalCoord1dv (GLdouble *);
  extern void glEvalCoord1f (GLfloat);
  extern void glEvalCoord1fv (GLfloat *);
  extern void glEvalCoord2d (GLdouble, GLdouble);
  extern void glEvalCoord2dv (GLdouble *);
  extern void glEvalCoord2f (GLfloat, GLfloat);
  extern void glEvalCoord2fv (GLfloat *);
  extern void glEvalMesh1 (GLenum, GLint, GLint);
  extern void glEvalMesh2 (GLenum, GLint, GLint, GLint, GLint);
  extern void glEvalPoint1 (GLint);
  extern void glEvalPoint2 (GLint, GLint);
  extern void glFeedbackBuffer (GLsizei, GLenum, GLfloat *);
  extern void glFinish (void);
  extern void glFlush (void);
  extern void glFogf (GLenum, GLfloat);
  extern void glFogfv (GLenum, GLfloat *);
  extern void glFogi (GLenum, GLint);
  extern void glFogiv (GLenum, GLint *);
  extern void glFrontFace (GLenum);
  extern void glFrustum (GLdouble, GLdouble, GLdouble, GLdouble, GLdouble,
			 GLdouble);
  extern GLuint glGenLists (GLsizei);
  extern void glGenTextures (GLsizei, GLuint *);
  extern void glGetBooleanv (GLenum, GLboolean *);
  extern void glGetClipPlane (GLenum, GLdouble *);
  extern void glGetDoublev (GLenum, GLdouble *);
  extern GLenum glGetError (void);
  extern void glGetFloatv (GLenum, GLfloat *);
  extern void glGetIntegerv (GLenum, GLint *);
  extern void glGetLightfv (GLenum, GLenum, GLfloat *);
  extern void glGetLightiv (GLenum, GLenum, GLint *);
  extern void glGetMapdv (GLenum, GLenum, GLdouble *);
  extern void glGetMapfv (GLenum, GLenum, GLfloat *);
  extern void glGetMapiv (GLenum, GLenum, GLint *);
  extern void glGetMaterialfv (GLenum, GLenum, GLfloat *);
  extern void glGetMaterialiv (GLenum, GLenum, GLint *);
  extern void glGetPixelMapfv (GLenum, GLfloat *);
  extern void glGetPixelMapuiv (GLenum, GLuint *);
  extern void glGetPixelMapusv (GLenum, GLushort *);
  extern void glGetPointerv (GLenum, void **);
  extern void glGetPolygonStipple (GLubyte *);
  extern GLubyte *glGetString (GLenum);
  extern void glGetTexEnvfv (GLenum, GLenum, GLfloat *);
  extern void glGetTexEnviv (GLenum, GLenum, GLint *);
  extern void glGetTexGendv (GLenum, GLenum, GLdouble *);
  extern void glGetTexGenfv (GLenum, GLenum, GLfloat *);
  extern void glGetTexGeniv (GLenum, GLenum, GLint *);
  extern void glGetTexImage (GLenum, GLint, GLenum, GLenum, GLvoid *);
  extern void glGetTexLevelParameterfv (GLenum, GLint, GLenum, GLfloat *);
  extern void glGetTexLevelParameteriv (GLenum, GLint, GLenum, GLint *);
  extern void glGetTexParameterfv (GLenum, GLenum, GLfloat *);
  extern void glGetTexParameteriv (GLenum, GLenum, GLint *);
  extern void glHint (GLenum, GLenum);
  extern void glIndexMask (GLuint);
  extern void glIndexPointer (GLenum, GLsizei, GLvoid *);
  extern void glIndexd (GLdouble);
  extern void glIndexdv (GLdouble *);
  extern void glIndexf (GLfloat);
  extern void glIndexfv (GLfloat *);
  extern void glIndexi (GLint);
  extern void glIndexiv (GLint *);
  extern void glIndexs (GLshort);
  extern void glIndexsv (GLshort *);
  extern void glIndexub (GLubyte);
  extern void glIndexubv (GLubyte *);
  extern void glInitNames (void);
  extern void glInterleavedArrays (GLenum, GLsizei, GLvoid *);
  extern GLboolean glIsEnabled (GLenum);
  extern GLboolean glIsList (GLuint);
  extern GLboolean glIsTexture (GLuint);
  extern void glLightModelf (GLenum, GLfloat);
  extern void glLightModelfv (GLenum, GLfloat *);
  extern void glLightModeli (GLenum, GLint);
  extern void glLightModeliv (GLenum, GLint *);
  extern void glLightf (GLenum, GLenum, GLfloat);
  extern void glLightfv (GLenum, GLenum, GLfloat *);
  extern void glLighti (GLenum, GLenum, GLint);
  extern void glLightiv (GLenum, GLenum, GLint *);
  extern void glLineStipple (GLint, GLushort);
  extern void glLineWidth (GLfloat);
  extern void glListBase (GLuint);
  extern void glLoadIdentity (void);
  extern void glLoadMatrixd (GLdouble *);
  extern void glLoadMatrixf (GLfloat *);
  extern void glLoadName (GLuint);
  extern void glLogicOp (GLenum);
  extern void glMap1d (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble *);
  extern void glMap1f (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat *);
  extern void glMap2d (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble,
		       GLdouble, GLint, GLint, GLdouble *);
  extern void glMap2f (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat,
		       GLfloat, GLint, GLint, GLfloat *);
  extern void glMapGrid1d (GLint, GLdouble, GLdouble);
  extern void glMapGrid1f (GLint, GLfloat, GLfloat);
  extern void glMapGrid2d (GLint, GLdouble, GLdouble, GLint, GLdouble,
			   GLdouble);
  extern void glMapGrid2f (GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
  extern void glMaterialf (GLenum, GLenum, GLfloat);
  extern void glMaterialfv (GLenum, GLenum, GLfloat *);
  extern void glMateriali (GLenum, GLenum, GLint);
  extern void glMaterialiv (GLenum, GLenum, GLint *);
  extern void glMatrixMode (GLenum);
  extern void glMultMatrixd (GLdouble *);
  extern void glMultMatrixf (GLfloat *);
  extern void glNewList (GLuint, GLenum);
  extern void glNormal3b (GLbyte, GLbyte, GLbyte);
  extern void glNormal3bv (GLbyte *);
  extern void glNormal3d (GLdouble, GLdouble, GLdouble);
  extern void glNormal3dv (GLdouble *);
  extern void glNormal3f (GLfloat, GLfloat, GLfloat);
  extern void glNormal3fv (GLfloat *);
  extern void glNormal3i (GLint, GLint, GLint);
  extern void glNormal3iv (GLint *);
  extern void glNormal3s (GLshort, GLshort, GLshort);
  extern void glNormal3sv (GLshort *);
  extern void glNormalPointer (GLenum, GLsizei, GLvoid *);
  extern void glOrtho (GLdouble, GLdouble, GLdouble, GLdouble, GLdouble,
		       GLdouble);
  extern void glPassThrough (GLfloat);
  extern void glPixelMapfv (GLenum, GLint, GLfloat *);
  extern void glPixelMapuiv (GLenum, GLint, GLuint *);
  extern void glPixelMapusv (GLenum, GLint, GLushort *);
  extern void glPixelStoref (GLenum, GLfloat);
  extern void glPixelStorei (GLenum, GLint);
  extern void glPixelTransferf (GLenum, GLfloat);
  extern void glPixelTransferi (GLenum, GLint);
  extern void glPixelZoom (GLfloat, GLfloat);
  extern void glPointSize (GLfloat);
  extern void glPolygonMode (GLenum, GLenum);
  extern void glPolygonOffset (GLfloat, GLfloat);
  extern void glPolygonStipple (GLubyte *);
  extern void glPopAttrib (void);
  extern void glPopClientAttrib (void);
  extern void glPopMatrix (void);
  extern void glPopName (void);
  extern void glPrioritizeTextures (GLsizei, GLuint *, GLclampf *);
  extern void glPushAttrib (GLbitfield);
  extern void glPushClientAttrib (GLbitfield);
  extern void glPushMatrix (void);
  extern void glPushName (GLuint);
  extern void glRasterPos2d (GLdouble, GLdouble);
  extern void glRasterPos2dv (GLdouble *);
  extern void glRasterPos2f (GLfloat, GLfloat);
  extern void glRasterPos2fv (GLfloat *);
  extern void glRasterPos2i (GLint, GLint);
  extern void glRasterPos2iv (GLint *);
  extern void glRasterPos2s (GLshort, GLshort);
  extern void glRasterPos2sv (GLshort *);
  extern void glRasterPos3d (GLdouble, GLdouble, GLdouble);
  extern void glRasterPos3dv (GLdouble *);
  extern void glRasterPos3f (GLfloat, GLfloat, GLfloat);
  extern void glRasterPos3fv (GLfloat *);
  extern void glRasterPos3i (GLint, GLint, GLint);
  extern void glRasterPos3iv (GLint *);
  extern void glRasterPos3s (GLshort, GLshort, GLshort);
  extern void glRasterPos3sv (GLshort *);
  extern void glRasterPos4d (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glRasterPos4dv (GLdouble *);
  extern void glRasterPos4f (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glRasterPos4fv (GLfloat *);
  extern void glRasterPos4i (GLint, GLint, GLint, GLint);
  extern void glRasterPos4iv (GLint *);
  extern void glRasterPos4s (GLshort, GLshort, GLshort, GLshort);
  extern void glRasterPos4sv (GLshort *);
  extern void glReadBuffer (GLenum);
  extern void glReadPixels (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum,
			    GLvoid *);
  extern void glRectd (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glRectdv (GLdouble *, GLdouble *);
  extern void glRectf (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glRectfv (GLfloat *, GLfloat *);
  extern void glRecti (GLint, GLint, GLint, GLint);
  extern void glRectiv (GLint *, GLint *);
  extern void glRects (GLshort, GLshort, GLshort, GLshort);
  extern void glRectsv (GLshort *, GLshort *);
  extern GLint glRenderMode (GLenum);
  extern void glRotated (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glRotatef (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glScaled (GLdouble, GLdouble, GLdouble);
  extern void glScalef (GLfloat, GLfloat, GLfloat);
  extern void glScissor (GLint, GLint, GLsizei, GLsizei);
  extern void glSelectBuffer (GLsizei, GLuint *);
  extern void glShadeModel (GLenum);
  extern void glStencilFunc (GLenum, GLint, GLuint);
  extern void glStencilMask (GLuint);
  extern void glStencilOp (GLenum, GLenum, GLenum);
  extern void glTexCoord1d (GLdouble);
  extern void glTexCoord1dv (GLdouble *);
  extern void glTexCoord1f (GLfloat);
  extern void glTexCoord1fv (GLfloat *);
  extern void glTexCoord1i (GLint);
  extern void glTexCoord1iv (GLint *);
  extern void glTexCoord1s (GLshort);
  extern void glTexCoord1sv (GLshort *);
  extern void glTexCoord2d (GLdouble, GLdouble);
  extern void glTexCoord2dv (GLdouble *);
  extern void glTexCoord2f (GLfloat, GLfloat);
  extern void glTexCoord2fv (GLfloat *);
  extern void glTexCoord2i (GLint, GLint);
  extern void glTexCoord2iv (GLint *);
  extern void glTexCoord2s (GLshort, GLshort);
  extern void glTexCoord2sv (GLshort *);
  extern void glTexCoord3d (GLdouble, GLdouble, GLdouble);
  extern void glTexCoord3dv (GLdouble *);
  extern void glTexCoord3f (GLfloat, GLfloat, GLfloat);
  extern void glTexCoord3fv (GLfloat *);
  extern void glTexCoord3i (GLint, GLint, GLint);
  extern void glTexCoord3iv (GLint *);
  extern void glTexCoord3s (GLshort, GLshort, GLshort);
  extern void glTexCoord3sv (GLshort *);
  extern void glTexCoord4d (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glTexCoord4dv (GLdouble *);
  extern void glTexCoord4f (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glTexCoord4fv (GLfloat *);
  extern void glTexCoord4i (GLint, GLint, GLint, GLint);
  extern void glTexCoord4iv (GLint *);
  extern void glTexCoord4s (GLshort, GLshort, GLshort, GLshort);
  extern void glTexCoord4sv (GLshort *);
  extern void glTexCoordPointer (GLint, GLenum, GLsizei, GLvoid *);
  extern void glTexEnvf (GLenum, GLenum, GLfloat);
  extern void glTexEnvfv (GLenum, GLenum, GLfloat *);
  extern void glTexEnvi (GLenum, GLenum, GLint);
  extern void glTexEnviv (GLenum, GLenum, GLint *);
  extern void glTexGend (GLenum, GLenum, GLdouble);
  extern void glTexGendv (GLenum, GLenum, GLdouble *);
  extern void glTexGenf (GLenum, GLenum, GLfloat);
  extern void glTexGenfv (GLenum, GLenum, GLfloat *);
  extern void glTexGeni (GLenum, GLenum, GLint);
  extern void glTexGeniv (GLenum, GLenum, GLint *);
  extern void glTexImage1D (GLenum, GLint, GLint, GLsizei, GLint, GLenum,
			    GLenum, GLvoid *);
  extern void glTexImage2D (GLenum, GLint, GLint, GLsizei, GLsizei, GLint,
			    GLenum, GLenum, GLvoid *);
  extern void glTexParameterf (GLenum, GLenum, GLfloat);
  extern void glTexParameterfv (GLenum, GLenum, GLfloat *);
  extern void glTexParameteri (GLenum, GLenum, GLint);
  extern void glTexParameteriv (GLenum, GLenum, GLint *);
  extern void glTexSubImage1D (GLenum, GLint, GLint, GLsizei, GLenum, GLenum,
			       GLvoid *);
  extern void glTexSubImage2D (GLenum, GLint, GLint, GLint, GLsizei, GLsizei,
			       GLenum, GLenum, GLvoid *);
  extern void glTranslated (GLdouble, GLdouble, GLdouble);
  extern void glTranslatef (GLfloat, GLfloat, GLfloat);
  extern void glVertex2d (GLdouble, GLdouble);
  extern void glVertex2dv (GLdouble *);
  extern void glVertex2f (GLfloat, GLfloat);
  extern void glVertex2fv (GLfloat *);
  extern void glVertex2i (GLint, GLint);
  extern void glVertex2iv (GLint *);
  extern void glVertex2s (GLshort, GLshort);
  extern void glVertex2sv (GLshort *);
  extern void glVertex3d (GLdouble, GLdouble, GLdouble);
  extern void glVertex3dv (GLdouble *);
  extern void glVertex3f (GLfloat, GLfloat, GLfloat);
  extern void glVertex3fv (GLfloat *);
  extern void glVertex3i (GLint, GLint, GLint);
  extern void glVertex3iv (GLint *);
  extern void glVertex3s (GLshort, GLshort, GLshort);
  extern void glVertex3sv (GLshort *);
  extern void glVertex4d (GLdouble, GLdouble, GLdouble, GLdouble);
  extern void glVertex4dv (GLdouble *);
  extern void glVertex4f (GLfloat, GLfloat, GLfloat, GLfloat);
  extern void glVertex4fv (GLfloat *);
  extern void glVertex4i (GLint, GLint, GLint, GLint);
  extern void glVertex4iv (GLint *);
  extern void glVertex4s (GLshort, GLshort, GLshort, GLshort);
  extern void glVertex4sv (GLshort *);
  extern void glVertexPointer (GLint, GLenum, GLsizei, GLvoid *);
  extern void glViewport (GLint, GLint, GLsizei, GLsizei);
  extern void glMultiTexCoord4svARB (GLenum, GLshort *);
  extern void glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort,
				    GLshort);
  extern void glMultiTexCoord4ivARB (GLenum, GLint *);
  extern void glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint);
  extern void glMultiTexCoord4fvARB (GLenum, GLfloat *);
  extern void glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat,
				    GLfloat);
  extern void glMultiTexCoord4dvARB (GLenum, GLdouble *);
  extern void glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble,
				    GLdouble);
  extern void glMultiTexCoord3svARB (GLenum, GLshort *);
  extern void glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort);
  extern void glMultiTexCoord3ivARB (GLenum, GLint *);
  extern void glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint);
  extern void glMultiTexCoord3fvARB (GLenum, GLfloat *);
  extern void glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat);
  extern void glMultiTexCoord3dvARB (GLenum, GLdouble *);
  extern void glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble);
  extern void glMultiTexCoord2svARB (GLenum, GLshort *);
  extern void glMultiTexCoord2sARB (GLenum, GLshort, GLshort);
  extern void glMultiTexCoord2ivARB (GLenum, GLint *);
  extern void glMultiTexCoord2iARB (GLenum, GLint, GLint);
  extern void glMultiTexCoord2fvARB (GLenum, GLfloat *);
  extern void glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat);
  extern void glMultiTexCoord2dvARB (GLenum, GLdouble *);
  extern void glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble);
  extern void glMultiTexCoord1svARB (GLenum, GLshort *);
  extern void glMultiTexCoord1sARB (GLenum, GLshort);
  extern void glMultiTexCoord1ivARB (GLenum, GLint *);
  extern void glMultiTexCoord1iARB (GLenum, GLint);
  extern void glMultiTexCoord1fvARB (GLenum, GLfloat *);
  extern void glMultiTexCoord1fARB (GLenum, GLfloat);
  extern void glMultiTexCoord1dvARB (GLenum, GLdouble *);
  extern void glMultiTexCoord1dARB (GLenum, GLdouble);
  extern void glClientActiveTextureARB (GLenum);
  extern void glActiveTextureARB (GLenum);
  extern void glGetSeparableFilter (GLenum, GLenum, GLenum, GLvoid *,
				    GLvoid *, GLvoid *);
  extern void glSeparableFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum,
				   GLenum, GLvoid *, GLvoid *);
  extern void glGetConvolutionParameteriv (GLenum, GLenum, GLint *);
  extern void glGetConvolutionParameterfv (GLenum, GLenum, GLfloat *);
  extern void glGetConvolutionFilter (GLenum, GLenum, GLenum, GLvoid *);
  extern void glCopyConvolutionFilter2D (GLenum, GLenum, GLint, GLint,
					 GLsizei, GLsizei);
  extern void glCopyConvolutionFilter1D (GLenum, GLenum, GLint, GLint,
					 GLsizei);
  extern void glConvolutionParameteriv (GLenum, GLenum, GLint *);
  extern void glConvolutionParameteri (GLenum, GLenum, GLint);
  extern void glConvolutionParameterfv (GLenum, GLenum, GLfloat *);
  extern void glConvolutionParameterf (GLenum, GLenum, GLfloat);
  extern void glConvolutionFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum,
				     GLenum, GLvoid *);
  extern void glConvolutionFilter1D (GLenum, GLenum, GLsizei, GLenum, GLenum,
				     GLvoid *);
  extern void glGetMinmaxParameteriv (GLenum, GLenum, GLint *);
  extern void glGetMinmaxParameterfv (GLenum, GLenum, GLfloat *);
  extern void glGetMinmax (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
  extern void glResetMinmax (GLenum);
  extern void glMinmax (GLenum, GLenum, GLboolean);
  extern void glGetHistogramParameteriv (GLenum, GLenum, GLint *);
  extern void glGetHistogramParameterfv (GLenum, GLenum, GLfloat *);
  extern void glGetHistogram (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
  extern void glResetHistogram (GLenum);
  extern void glHistogram (GLenum, GLsizei, GLenum, GLboolean);
  extern void glBlendColor (GLclampf, GLclampf, GLclampf, GLclampf);
  extern void glBlendEquation (GLenum);
  extern void glGetColorTableParameteriv (GLenum, GLenum, GLint *);
  extern void glGetColorTableParameterfv (GLenum, GLenum, GLfloat *);
  extern void glGetColorTable (GLenum, GLenum, GLenum, GLvoid *);
  extern void glCopyColorTable (GLenum, GLenum, GLint, GLint, GLsizei);
  extern void glCopyColorSubTable (GLenum, GLsizei, GLint, GLint, GLsizei);
  extern void glColorTableParameterfv (GLenum, GLenum, GLfloat *);
  extern void glColorTableParameteriv (GLenum, GLenum, GLint *);
  extern void glColorSubTable (GLenum, GLsizei, GLsizei, GLenum, GLenum,
			       GLvoid *);
  extern void glColorTable (GLenum, GLenum, GLsizei, GLenum, GLenum,
			    GLvoid *);
  extern void glCopyTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLint,
				   GLint, GLsizei, GLsizei);
  extern void glTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei,
			       GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
  extern void glTexImage3D (GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei,
			    GLint, GLenum, GLenum, GLvoid *);
  extern void glDrawRangeElements (GLenum, GLuint, GLuint, GLsizei, GLenum,
				   GLvoid *);
#ifdef __cplusplus
}
#endif
#endif
