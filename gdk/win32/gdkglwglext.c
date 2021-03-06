/* GdkGLExt - OpenGL Extension to GDK
 * Copyright (C) 2002-2004  Naofumi Yasufuku
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.
 */

/*
 * This is a generated file.  Please modify "gen-gdkglwglext-c.pl".
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#include "gdkglwin32.h"
#include "gdkglprivate-win32.h"
#include "gdkglwglext.h"

/*
 * WGL_ARB_buffer_region
 */

static GdkGL_WGL_ARB_buffer_region _procs_WGL_ARB_buffer_region = {
  (GdkGLProc_wglCreateBufferRegionARB) -1,
  (GdkGLProc_wglDeleteBufferRegionARB) -1,
  (GdkGLProc_wglSaveBufferRegionARB) -1,
  (GdkGLProc_wglRestoreBufferRegionARB) -1
};

/* wglCreateBufferRegionARB */
GdkGLProc
gdk_gl_get_wglCreateBufferRegionARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_buffer_region.wglCreateBufferRegionARB == (GdkGLProc_wglCreateBufferRegionARB) -1)
    _procs_WGL_ARB_buffer_region.wglCreateBufferRegionARB =
      (GdkGLProc_wglCreateBufferRegionARB) gdk_gl_get_proc_address ("wglCreateBufferRegionARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateBufferRegionARB () - %s",
               (_procs_WGL_ARB_buffer_region.wglCreateBufferRegionARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_buffer_region.wglCreateBufferRegionARB);
}

/* wglDeleteBufferRegionARB */
GdkGLProc
gdk_gl_get_wglDeleteBufferRegionARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_buffer_region.wglDeleteBufferRegionARB == (GdkGLProc_wglDeleteBufferRegionARB) -1)
    _procs_WGL_ARB_buffer_region.wglDeleteBufferRegionARB =
      (GdkGLProc_wglDeleteBufferRegionARB) gdk_gl_get_proc_address ("wglDeleteBufferRegionARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDeleteBufferRegionARB () - %s",
               (_procs_WGL_ARB_buffer_region.wglDeleteBufferRegionARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_buffer_region.wglDeleteBufferRegionARB);
}

/* wglSaveBufferRegionARB */
GdkGLProc
gdk_gl_get_wglSaveBufferRegionARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_buffer_region.wglSaveBufferRegionARB == (GdkGLProc_wglSaveBufferRegionARB) -1)
    _procs_WGL_ARB_buffer_region.wglSaveBufferRegionARB =
      (GdkGLProc_wglSaveBufferRegionARB) gdk_gl_get_proc_address ("wglSaveBufferRegionARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSaveBufferRegionARB () - %s",
               (_procs_WGL_ARB_buffer_region.wglSaveBufferRegionARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_buffer_region.wglSaveBufferRegionARB);
}

/* wglRestoreBufferRegionARB */
GdkGLProc
gdk_gl_get_wglRestoreBufferRegionARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_buffer_region.wglRestoreBufferRegionARB == (GdkGLProc_wglRestoreBufferRegionARB) -1)
    _procs_WGL_ARB_buffer_region.wglRestoreBufferRegionARB =
      (GdkGLProc_wglRestoreBufferRegionARB) gdk_gl_get_proc_address ("wglRestoreBufferRegionARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglRestoreBufferRegionARB () - %s",
               (_procs_WGL_ARB_buffer_region.wglRestoreBufferRegionARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_buffer_region.wglRestoreBufferRegionARB);
}

/* Get WGL_ARB_buffer_region functions */
GdkGL_WGL_ARB_buffer_region *
gdk_gl_get_WGL_ARB_buffer_region (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_buffer_region");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreateBufferRegionARB () != NULL);
          supported &= (gdk_gl_get_wglDeleteBufferRegionARB () != NULL);
          supported &= (gdk_gl_get_wglSaveBufferRegionARB () != NULL);
          supported &= (gdk_gl_get_wglRestoreBufferRegionARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_buffer_region () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_buffer_region;
}

/*
 * WGL_ARB_extensions_string
 */

static GdkGL_WGL_ARB_extensions_string _procs_WGL_ARB_extensions_string = {
  (GdkGLProc_wglGetExtensionsStringARB) -1
};

/* wglGetExtensionsStringARB */
GdkGLProc
gdk_gl_get_wglGetExtensionsStringARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_extensions_string.wglGetExtensionsStringARB == (GdkGLProc_wglGetExtensionsStringARB) -1)
    _procs_WGL_ARB_extensions_string.wglGetExtensionsStringARB =
      (GdkGLProc_wglGetExtensionsStringARB) gdk_gl_get_proc_address ("wglGetExtensionsStringARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetExtensionsStringARB () - %s",
               (_procs_WGL_ARB_extensions_string.wglGetExtensionsStringARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_extensions_string.wglGetExtensionsStringARB);
}

/* Get WGL_ARB_extensions_string functions */
GdkGL_WGL_ARB_extensions_string *
gdk_gl_get_WGL_ARB_extensions_string (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_extensions_string");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetExtensionsStringARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_extensions_string () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_extensions_string;
}

/*
 * WGL_ARB_pixel_format
 */

static GdkGL_WGL_ARB_pixel_format _procs_WGL_ARB_pixel_format = {
  (GdkGLProc_wglGetPixelFormatAttribivARB) -1,
  (GdkGLProc_wglGetPixelFormatAttribfvARB) -1,
  (GdkGLProc_wglChoosePixelFormatARB) -1
};

/* wglGetPixelFormatAttribivARB */
GdkGLProc
gdk_gl_get_wglGetPixelFormatAttribivARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribivARB == (GdkGLProc_wglGetPixelFormatAttribivARB) -1)
    _procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribivARB =
      (GdkGLProc_wglGetPixelFormatAttribivARB) gdk_gl_get_proc_address ("wglGetPixelFormatAttribivARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPixelFormatAttribivARB () - %s",
               (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribivARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribivARB);
}

/* wglGetPixelFormatAttribfvARB */
GdkGLProc
gdk_gl_get_wglGetPixelFormatAttribfvARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribfvARB == (GdkGLProc_wglGetPixelFormatAttribfvARB) -1)
    _procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribfvARB =
      (GdkGLProc_wglGetPixelFormatAttribfvARB) gdk_gl_get_proc_address ("wglGetPixelFormatAttribfvARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPixelFormatAttribfvARB () - %s",
               (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribfvARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pixel_format.wglGetPixelFormatAttribfvARB);
}

/* wglChoosePixelFormatARB */
GdkGLProc
gdk_gl_get_wglChoosePixelFormatARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pixel_format.wglChoosePixelFormatARB == (GdkGLProc_wglChoosePixelFormatARB) -1)
    _procs_WGL_ARB_pixel_format.wglChoosePixelFormatARB =
      (GdkGLProc_wglChoosePixelFormatARB) gdk_gl_get_proc_address ("wglChoosePixelFormatARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglChoosePixelFormatARB () - %s",
               (_procs_WGL_ARB_pixel_format.wglChoosePixelFormatARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pixel_format.wglChoosePixelFormatARB);
}

/* Get WGL_ARB_pixel_format functions */
GdkGL_WGL_ARB_pixel_format *
gdk_gl_get_WGL_ARB_pixel_format (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_pixel_format");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetPixelFormatAttribivARB () != NULL);
          supported &= (gdk_gl_get_wglGetPixelFormatAttribfvARB () != NULL);
          supported &= (gdk_gl_get_wglChoosePixelFormatARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_pixel_format () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_pixel_format;
}

/*
 * WGL_ARB_make_current_read
 */

static GdkGL_WGL_ARB_make_current_read _procs_WGL_ARB_make_current_read = {
  (GdkGLProc_wglMakeContextCurrentARB) -1,
  (GdkGLProc_wglGetCurrentReadDCARB) -1
};

/* wglMakeContextCurrentARB */
GdkGLProc
gdk_gl_get_wglMakeContextCurrentARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_make_current_read.wglMakeContextCurrentARB == (GdkGLProc_wglMakeContextCurrentARB) -1)
    _procs_WGL_ARB_make_current_read.wglMakeContextCurrentARB =
      (GdkGLProc_wglMakeContextCurrentARB) gdk_gl_get_proc_address ("wglMakeContextCurrentARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglMakeContextCurrentARB () - %s",
               (_procs_WGL_ARB_make_current_read.wglMakeContextCurrentARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_make_current_read.wglMakeContextCurrentARB);
}

/* wglGetCurrentReadDCARB */
GdkGLProc
gdk_gl_get_wglGetCurrentReadDCARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_make_current_read.wglGetCurrentReadDCARB == (GdkGLProc_wglGetCurrentReadDCARB) -1)
    _procs_WGL_ARB_make_current_read.wglGetCurrentReadDCARB =
      (GdkGLProc_wglGetCurrentReadDCARB) gdk_gl_get_proc_address ("wglGetCurrentReadDCARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetCurrentReadDCARB () - %s",
               (_procs_WGL_ARB_make_current_read.wglGetCurrentReadDCARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_make_current_read.wglGetCurrentReadDCARB);
}

/* Get WGL_ARB_make_current_read functions */
GdkGL_WGL_ARB_make_current_read *
gdk_gl_get_WGL_ARB_make_current_read (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_make_current_read");

      if (supported)
        {
          supported &= (gdk_gl_get_wglMakeContextCurrentARB () != NULL);
          supported &= (gdk_gl_get_wglGetCurrentReadDCARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_make_current_read () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_make_current_read;
}

/*
 * WGL_ARB_pbuffer
 */

static GdkGL_WGL_ARB_pbuffer _procs_WGL_ARB_pbuffer = {
  (GdkGLProc_wglCreatePbufferARB) -1,
  (GdkGLProc_wglGetPbufferDCARB) -1,
  (GdkGLProc_wglReleasePbufferDCARB) -1,
  (GdkGLProc_wglDestroyPbufferARB) -1,
  (GdkGLProc_wglQueryPbufferARB) -1
};

/* wglCreatePbufferARB */
GdkGLProc
gdk_gl_get_wglCreatePbufferARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pbuffer.wglCreatePbufferARB == (GdkGLProc_wglCreatePbufferARB) -1)
    _procs_WGL_ARB_pbuffer.wglCreatePbufferARB =
      (GdkGLProc_wglCreatePbufferARB) gdk_gl_get_proc_address ("wglCreatePbufferARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreatePbufferARB () - %s",
               (_procs_WGL_ARB_pbuffer.wglCreatePbufferARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pbuffer.wglCreatePbufferARB);
}

/* wglGetPbufferDCARB */
GdkGLProc
gdk_gl_get_wglGetPbufferDCARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pbuffer.wglGetPbufferDCARB == (GdkGLProc_wglGetPbufferDCARB) -1)
    _procs_WGL_ARB_pbuffer.wglGetPbufferDCARB =
      (GdkGLProc_wglGetPbufferDCARB) gdk_gl_get_proc_address ("wglGetPbufferDCARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPbufferDCARB () - %s",
               (_procs_WGL_ARB_pbuffer.wglGetPbufferDCARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pbuffer.wglGetPbufferDCARB);
}

/* wglReleasePbufferDCARB */
GdkGLProc
gdk_gl_get_wglReleasePbufferDCARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pbuffer.wglReleasePbufferDCARB == (GdkGLProc_wglReleasePbufferDCARB) -1)
    _procs_WGL_ARB_pbuffer.wglReleasePbufferDCARB =
      (GdkGLProc_wglReleasePbufferDCARB) gdk_gl_get_proc_address ("wglReleasePbufferDCARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleasePbufferDCARB () - %s",
               (_procs_WGL_ARB_pbuffer.wglReleasePbufferDCARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pbuffer.wglReleasePbufferDCARB);
}

