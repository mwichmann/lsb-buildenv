#ifndef _GL_GL_H_
#define _GL_GL_H_







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



#define GL_MATRIX_MODE	0x0BA0
#define GL_MODELVIEW	0x1700
#define GL_PROJECTION	0x1701
#define GL_TEXTURE	0x1702







































void glAccum (GLenum, GLfloat);
void glAlphaFunc (GLenum, GLclampf);
GLboolean glAreTexturesResident (GLsizei, GLuint *, GLboolean *);
void glArrayElement (GLint);
void glBegin (GLenum);
void glBindTexture (GLenum, GLuint);
void glBitmap (GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat,
	       GLubyte *);
void glCallList (GLuint);
void glCallLists (GLsizei, GLenum, GLvoid *);
void glClear (GLbitfield);
void glClearAccum (GLfloat, GLfloat, GLfloat, GLfloat);
void glClearColor (GLclampf, GLclampf, GLclampf, GLclampf);
void glClearDepth (GLclampd);
void glClearIndex (GLfloat);
void glClearStencil (GLint);
void glClipPlane (GLenum, GLdouble *);
void glColor3b (GLbyte, GLbyte, GLbyte);
void glColor3bv (GLbyte *);
void glColor3d (GLdouble, GLdouble, GLdouble);
void glColor3dv (GLdouble *);
void glColor3f (GLfloat, GLfloat, GLfloat);
void glColor3fv (GLfloat *);
void glColor3i (GLint, GLint, GLint);
void glColor3iv (GLint *);
void glColor3s (GLshort, GLshort, GLshort);
void glColor3sv (GLshort *);
void glColor3ub (GLubyte, GLubyte, GLubyte);
void glColor3ubv (GLubyte *);
void glColor3ui (GLuint, GLuint, GLuint);
void glColor3uiv (GLuint *);
void glColor3us (GLushort, GLushort, GLushort);
void glColor3usv (GLushort *);
void glColor4b (GLbyte, GLbyte, GLbyte, GLbyte);
void glColor4bv (GLbyte *);
void glColor4d (GLdouble, GLdouble, GLdouble, GLdouble);
void glColor4dv (GLdouble *);
void glColor4f (GLfloat, GLfloat, GLfloat, GLfloat);
void glColor4fv (GLfloat *);
void glColor4i (GLint, GLint, GLint, GLint);
void glColor4iv (GLint *);
void glColor4s (GLshort, GLshort, GLshort, GLshort);
void glColor4sv (GLshort *);
void glColor4ub (GLubyte, GLubyte, GLubyte, GLubyte);
void glColor4ubv (GLubyte *);
void glColor4ui (GLuint, GLuint, GLuint, GLuint);
void glColor4uiv (GLuint *);
void glColor4us (GLushort, GLushort, GLushort, GLushort);
void glColor4usv (GLushort *);
void glColorMask (GLboolean, GLboolean, GLboolean, GLboolean);
void glColorMaterial (GLenum, GLenum);
void glColorPointer (GLint, GLenum, GLsizei, GLvoid *);
void glCopyPixels (GLint, GLint, GLsizei, GLsizei, GLenum);
void glCopyTexImage1D (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
void glCopyTexImage2D (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei,
		       GLint);
void glCopyTexSubImage1D (GLenum, GLint, GLint, GLint, GLint, GLsizei);
void glCopyTexSubImage2D (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei,
			  GLsizei);
void glCullFace (GLenum);
void glDeleteLists (GLuint, GLsizei);
void glDeleteTextures (GLsizei, GLuint *);
void glDepthFunc (GLenum);
void glDepthMask (GLboolean);
void glDepthRange (GLclampd, GLclampd);
void glDisable (GLenum);
void glDisableClientState (GLenum);
void glDrawArrays (GLenum, GLint, GLsizei);
void glDrawBuffer (GLenum);
void glDrawElements (GLenum, GLsizei, GLenum, GLvoid *);
void glDrawPixels (GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
void glEdgeFlag (GLboolean);
void glEdgeFlagPointer (GLsizei, GLvoid *);
void glEdgeFlagv (GLboolean *);
void glEnable (GLenum);
void glEnableClientState (GLenum);
void glEnd (void);
void glEndList (void);
void glEvalCoord1d (GLdouble);
void glEvalCoord1dv (GLdouble *);
void glEvalCoord1f (GLfloat);
void glEvalCoord1fv (GLfloat *);
void glEvalCoord2d (GLdouble, GLdouble);
void glEvalCoord2dv (GLdouble *);
void glEvalCoord2f (GLfloat, GLfloat);
void glEvalCoord2fv (GLfloat *);
void glEvalMesh1 (GLenum, GLint, GLint);
void glEvalMesh2 (GLenum, GLint, GLint, GLint, GLint);
void glEvalPoint1 (GLint);
void glEvalPoint2 (GLint, GLint);
void glFeedbackBuffer (GLsizei, GLenum, GLfloat *);
void glFinish (void);
void glFlush (void);
void glFogf (GLenum, GLfloat);
void glFogfv (GLenum, GLfloat *);
void glFogi (GLenum, GLint);
void glFogiv (GLenum, GLint *);
void glFrontFace (GLenum);
void glFrustum (GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
GLuint glGenLists (GLsizei);
void glGenTextures (GLsizei, GLuint *);
void glGetBooleanv (GLenum, GLboolean *);
void glGetClipPlane (GLenum, GLdouble *);
void glGetDoublev (GLenum, GLdouble *);
GLenum glGetError (void);
void glGetFloatv (GLenum, GLfloat *);
void glGetIntegerv (GLenum, GLint *);
void glGetLightfv (GLenum, GLenum, GLfloat *);
void glGetLightiv (GLenum, GLenum, GLint *);
void glGetMapdv (GLenum, GLenum, GLdouble *);
void glGetMapfv (GLenum, GLenum, GLfloat *);
void glGetMapiv (GLenum, GLenum, GLint *);
void glGetMaterialfv (GLenum, GLenum, GLfloat *);
void glGetMaterialiv (GLenum, GLenum, GLint *);
void glGetPixelMapfv (GLenum, GLfloat *);
void glGetPixelMapuiv (GLenum, GLuint *);
void glGetPixelMapusv (GLenum, GLushort *);
void glGetPointerv (GLenum, void **);
void glGetPolygonStipple (GLubyte *);
GLubyte *glGetString (GLenum);
void glGetTexEnvfv (GLenum, GLenum, GLfloat *);
void glGetTexEnviv (GLenum, GLenum, GLint *);
void glGetTexGendv (GLenum, GLenum, GLdouble *);
void glGetTexGenfv (GLenum, GLenum, GLfloat *);
void glGetTexGeniv (GLenum, GLenum, GLint *);
void glGetTexImage (GLenum, GLint, GLenum, GLenum, GLvoid *);
void glGetTexLevelParameterfv (GLenum, GLint, GLenum, GLfloat *);
void glGetTexLevelParameteriv (GLenum, GLint, GLenum, GLint *);
void glGetTexParameterfv (GLenum, GLenum, GLfloat *);
void glGetTexParameteriv (GLenum, GLenum, GLint *);
void glHint (GLenum, GLenum);
void glIndexMask (GLuint);
void glIndexPointer (GLenum, GLsizei, GLvoid *);
void glIndexd (GLdouble);
void glIndexdv (GLdouble *);
void glIndexf (GLfloat);
void glIndexfv (GLfloat *);
void glIndexi (GLint);
void glIndexiv (GLint *);
void glIndexs (GLshort);
void glIndexsv (GLshort *);
void glIndexub (GLubyte);
void glIndexubv (GLubyte *);
void glInitNames (void);
void glInterleavedArrays (GLenum, GLsizei, GLvoid *);
GLboolean glIsEnabled (GLenum);
GLboolean glIsList (GLuint);
GLboolean glIsTexture (GLuint);
void glLightModelf (GLenum, GLfloat);
void glLightModelfv (GLenum, GLfloat *);
void glLightModeli (GLenum, GLint);
void glLightModeliv (GLenum, GLint *);
void glLightf (GLenum, GLenum, GLfloat);
void glLightfv (GLenum, GLenum, GLfloat *);
void glLighti (GLenum, GLenum, GLint);
void glLightiv (GLenum, GLenum, GLint *);
void glLineStipple (GLint, GLushort);
void glLineWidth (GLfloat);
void glListBase (GLuint);
void glLoadIdentity (void);
void glLoadMatrixd (GLdouble *);
void glLoadMatrixf (GLfloat *);
void glLoadName (GLuint);
void glLogicOp (GLenum);
void glMap1d (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble *);
void glMap1f (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat *);
void glMap2d (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble,
	      GLint, GLint, GLdouble *);
void glMap2f (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint,
	      GLint, GLfloat *);
void glMapGrid1d (GLint, GLdouble, GLdouble);
void glMapGrid1f (GLint, GLfloat, GLfloat);
void glMapGrid2d (GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);
void glMapGrid2f (GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
void glMaterialf (GLenum, GLenum, GLfloat);
void glMaterialfv (GLenum, GLenum, GLfloat *);
void glMateriali (GLenum, GLenum, GLint);
void glMaterialiv (GLenum, GLenum, GLint *);
void glMatrixMode (GLenum);
void glMultMatrixd (GLdouble *);
void glMultMatrixf (GLfloat *);
void glNewList (GLuint, GLenum);
void glNormal3b (GLbyte, GLbyte, GLbyte);
void glNormal3bv (GLbyte *);
void glNormal3d (GLdouble, GLdouble, GLdouble);
void glNormal3dv (GLdouble *);
void glNormal3f (GLfloat, GLfloat, GLfloat);
void glNormal3fv (GLfloat *);
void glNormal3i (GLint, GLint, GLint);
void glNormal3iv (GLint *);
void glNormal3s (GLshort, GLshort, GLshort);
void glNormal3sv (GLshort *);
void glNormalPointer (GLenum, GLsizei, GLvoid *);
void glOrtho (GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
void glPassThrough (GLfloat);
void glPixelMapfv (GLenum, GLint, GLfloat *);
void glPixelMapuiv (GLenum, GLint, GLuint *);
void glPixelMapusv (GLenum, GLint, GLushort *);
void glPixelStoref (GLenum, GLfloat);
void glPixelStorei (GLenum, GLint);
void glPixelTransferf (GLenum, GLfloat);
void glPixelTransferi (GLenum, GLint);
void glPixelZoom (GLfloat, GLfloat);
void glPointSize (GLfloat);
void glPolygonMode (GLenum, GLenum);
void glPolygonOffset (GLfloat, GLfloat);
void glPolygonStipple (GLubyte *);
void glPopAttrib (void);
void glPopClientAttrib (void);
void glPopMatrix (void);
void glPopName (void);
void glPrioritizeTextures (GLsizei, GLuint *, GLclampf *);
void glPushAttrib (GLbitfield);
void glPushClientAttrib (GLbitfield);
void glPushMatrix (void);
void glPushName (GLuint);
void glRasterPos2d (GLdouble, GLdouble);
void glRasterPos2dv (GLdouble *);
void glRasterPos2f (GLfloat, GLfloat);
void glRasterPos2fv (GLfloat *);
void glRasterPos2i (GLint, GLint);
void glRasterPos2iv (GLint *);
void glRasterPos2s (GLshort, GLshort);
void glRasterPos2sv (GLshort *);
void glRasterPos3d (GLdouble, GLdouble, GLdouble);
void glRasterPos3dv (GLdouble *);
void glRasterPos3f (GLfloat, GLfloat, GLfloat);
void glRasterPos3fv (GLfloat *);
void glRasterPos3i (GLint, GLint, GLint);
void glRasterPos3iv (GLint *);
void glRasterPos3s (GLshort, GLshort, GLshort);
void glRasterPos3sv (GLshort *);
void glRasterPos4d (GLdouble, GLdouble, GLdouble, GLdouble);
void glRasterPos4dv (GLdouble *);
void glRasterPos4f (GLfloat, GLfloat, GLfloat, GLfloat);
void glRasterPos4fv (GLfloat *);
void glRasterPos4i (GLint, GLint, GLint, GLint);
void glRasterPos4iv (GLint *);
void glRasterPos4s (GLshort, GLshort, GLshort, GLshort);
void glRasterPos4sv (GLshort *);
void glReadBuffer (GLenum);
void glReadPixels (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
void glRectd (GLdouble, GLdouble, GLdouble, GLdouble);
void glRectdv (GLdouble *, GLdouble *);
void glRectf (GLfloat, GLfloat, GLfloat, GLfloat);
void glRectfv (GLfloat *, GLfloat *);
void glRecti (GLint, GLint, GLint, GLint);
void glRectiv (GLint *, GLint *);
void glRects (GLshort, GLshort, GLshort, GLshort);
void glRectsv (GLshort *, GLshort *);
GLint glRenderMode (GLenum);
void glRotated (GLdouble, GLdouble, GLdouble, GLdouble);
void glRotatef (GLfloat, GLfloat, GLfloat, GLfloat);
void glScaled (GLdouble, GLdouble, GLdouble);
void glScalef (GLfloat, GLfloat, GLfloat);
void glScissor (GLint, GLint, GLsizei, GLsizei);
void glSelectBuffer (GLsizei, GLuint *);
void glShadeModel (GLenum);
void glStencilFunc (GLenum, GLint, GLuint);
void glStencilMask (GLuint);
void glStencilOp (GLenum, GLenum, GLenum);
void glTexCoord1d (GLdouble);
void glTexCoord1dv (GLdouble *);
void glTexCoord1f (GLfloat);
void glTexCoord1fv (GLfloat *);
void glTexCoord1i (GLint);
void glTexCoord1iv (GLint *);
void glTexCoord1s (GLshort);
void glTexCoord1sv (GLshort *);
void glTexCoord2d (GLdouble, GLdouble);
void glTexCoord2dv (GLdouble *);
void glTexCoord2f (GLfloat, GLfloat);
void glTexCoord2fv (GLfloat *);
void glTexCoord2i (GLint, GLint);
void glTexCoord2iv (GLint *);
void glTexCoord2s (GLshort, GLshort);
void glTexCoord2sv (GLshort *);
void glTexCoord3d (GLdouble, GLdouble, GLdouble);
void glTexCoord3dv (GLdouble *);
void glTexCoord3f (GLfloat, GLfloat, GLfloat);
void glTexCoord3fv (GLfloat *);
void glTexCoord3i (GLint, GLint, GLint);
void glTexCoord3iv (GLint *);
void glTexCoord3s (GLshort, GLshort, GLshort);
void glTexCoord3sv (GLshort *);
void glTexCoord4d (GLdouble, GLdouble, GLdouble, GLdouble);
void glTexCoord4dv (GLdouble *);
void glTexCoord4f (GLfloat, GLfloat, GLfloat, GLfloat);
void glTexCoord4fv (GLfloat *);
void glTexCoord4i (GLint, GLint, GLint, GLint);
void glTexCoord4iv (GLint *);
void glTexCoord4s (GLshort, GLshort, GLshort, GLshort);
void glTexCoord4sv (GLshort *);
void glTexCoordPointer (GLint, GLenum, GLsizei, GLvoid *);
void glTexEnvf (GLenum, GLenum, GLfloat);
void glTexEnvfv (GLenum, GLenum, GLfloat *);
void glTexEnvi (GLenum, GLenum, GLint);
void glTexEnviv (GLenum, GLenum, GLint *);
void glTexGend (GLenum, GLenum, GLdouble);
void glTexGendv (GLenum, GLenum, GLdouble *);
void glTexGenf (GLenum, GLenum, GLfloat);
void glTexGenfv (GLenum, GLenum, GLfloat *);
void glTexGeni (GLenum, GLenum, GLint);
void glTexGeniv (GLenum, GLenum, GLint *);
void glTexImage1D (GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum,
		   GLvoid *);
void glTexImage2D (GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum,
		   GLenum, GLvoid *);
void glTexParameterf (GLenum, GLenum, GLfloat);
void glTexParameterfv (GLenum, GLenum, GLfloat *);
void glTexParameteri (GLenum, GLenum, GLint);
void glTexParameteriv (GLenum, GLenum, GLint *);
void glTexSubImage1D (GLenum, GLint, GLint, GLsizei, GLenum, GLenum,
		      GLvoid *);
void glTexSubImage2D (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum,
		      GLenum, GLvoid *);
void glTranslated (GLdouble, GLdouble, GLdouble);
void glTranslatef (GLfloat, GLfloat, GLfloat);
void glVertex2d (GLdouble, GLdouble);
void glVertex2dv (GLdouble *);
void glVertex2f (GLfloat, GLfloat);
void glVertex2fv (GLfloat *);
void glVertex2i (GLint, GLint);
void glVertex2iv (GLint *);
void glVertex2s (GLshort, GLshort);
void glVertex2sv (GLshort *);
void glVertex3d (GLdouble, GLdouble, GLdouble);
void glVertex3dv (GLdouble *);
void glVertex3f (GLfloat, GLfloat, GLfloat);
void glVertex3fv (GLfloat *);
void glVertex3i (GLint, GLint, GLint);
void glVertex3iv (GLint *);
void glVertex3s (GLshort, GLshort, GLshort);
void glVertex3sv (GLshort *);
void glVertex4d (GLdouble, GLdouble, GLdouble, GLdouble);
void glVertex4dv (GLdouble *);
void glVertex4f (GLfloat, GLfloat, GLfloat, GLfloat);
void glVertex4fv (GLfloat *);
void glVertex4i (GLint, GLint, GLint, GLint);
void glVertex4iv (GLint *);
void glVertex4s (GLshort, GLshort, GLshort, GLshort);
void glVertex4sv (GLshort *);
void glVertexPointer (GLint, GLenum, GLsizei, GLvoid *);
void glViewport (GLint, GLint, GLsizei, GLsizei);
void glMultiTexCoord4svARB (GLenum, GLshort *);
void glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort);
void glMultiTexCoord4ivARB (GLenum, GLint *);
void glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint);
void glMultiTexCoord4fvARB (GLenum, GLfloat *);
void glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat);
void glMultiTexCoord4dvARB (GLenum, GLdouble *);
void glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble);
void glMultiTexCoord3svARB (GLenum, GLshort *);
void glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort);
void glMultiTexCoord3ivARB (GLenum, GLint *);
void glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint);
void glMultiTexCoord3fvARB (GLenum, GLfloat *);
void glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat);
void glMultiTexCoord3dvARB (GLenum, GLdouble *);
void glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble);
void glMultiTexCoord2svARB (GLenum, GLshort *);
void glMultiTexCoord2sARB (GLenum, GLshort, GLshort);
void glMultiTexCoord2ivARB (GLenum, GLint *);
void glMultiTexCoord2iARB (GLenum, GLint, GLint);
void glMultiTexCoord2fvARB (GLenum, GLfloat *);
void glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat);
void glMultiTexCoord2dvARB (GLenum, GLdouble *);
void glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble);
void glMultiTexCoord1svARB (GLenum, GLshort *);
void glMultiTexCoord1sARB (GLenum, GLshort);
void glMultiTexCoord1ivARB (GLenum, GLint *);
void glMultiTexCoord1iARB (GLenum, GLint);
void glMultiTexCoord1fvARB (GLenum, GLfloat *);
void glMultiTexCoord1fARB (GLenum, GLfloat);
void glMultiTexCoord1dvARB (GLenum, GLdouble *);
void glMultiTexCoord1dARB (GLenum, GLdouble);
void glClientActiveTextureARB (GLenum);
void glActiveTextureARB (GLenum);
void glGetSeparableFilter (GLenum, GLenum, GLenum, GLvoid *, GLvoid *,
			   GLvoid *);
void glSeparableFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum,
			  GLvoid *, GLvoid *);
void glGetConvolutionParameteriv (GLenum, GLenum, GLint *);
void glGetConvolutionParameterfv (GLenum, GLenum, GLfloat *);
void glGetConvolutionFilter (GLenum, GLenum, GLenum, GLvoid *);
void glCopyConvolutionFilter2D (GLenum, GLenum, GLint, GLint, GLsizei,
				GLsizei);
void glCopyConvolutionFilter1D (GLenum, GLenum, GLint, GLint, GLsizei);
void glConvolutionParameteriv (GLenum, GLenum, GLint *);
void glConvolutionParameteri (GLenum, GLenum, GLint);
void glConvolutionParameterfv (GLenum, GLenum, GLfloat *);
void glConvolutionParameterf (GLenum, GLenum, GLfloat);
void glConvolutionFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum,
			    GLvoid *);
void glConvolutionFilter1D (GLenum, GLenum, GLsizei, GLenum, GLenum,
			    GLvoid *);
void glGetMinmaxParameteriv (GLenum, GLenum, GLint *);
void glGetMinmaxParameterfv (GLenum, GLenum, GLfloat *);
void glGetMinmax (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
void glResetMinmax (GLenum);
void glMinmax (GLenum, GLenum, GLboolean);
void glGetHistogramParameteriv (GLenum, GLenum, GLint *);
void glGetHistogramParameterfv (GLenum, GLenum, GLfloat *);
void glGetHistogram (GLenum, GLboolean, GLenum, GLenum, GLvoid *);
void glResetHistogram (GLenum);
void glHistogram (GLenum, GLsizei, GLenum, GLboolean);
void glGetColorTableParameteriv (GLenum, GLenum, GLint *);
void glGetColorTableParameterfv (GLenum, GLenum, GLfloat *);
void glGetColorTable (GLenum, GLenum, GLenum, GLvoid *);
void glCopyColorTable (GLenum, GLenum, GLint, GLint, GLsizei);
void glCopyColorSubTable (GLenum, GLsizei, GLint, GLint, GLsizei);
void glColorTableParameterfv (GLenum, GLenum, GLfloat *);
void glColorTableParameteriv (GLenum, GLenum, GLint *);
void glColorSubTable (GLenum, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
void glColorTable (GLenum, GLenum, GLsizei, GLenum, GLenum, GLvoid *);
void glCopyTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLint, GLint,
			  GLsizei, GLsizei);
void glTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei,
		      GLsizei, GLenum, GLenum, GLvoid *);
void glTexImage3D (GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint,
		   GLenum, GLenum, GLvoid *);
void glDrawRangeElements (GLenum, GLuint, GLuint, GLsizei, GLenum, GLvoid *);
#endif
