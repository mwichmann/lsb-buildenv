#if (__LSB_VERSION__ >= 31 )
#ifndef _GTK_2_0_GDK_PIXBUF_GDK_PIXBUF_H_
#define _GTK_2_0_GDK_PIXBUF_GDK_PIXBUF_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define GDK_TYPE_PIXBUF_ANIMATION_ITER	 \
	(gdk_pixbuf_animation_iter_get_type ())
#define GDK_PIXBUF_LOADER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_LOADER, \
	GdkPixbufLoaderClass))
#define GDK_IS_PIXBUF_LOADER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_LOADER))
#define GDK_PIXBUF_LOADER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GDK_TYPE_PIXBUF_LOADER, \
	GdkPixbufLoader))
#define GDK_PIXBUF(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF, GdkPixbuf))
#define GDK_PIXBUF_ANIMATION(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF_ANIMATION, \
	GdkPixbufAnimation))
#define GDK_PIXBUF_ANIMATION_ITER(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), \
	GDK_TYPE_PIXBUF_ANIMATION_ITER, GdkPixbufAnimationIter))
#define GDK_IS_PIXBUF_LOADER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GDK_TYPE_PIXBUF_LOADER))
#define GDK_IS_PIXBUF(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF))
#define GDK_IS_PIXBUF_ANIMATION(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF_ANIMATION))
#define GDK_IS_PIXBUF_ANIMATION_ITER(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), \
	GDK_TYPE_PIXBUF_ANIMATION_ITER))
#define GDK_PIXBUF_LOADER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_LOADER, \
	GdkPixbufLoaderClass))
#define GDK_PIXBUF_MICRO	(10)
#define GDK_PIXBUF_MAJOR	(2)
#define GDK_PIXBUF_MINOR	(6)
#define GDK_TYPE_COLORSPACE	(gdk_colorspace_get_type())
#define GDK_TYPE_INTERP_TYPE	(gdk_interp_type_get_type())
#define GDK_TYPE_PIXBUF_ALPHA_MODE	(gdk_pixbuf_alpha_mode_get_type())
#define GDK_TYPE_PIXBUF_ANIMATION	(gdk_pixbuf_animation_get_type ())
#define GDK_TYPE_PIXBUF_ERROR	(gdk_pixbuf_error_get_type())
#define GDK_TYPE_PIXBUF	(gdk_pixbuf_get_type ())
#define GDK_TYPE_PIXBUF_LOADER	(gdk_pixbuf_loader_get_type ())
#define GDK_TYPE_PIXBUF_ROTATION	(gdk_pixbuf_rotation_get_type())
#define GDK_PIXBUF_VERSION	"2.6.10"
#define GDK_PIXBUF_VAR	extern
#define GDK_PIXBUF_ERROR	gdk_pixbuf_error_quark ()
#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 40
#define GDK_TYPE_PIXBUF_SIMPLE_ANIM	(gdk_pixbuf_simple_anim_get_type ())
#define GDK_PIXBUF_SIMPLE_ANIM_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnimClass))

#define GDK_IS_PIXBUF_SIMPLE_ANIM_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXBUF_SIMPLE_ANIM))
#define GDK_PIXBUF_SIMPLE_ANIM(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnim))
#define GDK_IS_PIXBUF_SIMPLE_ANIM(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXBUF_SIMPLE_ANIM))
#define GDK_PIXBUF_SIMPLE_ANIM_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXBUF_SIMPLE_ANIM, GdkPixbufSimpleAnimClass))
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 31
    typedef struct _GdkPixbuf GdkPixbuf;

    typedef gboolean(*GdkPixbufSaveFunc) (const gchar *, gsize, GError * *,
					  gpointer);

    typedef struct _GdkPixbufLoader GdkPixbufLoader;

    typedef struct _GdkPixbufFormat GdkPixbufFormat;

    typedef enum {
	GDK_INTERP_NEAREST = 0,
	GDK_INTERP_TILES = 1,
	GDK_INTERP_BILINEAR = 2,
	GDK_INTERP_HYPER = 3
    } GdkInterpType;

    typedef enum {
	GDK_COLORSPACE_RGB = 0
    } GdkColorspace;

    typedef void (*GdkPixbufDestroyNotify) (guchar *, gpointer);

    typedef struct _GdkPixbufAnimationIter GdkPixbufAnimationIter;

    typedef struct _GdkPixbufAnimation GdkPixbufAnimation;

    typedef enum {
	GDK_PIXBUF_ROTATE_NONE = 0,
	GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE = 90,
	GDK_PIXBUF_ROTATE_UPSIDEDOWN = 180,
	GDK_PIXBUF_ROTATE_CLOCKWISE = 270
    } GdkPixbufRotation;

    typedef struct _GdkPixbufLoaderClass GdkPixbufLoaderClass;

    typedef enum {
	GDK_PIXBUF_ERROR_CORRUPT_IMAGE,
	GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,
	GDK_PIXBUF_ERROR_BAD_OPTION,
	GDK_PIXBUF_ERROR_UNKNOWN_TYPE,
	GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,
	GDK_PIXBUF_ERROR_FAILED
    } GdkPixbufError;

    typedef enum {
	GDK_PIXBUF_ALPHA_BILEVEL,
	GDK_PIXBUF_ALPHA_FULL
    } GdkPixbufAlphaMode;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 40
    typedef struct _GdkPixbufSimpleAnim GdkPixbufSimpleAnim;

    typedef struct _GdkPixbufSimpleAnimClass GdkPixbufSimpleAnimClass;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 31



    struct _GdkPixbufLoader {
	GObject parent_instance;
	gpointer priv;
    };








    struct _GdkPixbufLoaderClass {
	GObjectClass parent_class;
	void (*size_prepared) (GdkPixbufLoader *, int, int);
	void (*area_prepared) (GdkPixbufLoader *);
	void (*area_updated) (GdkPixbufLoader *, int, int, int, int);
	void (*closed) (GdkPixbufLoader *);
    };

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 40