/* wglDestroyPbufferARB */
GdkGLProc
gdk_gl_get_wglDestroyPbufferARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pbuffer.wglDestroyPbufferARB == (GdkGLProc_wglDestroyPbufferARB) -1)
    _procs_WGL_ARB_pbuffer.wglDestroyPbufferARB =
      (GdkGLProc_wglDestroyPbufferARB) gdk_gl_get_proc_address ("wglDestroyPbufferARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDestroyPbufferARB () - %s",
               (_procs_WGL_ARB_pbuffer.wglDestroyPbufferARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pbuffer.wglDestroyPbufferARB);
}

/* wglQueryPbufferARB */
GdkGLProc
gdk_gl_get_wglQueryPbufferARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_pbuffer.wglQueryPbufferARB == (GdkGLProc_wglQueryPbufferARB) -1)
    _procs_WGL_ARB_pbuffer.wglQueryPbufferARB =
      (GdkGLProc_wglQueryPbufferARB) gdk_gl_get_proc_address ("wglQueryPbufferARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryPbufferARB () - %s",
               (_procs_WGL_ARB_pbuffer.wglQueryPbufferARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_pbuffer.wglQueryPbufferARB);
}

/* Get WGL_ARB_pbuffer functions */
GdkGL_WGL_ARB_pbuffer *
gdk_gl_get_WGL_ARB_pbuffer (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_pbuffer");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreatePbufferARB () != NULL);
          supported &= (gdk_gl_get_wglGetPbufferDCARB () != NULL);
          supported &= (gdk_gl_get_wglReleasePbufferDCARB () != NULL);
          supported &= (gdk_gl_get_wglDestroyPbufferARB () != NULL);
          supported &= (gdk_gl_get_wglQueryPbufferARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_pbuffer () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_pbuffer;
}

/*
 * WGL_ARB_render_texture
 */

static GdkGL_WGL_ARB_render_texture _procs_WGL_ARB_render_texture = {
  (GdkGLProc_wglBindTexImageARB) -1,
  (GdkGLProc_wglReleaseTexImageARB) -1,
  (GdkGLProc_wglSetPbufferAttribARB) -1
};

/* wglBindTexImageARB */
GdkGLProc
gdk_gl_get_wglBindTexImageARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_render_texture.wglBindTexImageARB == (GdkGLProc_wglBindTexImageARB) -1)
    _procs_WGL_ARB_render_texture.wglBindTexImageARB =
      (GdkGLProc_wglBindTexImageARB) gdk_gl_get_proc_address ("wglBindTexImageARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindTexImageARB () - %s",
               (_procs_WGL_ARB_render_texture.wglBindTexImageARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_render_texture.wglBindTexImageARB);
}

/* wglReleaseTexImageARB */
GdkGLProc
gdk_gl_get_wglReleaseTexImageARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_render_texture.wglReleaseTexImageARB == (GdkGLProc_wglReleaseTexImageARB) -1)
    _procs_WGL_ARB_render_texture.wglReleaseTexImageARB =
      (GdkGLProc_wglReleaseTexImageARB) gdk_gl_get_proc_address ("wglReleaseTexImageARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleaseTexImageARB () - %s",
               (_procs_WGL_ARB_render_texture.wglReleaseTexImageARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_render_texture.wglReleaseTexImageARB);
}

/* wglSetPbufferAttribARB */
GdkGLProc
gdk_gl_get_wglSetPbufferAttribARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_render_texture.wglSetPbufferAttribARB == (GdkGLProc_wglSetPbufferAttribARB) -1)
    _procs_WGL_ARB_render_texture.wglSetPbufferAttribARB =
      (GdkGLProc_wglSetPbufferAttribARB) gdk_gl_get_proc_address ("wglSetPbufferAttribARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSetPbufferAttribARB () - %s",
               (_procs_WGL_ARB_render_texture.wglSetPbufferAttribARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_render_texture.wglSetPbufferAttribARB);
}

/* Get WGL_ARB_render_texture functions */
GdkGL_WGL_ARB_render_texture *
gdk_gl_get_WGL_ARB_render_texture (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_render_texture");

      if (supported)
        {
          supported &= (gdk_gl_get_wglBindTexImageARB () != NULL);
          supported &= (gdk_gl_get_wglReleaseTexImageARB () != NULL);
          supported &= (gdk_gl_get_wglSetPbufferAttribARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_render_texture () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_render_texture;
}

/*
 * WGL_ARB_create_context
 */

static GdkGL_WGL_ARB_create_context _procs_WGL_ARB_create_context = {
  (GdkGLProc_wglCreateContextAttribsARB) -1
};

/* wglCreateContextAttribsARB */
GdkGLProc
gdk_gl_get_wglCreateContextAttribsARB (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_ARB_create_context.wglCreateContextAttribsARB == (GdkGLProc_wglCreateContextAttribsARB) -1)
    _procs_WGL_ARB_create_context.wglCreateContextAttribsARB =
      (GdkGLProc_wglCreateContextAttribsARB) gdk_gl_get_proc_address ("wglCreateContextAttribsARB");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateContextAttribsARB () - %s",
               (_procs_WGL_ARB_create_context.wglCreateContextAttribsARB) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_ARB_create_context.wglCreateContextAttribsARB);
}

/* Get WGL_ARB_create_context functions */
GdkGL_WGL_ARB_create_context *
gdk_gl_get_WGL_ARB_create_context (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_ARB_create_context");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreateContextAttribsARB () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_ARB_create_context () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_ARB_create_context;
}

/*
 * WGL_EXT_display_color_table
 */

static GdkGL_WGL_EXT_display_color_table _procs_WGL_EXT_display_color_table = {
  (GdkGLProc_wglCreateDisplayColorTableEXT) -1,
  (GdkGLProc_wglLoadDisplayColorTableEXT) -1,
  (GdkGLProc_wglBindDisplayColorTableEXT) -1,
  (GdkGLProc_wglDestroyDisplayColorTableEXT) -1
};

/* wglCreateDisplayColorTableEXT */
GdkGLProc
gdk_gl_get_wglCreateDisplayColorTableEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_display_color_table.wglCreateDisplayColorTableEXT == (GdkGLProc_wglCreateDisplayColorTableEXT) -1)
    _procs_WGL_EXT_display_color_table.wglCreateDisplayColorTableEXT =
      (GdkGLProc_wglCreateDisplayColorTableEXT) gdk_gl_get_proc_address ("wglCreateDisplayColorTableEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateDisplayColorTableEXT () - %s",
               (_procs_WGL_EXT_display_color_table.wglCreateDisplayColorTableEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_display_color_table.wglCreateDisplayColorTableEXT);
}

/* wglLoadDisplayColorTableEXT */
GdkGLProc
gdk_gl_get_wglLoadDisplayColorTableEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_display_color_table.wglLoadDisplayColorTableEXT == (GdkGLProc_wglLoadDisplayColorTableEXT) -1)
    _procs_WGL_EXT_display_color_table.wglLoadDisplayColorTableEXT =
      (GdkGLProc_wglLoadDisplayColorTableEXT) gdk_gl_get_proc_address ("wglLoadDisplayColorTableEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglLoadDisplayColorTableEXT () - %s",
               (_procs_WGL_EXT_display_color_table.wglLoadDisplayColorTableEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_display_color_table.wglLoadDisplayColorTableEXT);
}

/* wglBindDisplayColorTableEXT */
GdkGLProc
gdk_gl_get_wglBindDisplayColorTableEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_display_color_table.wglBindDisplayColorTableEXT == (GdkGLProc_wglBindDisplayColorTableEXT) -1)
    _procs_WGL_EXT_display_color_table.wglBindDisplayColorTableEXT =
      (GdkGLProc_wglBindDisplayColorTableEXT) gdk_gl_get_proc_address ("wglBindDisplayColorTableEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindDisplayColorTableEXT () - %s",
               (_procs_WGL_EXT_display_color_table.wglBindDisplayColorTableEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_display_color_table.wglBindDisplayColorTableEXT);
}

/* wglDestroyDisplayColorTableEXT */
GdkGLProc
gdk_gl_get_wglDestroyDisplayColorTableEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_display_color_table.wglDestroyDisplayColorTableEXT == (GdkGLProc_wglDestroyDisplayColorTableEXT) -1)
    _procs_WGL_EXT_display_color_table.wglDestroyDisplayColorTableEXT =
      (GdkGLProc_wglDestroyDisplayColorTableEXT) gdk_gl_get_proc_address ("wglDestroyDisplayColorTableEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDestroyDisplayColorTableEXT () - %s",
               (_procs_WGL_EXT_display_color_table.wglDestroyDisplayColorTableEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_display_color_table.wglDestroyDisplayColorTableEXT);
}

/* Get WGL_EXT_display_color_table functions */
GdkGL_WGL_EXT_display_color_table *
gdk_gl_get_WGL_EXT_display_color_table (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_display_color_table");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreateDisplayColorTableEXT () != NULL);
          supported &= (gdk_gl_get_wglLoadDisplayColorTableEXT () != NULL);
          supported &= (gdk_gl_get_wglBindDisplayColorTableEXT () != NULL);
          supported &= (gdk_gl_get_wglDestroyDisplayColorTableEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_display_color_table () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_display_color_table;
}

/*
 * WGL_EXT_extensions_string
 */

static GdkGL_WGL_EXT_extensions_string _procs_WGL_EXT_extensions_string = {
  (GdkGLProc_wglGetExtensionsStringEXT) -1
};

/* wglGetExtensionsStringEXT */
GdkGLProc
gdk_gl_get_wglGetExtensionsStringEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_extensions_string.wglGetExtensionsStringEXT == (GdkGLProc_wglGetExtensionsStringEXT) -1)
    _procs_WGL_EXT_extensions_string.wglGetExtensionsStringEXT =
      (GdkGLProc_wglGetExtensionsStringEXT) gdk_gl_get_proc_address ("wglGetExtensionsStringEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetExtensionsStringEXT () - %s",
               (_procs_WGL_EXT_extensions_string.wglGetExtensionsStringEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_extensions_string.wglGetExtensionsStringEXT);
}

/* Get WGL_EXT_extensions_string functions */
GdkGL_WGL_EXT_extensions_string *
gdk_gl_get_WGL_EXT_extensions_string (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_extensions_string");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetExtensionsStringEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_extensions_string () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_extensions_string;
}

/*
 * WGL_EXT_make_current_read
 */

static GdkGL_WGL_EXT_make_current_read _procs_WGL_EXT_make_current_read = {
  (GdkGLProc_wglMakeContextCurrentEXT) -1,
  (GdkGLProc_wglGetCurrentReadDCEXT) -1
};

/* wglMakeContextCurrentEXT */
GdkGLProc
gdk_gl_get_wglMakeContextCurrentEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_make_current_read.wglMakeContextCurrentEXT == (GdkGLProc_wglMakeContextCurrentEXT) -1)
    _procs_WGL_EXT_make_current_read.wglMakeContextCurrentEXT =
      (GdkGLProc_wglMakeContextCurrentEXT) gdk_gl_get_proc_address ("wglMakeContextCurrentEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglMakeContextCurrentEXT () - %s",
               (_procs_WGL_EXT_make_current_read.wglMakeContextCurrentEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_make_current_read.wglMakeContextCurrentEXT);
}

/* wglGetCurrentReadDCEXT */
GdkGLProc
gdk_gl_get_wglGetCurrentReadDCEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_make_current_read.wglGetCurrentReadDCEXT == (GdkGLProc_wglGetCurrentReadDCEXT) -1)
    _procs_WGL_EXT_make_current_read.wglGetCurrentReadDCEXT =
      (GdkGLProc_wglGetCurrentReadDCEXT) gdk_gl_get_proc_address ("wglGetCurrentReadDCEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetCurrentReadDCEXT () - %s",
               (_procs_WGL_EXT_make_current_read.wglGetCurrentReadDCEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_make_current_read.wglGetCurrentReadDCEXT);
}

