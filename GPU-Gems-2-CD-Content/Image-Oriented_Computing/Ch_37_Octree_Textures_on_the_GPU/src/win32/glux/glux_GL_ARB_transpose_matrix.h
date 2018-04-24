
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ARB_transpose_matrix__
#define __GLUX_GL_ARB_transpose_matrix__

GLUX_NEW_PLUGIN(GL_ARB_transpose_matrix);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_TRANSPOSE_MODELVIEW_MATRIX_ARB
#  define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#endif
#ifndef GL_TRANSPOSE_PROJECTION_MATRIX_ARB
#  define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#endif
#ifndef GL_TRANSPOSE_TEXTURE_MATRIX_ARB
#  define GL_TRANSPOSE_TEXTURE_MATRIX_ARB 0x84E5
#endif
#ifndef GL_TRANSPOSE_COLOR_MATRIX_ARB
#  define GL_TRANSPOSE_COLOR_MATRIX_ARB 0x84E6
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glLoadTransposeMatrixfARB
typedef void (APIENTRYP PFNGLUXLOADTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
#endif
#ifndef __GLUX__GLFCT_glLoadTransposeMatrixdARB
typedef void (APIENTRYP PFNGLUXLOADTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);
#endif
#ifndef __GLUX__GLFCT_glMultTransposeMatrixfARB
typedef void (APIENTRYP PFNGLUXMULTTRANSPOSEMATRIXFARBPROC) (const GLfloat *m);
#endif
#ifndef __GLUX__GLFCT_glMultTransposeMatrixdARB
typedef void (APIENTRYP PFNGLUXMULTTRANSPOSEMATRIXDARBPROC) (const GLdouble *m);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glLoadTransposeMatrixfARB
extern PFNGLUXLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;
#endif
#ifndef __GLUX__GLFCT_glLoadTransposeMatrixdARB
extern PFNGLUXLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;
#endif
#ifndef __GLUX__GLFCT_glMultTransposeMatrixfARB
extern PFNGLUXMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;
#endif
#ifndef __GLUX__GLFCT_glMultTransposeMatrixdARB
extern PFNGLUXMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------