#endif				/* __LSB_VERSION__ >= 4.0 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern GType gdk_colorspace_get_type(void);
    extern GType gdk_interp_type_get_type(void);
    extern GdkPixbuf *gdk_pixbuf_add_alpha(const GdkPixbuf *, gboolean,
					   guchar, guchar, guchar);
    extern GType gdk_pixbuf_alpha_mode_get_type(void);
    extern int gdk_pixbuf_animation_get_height(GdkPixbufAnimation *);
    extern GdkPixbufAnimationIter
	*gdk_pixbuf_animation_get_iter(GdkPixbufAnimation *,
				       const GTimeVal *);
    extern GdkPixbuf
	*gdk_pixbuf_animation_get_static_image(GdkPixbufAnimation *);
    extern GType gdk_pixbuf_animation_get_type(void);
    extern int gdk_pixbuf_animation_get_width(GdkPixbufAnimation *);
    extern gboolean gdk_pixbuf_animation_is_static_image(GdkPixbufAnimation
							 *);
    extern gboolean
	gdk_pixbuf_animation_iter_advance(GdkPixbufAnimationIter *,
					  const GTimeVal *);
    extern int
	gdk_pixbuf_animation_iter_get_delay_time(GdkPixbufAnimationIter *);
    extern GdkPixbuf
	*gdk_pixbuf_animation_iter_get_pixbuf(GdkPixbufAnimationIter *);
    extern GType gdk_pixbuf_animation_iter_get_type(void);
    extern gboolean
	gdk_pixbuf_animation_iter_on_currently_loading_frame
	(GdkPixbufAnimationIter *);
    extern GdkPixbufAnimation *gdk_pixbuf_animation_new_from_file(const
								  char *,
								  GError *
								  *);
    extern void gdk_pixbuf_composite(const GdkPixbuf *, GdkPixbuf *, int,
				     int, int, int, double, double, double,
				     double, GdkInterpType, int);
    extern void gdk_pixbuf_composite_color(const GdkPixbuf *, GdkPixbuf *,
					   int, int, int, int, double,
					   double, double, double,
					   GdkInterpType, int, int, int,
					   int, guint32, guint32);
    extern GdkPixbuf *gdk_pixbuf_composite_color_simple(const GdkPixbuf *,
							int, int,
							GdkInterpType, int,
							int, guint32,
							guint32);
    extern GdkPixbuf *gdk_pixbuf_copy(const GdkPixbuf *);
    extern void gdk_pixbuf_copy_area(const GdkPixbuf *, int, int, int, int,
				     GdkPixbuf *, int, int);
    extern GType gdk_pixbuf_error_get_type(void);
    extern GQuark gdk_pixbuf_error_quark(void);
    extern void gdk_pixbuf_fill(GdkPixbuf *, guint32);
    extern GdkPixbuf *gdk_pixbuf_flip(const GdkPixbuf *, gboolean);
    extern gchar *gdk_pixbuf_format_get_description(GdkPixbufFormat *);
    extern gchar **gdk_pixbuf_format_get_extensions(GdkPixbufFormat *);
    extern gchar *gdk_pixbuf_format_get_license(GdkPixbufFormat *);
    extern gchar **gdk_pixbuf_format_get_mime_types(GdkPixbufFormat *);
    extern gchar *gdk_pixbuf_format_get_name(GdkPixbufFormat *);
    extern gboolean gdk_pixbuf_format_is_disabled(GdkPixbufFormat *);
    extern gboolean gdk_pixbuf_format_is_scalable(GdkPixbufFormat *);
    extern gboolean gdk_pixbuf_format_is_writable(GdkPixbufFormat *);
    extern void gdk_pixbuf_format_set_disabled(GdkPixbufFormat *,
					       gboolean);
    extern int gdk_pixbuf_get_bits_per_sample(const GdkPixbuf *);
    extern GdkColorspace gdk_pixbuf_get_colorspace(const GdkPixbuf *);
    extern GdkPixbufFormat *gdk_pixbuf_get_file_info(const gchar *, gint *,
						     gint *);
    extern GSList *gdk_pixbuf_get_formats(void);
    extern gboolean gdk_pixbuf_get_has_alpha(const GdkPixbuf *);
    extern int gdk_pixbuf_get_height(const GdkPixbuf *);
    extern int gdk_pixbuf_get_n_channels(const GdkPixbuf *);
    extern const gchar *gdk_pixbuf_get_option(GdkPixbuf *, const gchar *);
    extern guchar *gdk_pixbuf_get_pixels(const GdkPixbuf *);
    extern int gdk_pixbuf_get_rowstride(const GdkPixbuf *);
    extern GType gdk_pixbuf_get_type(void);
    extern int gdk_pixbuf_get_width(const GdkPixbuf *);
    extern gboolean gdk_pixbuf_loader_close(GdkPixbufLoader *, GError * *);
    extern GdkPixbufAnimation
	*gdk_pixbuf_loader_get_animation(GdkPixbufLoader *);
    extern GdkPixbufFormat *gdk_pixbuf_loader_get_format(GdkPixbufLoader
							 *);
    extern GdkPixbuf *gdk_pixbuf_loader_get_pixbuf(GdkPixbufLoader *);
    extern GType gdk_pixbuf_loader_get_type(void);
    extern GdkPixbufLoader *gdk_pixbuf_loader_new(void);
    extern GdkPixbufLoader *gdk_pixbuf_loader_new_with_mime_type(const char
								 *,
								 GError *
								 *);
    extern GdkPixbufLoader *gdk_pixbuf_loader_new_with_type(const char *,
							    GError * *);
    extern void gdk_pixbuf_loader_set_size(GdkPixbufLoader *, gint, gint);
    extern gboolean gdk_pixbuf_loader_write(GdkPixbufLoader *,
					    const guchar *, gsize,
					    GError * *);
    extern const guint gdk_pixbuf_major_version;
    extern const guint gdk_pixbuf_micro_version;
    extern const guint gdk_pixbuf_minor_version;
    extern GdkPixbuf *gdk_pixbuf_new(GdkColorspace, gboolean, int, int,
				     int);
    extern GdkPixbuf *gdk_pixbuf_new_from_data(const guchar *,
					       GdkColorspace, gboolean,
					       int, int, int, int,
					       GdkPixbufDestroyNotify,
					       gpointer);
    extern GdkPixbuf *gdk_pixbuf_new_from_file(const char *, GError * *);
    extern GdkPixbuf *gdk_pixbuf_new_from_file_at_scale(const char *, int,
							int, gboolean,
							GError * *);
    extern GdkPixbuf *gdk_pixbuf_new_from_file_at_size(const char *, int,
						       int, GError * *);
    extern GdkPixbuf *gdk_pixbuf_new_from_inline(gint, const guint8 *,
						 gboolean, GError * *);
    extern GdkPixbuf *gdk_pixbuf_new_from_xpm_data(const char **);
    extern GdkPixbuf *gdk_pixbuf_new_subpixbuf(GdkPixbuf *, int, int, int,
					       int);
    extern GdkPixbuf *gdk_pixbuf_rotate_simple(const GdkPixbuf *,
					       GdkPixbufRotation);
    extern GType gdk_pixbuf_rotation_get_type(void);
    extern void gdk_pixbuf_saturate_and_pixelate(const GdkPixbuf *,
						 GdkPixbuf *, gfloat,
						 gboolean);
    extern gboolean gdk_pixbuf_save(GdkPixbuf *, const char *,
				    const char *, GError * *, ...);
    extern gboolean gdk_pixbuf_save_to_buffer(GdkPixbuf *, gchar * *,
					      gsize *, const char *,
					      GError * *, ...);
    extern gboolean gdk_pixbuf_save_to_bufferv(GdkPixbuf *, gchar * *,
					       gsize *, const char *,
					       char **, char **,
					       GError * *);
    extern gboolean gdk_pixbuf_save_to_callback(GdkPixbuf *,
						GdkPixbufSaveFunc,
						gpointer, const char *,
						GError * *, ...);
    extern gboolean gdk_pixbuf_save_to_callbackv(GdkPixbuf *,
						 GdkPixbufSaveFunc,
						 gpointer, const char *,
						 char **, char **,
						 GError * *);
    extern gboolean gdk_pixbuf_savev(GdkPixbuf *, const char *,
				     const char *, char **, char **,
				     GError * *);
    extern void gdk_pixbuf_scale(const GdkPixbuf *, GdkPixbuf *, int, int,
				 int, int, double, double, double, double,
				 GdkInterpType);
    extern GdkPixbuf *gdk_pixbuf_scale_simple(const GdkPixbuf *, int, int,
					      GdkInterpType);
    extern const char *gdk_pixbuf_version;
#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 40
    extern void gdk_pixbuf_simple_anim_add_frame(GdkPixbufSimpleAnim *,
						 GdkPixbuf *);
    extern GType gdk_pixbuf_simple_anim_get_type(void);
    extern GType gdk_pixbuf_simple_anim_iter_get_type(void);
    extern GdkPixbufSimpleAnim *gdk_pixbuf_simple_anim_new(gint, gint,
							   gfloat);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