/* Get WGL_EXT_make_current_read functions */
GdkGL_WGL_EXT_make_current_read *
gdk_gl_get_WGL_EXT_make_current_read (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_make_current_read");

      if (supported)
        {
          supported &= (gdk_gl_get_wglMakeContextCurrentEXT () != NULL);
          supported &= (gdk_gl_get_wglGetCurrentReadDCEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_make_current_read () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_make_current_read;
}

/*
 * WGL_EXT_pbuffer
 */

static GdkGL_WGL_EXT_pbuffer _procs_WGL_EXT_pbuffer = {
  (GdkGLProc_wglCreatePbufferEXT) -1,
  (GdkGLProc_wglGetPbufferDCEXT) -1,
  (GdkGLProc_wglReleasePbufferDCEXT) -1,
  (GdkGLProc_wglDestroyPbufferEXT) -1,
  (GdkGLProc_wglQueryPbufferEXT) -1
};

/* wglCreatePbufferEXT */
GdkGLProc
gdk_gl_get_wglCreatePbufferEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pbuffer.wglCreatePbufferEXT == (GdkGLProc_wglCreatePbufferEXT) -1)
    _procs_WGL_EXT_pbuffer.wglCreatePbufferEXT =
      (GdkGLProc_wglCreatePbufferEXT) gdk_gl_get_proc_address ("wglCreatePbufferEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreatePbufferEXT () - %s",
               (_procs_WGL_EXT_pbuffer.wglCreatePbufferEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pbuffer.wglCreatePbufferEXT);
}

/* wglGetPbufferDCEXT */
GdkGLProc
gdk_gl_get_wglGetPbufferDCEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pbuffer.wglGetPbufferDCEXT == (GdkGLProc_wglGetPbufferDCEXT) -1)
    _procs_WGL_EXT_pbuffer.wglGetPbufferDCEXT =
      (GdkGLProc_wglGetPbufferDCEXT) gdk_gl_get_proc_address ("wglGetPbufferDCEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPbufferDCEXT () - %s",
               (_procs_WGL_EXT_pbuffer.wglGetPbufferDCEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pbuffer.wglGetPbufferDCEXT);
}

/* wglReleasePbufferDCEXT */
GdkGLProc
gdk_gl_get_wglReleasePbufferDCEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pbuffer.wglReleasePbufferDCEXT == (GdkGLProc_wglReleasePbufferDCEXT) -1)
    _procs_WGL_EXT_pbuffer.wglReleasePbufferDCEXT =
      (GdkGLProc_wglReleasePbufferDCEXT) gdk_gl_get_proc_address ("wglReleasePbufferDCEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleasePbufferDCEXT () - %s",
               (_procs_WGL_EXT_pbuffer.wglReleasePbufferDCEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pbuffer.wglReleasePbufferDCEXT);
}

/* wglDestroyPbufferEXT */
GdkGLProc
gdk_gl_get_wglDestroyPbufferEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pbuffer.wglDestroyPbufferEXT == (GdkGLProc_wglDestroyPbufferEXT) -1)
    _procs_WGL_EXT_pbuffer.wglDestroyPbufferEXT =
      (GdkGLProc_wglDestroyPbufferEXT) gdk_gl_get_proc_address ("wglDestroyPbufferEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDestroyPbufferEXT () - %s",
               (_procs_WGL_EXT_pbuffer.wglDestroyPbufferEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pbuffer.wglDestroyPbufferEXT);
}

/* wglQueryPbufferEXT */
GdkGLProc
gdk_gl_get_wglQueryPbufferEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pbuffer.wglQueryPbufferEXT == (GdkGLProc_wglQueryPbufferEXT) -1)
    _procs_WGL_EXT_pbuffer.wglQueryPbufferEXT =
      (GdkGLProc_wglQueryPbufferEXT) gdk_gl_get_proc_address ("wglQueryPbufferEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryPbufferEXT () - %s",
               (_procs_WGL_EXT_pbuffer.wglQueryPbufferEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pbuffer.wglQueryPbufferEXT);
}

/* Get WGL_EXT_pbuffer functions */
GdkGL_WGL_EXT_pbuffer *
gdk_gl_get_WGL_EXT_pbuffer (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_pbuffer");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreatePbufferEXT () != NULL);
          supported &= (gdk_gl_get_wglGetPbufferDCEXT () != NULL);
          supported &= (gdk_gl_get_wglReleasePbufferDCEXT () != NULL);
          supported &= (gdk_gl_get_wglDestroyPbufferEXT () != NULL);
          supported &= (gdk_gl_get_wglQueryPbufferEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_pbuffer () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_pbuffer;
}

/*
 * WGL_EXT_pixel_format
 */

static GdkGL_WGL_EXT_pixel_format _procs_WGL_EXT_pixel_format = {
  (GdkGLProc_wglGetPixelFormatAttribivEXT) -1,
  (GdkGLProc_wglGetPixelFormatAttribfvEXT) -1,
  (GdkGLProc_wglChoosePixelFormatEXT) -1
};

/* wglGetPixelFormatAttribivEXT */
GdkGLProc
gdk_gl_get_wglGetPixelFormatAttribivEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribivEXT == (GdkGLProc_wglGetPixelFormatAttribivEXT) -1)
    _procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribivEXT =
      (GdkGLProc_wglGetPixelFormatAttribivEXT) gdk_gl_get_proc_address ("wglGetPixelFormatAttribivEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPixelFormatAttribivEXT () - %s",
               (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribivEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribivEXT);
}

/* wglGetPixelFormatAttribfvEXT */
GdkGLProc
gdk_gl_get_wglGetPixelFormatAttribfvEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribfvEXT == (GdkGLProc_wglGetPixelFormatAttribfvEXT) -1)
    _procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribfvEXT =
      (GdkGLProc_wglGetPixelFormatAttribfvEXT) gdk_gl_get_proc_address ("wglGetPixelFormatAttribfvEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetPixelFormatAttribfvEXT () - %s",
               (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribfvEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pixel_format.wglGetPixelFormatAttribfvEXT);
}

/* wglChoosePixelFormatEXT */
GdkGLProc
gdk_gl_get_wglChoosePixelFormatEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_pixel_format.wglChoosePixelFormatEXT == (GdkGLProc_wglChoosePixelFormatEXT) -1)
    _procs_WGL_EXT_pixel_format.wglChoosePixelFormatEXT =
      (GdkGLProc_wglChoosePixelFormatEXT) gdk_gl_get_proc_address ("wglChoosePixelFormatEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglChoosePixelFormatEXT () - %s",
               (_procs_WGL_EXT_pixel_format.wglChoosePixelFormatEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_pixel_format.wglChoosePixelFormatEXT);
}

/* Get WGL_EXT_pixel_format functions */
GdkGL_WGL_EXT_pixel_format *
gdk_gl_get_WGL_EXT_pixel_format (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_pixel_format");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetPixelFormatAttribivEXT () != NULL);
          supported &= (gdk_gl_get_wglGetPixelFormatAttribfvEXT () != NULL);
          supported &= (gdk_gl_get_wglChoosePixelFormatEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_pixel_format () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_pixel_format;
}

/*
 * WGL_EXT_swap_control
 */

static GdkGL_WGL_EXT_swap_control _procs_WGL_EXT_swap_control = {
  (GdkGLProc_wglSwapIntervalEXT) -1,
  (GdkGLProc_wglGetSwapIntervalEXT) -1
};

/* wglSwapIntervalEXT */
GdkGLProc
gdk_gl_get_wglSwapIntervalEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_swap_control.wglSwapIntervalEXT == (GdkGLProc_wglSwapIntervalEXT) -1)
    _procs_WGL_EXT_swap_control.wglSwapIntervalEXT =
      (GdkGLProc_wglSwapIntervalEXT) gdk_gl_get_proc_address ("wglSwapIntervalEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSwapIntervalEXT () - %s",
               (_procs_WGL_EXT_swap_control.wglSwapIntervalEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_swap_control.wglSwapIntervalEXT);
}

/* wglGetSwapIntervalEXT */
GdkGLProc
gdk_gl_get_wglGetSwapIntervalEXT (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_EXT_swap_control.wglGetSwapIntervalEXT == (GdkGLProc_wglGetSwapIntervalEXT) -1)
    _procs_WGL_EXT_swap_control.wglGetSwapIntervalEXT =
      (GdkGLProc_wglGetSwapIntervalEXT) gdk_gl_get_proc_address ("wglGetSwapIntervalEXT");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetSwapIntervalEXT () - %s",
               (_procs_WGL_EXT_swap_control.wglGetSwapIntervalEXT) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_EXT_swap_control.wglGetSwapIntervalEXT);
}

/* Get WGL_EXT_swap_control functions */
GdkGL_WGL_EXT_swap_control *
gdk_gl_get_WGL_EXT_swap_control (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_EXT_swap_control");

      if (supported)
        {
          supported &= (gdk_gl_get_wglSwapIntervalEXT () != NULL);
          supported &= (gdk_gl_get_wglGetSwapIntervalEXT () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_EXT_swap_control () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_EXT_swap_control;
}

/*
 * WGL_NV_vertex_array_range
 */

static GdkGL_WGL_NV_vertex_array_range _procs_WGL_NV_vertex_array_range = {
  (GdkGLProc_wglAllocateMemoryNV) -1,
  (GdkGLProc_wglFreeMemoryNV) -1
};

/* wglAllocateMemoryNV */
GdkGLProc
gdk_gl_get_wglAllocateMemoryNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_vertex_array_range.wglAllocateMemoryNV == (GdkGLProc_wglAllocateMemoryNV) -1)
    _procs_WGL_NV_vertex_array_range.wglAllocateMemoryNV =
      (GdkGLProc_wglAllocateMemoryNV) gdk_gl_get_proc_address ("wglAllocateMemoryNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglAllocateMemoryNV () - %s",
               (_procs_WGL_NV_vertex_array_range.wglAllocateMemoryNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_vertex_array_range.wglAllocateMemoryNV);
}

/* wglFreeMemoryNV */
GdkGLProc
gdk_gl_get_wglFreeMemoryNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_vertex_array_range.wglFreeMemoryNV == (GdkGLProc_wglFreeMemoryNV) -1)
    _procs_WGL_NV_vertex_array_range.wglFreeMemoryNV =
      (GdkGLProc_wglFreeMemoryNV) gdk_gl_get_proc_address ("wglFreeMemoryNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglFreeMemoryNV () - %s",
               (_procs_WGL_NV_vertex_array_range.wglFreeMemoryNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_vertex_array_range.wglFreeMemoryNV);
}

/* Get WGL_NV_vertex_array_range functions */
GdkGL_WGL_NV_vertex_array_range *
gdk_gl_get_WGL_NV_vertex_array_range (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_vertex_array_range");

      if (supported)
        {
          supported &= (gdk_gl_get_wglAllocateMemoryNV () != NULL);
          supported &= (gdk_gl_get_wglFreeMemoryNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_vertex_array_range () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_vertex_array_range;
}

/*
 * WGL_OML_sync_control
 */

static GdkGL_WGL_OML_sync_control _procs_WGL_OML_sync_control = {
  (GdkGLProc_wglGetSyncValuesOML) -1,
  (GdkGLProc_wglGetMscRateOML) -1,
  (GdkGLProc_wglSwapBuffersMscOML) -1,
  (GdkGLProc_wglSwapLayerBuffersMscOML) -1,
  (GdkGLProc_wglWaitForMscOML) -1,
  (GdkGLProc_wglWaitForSbcOML) -1
};

/* wglGetSyncValuesOML */
GdkGLProc
gdk_gl_get_wglGetSyncValuesOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglGetSyncValuesOML == (GdkGLProc_wglGetSyncValuesOML) -1)
    _procs_WGL_OML_sync_control.wglGetSyncValuesOML =
      (GdkGLProc_wglGetSyncValuesOML) gdk_gl_get_proc_address ("wglGetSyncValuesOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetSyncValuesOML () - %s",
               (_procs_WGL_OML_sync_control.wglGetSyncValuesOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglGetSyncValuesOML);
}

/* wglGetMscRateOML */
GdkGLProc
gdk_gl_get_wglGetMscRateOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglGetMscRateOML == (GdkGLProc_wglGetMscRateOML) -1)
    _procs_WGL_OML_sync_control.wglGetMscRateOML =
      (GdkGLProc_wglGetMscRateOML) gdk_gl_get_proc_address ("wglGetMscRateOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetMscRateOML () - %s",
               (_procs_WGL_OML_sync_control.wglGetMscRateOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglGetMscRateOML);
}

