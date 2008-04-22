#if (__LSB_VERSION__ >= 10 )
#ifndef _GL_GLEXT_H_
#define _GL_GLEXT_H_

#include <GL/gl.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 10
    typedef unsigned int GLhandleARB;

    typedef long int GLintptr;

    typedef char GLchar;

    typedef char GLcharARB;

    typedef ptrdiff_t GLsizeiptr;

    typedef ptrdiff_t GLsizeiptrARB;

    typedef long int GLintptrARB;

#endif				/* __LSB_VERSION__ >= 1.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
#if __LSB_VERSION__ < 13
    extern void glBlendColorEXT(GLclampf, GLclampf, GLclampf, GLclampf);
    extern void glBlendEquationEXT(GLenum);
#endif				/* __LSB_VERSION__ < 1.3 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 13
    extern void glPointParameterfvEXT(GLenum, const GLfloat *);
#endif				/* __LSB_VERSION__ < 1.3 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
