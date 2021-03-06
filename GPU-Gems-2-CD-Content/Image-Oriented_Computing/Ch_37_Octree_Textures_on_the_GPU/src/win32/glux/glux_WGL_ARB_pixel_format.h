// --------------------------------------------------------
#ifdef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
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

#ifndef __GLUX_WGL_ARB_pixel_format__
#define __GLUX_WGL_ARB_pixel_format__

GLUX_NEW_PLUGIN(WGL_ARB_pixel_format);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef WGL_NUMBER_PIXEL_FORMATS_ARB
#  define WGL_NUMBER_PIXEL_FORMATS_ARB 0x2000
#endif
#ifndef WGL_DRAW_TO_WINDOW_ARB
#  define WGL_DRAW_TO_WINDOW_ARB 0x2001
#endif
#ifndef WGL_DRAW_TO_BITMAP_ARB
#  define WGL_DRAW_TO_BITMAP_ARB 0x2002
#endif
#ifndef WGL_ACCELERATION_ARB
#  define WGL_ACCELERATION_ARB 0x2003
#endif
#ifndef WGL_NEED_PALETTE_ARB
#  define WGL_NEED_PALETTE_ARB 0x2004
#endif
#ifndef WGL_NEED_SYSTEM_PALETTE_ARB
#  define WGL_NEED_SYSTEM_PALETTE_ARB 0x2005
#endif
#ifndef WGL_SWAP_LAYER_BUFFERS_ARB
#  define WGL_SWAP_LAYER_BUFFERS_ARB 0x2006
#endif
#ifndef WGL_SWAP_METHOD_ARB
#  define WGL_SWAP_METHOD_ARB 0x2007
#endif
#ifndef WGL_NUMBER_OVERLAYS_ARB
#  define WGL_NUMBER_OVERLAYS_ARB 0x2008
#endif
#ifndef WGL_NUMBER_UNDERLAYS_ARB
#  define WGL_NUMBER_UNDERLAYS_ARB 0x2009
#endif
#ifndef WGL_TRANSPARENT_ARB
#  define WGL_TRANSPARENT_ARB 0x200A
#endif
#ifndef WGL_TRANSPARENT_RED_VALUE_ARB
#  define WGL_TRANSPARENT_RED_VALUE_ARB 0x2037
#endif
#ifndef WGL_TRANSPARENT_GREEN_VALUE_ARB
#  define WGL_TRANSPARENT_GREEN_VALUE_ARB 0x2038
#endif
#ifndef WGL_TRANSPARENT_BLUE_VALUE_ARB
#  define WGL_TRANSPARENT_BLUE_VALUE_ARB 0x2039
#endif
#ifndef WGL_TRANSPARENT_ALPHA_VALUE_ARB
#  define WGL_TRANSPARENT_ALPHA_VALUE_ARB 0x203A
#endif
#ifndef WGL_TRANSPARENT_INDEX_VALUE_ARB
#  define WGL_TRANSPARENT_INDEX_VALUE_ARB 0x203B
#endif
#ifndef WGL_SHARE_DEPTH_ARB
#  define WGL_SHARE_DEPTH_ARB 0x200C
#endif
#ifndef WGL_SHARE_STENCIL_ARB
#  define WGL_SHARE_STENCIL_ARB 0x200D
#endif
#ifndef WGL_SHARE_ACCUM_ARB
#  define WGL_SHARE_ACCUM_ARB 0x200E
#endif
#ifndef WGL_SUPPORT_GDI_ARB
#  define WGL_SUPPORT_GDI_ARB 0x200F
#endif
#ifndef WGL_SUPPORT_OPENGL_ARB
#  define WGL_SUPPORT_OPENGL_ARB 0x2010
#endif
#ifndef WGL_DOUBLE_BUFFER_ARB
#  define WGL_DOUBLE_BUFFER_ARB 0x2011
#endif
#ifndef WGL_STEREO_ARB
#  define WGL_STEREO_ARB 0x2012
#endif
#ifndef WGL_PIXEL_TYPE_ARB
#  define WGL_PIXEL_TYPE_ARB 0x2013
#endif
#ifndef WGL_COLOR_BITS_ARB
#  define WGL_COLOR_BITS_ARB 0x2014
#endif
#ifndef WGL_RED_BITS_ARB
#  define WGL_RED_BITS_ARB 0x2015
#endif
#ifndef WGL_RED_SHIFT_ARB
#  define WGL_RED_SHIFT_ARB 0x2016
#endif
#ifndef WGL_GREEN_BITS_ARB
#  define WGL_GREEN_BITS_ARB 0x2017
#endif
#ifndef WGL_GREEN_SHIFT_ARB
#  define WGL_GREEN_SHIFT_ARB 0x2018
#endif
#ifndef WGL_BLUE_BITS_ARB
#  define WGL_BLUE_BITS_ARB 0x2019
#endif
#ifndef WGL_BLUE_SHIFT_ARB
#  define WGL_BLUE_SHIFT_ARB 0x201A
#endif
#ifndef WGL_ALPHA_BITS_ARB
#  define WGL_ALPHA_BITS_ARB 0x201B
#endif
#ifndef WGL_ALPHA_SHIFT_ARB
#  define WGL_ALPHA_SHIFT_ARB 0x201C
#endif
#ifndef WGL_ACCUM_BITS_ARB
#  define WGL_ACCUM_BITS_ARB 0x201D
#endif
#ifndef WGL_ACCUM_RED_BITS_ARB
#  define WGL_ACCUM_RED_BITS_ARB 0x201E
#endif
#ifndef WGL_ACCUM_GREEN_BITS_ARB
#  define WGL_ACCUM_GREEN_BITS_ARB 0x201F
#endif
#ifndef WGL_ACCUM_BLUE_BITS_ARB
#  define WGL_ACCUM_BLUE_BITS_ARB 0x2020
#endif
#ifndef WGL_ACCUM_ALPHA_BITS_ARB
#  define WGL_ACCUM_ALPHA_BITS_ARB 0x2021
#endif
#ifndef WGL_DEPTH_BITS_ARB
#  define WGL_DEPTH_BITS_ARB 0x2022
#endif
#ifndef WGL_STENCIL_BITS_ARB
#  define WGL_STENCIL_BITS_ARB 0x2023
#endif
#ifndef WGL_AUX_BUFFERS_ARB
#  define WGL_AUX_BUFFERS_ARB 0x2024
#endif
#ifndef WGL_NO_ACCELERATION_ARB
#  define WGL_NO_ACCELERATION_ARB 0x2025
#endif
#ifndef WGL_GENERIC_ACCELERATION_ARB
#  define WGL_GENERIC_ACCELERATION_ARB 0x2026
#endif
#ifndef WGL_FULL_ACCELERATION_ARB
#  define WGL_FULL_ACCELERATION_ARB 0x2027
#endif
#ifndef WGL_SWAP_EXCHANGE_ARB
#  define WGL_SWAP_EXCHANGE_ARB 0x2028
#endif
#ifndef WGL_SWAP_COPY_ARB
#  define WGL_SWAP_COPY_ARB 0x2029
#endif
#ifndef WGL_SWAP_UNDEFINED_ARB
#  define WGL_SWAP_UNDEFINED_ARB 0x202A
#endif
#ifndef WGL_TYPE_RGBA_ARB
#  define WGL_TYPE_RGBA_ARB 0x202B
#endif
#ifndef WGL_TYPE_COLORINDEX_ARB
#  define WGL_TYPE_COLORINDEX_ARB 0x202C
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribivARB
typedef BOOL (APIENTRYP PFNWGLUXGETPIXELFORMATATTRIBIVARBPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues);
#endif
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribfvARB
typedef BOOL (APIENTRYP PFNWGLUXGETPIXELFORMATATTRIBFVARBPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues);
#endif
#ifndef __GLUX__GLFCT_wglChoosePixelFormatARB
typedef BOOL (APIENTRYP PFNWGLUXCHOOSEPIXELFORMATARBPROC) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribivARB
extern PFNWGLUXGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
#endif
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribfvARB
extern PFNWGLUXGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
#endif
#ifndef __GLUX__GLFCT_wglChoosePixelFormatARB
extern PFNWGLUXCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