/* wglSwapBuffersMscOML */
GdkGLProc
gdk_gl_get_wglSwapBuffersMscOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglSwapBuffersMscOML == (GdkGLProc_wglSwapBuffersMscOML) -1)
    _procs_WGL_OML_sync_control.wglSwapBuffersMscOML =
      (GdkGLProc_wglSwapBuffersMscOML) gdk_gl_get_proc_address ("wglSwapBuffersMscOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSwapBuffersMscOML () - %s",
               (_procs_WGL_OML_sync_control.wglSwapBuffersMscOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglSwapBuffersMscOML);
}

/* wglSwapLayerBuffersMscOML */
GdkGLProc
gdk_gl_get_wglSwapLayerBuffersMscOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglSwapLayerBuffersMscOML == (GdkGLProc_wglSwapLayerBuffersMscOML) -1)
    _procs_WGL_OML_sync_control.wglSwapLayerBuffersMscOML =
      (GdkGLProc_wglSwapLayerBuffersMscOML) gdk_gl_get_proc_address ("wglSwapLayerBuffersMscOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSwapLayerBuffersMscOML () - %s",
               (_procs_WGL_OML_sync_control.wglSwapLayerBuffersMscOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglSwapLayerBuffersMscOML);
}

/* wglWaitForMscOML */
GdkGLProc
gdk_gl_get_wglWaitForMscOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglWaitForMscOML == (GdkGLProc_wglWaitForMscOML) -1)
    _procs_WGL_OML_sync_control.wglWaitForMscOML =
      (GdkGLProc_wglWaitForMscOML) gdk_gl_get_proc_address ("wglWaitForMscOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglWaitForMscOML () - %s",
               (_procs_WGL_OML_sync_control.wglWaitForMscOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglWaitForMscOML);
}

/* wglWaitForSbcOML */
GdkGLProc
gdk_gl_get_wglWaitForSbcOML (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_OML_sync_control.wglWaitForSbcOML == (GdkGLProc_wglWaitForSbcOML) -1)
    _procs_WGL_OML_sync_control.wglWaitForSbcOML =
      (GdkGLProc_wglWaitForSbcOML) gdk_gl_get_proc_address ("wglWaitForSbcOML");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglWaitForSbcOML () - %s",
               (_procs_WGL_OML_sync_control.wglWaitForSbcOML) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_OML_sync_control.wglWaitForSbcOML);
}

/* Get WGL_OML_sync_control functions */
GdkGL_WGL_OML_sync_control *
gdk_gl_get_WGL_OML_sync_control (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_OML_sync_control");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetSyncValuesOML () != NULL);
          supported &= (gdk_gl_get_wglGetMscRateOML () != NULL);
          supported &= (gdk_gl_get_wglSwapBuffersMscOML () != NULL);
          supported &= (gdk_gl_get_wglSwapLayerBuffersMscOML () != NULL);
          supported &= (gdk_gl_get_wglWaitForMscOML () != NULL);
          supported &= (gdk_gl_get_wglWaitForSbcOML () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_OML_sync_control () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_OML_sync_control;
}

/*
 * WGL_I3D_digital_video_control
 */

static GdkGL_WGL_I3D_digital_video_control _procs_WGL_I3D_digital_video_control = {
  (GdkGLProc_wglGetDigitalVideoParametersI3D) -1,
  (GdkGLProc_wglSetDigitalVideoParametersI3D) -1
};

/* wglGetDigitalVideoParametersI3D */
GdkGLProc
gdk_gl_get_wglGetDigitalVideoParametersI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_digital_video_control.wglGetDigitalVideoParametersI3D == (GdkGLProc_wglGetDigitalVideoParametersI3D) -1)
    _procs_WGL_I3D_digital_video_control.wglGetDigitalVideoParametersI3D =
      (GdkGLProc_wglGetDigitalVideoParametersI3D) gdk_gl_get_proc_address ("wglGetDigitalVideoParametersI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetDigitalVideoParametersI3D () - %s",
               (_procs_WGL_I3D_digital_video_control.wglGetDigitalVideoParametersI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_digital_video_control.wglGetDigitalVideoParametersI3D);
}

/* wglSetDigitalVideoParametersI3D */
GdkGLProc
gdk_gl_get_wglSetDigitalVideoParametersI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_digital_video_control.wglSetDigitalVideoParametersI3D == (GdkGLProc_wglSetDigitalVideoParametersI3D) -1)
    _procs_WGL_I3D_digital_video_control.wglSetDigitalVideoParametersI3D =
      (GdkGLProc_wglSetDigitalVideoParametersI3D) gdk_gl_get_proc_address ("wglSetDigitalVideoParametersI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSetDigitalVideoParametersI3D () - %s",
               (_procs_WGL_I3D_digital_video_control.wglSetDigitalVideoParametersI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_digital_video_control.wglSetDigitalVideoParametersI3D);
}

/* Get WGL_I3D_digital_video_control functions */
GdkGL_WGL_I3D_digital_video_control *
gdk_gl_get_WGL_I3D_digital_video_control (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_digital_video_control");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetDigitalVideoParametersI3D () != NULL);
          supported &= (gdk_gl_get_wglSetDigitalVideoParametersI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_digital_video_control () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_digital_video_control;
}

/*
 * WGL_I3D_gamma
 */

static GdkGL_WGL_I3D_gamma _procs_WGL_I3D_gamma = {
  (GdkGLProc_wglGetGammaTableParametersI3D) -1,
  (GdkGLProc_wglSetGammaTableParametersI3D) -1,
  (GdkGLProc_wglGetGammaTableI3D) -1,
  (GdkGLProc_wglSetGammaTableI3D) -1
};

/* wglGetGammaTableParametersI3D */
GdkGLProc
gdk_gl_get_wglGetGammaTableParametersI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_gamma.wglGetGammaTableParametersI3D == (GdkGLProc_wglGetGammaTableParametersI3D) -1)
    _procs_WGL_I3D_gamma.wglGetGammaTableParametersI3D =
      (GdkGLProc_wglGetGammaTableParametersI3D) gdk_gl_get_proc_address ("wglGetGammaTableParametersI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGammaTableParametersI3D () - %s",
               (_procs_WGL_I3D_gamma.wglGetGammaTableParametersI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_gamma.wglGetGammaTableParametersI3D);
}

/* wglSetGammaTableParametersI3D */
GdkGLProc
gdk_gl_get_wglSetGammaTableParametersI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_gamma.wglSetGammaTableParametersI3D == (GdkGLProc_wglSetGammaTableParametersI3D) -1)
    _procs_WGL_I3D_gamma.wglSetGammaTableParametersI3D =
      (GdkGLProc_wglSetGammaTableParametersI3D) gdk_gl_get_proc_address ("wglSetGammaTableParametersI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSetGammaTableParametersI3D () - %s",
               (_procs_WGL_I3D_gamma.wglSetGammaTableParametersI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_gamma.wglSetGammaTableParametersI3D);
}

/* wglGetGammaTableI3D */
GdkGLProc
gdk_gl_get_wglGetGammaTableI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_gamma.wglGetGammaTableI3D == (GdkGLProc_wglGetGammaTableI3D) -1)
    _procs_WGL_I3D_gamma.wglGetGammaTableI3D =
      (GdkGLProc_wglGetGammaTableI3D) gdk_gl_get_proc_address ("wglGetGammaTableI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGammaTableI3D () - %s",
               (_procs_WGL_I3D_gamma.wglGetGammaTableI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_gamma.wglGetGammaTableI3D);
}

/* wglSetGammaTableI3D */
GdkGLProc
gdk_gl_get_wglSetGammaTableI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_gamma.wglSetGammaTableI3D == (GdkGLProc_wglSetGammaTableI3D) -1)
    _procs_WGL_I3D_gamma.wglSetGammaTableI3D =
      (GdkGLProc_wglSetGammaTableI3D) gdk_gl_get_proc_address ("wglSetGammaTableI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSetGammaTableI3D () - %s",
               (_procs_WGL_I3D_gamma.wglSetGammaTableI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_gamma.wglSetGammaTableI3D);
}

/* Get WGL_I3D_gamma functions */
GdkGL_WGL_I3D_gamma *
gdk_gl_get_WGL_I3D_gamma (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_gamma");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetGammaTableParametersI3D () != NULL);
          supported &= (gdk_gl_get_wglSetGammaTableParametersI3D () != NULL);
          supported &= (gdk_gl_get_wglGetGammaTableI3D () != NULL);
          supported &= (gdk_gl_get_wglSetGammaTableI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_gamma () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_gamma;
}

/*
 * WGL_I3D_genlock
 */

static GdkGL_WGL_I3D_genlock _procs_WGL_I3D_genlock = {
  (GdkGLProc_wglEnableGenlockI3D) -1,
  (GdkGLProc_wglDisableGenlockI3D) -1,
  (GdkGLProc_wglIsEnabledGenlockI3D) -1,
  (GdkGLProc_wglGenlockSourceI3D) -1,
  (GdkGLProc_wglGetGenlockSourceI3D) -1,
  (GdkGLProc_wglGenlockSourceEdgeI3D) -1,
  (GdkGLProc_wglGetGenlockSourceEdgeI3D) -1,
  (GdkGLProc_wglGenlockSampleRateI3D) -1,
  (GdkGLProc_wglGetGenlockSampleRateI3D) -1,
  (GdkGLProc_wglGenlockSourceDelayI3D) -1,
  (GdkGLProc_wglGetGenlockSourceDelayI3D) -1,
  (GdkGLProc_wglQueryGenlockMaxSourceDelayI3D) -1
};

/* wglEnableGenlockI3D */
GdkGLProc
gdk_gl_get_wglEnableGenlockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglEnableGenlockI3D == (GdkGLProc_wglEnableGenlockI3D) -1)
    _procs_WGL_I3D_genlock.wglEnableGenlockI3D =
      (GdkGLProc_wglEnableGenlockI3D) gdk_gl_get_proc_address ("wglEnableGenlockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnableGenlockI3D () - %s",
               (_procs_WGL_I3D_genlock.wglEnableGenlockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglEnableGenlockI3D);
}

/* wglDisableGenlockI3D */
GdkGLProc
gdk_gl_get_wglDisableGenlockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglDisableGenlockI3D == (GdkGLProc_wglDisableGenlockI3D) -1)
    _procs_WGL_I3D_genlock.wglDisableGenlockI3D =
      (GdkGLProc_wglDisableGenlockI3D) gdk_gl_get_proc_address ("wglDisableGenlockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDisableGenlockI3D () - %s",
               (_procs_WGL_I3D_genlock.wglDisableGenlockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglDisableGenlockI3D);
}

/* wglIsEnabledGenlockI3D */
GdkGLProc
gdk_gl_get_wglIsEnabledGenlockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglIsEnabledGenlockI3D == (GdkGLProc_wglIsEnabledGenlockI3D) -1)
    _procs_WGL_I3D_genlock.wglIsEnabledGenlockI3D =
      (GdkGLProc_wglIsEnabledGenlockI3D) gdk_gl_get_proc_address ("wglIsEnabledGenlockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglIsEnabledGenlockI3D () - %s",
               (_procs_WGL_I3D_genlock.wglIsEnabledGenlockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglIsEnabledGenlockI3D);
}

/* wglGenlockSourceI3D */
GdkGLProc
gdk_gl_get_wglGenlockSourceI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGenlockSourceI3D == (GdkGLProc_wglGenlockSourceI3D) -1)
    _procs_WGL_I3D_genlock.wglGenlockSourceI3D =
      (GdkGLProc_wglGenlockSourceI3D) gdk_gl_get_proc_address ("wglGenlockSourceI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGenlockSourceI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGenlockSourceI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGenlockSourceI3D);
}

/* wglGetGenlockSourceI3D */
GdkGLProc
gdk_gl_get_wglGetGenlockSourceI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGetGenlockSourceI3D == (GdkGLProc_wglGetGenlockSourceI3D) -1)
    _procs_WGL_I3D_genlock.wglGetGenlockSourceI3D =
      (GdkGLProc_wglGetGenlockSourceI3D) gdk_gl_get_proc_address ("wglGetGenlockSourceI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGenlockSourceI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGetGenlockSourceI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGetGenlockSourceI3D);
}

/* wglGenlockSourceEdgeI3D */
GdkGLProc
gdk_gl_get_wglGenlockSourceEdgeI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGenlockSourceEdgeI3D == (GdkGLProc_wglGenlockSourceEdgeI3D) -1)
    _procs_WGL_I3D_genlock.wglGenlockSourceEdgeI3D =
      (GdkGLProc_wglGenlockSourceEdgeI3D) gdk_gl_get_proc_address ("wglGenlockSourceEdgeI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGenlockSourceEdgeI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGenlockSourceEdgeI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGenlockSourceEdgeI3D);
}

/* wglGetGenlockSourceEdgeI3D */
GdkGLProc
gdk_gl_get_wglGetGenlockSourceEdgeI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGetGenlockSourceEdgeI3D == (GdkGLProc_wglGetGenlockSourceEdgeI3D) -1)
    _procs_WGL_I3D_genlock.wglGetGenlockSourceEdgeI3D =
      (GdkGLProc_wglGetGenlockSourceEdgeI3D) gdk_gl_get_proc_address ("wglGetGenlockSourceEdgeI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGenlockSourceEdgeI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGetGenlockSourceEdgeI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGetGenlockSourceEdgeI3D);
}

/* wglGenlockSampleRateI3D */
GdkGLProc
gdk_gl_get_wglGenlockSampleRateI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGenlockSampleRateI3D == (GdkGLProc_wglGenlockSampleRateI3D) -1)
    _procs_WGL_I3D_genlock.wglGenlockSampleRateI3D =
      (GdkGLProc_wglGenlockSampleRateI3D) gdk_gl_get_proc_address ("wglGenlockSampleRateI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGenlockSampleRateI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGenlockSampleRateI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGenlockSampleRateI3D);
}

/* wglGetGenlockSampleRateI3D */
GdkGLProc
gdk_gl_get_wglGetGenlockSampleRateI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGetGenlockSampleRateI3D == (GdkGLProc_wglGetGenlockSampleRateI3D) -1)
    _procs_WGL_I3D_genlock.wglGetGenlockSampleRateI3D =
      (GdkGLProc_wglGetGenlockSampleRateI3D) gdk_gl_get_proc_address ("wglGetGenlockSampleRateI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGenlockSampleRateI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGetGenlockSampleRateI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGetGenlockSampleRateI3D);
}

/* wglGenlockSourceDelayI3D */
GdkGLProc
gdk_gl_get_wglGenlockSourceDelayI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGenlockSourceDelayI3D == (GdkGLProc_wglGenlockSourceDelayI3D) -1)
    _procs_WGL_I3D_genlock.wglGenlockSourceDelayI3D =
      (GdkGLProc_wglGenlockSourceDelayI3D) gdk_gl_get_proc_address ("wglGenlockSourceDelayI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGenlockSourceDelayI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGenlockSourceDelayI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGenlockSourceDelayI3D);
}

/* wglGetGenlockSourceDelayI3D */
GdkGLProc
gdk_gl_get_wglGetGenlockSourceDelayI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglGetGenlockSourceDelayI3D == (GdkGLProc_wglGetGenlockSourceDelayI3D) -1)
    _procs_WGL_I3D_genlock.wglGetGenlockSourceDelayI3D =
      (GdkGLProc_wglGetGenlockSourceDelayI3D) gdk_gl_get_proc_address ("wglGetGenlockSourceDelayI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGenlockSourceDelayI3D () - %s",
               (_procs_WGL_I3D_genlock.wglGetGenlockSourceDelayI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglGetGenlockSourceDelayI3D);
}

/* wglQueryGenlockMaxSourceDelayI3D */
GdkGLProc
gdk_gl_get_wglQueryGenlockMaxSourceDelayI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_genlock.wglQueryGenlockMaxSourceDelayI3D == (GdkGLProc_wglQueryGenlockMaxSourceDelayI3D) -1)
    _procs_WGL_I3D_genlock.wglQueryGenlockMaxSourceDelayI3D =
      (GdkGLProc_wglQueryGenlockMaxSourceDelayI3D) gdk_gl_get_proc_address ("wglQueryGenlockMaxSourceDelayI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryGenlockMaxSourceDelayI3D () - %s",
               (_procs_WGL_I3D_genlock.wglQueryGenlockMaxSourceDelayI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_genlock.wglQueryGenlockMaxSourceDelayI3D);
}

/* Get WGL_I3D_genlock functions */
GdkGL_WGL_I3D_genlock *
gdk_gl_get_WGL_I3D_genlock (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_genlock");

      if (supported)
        {
          supported &= (gdk_gl_get_wglEnableGenlockI3D () != NULL);
          supported &= (gdk_gl_get_wglDisableGenlockI3D () != NULL);
          supported &= (gdk_gl_get_wglIsEnabledGenlockI3D () != NULL);
          supported &= (gdk_gl_get_wglGenlockSourceI3D () != NULL);
          supported &= (gdk_gl_get_wglGetGenlockSourceI3D () != NULL);
          supported &= (gdk_gl_get_wglGenlockSourceEdgeI3D () != NULL);
          supported &= (gdk_gl_get_wglGetGenlockSourceEdgeI3D () != NULL);
          supported &= (gdk_gl_get_wglGenlockSampleRateI3D () != NULL);
          supported &= (gdk_gl_get_wglGetGenlockSampleRateI3D () != NULL);
          supported &= (gdk_gl_get_wglGenlockSourceDelayI3D () != NULL);
          supported &= (gdk_gl_get_wglGetGenlockSourceDelayI3D () != NULL);
          supported &= (gdk_gl_get_wglQueryGenlockMaxSourceDelayI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_genlock () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_genlock;
}

/*
 * WGL_I3D_image_buffer
 */

static GdkGL_WGL_I3D_image_buffer _procs_WGL_I3D_image_buffer = {
  (GdkGLProc_wglCreateImageBufferI3D) -1,
  (GdkGLProc_wglDestroyImageBufferI3D) -1,
  (GdkGLProc_wglAssociateImageBufferEventsI3D) -1,
  (GdkGLProc_wglReleaseImageBufferEventsI3D) -1
};

/* wglCreateImageBufferI3D */
GdkGLProc
gdk_gl_get_wglCreateImageBufferI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_image_buffer.wglCreateImageBufferI3D == (GdkGLProc_wglCreateImageBufferI3D) -1)
    _procs_WGL_I3D_image_buffer.wglCreateImageBufferI3D =
      (GdkGLProc_wglCreateImageBufferI3D) gdk_gl_get_proc_address ("wglCreateImageBufferI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateImageBufferI3D () - %s",
               (_procs_WGL_I3D_image_buffer.wglCreateImageBufferI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_image_buffer.wglCreateImageBufferI3D);
}

/* wglDestroyImageBufferI3D */
GdkGLProc
gdk_gl_get_wglDestroyImageBufferI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_image_buffer.wglDestroyImageBufferI3D == (GdkGLProc_wglDestroyImageBufferI3D) -1)
    _procs_WGL_I3D_image_buffer.wglDestroyImageBufferI3D =
      (GdkGLProc_wglDestroyImageBufferI3D) gdk_gl_get_proc_address ("wglDestroyImageBufferI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDestroyImageBufferI3D () - %s",
               (_procs_WGL_I3D_image_buffer.wglDestroyImageBufferI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_image_buffer.wglDestroyImageBufferI3D);
}

/* wglAssociateImageBufferEventsI3D */
GdkGLProc
gdk_gl_get_wglAssociateImageBufferEventsI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_image_buffer.wglAssociateImageBufferEventsI3D == (GdkGLProc_wglAssociateImageBufferEventsI3D) -1)
    _procs_WGL_I3D_image_buffer.wglAssociateImageBufferEventsI3D =
      (GdkGLProc_wglAssociateImageBufferEventsI3D) gdk_gl_get_proc_address ("wglAssociateImageBufferEventsI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglAssociateImageBufferEventsI3D () - %s",
               (_procs_WGL_I3D_image_buffer.wglAssociateImageBufferEventsI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_image_buffer.wglAssociateImageBufferEventsI3D);
}

/* wglReleaseImageBufferEventsI3D */
GdkGLProc
gdk_gl_get_wglReleaseImageBufferEventsI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_image_buffer.wglReleaseImageBufferEventsI3D == (GdkGLProc_wglReleaseImageBufferEventsI3D) -1)
    _procs_WGL_I3D_image_buffer.wglReleaseImageBufferEventsI3D =
      (GdkGLProc_wglReleaseImageBufferEventsI3D) gdk_gl_get_proc_address ("wglReleaseImageBufferEventsI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleaseImageBufferEventsI3D () - %s",
               (_procs_WGL_I3D_image_buffer.wglReleaseImageBufferEventsI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_image_buffer.wglReleaseImageBufferEventsI3D);
}

/* Get WGL_I3D_image_buffer functions */
GdkGL_WGL_I3D_image_buffer *
gdk_gl_get_WGL_I3D_image_buffer (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_image_buffer");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCreateImageBufferI3D () != NULL);
          supported &= (gdk_gl_get_wglDestroyImageBufferI3D () != NULL);
          supported &= (gdk_gl_get_wglAssociateImageBufferEventsI3D () != NULL);
          supported &= (gdk_gl_get_wglReleaseImageBufferEventsI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_image_buffer () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_image_buffer;
}

/*
 * WGL_I3D_swap_frame_lock
 */

static GdkGL_WGL_I3D_swap_frame_lock _procs_WGL_I3D_swap_frame_lock = {
  (GdkGLProc_wglEnableFrameLockI3D) -1,
  (GdkGLProc_wglDisableFrameLockI3D) -1,
  (GdkGLProc_wglIsEnabledFrameLockI3D) -1,
  (GdkGLProc_wglQueryFrameLockMasterI3D) -1
};

/* wglEnableFrameLockI3D */
GdkGLProc
gdk_gl_get_wglEnableFrameLockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_lock.wglEnableFrameLockI3D == (GdkGLProc_wglEnableFrameLockI3D) -1)
    _procs_WGL_I3D_swap_frame_lock.wglEnableFrameLockI3D =
      (GdkGLProc_wglEnableFrameLockI3D) gdk_gl_get_proc_address ("wglEnableFrameLockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnableFrameLockI3D () - %s",
               (_procs_WGL_I3D_swap_frame_lock.wglEnableFrameLockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_lock.wglEnableFrameLockI3D);
}

/* wglDisableFrameLockI3D */
GdkGLProc
gdk_gl_get_wglDisableFrameLockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_lock.wglDisableFrameLockI3D == (GdkGLProc_wglDisableFrameLockI3D) -1)
    _procs_WGL_I3D_swap_frame_lock.wglDisableFrameLockI3D =
      (GdkGLProc_wglDisableFrameLockI3D) gdk_gl_get_proc_address ("wglDisableFrameLockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDisableFrameLockI3D () - %s",
               (_procs_WGL_I3D_swap_frame_lock.wglDisableFrameLockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_lock.wglDisableFrameLockI3D);
}

/* wglIsEnabledFrameLockI3D */
GdkGLProc
gdk_gl_get_wglIsEnabledFrameLockI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_lock.wglIsEnabledFrameLockI3D == (GdkGLProc_wglIsEnabledFrameLockI3D) -1)
    _procs_WGL_I3D_swap_frame_lock.wglIsEnabledFrameLockI3D =
      (GdkGLProc_wglIsEnabledFrameLockI3D) gdk_gl_get_proc_address ("wglIsEnabledFrameLockI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglIsEnabledFrameLockI3D () - %s",
               (_procs_WGL_I3D_swap_frame_lock.wglIsEnabledFrameLockI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_lock.wglIsEnabledFrameLockI3D);
}

/* wglQueryFrameLockMasterI3D */
GdkGLProc
gdk_gl_get_wglQueryFrameLockMasterI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_lock.wglQueryFrameLockMasterI3D == (GdkGLProc_wglQueryFrameLockMasterI3D) -1)
    _procs_WGL_I3D_swap_frame_lock.wglQueryFrameLockMasterI3D =
      (GdkGLProc_wglQueryFrameLockMasterI3D) gdk_gl_get_proc_address ("wglQueryFrameLockMasterI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryFrameLockMasterI3D () - %s",
               (_procs_WGL_I3D_swap_frame_lock.wglQueryFrameLockMasterI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_lock.wglQueryFrameLockMasterI3D);
}

/* Get WGL_I3D_swap_frame_lock functions */
GdkGL_WGL_I3D_swap_frame_lock *
gdk_gl_get_WGL_I3D_swap_frame_lock (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_swap_frame_lock");

      if (supported)
        {
          supported &= (gdk_gl_get_wglEnableFrameLockI3D () != NULL);
          supported &= (gdk_gl_get_wglDisableFrameLockI3D () != NULL);
          supported &= (gdk_gl_get_wglIsEnabledFrameLockI3D () != NULL);
          supported &= (gdk_gl_get_wglQueryFrameLockMasterI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_swap_frame_lock () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_swap_frame_lock;
}

/*
 * WGL_I3D_swap_frame_usage
 */

static GdkGL_WGL_I3D_swap_frame_usage _procs_WGL_I3D_swap_frame_usage = {
  (GdkGLProc_wglGetFrameUsageI3D) -1,
  (GdkGLProc_wglBeginFrameTrackingI3D) -1,
  (GdkGLProc_wglEndFrameTrackingI3D) -1,
  (GdkGLProc_wglQueryFrameTrackingI3D) -1
};

/* wglGetFrameUsageI3D */
GdkGLProc
gdk_gl_get_wglGetFrameUsageI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_usage.wglGetFrameUsageI3D == (GdkGLProc_wglGetFrameUsageI3D) -1)
    _procs_WGL_I3D_swap_frame_usage.wglGetFrameUsageI3D =
      (GdkGLProc_wglGetFrameUsageI3D) gdk_gl_get_proc_address ("wglGetFrameUsageI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetFrameUsageI3D () - %s",
               (_procs_WGL_I3D_swap_frame_usage.wglGetFrameUsageI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_usage.wglGetFrameUsageI3D);
}

/* wglBeginFrameTrackingI3D */
GdkGLProc
gdk_gl_get_wglBeginFrameTrackingI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_usage.wglBeginFrameTrackingI3D == (GdkGLProc_wglBeginFrameTrackingI3D) -1)
    _procs_WGL_I3D_swap_frame_usage.wglBeginFrameTrackingI3D =
      (GdkGLProc_wglBeginFrameTrackingI3D) gdk_gl_get_proc_address ("wglBeginFrameTrackingI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBeginFrameTrackingI3D () - %s",
               (_procs_WGL_I3D_swap_frame_usage.wglBeginFrameTrackingI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_usage.wglBeginFrameTrackingI3D);
}

/* wglEndFrameTrackingI3D */
GdkGLProc
gdk_gl_get_wglEndFrameTrackingI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_usage.wglEndFrameTrackingI3D == (GdkGLProc_wglEndFrameTrackingI3D) -1)
    _procs_WGL_I3D_swap_frame_usage.wglEndFrameTrackingI3D =
      (GdkGLProc_wglEndFrameTrackingI3D) gdk_gl_get_proc_address ("wglEndFrameTrackingI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEndFrameTrackingI3D () - %s",
               (_procs_WGL_I3D_swap_frame_usage.wglEndFrameTrackingI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_usage.wglEndFrameTrackingI3D);
}

/* wglQueryFrameTrackingI3D */
GdkGLProc
gdk_gl_get_wglQueryFrameTrackingI3D (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_I3D_swap_frame_usage.wglQueryFrameTrackingI3D == (GdkGLProc_wglQueryFrameTrackingI3D) -1)
    _procs_WGL_I3D_swap_frame_usage.wglQueryFrameTrackingI3D =
      (GdkGLProc_wglQueryFrameTrackingI3D) gdk_gl_get_proc_address ("wglQueryFrameTrackingI3D");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryFrameTrackingI3D () - %s",
               (_procs_WGL_I3D_swap_frame_usage.wglQueryFrameTrackingI3D) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_I3D_swap_frame_usage.wglQueryFrameTrackingI3D);
}

/* Get WGL_I3D_swap_frame_usage functions */
GdkGL_WGL_I3D_swap_frame_usage *
gdk_gl_get_WGL_I3D_swap_frame_usage (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_I3D_swap_frame_usage");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetFrameUsageI3D () != NULL);
          supported &= (gdk_gl_get_wglBeginFrameTrackingI3D () != NULL);
          supported &= (gdk_gl_get_wglEndFrameTrackingI3D () != NULL);
          supported &= (gdk_gl_get_wglQueryFrameTrackingI3D () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_I3D_swap_frame_usage () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_I3D_swap_frame_usage;
}

/*
 * WGL_3DL_stereo_control
 */

static GdkGL_WGL_3DL_stereo_control _procs_WGL_3DL_stereo_control = {
  (GdkGLProc_wglSetStereoEmitterState3DL) -1
};

/* wglSetStereoEmitterState3DL */
GdkGLProc
gdk_gl_get_wglSetStereoEmitterState3DL (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_3DL_stereo_control.wglSetStereoEmitterState3DL == (GdkGLProc_wglSetStereoEmitterState3DL) -1)
    _procs_WGL_3DL_stereo_control.wglSetStereoEmitterState3DL =
      (GdkGLProc_wglSetStereoEmitterState3DL) gdk_gl_get_proc_address ("wglSetStereoEmitterState3DL");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSetStereoEmitterState3DL () - %s",
               (_procs_WGL_3DL_stereo_control.wglSetStereoEmitterState3DL) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_3DL_stereo_control.wglSetStereoEmitterState3DL);
}

/* Get WGL_3DL_stereo_control functions */
GdkGL_WGL_3DL_stereo_control *
gdk_gl_get_WGL_3DL_stereo_control (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_3DL_stereo_control");

      if (supported)
        {
          supported &= (gdk_gl_get_wglSetStereoEmitterState3DL () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_3DL_stereo_control () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_3DL_stereo_control;
}

/*
 * WGL_NV_present_video
 */

static GdkGL_WGL_NV_present_video _procs_WGL_NV_present_video = {
  (GdkGLProc_wglEnumerateVideoDevicesNV) -1,
  (GdkGLProc_wglBindVideoDeviceNV) -1,
  (GdkGLProc_wglQueryCurrentContextNV) -1
};

/* wglEnumerateVideoDevicesNV */
GdkGLProc
gdk_gl_get_wglEnumerateVideoDevicesNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_present_video.wglEnumerateVideoDevicesNV == (GdkGLProc_wglEnumerateVideoDevicesNV) -1)
    _procs_WGL_NV_present_video.wglEnumerateVideoDevicesNV =
      (GdkGLProc_wglEnumerateVideoDevicesNV) gdk_gl_get_proc_address ("wglEnumerateVideoDevicesNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnumerateVideoDevicesNV () - %s",
               (_procs_WGL_NV_present_video.wglEnumerateVideoDevicesNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_present_video.wglEnumerateVideoDevicesNV);
}

/* wglBindVideoDeviceNV */
GdkGLProc
gdk_gl_get_wglBindVideoDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_present_video.wglBindVideoDeviceNV == (GdkGLProc_wglBindVideoDeviceNV) -1)
    _procs_WGL_NV_present_video.wglBindVideoDeviceNV =
      (GdkGLProc_wglBindVideoDeviceNV) gdk_gl_get_proc_address ("wglBindVideoDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindVideoDeviceNV () - %s",
               (_procs_WGL_NV_present_video.wglBindVideoDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_present_video.wglBindVideoDeviceNV);
}

/* wglQueryCurrentContextNV */
GdkGLProc
gdk_gl_get_wglQueryCurrentContextNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_present_video.wglQueryCurrentContextNV == (GdkGLProc_wglQueryCurrentContextNV) -1)
    _procs_WGL_NV_present_video.wglQueryCurrentContextNV =
      (GdkGLProc_wglQueryCurrentContextNV) gdk_gl_get_proc_address ("wglQueryCurrentContextNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryCurrentContextNV () - %s",
               (_procs_WGL_NV_present_video.wglQueryCurrentContextNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_present_video.wglQueryCurrentContextNV);
}

/* Get WGL_NV_present_video functions */
GdkGL_WGL_NV_present_video *
gdk_gl_get_WGL_NV_present_video (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_present_video");

      if (supported)
        {
          supported &= (gdk_gl_get_wglEnumerateVideoDevicesNV () != NULL);
          supported &= (gdk_gl_get_wglBindVideoDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglQueryCurrentContextNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_present_video () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_present_video;
}

/*
 * WGL_NV_video_output
 */

static GdkGL_WGL_NV_video_output _procs_WGL_NV_video_output = {
  (GdkGLProc_wglGetVideoDeviceNV) -1,
  (GdkGLProc_wglReleaseVideoDeviceNV) -1,
  (GdkGLProc_wglBindVideoImageNV) -1,
  (GdkGLProc_wglReleaseVideoImageNV) -1,
  (GdkGLProc_wglSendPbufferToVideoNV) -1,
  (GdkGLProc_wglGetVideoInfoNV) -1
};

/* wglGetVideoDeviceNV */
GdkGLProc
gdk_gl_get_wglGetVideoDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglGetVideoDeviceNV == (GdkGLProc_wglGetVideoDeviceNV) -1)
    _procs_WGL_NV_video_output.wglGetVideoDeviceNV =
      (GdkGLProc_wglGetVideoDeviceNV) gdk_gl_get_proc_address ("wglGetVideoDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetVideoDeviceNV () - %s",
               (_procs_WGL_NV_video_output.wglGetVideoDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglGetVideoDeviceNV);
}

/* wglReleaseVideoDeviceNV */
GdkGLProc
gdk_gl_get_wglReleaseVideoDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglReleaseVideoDeviceNV == (GdkGLProc_wglReleaseVideoDeviceNV) -1)
    _procs_WGL_NV_video_output.wglReleaseVideoDeviceNV =
      (GdkGLProc_wglReleaseVideoDeviceNV) gdk_gl_get_proc_address ("wglReleaseVideoDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleaseVideoDeviceNV () - %s",
               (_procs_WGL_NV_video_output.wglReleaseVideoDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglReleaseVideoDeviceNV);
}

/* wglBindVideoImageNV */
GdkGLProc
gdk_gl_get_wglBindVideoImageNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglBindVideoImageNV == (GdkGLProc_wglBindVideoImageNV) -1)
    _procs_WGL_NV_video_output.wglBindVideoImageNV =
      (GdkGLProc_wglBindVideoImageNV) gdk_gl_get_proc_address ("wglBindVideoImageNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindVideoImageNV () - %s",
               (_procs_WGL_NV_video_output.wglBindVideoImageNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglBindVideoImageNV);
}

/* wglReleaseVideoImageNV */
GdkGLProc
gdk_gl_get_wglReleaseVideoImageNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglReleaseVideoImageNV == (GdkGLProc_wglReleaseVideoImageNV) -1)
    _procs_WGL_NV_video_output.wglReleaseVideoImageNV =
      (GdkGLProc_wglReleaseVideoImageNV) gdk_gl_get_proc_address ("wglReleaseVideoImageNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleaseVideoImageNV () - %s",
               (_procs_WGL_NV_video_output.wglReleaseVideoImageNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglReleaseVideoImageNV);
}

/* wglSendPbufferToVideoNV */
GdkGLProc
gdk_gl_get_wglSendPbufferToVideoNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglSendPbufferToVideoNV == (GdkGLProc_wglSendPbufferToVideoNV) -1)
    _procs_WGL_NV_video_output.wglSendPbufferToVideoNV =
      (GdkGLProc_wglSendPbufferToVideoNV) gdk_gl_get_proc_address ("wglSendPbufferToVideoNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglSendPbufferToVideoNV () - %s",
               (_procs_WGL_NV_video_output.wglSendPbufferToVideoNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglSendPbufferToVideoNV);
}

/* wglGetVideoInfoNV */
GdkGLProc
gdk_gl_get_wglGetVideoInfoNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_output.wglGetVideoInfoNV == (GdkGLProc_wglGetVideoInfoNV) -1)
    _procs_WGL_NV_video_output.wglGetVideoInfoNV =
      (GdkGLProc_wglGetVideoInfoNV) gdk_gl_get_proc_address ("wglGetVideoInfoNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetVideoInfoNV () - %s",
               (_procs_WGL_NV_video_output.wglGetVideoInfoNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_output.wglGetVideoInfoNV);
}

/* Get WGL_NV_video_output functions */
GdkGL_WGL_NV_video_output *
gdk_gl_get_WGL_NV_video_output (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_video_output");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetVideoDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglReleaseVideoDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglBindVideoImageNV () != NULL);
          supported &= (gdk_gl_get_wglReleaseVideoImageNV () != NULL);
          supported &= (gdk_gl_get_wglSendPbufferToVideoNV () != NULL);
          supported &= (gdk_gl_get_wglGetVideoInfoNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_video_output () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_video_output;
}

/*
 * WGL_NV_swap_group
 */

static GdkGL_WGL_NV_swap_group _procs_WGL_NV_swap_group = {
  (GdkGLProc_wglJoinSwapGroupNV) -1,
  (GdkGLProc_wglBindSwapBarrierNV) -1,
  (GdkGLProc_wglQuerySwapGroupNV) -1,
  (GdkGLProc_wglQueryMaxSwapGroupsNV) -1,
  (GdkGLProc_wglQueryFrameCountNV) -1,
  (GdkGLProc_wglResetFrameCountNV) -1
};

/* wglJoinSwapGroupNV */
GdkGLProc
gdk_gl_get_wglJoinSwapGroupNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglJoinSwapGroupNV == (GdkGLProc_wglJoinSwapGroupNV) -1)
    _procs_WGL_NV_swap_group.wglJoinSwapGroupNV =
      (GdkGLProc_wglJoinSwapGroupNV) gdk_gl_get_proc_address ("wglJoinSwapGroupNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglJoinSwapGroupNV () - %s",
               (_procs_WGL_NV_swap_group.wglJoinSwapGroupNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglJoinSwapGroupNV);
}

/* wglBindSwapBarrierNV */
GdkGLProc
gdk_gl_get_wglBindSwapBarrierNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglBindSwapBarrierNV == (GdkGLProc_wglBindSwapBarrierNV) -1)
    _procs_WGL_NV_swap_group.wglBindSwapBarrierNV =
      (GdkGLProc_wglBindSwapBarrierNV) gdk_gl_get_proc_address ("wglBindSwapBarrierNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindSwapBarrierNV () - %s",
               (_procs_WGL_NV_swap_group.wglBindSwapBarrierNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglBindSwapBarrierNV);
}

/* wglQuerySwapGroupNV */
GdkGLProc
gdk_gl_get_wglQuerySwapGroupNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglQuerySwapGroupNV == (GdkGLProc_wglQuerySwapGroupNV) -1)
    _procs_WGL_NV_swap_group.wglQuerySwapGroupNV =
      (GdkGLProc_wglQuerySwapGroupNV) gdk_gl_get_proc_address ("wglQuerySwapGroupNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQuerySwapGroupNV () - %s",
               (_procs_WGL_NV_swap_group.wglQuerySwapGroupNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglQuerySwapGroupNV);
}

/* wglQueryMaxSwapGroupsNV */
GdkGLProc
gdk_gl_get_wglQueryMaxSwapGroupsNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglQueryMaxSwapGroupsNV == (GdkGLProc_wglQueryMaxSwapGroupsNV) -1)
    _procs_WGL_NV_swap_group.wglQueryMaxSwapGroupsNV =
      (GdkGLProc_wglQueryMaxSwapGroupsNV) gdk_gl_get_proc_address ("wglQueryMaxSwapGroupsNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryMaxSwapGroupsNV () - %s",
               (_procs_WGL_NV_swap_group.wglQueryMaxSwapGroupsNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglQueryMaxSwapGroupsNV);
}

/* wglQueryFrameCountNV */
GdkGLProc
gdk_gl_get_wglQueryFrameCountNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglQueryFrameCountNV == (GdkGLProc_wglQueryFrameCountNV) -1)
    _procs_WGL_NV_swap_group.wglQueryFrameCountNV =
      (GdkGLProc_wglQueryFrameCountNV) gdk_gl_get_proc_address ("wglQueryFrameCountNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryFrameCountNV () - %s",
               (_procs_WGL_NV_swap_group.wglQueryFrameCountNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglQueryFrameCountNV);
}

/* wglResetFrameCountNV */
GdkGLProc
gdk_gl_get_wglResetFrameCountNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_swap_group.wglResetFrameCountNV == (GdkGLProc_wglResetFrameCountNV) -1)
    _procs_WGL_NV_swap_group.wglResetFrameCountNV =
      (GdkGLProc_wglResetFrameCountNV) gdk_gl_get_proc_address ("wglResetFrameCountNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglResetFrameCountNV () - %s",
               (_procs_WGL_NV_swap_group.wglResetFrameCountNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_swap_group.wglResetFrameCountNV);
}

/* Get WGL_NV_swap_group functions */
GdkGL_WGL_NV_swap_group *
gdk_gl_get_WGL_NV_swap_group (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_swap_group");

      if (supported)
        {
          supported &= (gdk_gl_get_wglJoinSwapGroupNV () != NULL);
          supported &= (gdk_gl_get_wglBindSwapBarrierNV () != NULL);
          supported &= (gdk_gl_get_wglQuerySwapGroupNV () != NULL);
          supported &= (gdk_gl_get_wglQueryMaxSwapGroupsNV () != NULL);
          supported &= (gdk_gl_get_wglQueryFrameCountNV () != NULL);
          supported &= (gdk_gl_get_wglResetFrameCountNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_swap_group () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_swap_group;
}

/*
 * WGL_NV_gpu_affinity
 */

static GdkGL_WGL_NV_gpu_affinity _procs_WGL_NV_gpu_affinity = {
  (GdkGLProc_wglEnumGpusNV) -1,
  (GdkGLProc_wglEnumGpuDevicesNV) -1,
  (GdkGLProc_wglCreateAffinityDCNV) -1,
  (GdkGLProc_wglEnumGpusFromAffinityDCNV) -1,
  (GdkGLProc_wglDeleteDCNV) -1
};

/* wglEnumGpusNV */
GdkGLProc
gdk_gl_get_wglEnumGpusNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_gpu_affinity.wglEnumGpusNV == (GdkGLProc_wglEnumGpusNV) -1)
    _procs_WGL_NV_gpu_affinity.wglEnumGpusNV =
      (GdkGLProc_wglEnumGpusNV) gdk_gl_get_proc_address ("wglEnumGpusNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnumGpusNV () - %s",
               (_procs_WGL_NV_gpu_affinity.wglEnumGpusNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_gpu_affinity.wglEnumGpusNV);
}

/* wglEnumGpuDevicesNV */
GdkGLProc
gdk_gl_get_wglEnumGpuDevicesNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_gpu_affinity.wglEnumGpuDevicesNV == (GdkGLProc_wglEnumGpuDevicesNV) -1)
    _procs_WGL_NV_gpu_affinity.wglEnumGpuDevicesNV =
      (GdkGLProc_wglEnumGpuDevicesNV) gdk_gl_get_proc_address ("wglEnumGpuDevicesNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnumGpuDevicesNV () - %s",
               (_procs_WGL_NV_gpu_affinity.wglEnumGpuDevicesNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_gpu_affinity.wglEnumGpuDevicesNV);
}

/* wglCreateAffinityDCNV */
GdkGLProc
gdk_gl_get_wglCreateAffinityDCNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_gpu_affinity.wglCreateAffinityDCNV == (GdkGLProc_wglCreateAffinityDCNV) -1)
    _procs_WGL_NV_gpu_affinity.wglCreateAffinityDCNV =
      (GdkGLProc_wglCreateAffinityDCNV) gdk_gl_get_proc_address ("wglCreateAffinityDCNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateAffinityDCNV () - %s",
               (_procs_WGL_NV_gpu_affinity.wglCreateAffinityDCNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_gpu_affinity.wglCreateAffinityDCNV);
}

/* wglEnumGpusFromAffinityDCNV */
GdkGLProc
gdk_gl_get_wglEnumGpusFromAffinityDCNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_gpu_affinity.wglEnumGpusFromAffinityDCNV == (GdkGLProc_wglEnumGpusFromAffinityDCNV) -1)
    _procs_WGL_NV_gpu_affinity.wglEnumGpusFromAffinityDCNV =
      (GdkGLProc_wglEnumGpusFromAffinityDCNV) gdk_gl_get_proc_address ("wglEnumGpusFromAffinityDCNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnumGpusFromAffinityDCNV () - %s",
               (_procs_WGL_NV_gpu_affinity.wglEnumGpusFromAffinityDCNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_gpu_affinity.wglEnumGpusFromAffinityDCNV);
}

/* wglDeleteDCNV */
GdkGLProc
gdk_gl_get_wglDeleteDCNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_gpu_affinity.wglDeleteDCNV == (GdkGLProc_wglDeleteDCNV) -1)
    _procs_WGL_NV_gpu_affinity.wglDeleteDCNV =
      (GdkGLProc_wglDeleteDCNV) gdk_gl_get_proc_address ("wglDeleteDCNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDeleteDCNV () - %s",
               (_procs_WGL_NV_gpu_affinity.wglDeleteDCNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_gpu_affinity.wglDeleteDCNV);
}

/* Get WGL_NV_gpu_affinity functions */
GdkGL_WGL_NV_gpu_affinity *
gdk_gl_get_WGL_NV_gpu_affinity (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_gpu_affinity");

      if (supported)
        {
          supported &= (gdk_gl_get_wglEnumGpusNV () != NULL);
          supported &= (gdk_gl_get_wglEnumGpuDevicesNV () != NULL);
          supported &= (gdk_gl_get_wglCreateAffinityDCNV () != NULL);
          supported &= (gdk_gl_get_wglEnumGpusFromAffinityDCNV () != NULL);
          supported &= (gdk_gl_get_wglDeleteDCNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_gpu_affinity () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_gpu_affinity;
}

/*
 * WGL_AMD_gpu_association
 */

static GdkGL_WGL_AMD_gpu_association _procs_WGL_AMD_gpu_association = {
  (GdkGLProc_wglGetGPUIDsAMD) -1,
  (GdkGLProc_wglGetGPUInfoAMD) -1,
  (GdkGLProc_wglGetContextGPUIDAMD) -1,
  (GdkGLProc_wglCreateAssociatedContextAMD) -1,
  (GdkGLProc_wglCreateAssociatedContextAttribsAMD) -1,
  (GdkGLProc_wglDeleteAssociatedContextAMD) -1,
  (GdkGLProc_wglMakeAssociatedContextCurrentAMD) -1,
  (GdkGLProc_wglGetCurrentAssociatedContextAMD) -1,
  (GdkGLProc_wglBlitContextFramebufferAMD) -1
};

/* wglGetGPUIDsAMD */
GdkGLProc
gdk_gl_get_wglGetGPUIDsAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglGetGPUIDsAMD == (GdkGLProc_wglGetGPUIDsAMD) -1)
    _procs_WGL_AMD_gpu_association.wglGetGPUIDsAMD =
      (GdkGLProc_wglGetGPUIDsAMD) gdk_gl_get_proc_address ("wglGetGPUIDsAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGPUIDsAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglGetGPUIDsAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglGetGPUIDsAMD);
}

/* wglGetGPUInfoAMD */
GdkGLProc
gdk_gl_get_wglGetGPUInfoAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglGetGPUInfoAMD == (GdkGLProc_wglGetGPUInfoAMD) -1)
    _procs_WGL_AMD_gpu_association.wglGetGPUInfoAMD =
      (GdkGLProc_wglGetGPUInfoAMD) gdk_gl_get_proc_address ("wglGetGPUInfoAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetGPUInfoAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglGetGPUInfoAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglGetGPUInfoAMD);
}

/* wglGetContextGPUIDAMD */
GdkGLProc
gdk_gl_get_wglGetContextGPUIDAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglGetContextGPUIDAMD == (GdkGLProc_wglGetContextGPUIDAMD) -1)
    _procs_WGL_AMD_gpu_association.wglGetContextGPUIDAMD =
      (GdkGLProc_wglGetContextGPUIDAMD) gdk_gl_get_proc_address ("wglGetContextGPUIDAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetContextGPUIDAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglGetContextGPUIDAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglGetContextGPUIDAMD);
}

/* wglCreateAssociatedContextAMD */
GdkGLProc
gdk_gl_get_wglCreateAssociatedContextAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAMD == (GdkGLProc_wglCreateAssociatedContextAMD) -1)
    _procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAMD =
      (GdkGLProc_wglCreateAssociatedContextAMD) gdk_gl_get_proc_address ("wglCreateAssociatedContextAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateAssociatedContextAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAMD);
}

/* wglCreateAssociatedContextAttribsAMD */
GdkGLProc
gdk_gl_get_wglCreateAssociatedContextAttribsAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAttribsAMD == (GdkGLProc_wglCreateAssociatedContextAttribsAMD) -1)
    _procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAttribsAMD =
      (GdkGLProc_wglCreateAssociatedContextAttribsAMD) gdk_gl_get_proc_address ("wglCreateAssociatedContextAttribsAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCreateAssociatedContextAttribsAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAttribsAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglCreateAssociatedContextAttribsAMD);
}

/* wglDeleteAssociatedContextAMD */
GdkGLProc
gdk_gl_get_wglDeleteAssociatedContextAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglDeleteAssociatedContextAMD == (GdkGLProc_wglDeleteAssociatedContextAMD) -1)
    _procs_WGL_AMD_gpu_association.wglDeleteAssociatedContextAMD =
      (GdkGLProc_wglDeleteAssociatedContextAMD) gdk_gl_get_proc_address ("wglDeleteAssociatedContextAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglDeleteAssociatedContextAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglDeleteAssociatedContextAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglDeleteAssociatedContextAMD);
}

/* wglMakeAssociatedContextCurrentAMD */
GdkGLProc
gdk_gl_get_wglMakeAssociatedContextCurrentAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglMakeAssociatedContextCurrentAMD == (GdkGLProc_wglMakeAssociatedContextCurrentAMD) -1)
    _procs_WGL_AMD_gpu_association.wglMakeAssociatedContextCurrentAMD =
      (GdkGLProc_wglMakeAssociatedContextCurrentAMD) gdk_gl_get_proc_address ("wglMakeAssociatedContextCurrentAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglMakeAssociatedContextCurrentAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglMakeAssociatedContextCurrentAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglMakeAssociatedContextCurrentAMD);
}

/* wglGetCurrentAssociatedContextAMD */
GdkGLProc
gdk_gl_get_wglGetCurrentAssociatedContextAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglGetCurrentAssociatedContextAMD == (GdkGLProc_wglGetCurrentAssociatedContextAMD) -1)
    _procs_WGL_AMD_gpu_association.wglGetCurrentAssociatedContextAMD =
      (GdkGLProc_wglGetCurrentAssociatedContextAMD) gdk_gl_get_proc_address ("wglGetCurrentAssociatedContextAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglGetCurrentAssociatedContextAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglGetCurrentAssociatedContextAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglGetCurrentAssociatedContextAMD);
}

/* wglBlitContextFramebufferAMD */
GdkGLProc
gdk_gl_get_wglBlitContextFramebufferAMD (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_AMD_gpu_association.wglBlitContextFramebufferAMD == (GdkGLProc_wglBlitContextFramebufferAMD) -1)
    _procs_WGL_AMD_gpu_association.wglBlitContextFramebufferAMD =
      (GdkGLProc_wglBlitContextFramebufferAMD) gdk_gl_get_proc_address ("wglBlitContextFramebufferAMD");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBlitContextFramebufferAMD () - %s",
               (_procs_WGL_AMD_gpu_association.wglBlitContextFramebufferAMD) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_AMD_gpu_association.wglBlitContextFramebufferAMD);
}

/* Get WGL_AMD_gpu_association functions */
GdkGL_WGL_AMD_gpu_association *
gdk_gl_get_WGL_AMD_gpu_association (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_AMD_gpu_association");

      if (supported)
        {
          supported &= (gdk_gl_get_wglGetGPUIDsAMD () != NULL);
          supported &= (gdk_gl_get_wglGetGPUInfoAMD () != NULL);
          supported &= (gdk_gl_get_wglGetContextGPUIDAMD () != NULL);
          supported &= (gdk_gl_get_wglCreateAssociatedContextAMD () != NULL);
          supported &= (gdk_gl_get_wglCreateAssociatedContextAttribsAMD () != NULL);
          supported &= (gdk_gl_get_wglDeleteAssociatedContextAMD () != NULL);
          supported &= (gdk_gl_get_wglMakeAssociatedContextCurrentAMD () != NULL);
          supported &= (gdk_gl_get_wglGetCurrentAssociatedContextAMD () != NULL);
          supported &= (gdk_gl_get_wglBlitContextFramebufferAMD () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_AMD_gpu_association () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_AMD_gpu_association;
}

/*
 * WGL_NV_video_capture
 */

static GdkGL_WGL_NV_video_capture _procs_WGL_NV_video_capture = {
  (GdkGLProc_wglBindVideoCaptureDeviceNV) -1,
  (GdkGLProc_wglEnumerateVideoCaptureDevicesNV) -1,
  (GdkGLProc_wglLockVideoCaptureDeviceNV) -1,
  (GdkGLProc_wglQueryVideoCaptureDeviceNV) -1,
  (GdkGLProc_wglReleaseVideoCaptureDeviceNV) -1
};

/* wglBindVideoCaptureDeviceNV */
GdkGLProc
gdk_gl_get_wglBindVideoCaptureDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_capture.wglBindVideoCaptureDeviceNV == (GdkGLProc_wglBindVideoCaptureDeviceNV) -1)
    _procs_WGL_NV_video_capture.wglBindVideoCaptureDeviceNV =
      (GdkGLProc_wglBindVideoCaptureDeviceNV) gdk_gl_get_proc_address ("wglBindVideoCaptureDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglBindVideoCaptureDeviceNV () - %s",
               (_procs_WGL_NV_video_capture.wglBindVideoCaptureDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_capture.wglBindVideoCaptureDeviceNV);
}

/* wglEnumerateVideoCaptureDevicesNV */
GdkGLProc
gdk_gl_get_wglEnumerateVideoCaptureDevicesNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_capture.wglEnumerateVideoCaptureDevicesNV == (GdkGLProc_wglEnumerateVideoCaptureDevicesNV) -1)
    _procs_WGL_NV_video_capture.wglEnumerateVideoCaptureDevicesNV =
      (GdkGLProc_wglEnumerateVideoCaptureDevicesNV) gdk_gl_get_proc_address ("wglEnumerateVideoCaptureDevicesNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglEnumerateVideoCaptureDevicesNV () - %s",
               (_procs_WGL_NV_video_capture.wglEnumerateVideoCaptureDevicesNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_capture.wglEnumerateVideoCaptureDevicesNV);
}

/* wglLockVideoCaptureDeviceNV */
GdkGLProc
gdk_gl_get_wglLockVideoCaptureDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_capture.wglLockVideoCaptureDeviceNV == (GdkGLProc_wglLockVideoCaptureDeviceNV) -1)
    _procs_WGL_NV_video_capture.wglLockVideoCaptureDeviceNV =
      (GdkGLProc_wglLockVideoCaptureDeviceNV) gdk_gl_get_proc_address ("wglLockVideoCaptureDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglLockVideoCaptureDeviceNV () - %s",
               (_procs_WGL_NV_video_capture.wglLockVideoCaptureDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_capture.wglLockVideoCaptureDeviceNV);
}

/* wglQueryVideoCaptureDeviceNV */
GdkGLProc
gdk_gl_get_wglQueryVideoCaptureDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_capture.wglQueryVideoCaptureDeviceNV == (GdkGLProc_wglQueryVideoCaptureDeviceNV) -1)
    _procs_WGL_NV_video_capture.wglQueryVideoCaptureDeviceNV =
      (GdkGLProc_wglQueryVideoCaptureDeviceNV) gdk_gl_get_proc_address ("wglQueryVideoCaptureDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglQueryVideoCaptureDeviceNV () - %s",
               (_procs_WGL_NV_video_capture.wglQueryVideoCaptureDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_capture.wglQueryVideoCaptureDeviceNV);
}

/* wglReleaseVideoCaptureDeviceNV */
GdkGLProc
gdk_gl_get_wglReleaseVideoCaptureDeviceNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_video_capture.wglReleaseVideoCaptureDeviceNV == (GdkGLProc_wglReleaseVideoCaptureDeviceNV) -1)
    _procs_WGL_NV_video_capture.wglReleaseVideoCaptureDeviceNV =
      (GdkGLProc_wglReleaseVideoCaptureDeviceNV) gdk_gl_get_proc_address ("wglReleaseVideoCaptureDeviceNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglReleaseVideoCaptureDeviceNV () - %s",
               (_procs_WGL_NV_video_capture.wglReleaseVideoCaptureDeviceNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_video_capture.wglReleaseVideoCaptureDeviceNV);
}

/* Get WGL_NV_video_capture functions */
GdkGL_WGL_NV_video_capture *
gdk_gl_get_WGL_NV_video_capture (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_video_capture");

      if (supported)
        {
          supported &= (gdk_gl_get_wglBindVideoCaptureDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglEnumerateVideoCaptureDevicesNV () != NULL);
          supported &= (gdk_gl_get_wglLockVideoCaptureDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglQueryVideoCaptureDeviceNV () != NULL);
          supported &= (gdk_gl_get_wglReleaseVideoCaptureDeviceNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_video_capture () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_video_capture;
}

/*
 * WGL_NV_copy_image
 */

static GdkGL_WGL_NV_copy_image _procs_WGL_NV_copy_image = {
  (GdkGLProc_wglCopyImageSubDataNV) -1
};

/* wglCopyImageSubDataNV */
GdkGLProc
gdk_gl_get_wglCopyImageSubDataNV (void)
{
  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (_procs_WGL_NV_copy_image.wglCopyImageSubDataNV == (GdkGLProc_wglCopyImageSubDataNV) -1)
    _procs_WGL_NV_copy_image.wglCopyImageSubDataNV =
      (GdkGLProc_wglCopyImageSubDataNV) gdk_gl_get_proc_address ("wglCopyImageSubDataNV");

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_wglCopyImageSubDataNV () - %s",
               (_procs_WGL_NV_copy_image.wglCopyImageSubDataNV) ? "supported" : "not supported"));

  return (GdkGLProc) (_procs_WGL_NV_copy_image.wglCopyImageSubDataNV);
}

/* Get WGL_NV_copy_image functions */
GdkGL_WGL_NV_copy_image *
gdk_gl_get_WGL_NV_copy_image (GdkGLConfig *glconfig)
{
  static gint supported = -1;

  if (wglGetCurrentContext () == NULL)
    return NULL;

  if (supported == -1)
    {
      supported = gdk_win32_gl_query_wgl_extension (glconfig, "WGL_NV_copy_image");

      if (supported)
        {
          supported &= (gdk_gl_get_wglCopyImageSubDataNV () != NULL);
        }
    }

  GDK_GL_NOTE (MISC,
    g_message (" - gdk_gl_get_WGL_NV_copy_image () - %s",
               (supported) ? "supported" : "not supported"));

  if (!supported)
    return NULL;

  return &_procs_WGL_NV_copy_image;
}

