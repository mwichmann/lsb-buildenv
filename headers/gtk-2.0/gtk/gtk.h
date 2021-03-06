#if (__LSB_VERSION__ >= 31 )
#ifndef _GTK_2_0_GTK_GTK_H_
#define _GTK_2_0_GTK_GTK_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>
#include <pango-1.0/pango/pango.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>
#include <cairo/cairo.h>
#include <gtk-2.0/gtk/gtkenums.h>
#include <gtk-2.0/gtk/gtkprintoperationpreview.h>
#include <gtk-2.0/gtk/gtkrecentfilter.h>
#include <gtk-2.0/gtk/gtkrecentmanager.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define GTK_NOTE(type,action)
#define GTK_OBJECT_FLOATING(obj)	 \
	((GTK_OBJECT_FLAGS (obj) & GTK_FLOATING) != 0)
#define GTK_WIDGET_APP_PAINTABLE(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_APP_PAINTABLE) != 0)
#define GTK_WIDGET_CAN_DEFAULT(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_CAN_DEFAULT) != 0)
#define GTK_WIDGET_CAN_FOCUS(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_CAN_FOCUS) != 0)
#define GTK_WIDGET_COMPOSITE_CHILD(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_COMPOSITE_CHILD) != 0)
#define GTK_WIDGET_DOUBLE_BUFFERED(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_DOUBLE_BUFFERED) != 0)
#define GTK_WIDGET_HAS_DEFAULT(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_HAS_DEFAULT) != 0)
#define GTK_WIDGET_HAS_FOCUS(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_HAS_FOCUS) != 0)
#define GTK_WIDGET_HAS_GRAB(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_HAS_GRAB) != 0)
#define GTK_WIDGET_MAPPED(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_MAPPED) != 0)
#define GTK_WIDGET_NO_WINDOW(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_NO_WINDOW) != 0)
#define GTK_WIDGET_PARENT_SENSITIVE(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_PARENT_SENSITIVE) != 0)
#define GTK_WIDGET_RC_STYLE(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_RC_STYLE) != 0)
#define GTK_WIDGET_REALIZED(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_REALIZED) != 0)
#define GTK_WIDGET_RECEIVES_DEFAULT(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_RECEIVES_DEFAULT) != 0)
#define GTK_WIDGET_SENSITIVE(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_SENSITIVE) != 0)
#define GTK_WIDGET_TOPLEVEL(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_TOPLEVEL) != 0)
#define GTK_WIDGET_VISIBLE(wid)	 \
	((GTK_WIDGET_FLAGS (wid) & GTK_VISIBLE) != 0)
#define GTK_TYPE_CALENDAR_DISPLAY_OPTIONS	 \
	(gtk_calendar_display_options_get_type())
#define GTK_TYPE_CELL_RENDERER_PIXBUF	 \
	(gtk_cell_renderer_pixbuf_get_type ())
#define GTK_TYPE_CELL_RENDERER_PROGRESS	 \
	(gtk_cell_renderer_progress_get_type ())
#define GTK_TYPE_CELL_RENDERER_TOGGLE	 \
	(gtk_cell_renderer_toggle_get_type ())
#define GTK_ICON_VIEW(obj)	 \
	(GTK_CHECK_CAST ((obj), GTK_TYPE_ICON_VIEW, GtkIconView))
#define GTK_OBJECT(object)	 \
	(GTK_CHECK_CAST ((object), GTK_TYPE_OBJECT, GtkObject))
#define GTK_ICON_VIEW_CLASS(klass)	 \
	(GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_ICON_VIEW, \
	GtkIconViewClass))
#define GTK_LIST_CLASS(klass)	 \
	(GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST, GtkListClass))
#define GTK_OBJECT_CLASS(klass)	 \
	(GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_OBJECT, GtkObjectClass))
#define GTK_IS_ICON_VIEW_CLASS(klass)	 \
	(GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ICON_VIEW))
#define GTK_IS_LIST_CLASS(klass)	 \
	(GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST))
#define GTK_IS_OBJECT_CLASS(klass)	 \
	(GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_OBJECT))
#define GTK_ICON_VIEW_GET_CLASS(obj)	 \
	(GTK_CHECK_GET_CLASS ((obj), GTK_TYPE_ICON_VIEW, GtkIconViewClass))
#define GTK_LIST_GET_CLASS(obj)	 \
	(GTK_CHECK_GET_CLASS ((obj), GTK_TYPE_LIST, GtkListClass))
#define GTK_OBJECT_GET_CLASS(object)	 \
	(GTK_CHECK_GET_CLASS ((object), GTK_TYPE_OBJECT, GtkObjectClass))
#define GTK_TYPE_COLOR_SELECTION_DIALOG	 \
	(gtk_color_selection_dialog_get_type ())
#define GTK_TYPE_FONT_SELECTION_DIALOG	 \
	(gtk_font_selection_dialog_get_type ())
#define GTK_IS_RESIZE_CONTAINER(widget)	 \
	(GTK_IS_CONTAINER (widget) && ((GtkContainer*) (widget))->resize_mode \
	!= GTK_RESIZE_PARENT)
#define GTK_CHECK_VERSION(major,minor,micro)	 \
	(GTK_MAJOR_VERSION > (major) || (GTK_MAJOR_VERSION == (major) && \
	GTK_MINOR_VERSION > (minor)) || (GTK_MAJOR_VERSION == (major) && \
	GTK_MINOR_VERSION == (minor) && GTK_MICRO_VERSION >= (micro)))
#define GTK_TYPE_PROGRESS_BAR_ORIENTATION	 \
	(gtk_progress_bar_orientation_get_type())
#define GTK_TYPE_SPIN_BUTTON_UPDATE_POLICY	 \
	(gtk_spin_button_update_policy_get_type())
#define GTK_TYPE_TREE_VIEW_COLUMN_SIZING	 \
	(gtk_tree_view_column_sizing_get_type())
#define GTK_TYPE_TREE_VIEW_DROP_POSITION	 \
	(gtk_tree_view_drop_position_get_type())
#define GTK_TYPE_UI_MANAGER_ITEM_TYPE	 \
	(gtk_ui_manager_item_type_get_type())
#define GTK_WIDGET_IS_SENSITIVE(wid)	 \
	(GTK_WIDGET_SENSITIVE (wid) && GTK_WIDGET_PARENT_SENSITIVE (wid))
#define GTK_WIDGET_DRAWABLE(wid)	 \
	(GTK_WIDGET_VISIBLE (wid) && GTK_WIDGET_MAPPED (wid))
#define GTK_ABOUT_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ABOUT_DIALOG, \
	GtkAboutDialogClass))
#define GTK_ACCEL_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_GROUP, \
	GtkAccelGroupClass))
#define GTK_ACCEL_LABEL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_LABEL, \
	GtkAccelLabelClass))
#define GTK_ACCEL_MAP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_MAP, \
	GtkAccelMapClass))
#define GTK_ACCESSIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCESSIBLE, \
	GtkAccessibleClass))
#define GTK_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACTION, GtkActionClass))
#define GTK_ADJUSTMENT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ADJUSTMENT, \
	GtkAdjustmentClass))
#define GTK_ALIGNMENT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ALIGNMENT, \
	GtkAlignmentClass))
#define GTK_ARROW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ARROW, GtkArrowClass))
#define GTK_ASPECT_FRAME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ASPECT_FRAME, \
	GtkAspectFrameClass))
#define GTK_BIN_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BIN, GtkBinClass))
#define GTK_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BOX, GtkBoxClass))
#define GTK_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUTTON, GtkButtonClass))
#define GTK_BUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUTTON_BOX, \
	GtkButtonBoxClass))
#define GTK_CALENDAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CALENDAR, \
	GtkCalendarClass))
#define GTK_CELL_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER, \
	GtkCellRendererClass))
#define GTK_CELL_RENDERER_COMBO_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_COMBO, \
	GtkCellRendererComboClass))
#define GTK_CELL_RENDERER_PIXBUF_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_PIXBUF, \
	GtkCellRendererPixbufClass))
#define GTK_CELL_RENDERER_PROGRESS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_PROGRESS, \
	GtkCellRendererProgressClass))
#define GTK_CELL_RENDERER_TEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_TEXT, \
	GtkCellRendererTextClass))
#define GTK_CELL_RENDERER_TOGGLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_TOGGLE, \
	GtkCellRendererToggleClass))
#define GTK_CHECK_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CHECK_BUTTON, \
	GtkCheckButtonClass))
#define GTK_CHECK_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CHECK_MENU_ITEM, \
	GtkCheckMenuItemClass))
#define GTK_COLOR_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_BUTTON, \
	GtkColorButtonClass))
#define GTK_COLOR_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_SELECTION, \
	GtkColorSelectionClass))
#define GTK_COLOR_SELECTION_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_SELECTION_DIALOG, \
	GtkColorSelectionDialogClass))
#define GTK_CONTAINER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CONTAINER, \
	GtkContainerClass))
#define GTK_CURVE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CURVE, GtkCurveClass))
#define GTK_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_DIALOG, GtkDialogClass))
#define GTK_DRAWING_AREA_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_DRAWING_AREA, \
	GtkDrawingAreaClass))
#define GTK_ENTRY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY, GtkEntryClass))
#define GTK_ENTRY_COMPLETION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY_COMPLETION, \
	GtkEntryCompletionClass))
#define GTK_EVENT_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_EVENT_BOX, \
	GtkEventBoxClass))
#define GTK_EXPANDER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_EXPANDER, \
	GtkExpanderClass))
#define GTK_FILE_CHOOSER_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_BUTTON, \
	GtkFileChooserButtonClass))
#define GTK_FILE_CHOOSER_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_DIALOG, \
	GtkFileChooserDialogClass))
#define GTK_FILE_CHOOSER_WIDGET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_WIDGET, \
	GtkFileChooserWidgetClass))
#define GTK_FILE_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_SELECTION, \
	GtkFileSelectionClass))
#define GTK_FIXED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FIXED, GtkFixedClass))
#define GTK_FONT_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_BUTTON, \
	GtkFontButtonClass))
#define GTK_FONT_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_SELECTION, \
	GtkFontSelectionClass))
#define GTK_FONT_SELECTION_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_SELECTION_DIALOG, \
	GtkFontSelectionDialogClass))
#define GTK_FRAME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FRAME, GtkFrameClass))
#define GTK_GAMMA_CURVE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_GAMMA_CURVE, \
	GtkGammaCurveClass))
#define GTK_HANDLE_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HANDLE_BOX, \
	GtkHandleBoxClass))
#define GTK_HBOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HBOX, GtkHBoxClass))
#define GTK_HBUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HBUTTON_BOX, \
	GtkHButtonBoxClass))
#define GTK_HPANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HPANED, GtkHPanedClass))
#define GTK_HRULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HRULER, GtkHRulerClass))
#define GTK_HSCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSCALE, GtkHScaleClass))
#define GTK_HSCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSCROLLBAR, \
	GtkHScrollbarClass))
#define GTK_HSEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSEPARATOR, \
	GtkHSeparatorClass))
#define GTK_ICON_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ICON_FACTORY, \
	GtkIconFactoryClass))
#define GTK_ICON_THEME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ICON_THEME, \
	GtkIconThemeClass))
#define GTK_IMAGE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IMAGE, GtkImageClass))
#define GTK_IMAGE_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IMAGE_MENU_ITEM, \
	GtkImageMenuItemClass))
#define GTK_IM_CONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IM_CONTEXT, \
	GtkIMContextClass))
#define GTK_IM_CONTEXT_SIMPLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IM_CONTEXT_SIMPLE, \
	GtkIMContextSimpleClass))
#define GTK_IM_MULTICONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IM_MULTICONTEXT, \
	GtkIMMulticontextClass))
#define GTK_INPUT_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_INPUT_DIALOG, \
	GtkInputDialogClass))
#define GTK_INVISIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_INVISIBLE, \
	GtkInvisibleClass))
#define GTK_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ITEM, GtkItemClass))
#define GTK_LABEL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LABEL, GtkLabelClass))
#define GTK_LAYOUT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LAYOUT, GtkLayoutClass))
#define GTK_LIST_STORE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST_STORE, \
	GtkListStoreClass))
#define GTK_MENU_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU, GtkMenuClass))
#define GTK_MENU_BAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_BAR, \
	GtkMenuBarClass))
#define GTK_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_ITEM, \
	GtkMenuItemClass))
#define GTK_MENU_SHELL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_SHELL, \
	GtkMenuShellClass))
#define GTK_MESSAGE_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MESSAGE_DIALOG, \
	GtkMessageDialogClass))
#define GTK_MISC_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MISC, GtkMiscClass))
#define GTK_NOTEBOOK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_NOTEBOOK, \
	GtkNotebookClass))
#define GTK_PANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PANED, GtkPanedClass))
#define GTK_PLUG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PLUG, GtkPlugClass))
#define GTK_PROGRESS_BAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PROGRESS_BAR, \
	GtkProgressBarClass))
#define GTK_RADIO_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_ACTION, \
	GtkRadioActionClass))
#define GTK_RADIO_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_BUTTON, \
	GtkRadioButtonClass))
#define GTK_RADIO_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_MENU_ITEM, \
	GtkRadioMenuItemClass))
#define GTK_RADIO_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_TOOL_BUTTON, \
	GtkRadioToolButtonClass))
#define GTK_RANGE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RANGE, GtkRangeClass))
#define GTK_RC_STYLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RC_STYLE, \
	GtkRcStyleClass))
#define GTK_RULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RULER, GtkRulerClass))
#define GTK_SCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCALE, GtkScaleClass))
#define GTK_SCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCROLLBAR, \
	GtkScrollbarClass))
#define GTK_SCROLLED_WINDOW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCROLLED_WINDOW, \
	GtkScrolledWindowClass))
#define GTK_SEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR, \
	GtkSeparatorClass))
#define GTK_SEPARATOR_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR_MENU_ITEM, \
	GtkSeparatorMenuItemClass))
#define GTK_SEPARATOR_TOOL_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR_TOOL_ITEM, \
	GtkSeparatorToolItemClass))
#define GTK_SETTINGS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SETTINGS, \
	GtkSettingsClass))
#define GTK_SIZE_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SIZE_GROUP, \
	GtkSizeGroupClass))
#define GTK_SOCKET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SOCKET, GtkSocketClass))
#define GTK_SPIN_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SPIN_BUTTON, \
	GtkSpinButtonClass))
#define GTK_STATUSBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_STATUSBAR, \
	GtkStatusbarClass))
#define GTK_STYLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_STYLE, GtkStyleClass))
#define GTK_TABLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TABLE, GtkTableClass))
#define GTK_TEAROFF_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEAROFF_MENU_ITEM, \
	GtkTearoffMenuItemClass))
#define GTK_TEXT_BUFFER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_BUFFER, \
	GtkTextBufferClass))
#define GTK_TEXT_CHILD_ANCHOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_CHILD_ANCHOR, \
	GtkTextChildAnchorClass))
#define GTK_TEXT_MARK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_MARK, \
	GtkTextMarkClass))
#define GTK_TEXT_TAG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_TAG, \
	GtkTextTagClass))
#define GTK_TEXT_TAG_TABLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_TAG_TABLE, \
	GtkTextTagTableClass))
#define GTK_TEXT_VIEW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_VIEW, \
	GtkTextViewClass))
#define GTK_TOGGLE_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOGGLE_ACTION, \
	GtkToggleActionClass))
#define GTK_TOGGLE_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOGGLE_BUTTON, \
	GtkToggleButtonClass))
#define GTK_TOGGLE_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOGGLE_TOOL_BUTTON, \
	GtkToggleToolButtonClass))
#define GTK_TOOLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOLBAR, \
	GtkToolbarClass))
#define GTK_TOOLTIPS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOLTIPS, \
	GtkTooltipsClass))
#define GTK_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOL_BUTTON, \
	GtkToolButtonClass))
#define GTK_TOOL_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOL_ITEM, \
	GtkToolItemClass))
#define GTK_TREE_MODEL_SORT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_MODEL_SORT, \
	GtkTreeModelSortClass))
#define GTK_TREE_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_SELECTION, \
	GtkTreeSelectionClass))
#define GTK_TREE_STORE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_STORE, \
	GtkTreeStoreClass))
#define GTK_TREE_VIEW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_VIEW, \
	GtkTreeViewClass))
#define GTK_TREE_VIEW_COLUMN_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_VIEW_COLUMN, \
	GtkTreeViewColumnClass))
#define GTK_UI_MANAGER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_UI_MANAGER, \
	GtkUIManagerClass))
#define GTK_VBOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VBOX, GtkVBoxClass))
#define GTK_VBUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VBUTTON_BOX, \
	GtkVButtonBoxClass))
#define GTK_VIEWPORT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VIEWPORT, \
	GtkViewportClass))
#define GTK_VPANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VPANED, GtkVPanedClass))
#define GTK_VRULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VRULER, GtkVRulerClass))
#define GTK_VSCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VSCALE, GtkVScaleClass))
#define GTK_VSCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VSCROLLBAR, \
	GtkVScrollbarClass))
#define GTK_VSEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VSEPARATOR, \
	GtkVSeparatorClass))
#define GTK_WIDGET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_WIDGET, GtkWidgetClass))
#define GTK_WINDOW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_WINDOW, GtkWindowClass))
#define GTK_WINDOW_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_WINDOW_GROUP, \
	GtkWindowGroupClass))
#define GTK_CELL_EDITABLE_CLASS(obj)	 \
	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_CELL_EDITABLE, \
	GtkCellEditableIface))
#define GTK_TREE_SORTABLE_CLASS(obj)	 \
	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_TREE_SORTABLE, \
	GtkTreeSortableIface))
#define GTK_ACTION_GROUP_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_ACTION_GROUP, \
	GtkActionGroupClass))
#define GTK_CELL_VIEW_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_CELL_VIEW, \
	GtkCellViewClass))
#define GTK_COMBO_BOX_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_COMBO_BOX, \
	GtkComboBoxClass))
#define GTK_COMBO_BOX_ENTRY_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_COMBO_BOX_ENTRY, \
	GtkComboBoxEntryClass))
#define GTK_EDITABLE_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_EDITABLE, \
	GtkEditableClass))
#define GTK_TREE_MODEL_FILTER_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_TREE_MODEL_FILTER, \
	GtkTreeModelFilterClass))
#define GTK_MENU_TOOL_BUTTON_CLASS(k)	 \
	(G_TYPE_CHECK_CLASS_CAST((k), GTK_TYPE_MENU_TOOL_BUTTON, \
	GtkMenuToolButtonClass))
#define GTK_IS_MENU_TOOL_BUTTON_CLASS(k)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_MENU_TOOL_BUTTON))
#define GTK_IS_ABOUT_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ABOUT_DIALOG))
#define GTK_IS_ACCEL_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_GROUP))
#define GTK_IS_ACCEL_LABEL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_LABEL))
#define GTK_IS_ACCEL_MAP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_MAP))
#define GTK_IS_ACCESSIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCESSIBLE))
#define GTK_IS_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACTION))
#define GTK_IS_ADJUSTMENT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ADJUSTMENT))
#define GTK_IS_ALIGNMENT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ALIGNMENT))
#define GTK_IS_ARROW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ARROW))
#define GTK_IS_ASPECT_FRAME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ASPECT_FRAME))
#define GTK_IS_BIN_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BIN))
#define GTK_IS_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BOX))
#define GTK_IS_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUTTON))
#define GTK_IS_BUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUTTON_BOX))
#define GTK_IS_CALENDAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CALENDAR))
#define GTK_IS_CELL_RENDERER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER))
#define GTK_IS_CELL_RENDERER_COMBO_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_COMBO))
#define GTK_IS_CELL_RENDERER_PIXBUF_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_PIXBUF))
#define GTK_IS_CELL_RENDERER_PROGRESS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_PROGRESS))
#define GTK_IS_CELL_RENDERER_TEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_TEXT))
#define GTK_IS_CELL_RENDERER_TOGGLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_TOGGLE))
#define GTK_IS_CHECK_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CHECK_BUTTON))
#define GTK_IS_CHECK_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CHECK_MENU_ITEM))
#define GTK_IS_COLOR_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_BUTTON))
#define GTK_IS_COLOR_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_SELECTION))
#define GTK_IS_COLOR_SELECTION_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_SELECTION_DIALOG))
#define GTK_IS_CONTAINER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CONTAINER))
#define GTK_IS_CURVE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CURVE))
#define GTK_IS_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_DIALOG))
#define GTK_IS_DRAWING_AREA_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_DRAWING_AREA))
#define GTK_IS_ENTRY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY))
#define GTK_IS_ENTRY_COMPLETION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY_COMPLETION))
#define GTK_IS_EVENT_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_EVENT_BOX))
#define GTK_IS_EXPANDER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_EXPANDER))
#define GTK_IS_FILE_CHOOSER_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_BUTTON))
#define GTK_IS_FILE_CHOOSER_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_DIALOG))
#define GTK_IS_FILE_CHOOSER_WIDGET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_WIDGET))
#define GTK_IS_FILE_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_SELECTION))
#define GTK_IS_FIXED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FIXED))
#define GTK_IS_FONT_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_BUTTON))
#define GTK_IS_FONT_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_SELECTION))
#define GTK_IS_FONT_SELECTION_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_SELECTION_DIALOG))
#define GTK_IS_FRAME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FRAME))
#define GTK_IS_GAMMA_CURVE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_GAMMA_CURVE))
#define GTK_IS_HANDLE_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HANDLE_BOX))
#define GTK_IS_HBOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HBOX))
#define GTK_IS_HBUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HBUTTON_BOX))
#define GTK_IS_HPANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HPANED))
#define GTK_IS_HRULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HRULER))
#define GTK_IS_HSCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSCALE))
#define GTK_IS_HSCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSCROLLBAR))
#define GTK_IS_HSEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSEPARATOR))
#define GTK_IS_ICON_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ICON_FACTORY))
#define GTK_IS_ICON_THEME_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ICON_THEME))
#define GTK_IS_IMAGE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IMAGE))
#define GTK_IS_IMAGE_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IMAGE_MENU_ITEM))
#define GTK_IS_IM_CONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IM_CONTEXT))
#define GTK_IS_IM_CONTEXT_SIMPLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IM_CONTEXT_SIMPLE))
#define GTK_IS_IM_MULTICONTEXT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IM_MULTICONTEXT))
#define GTK_IS_INPUT_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_INPUT_DIALOG))
#define GTK_IS_INVISIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_INVISIBLE))
#define GTK_IS_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ITEM))
#define GTK_IS_LABEL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LABEL))
#define GTK_IS_LAYOUT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LAYOUT))
#define GTK_IS_LIST_STORE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST_STORE))
#define GTK_IS_MENU_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU))
#define GTK_IS_MENU_BAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_BAR))
#define GTK_IS_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_ITEM))
#define GTK_IS_MENU_SHELL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_SHELL))
#define GTK_IS_MESSAGE_DIALOG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MESSAGE_DIALOG))
#define GTK_IS_MISC_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MISC))
#define GTK_IS_NOTEBOOK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_NOTEBOOK))
#define GTK_IS_PANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PANED))
#define GTK_IS_PLUG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PLUG))
#define GTK_IS_PROGRESS_BAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PROGRESS_BAR))
#define GTK_IS_RADIO_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_ACTION))
#define GTK_IS_RADIO_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_BUTTON))
#define GTK_IS_RADIO_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_MENU_ITEM))
#define GTK_IS_RADIO_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_TOOL_BUTTON))
#define GTK_IS_RANGE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RANGE))
#define GTK_IS_RC_STYLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RC_STYLE))
#define GTK_IS_RULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RULER))
#define GTK_IS_SCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCALE))
#define GTK_IS_SCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCROLLBAR))
#define GTK_IS_SCROLLED_WINDOW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCROLLED_WINDOW))
#define GTK_IS_SEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR))
#define GTK_IS_SEPARATOR_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR_MENU_ITEM))
#define GTK_IS_SEPARATOR_TOOL_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR_TOOL_ITEM))
#define GTK_IS_SETTINGS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SETTINGS))
#define GTK_IS_SIZE_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SIZE_GROUP))
#define GTK_IS_SOCKET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SOCKET))
#define GTK_IS_SPIN_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SPIN_BUTTON))
#define GTK_IS_STATUSBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_STATUSBAR))
#define GTK_IS_STYLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_STYLE))
#define GTK_IS_TABLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TABLE))
#define GTK_IS_TEAROFF_MENU_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEAROFF_MENU_ITEM))
#define GTK_IS_TEXT_BUFFER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_BUFFER))
#define GTK_IS_TEXT_CHILD_ANCHOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_CHILD_ANCHOR))
#define GTK_IS_TEXT_MARK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_MARK))
#define GTK_IS_TEXT_TAG_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_TAG))
#define GTK_IS_TEXT_TAG_TABLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_TAG_TABLE))
#define GTK_IS_TEXT_VIEW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_VIEW))
#define GTK_IS_TOGGLE_ACTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOGGLE_ACTION))
#define GTK_IS_TOGGLE_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOGGLE_BUTTON))
#define GTK_IS_TOGGLE_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOGGLE_TOOL_BUTTON))
#define GTK_IS_TOOLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOLBAR))
#define GTK_IS_TOOLTIPS_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOLTIPS))
#define GTK_IS_TOOL_BUTTON_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOL_BUTTON))
#define GTK_IS_TOOL_ITEM_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOL_ITEM))
#define GTK_IS_TREE_MODEL_SORT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_MODEL_SORT))
#define GTK_IS_TREE_SELECTION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_SELECTION))
#define GTK_IS_TREE_STORE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_STORE))
#define GTK_IS_TREE_VIEW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_VIEW))
#define GTK_IS_TREE_VIEW_COLUMN_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_VIEW_COLUMN))
#define GTK_IS_UI_MANAGER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_UI_MANAGER))
#define GTK_IS_VBOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VBOX))
#define GTK_IS_VBUTTON_BOX_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VBUTTON_BOX))
#define GTK_IS_VIEWPORT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VIEWPORT))
#define GTK_IS_VPANED_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VPANED))
#define GTK_IS_VRULER_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VRULER))
#define GTK_IS_VSCALE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VSCALE))
#define GTK_IS_VSCROLLBAR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VSCROLLBAR))
#define GTK_IS_VSEPARATOR_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VSEPARATOR))
#define GTK_IS_WIDGET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_WIDGET))
#define GTK_IS_WINDOW_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_WINDOW))
#define GTK_IS_WINDOW_GROUP_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_WINDOW_GROUP))
#define GTK_IS_ACTION_GROUP_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_ACTION_GROUP))
#define GTK_IS_CELL_VIEW_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_CELL_VIEW))
#define GTK_IS_COMBO_BOX_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_COMBO_BOX))
#define GTK_IS_COMBO_BOX_ENTRY_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_COMBO_BOX_ENTRY))
#define GTK_IS_EDITABLE_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_EDITABLE))
#define GTK_IS_TREE_MODEL_FILTER_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_TREE_MODEL_FILTER))
#define GTK_ACCEL_MAP(accel_map)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((accel_map), GTK_TYPE_ACCEL_MAP, \
	GtkAccelMap))
#define GTK_MENU_TOOL_BUTTON(o)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_MENU_TOOL_BUTTON, \
	GtkMenuToolButton))
#define GTK_TOOL_ITEM(o)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_TOOL_ITEM, GtkToolItem))
#define GTK_ACCEL_LABEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACCEL_LABEL, \
	GtkAccelLabel))
#define GTK_ACCESSIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACCESSIBLE, \
	GtkAccessible))
#define GTK_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACTION, GtkAction))
#define GTK_ACTION_GROUP(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACTION_GROUP, \
	GtkActionGroup))
#define GTK_ADJUSTMENT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ADJUSTMENT, \
	GtkAdjustment))
#define GTK_ALIGNMENT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ALIGNMENT, \
	GtkAlignment))
#define GTK_ARROW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ARROW, GtkArrow))
#define GTK_ASPECT_FRAME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ASPECT_FRAME, \
	GtkAspectFrame))
#define GTK_BIN(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BIN, GtkBin))
#define GTK_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BOX, GtkBox))
#define GTK_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUTTON, GtkButton))
#define GTK_BUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUTTON_BOX, \
	GtkButtonBox))
#define GTK_CALENDAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CALENDAR, GtkCalendar))
#define GTK_CELL_EDITABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_EDITABLE, \
	GtkCellEditable))
#define GTK_CELL_LAYOUT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_LAYOUT, \
	GtkCellLayout))
#define GTK_CELL_RENDERER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER, \
	GtkCellRenderer))
#define GTK_CELL_RENDERER_COMBO(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_COMBO, \
	GtkCellRendererCombo))
#define GTK_CELL_RENDERER_PIXBUF(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF, \
	GtkCellRendererPixbuf))
#define GTK_CELL_RENDERER_PROGRESS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS, \
	GtkCellRendererProgress))
#define GTK_CELL_RENDERER_TEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_TEXT, \
	GtkCellRendererText))
#define GTK_CELL_RENDERER_TOGGLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE, \
	GtkCellRendererToggle))
#define GTK_CELL_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_VIEW, GtkCellView))
#define GTK_CHECK_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CHECK_BUTTON, \
	GtkCheckButton))
#define GTK_CHECK_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CHECK_MENU_ITEM, \
	GtkCheckMenuItem))
#define GTK_CLIPBOARD(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CLIPBOARD, \
	GtkClipboard))
#define GTK_COLOR_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_BUTTON, \
	GtkColorButton))
#define GTK_COLOR_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_SELECTION, \
	GtkColorSelection))
#define GTK_COLOR_SELECTION_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG, \
	GtkColorSelectionDialog))
#define GTK_COMBO_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX, GtkComboBox))
#define GTK_COMBO_BOX_ENTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX_ENTRY, \
	GtkComboBoxEntry))
#define GTK_CONTAINER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CONTAINER, \
	GtkContainer))
#define GTK_CURVE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CURVE, GtkCurve))
#define GTK_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DIALOG, GtkDialog))
#define GTK_DRAWING_AREA(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DRAWING_AREA, \
	GtkDrawingArea))
#define GTK_EDITABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EDITABLE, GtkEditable))
#define GTK_ENTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY, GtkEntry))
#define GTK_ENTRY_COMPLETION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY_COMPLETION, \
	GtkEntryCompletion))
#define GTK_EVENT_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EVENT_BOX, GtkEventBox))
#define GTK_EXPANDER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EXPANDER, GtkExpander))
#define GTK_FILE_CHOOSER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER, \
	GtkFileChooser))
#define GTK_FILE_CHOOSER_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG, \
	GtkFileChooserDialog))
#define GTK_FILE_CHOOSER_WIDGET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET, \
	GtkFileChooserWidget))
#define GTK_FILE_FILTER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_FILTER, \
	GtkFileFilter))
#define GTK_FILE_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_SELECTION, \
	GtkFileSelection))
#define GTK_FIXED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FIXED, GtkFixed))
#define GTK_FONT_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_BUTTON, \
	GtkFontButton))
#define GTK_FONT_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_SELECTION, \
	GtkFontSelection))
#define GTK_FONT_SELECTION_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_SELECTION_DIALOG, \
	GtkFontSelectionDialog))
#define GTK_FRAME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FRAME, GtkFrame))
#define GTK_GAMMA_CURVE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_GAMMA_CURVE, \
	GtkGammaCurve))
#define GTK_HANDLE_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HANDLE_BOX, \
	GtkHandleBox))
#define GTK_HBOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HBOX, GtkHBox))
#define GTK_HBUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HBUTTON_BOX, \
	GtkHButtonBox))
#define GTK_HPANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HPANED, GtkHPaned))
#define GTK_HRULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HRULER, GtkHRuler))
#define GTK_HSCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSCALE, GtkHScale))
#define GTK_HSCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSCROLLBAR, \
	GtkHScrollbar))
#define GTK_HSEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSEPARATOR, \
	GtkHSeparator))
#define GTK_ICON_THEME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ICON_THEME, \
	GtkIconTheme))
#define GTK_IMAGE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IMAGE, GtkImage))
#define GTK_IMAGE_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IMAGE_MENU_ITEM, \
	GtkImageMenuItem))
#define GTK_IM_CONTEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IM_CONTEXT, \
	GtkIMContext))
#define GTK_IM_CONTEXT_SIMPLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE, \
	GtkIMContextSimple))
#define GTK_IM_MULTICONTEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IM_MULTICONTEXT, \
	GtkIMMulticontext))
#define GTK_INPUT_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_INPUT_DIALOG, \
	GtkInputDialog))
#define GTK_INVISIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_INVISIBLE, \
	GtkInvisible))
#define GTK_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ITEM, GtkItem))
#define GTK_LABEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LABEL, GtkLabel))
#define GTK_LAYOUT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LAYOUT, GtkLayout))
#define GTK_LIST_STORE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LIST_STORE, \
	GtkListStore))
#define GTK_MENU(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU, GtkMenu))
#define GTK_MENU_BAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_BAR, GtkMenuBar))
#define GTK_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_ITEM, GtkMenuItem))
#define GTK_MENU_SHELL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_SHELL, \
	GtkMenuShell))
#define GTK_MESSAGE_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MESSAGE_DIALOG, \
	GtkMessageDialog))
#define GTK_MISC(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MISC, GtkMisc))
#define GTK_NOTEBOOK(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_NOTEBOOK, GtkNotebook))
#define GTK_PANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PANED, GtkPaned))
#define GTK_PLUG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PLUG, GtkPlug))
#define GTK_PROGRESS_BAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PROGRESS_BAR, \
	GtkProgressBar))
#define GTK_RADIO_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_ACTION, \
	GtkRadioAction))
#define GTK_RADIO_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_BUTTON, \
	GtkRadioButton))
#define GTK_RADIO_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_MENU_ITEM, \
	GtkRadioMenuItem))
#define GTK_RADIO_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_TOOL_BUTTON, \
	GtkRadioToolButton))
#define GTK_RANGE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RANGE, GtkRange))
#define GTK_RULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RULER, GtkRuler))
#define GTK_SCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCALE, GtkScale))
#define GTK_SCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCROLLBAR, \
	GtkScrollbar))
#define GTK_SCROLLED_WINDOW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCROLLED_WINDOW, \
	GtkScrolledWindow))
#define GTK_SEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR, \
	GtkSeparator))
#define GTK_SEPARATOR_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM, \
	GtkSeparatorMenuItem))
#define GTK_SEPARATOR_TOOL_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM, \
	GtkSeparatorToolItem))
#define GTK_SETTINGS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SETTINGS, GtkSettings))
#define GTK_SIZE_GROUP(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SIZE_GROUP, \
	GtkSizeGroup))
#define GTK_SOCKET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SOCKET, GtkSocket))
#define GTK_SPIN_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SPIN_BUTTON, \
	GtkSpinButton))
#define GTK_STATUSBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_STATUSBAR, \
	GtkStatusbar))
#define GTK_TABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TABLE, GtkTable))
#define GTK_TEAROFF_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEAROFF_MENU_ITEM, \
	GtkTearoffMenuItem))
#define GTK_TEXT_BUFFER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_BUFFER, \
	GtkTextBuffer))
#define GTK_TEXT_TAG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_TAG, GtkTextTag))
#define GTK_TEXT_TAG_TABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_TAG_TABLE, \
	GtkTextTagTable))
#define GTK_TEXT_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_VIEW, GtkTextView))
#define GTK_TOGGLE_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOGGLE_ACTION, \
	GtkToggleAction))
#define GTK_TOGGLE_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOGGLE_BUTTON, \
	GtkToggleButton))
#define GTK_TOGGLE_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON, \
	GtkToggleToolButton))
#define GTK_TOOLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLBAR, GtkToolbar))
#define GTK_TOOLTIPS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLTIPS, GtkTooltips))
#define GTK_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOL_BUTTON, \
	GtkToolButton))
#define GTK_TREE_DRAG_DEST(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_DRAG_DEST, \
	GtkTreeDragDest))
#define GTK_TREE_DRAG_SOURCE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_DRAG_SOURCE, \
	GtkTreeDragSource))
#define GTK_TREE_MODEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL, \
	GtkTreeModel))
#define GTK_TREE_MODEL_FILTER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL_FILTER, \
	GtkTreeModelFilter))
#define GTK_TREE_MODEL_SORT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL_SORT, \
	GtkTreeModelSort))
#define GTK_TREE_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_SELECTION, \
	GtkTreeSelection))
#define GTK_TREE_SORTABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_SORTABLE, \
	GtkTreeSortable))
#define GTK_TREE_STORE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_STORE, \
	GtkTreeStore))
#define GTK_TREE_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_VIEW, GtkTreeView))
#define GTK_TREE_VIEW_COLUMN(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_VIEW_COLUMN, \
	GtkTreeViewColumn))
#define GTK_UI_MANAGER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_UI_MANAGER, \
	GtkUIManager))
#define GTK_VBOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VBOX, GtkVBox))
#define GTK_VBUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VBUTTON_BOX, \
	GtkVButtonBox))
#define GTK_VIEWPORT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VIEWPORT, GtkViewport))
#define GTK_VPANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VPANED, GtkVPaned))
#define GTK_VRULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VRULER, GtkVRuler))
#define GTK_VSCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VSCALE, GtkVScale))
#define GTK_VSCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VSCROLLBAR, \
	GtkVScrollbar))
#define GTK_VSEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VSEPARATOR, \
	GtkVSeparator))
#define GTK_WINDOW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_WINDOW, GtkWindow))
#define GTK_ABOUT_DIALOG(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_ABOUT_DIALOG, \
	GtkAboutDialog))
#define GTK_ACCEL_GROUP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_ACCEL_GROUP, \
	GtkAccelGroup))
#define GTK_FILE_CHOOSER_BUTTON(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_FILE_CHOOSER_BUTTON, \
	GtkFileChooserButton))
#define GTK_ICON_FACTORY(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_ICON_FACTORY, \
	GtkIconFactory))
#define GTK_RC_STYLE(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_RC_STYLE, \
	GtkRcStyle))
#define GTK_STYLE(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_STYLE, GtkStyle))
#define GTK_TEXT_CHILD_ANCHOR(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_TEXT_CHILD_ANCHOR, \
	GtkTextChildAnchor))
#define GTK_TEXT_MARK(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_TEXT_MARK, \
	GtkTextMark))
#define GTK_WINDOW_GROUP(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_WINDOW_GROUP, \
	GtkWindowGroup))
#define GTK_WIDGET(widget)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((widget), GTK_TYPE_WIDGET, GtkWidget))
#define GTK_IS_ACCEL_MAP(accel_map)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((accel_map), GTK_TYPE_ACCEL_MAP))
#define GTK_IS_MENU_TOOL_BUTTON(o)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_MENU_TOOL_BUTTON))
#define GTK_IS_TOOL_ITEM(o)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_TOOL_ITEM))
#define GTK_IS_ACCEL_LABEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACCEL_LABEL))
#define GTK_IS_ACCESSIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACCESSIBLE))
#define GTK_IS_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACTION))
#define GTK_IS_ACTION_GROUP(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACTION_GROUP))
#define GTK_IS_ADJUSTMENT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ADJUSTMENT))
#define GTK_IS_ALIGNMENT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ALIGNMENT))
#define GTK_IS_ARROW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ARROW))
#define GTK_IS_ASPECT_FRAME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ASPECT_FRAME))
#define GTK_IS_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUTTON))
#define GTK_IS_BUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUTTON_BOX))
#define GTK_IS_CALENDAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CALENDAR))
#define GTK_IS_CELL_EDITABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_EDITABLE))
#define GTK_IS_CELL_LAYOUT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_LAYOUT))
#define GTK_IS_CELL_RENDERER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER))
#define GTK_IS_CELL_RENDERER_COMBO(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_COMBO))
#define GTK_IS_CELL_RENDERER_PIXBUF(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF))
#define GTK_IS_CELL_RENDERER_PROGRESS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS))
#define GTK_IS_CELL_RENDERER_TEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_TEXT))
#define GTK_IS_CELL_RENDERER_TOGGLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE))
#define GTK_IS_CELL_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_VIEW))
#define GTK_IS_CHECK_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CHECK_BUTTON))
#define GTK_IS_CHECK_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CHECK_MENU_ITEM))
#define GTK_IS_CLIPBOARD(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CLIPBOARD))
#define GTK_IS_COLOR_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_BUTTON))
#define GTK_IS_COLOR_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_SELECTION))
#define GTK_IS_COLOR_SELECTION_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG))
#define GTK_IS_COMBO_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX))
#define GTK_IS_COMBO_BOX_ENTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX_ENTRY))
#define GTK_IS_CONTAINER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CONTAINER))
#define GTK_IS_CURVE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CURVE))
#define GTK_IS_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DIALOG))
#define GTK_IS_DRAWING_AREA(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DRAWING_AREA))
#define GTK_IS_EDITABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EDITABLE))
#define GTK_IS_ENTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY))
#define GTK_IS_ENTRY_COMPLETION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY_COMPLETION))
#define GTK_IS_EVENT_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EVENT_BOX))
#define GTK_IS_EXPANDER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EXPANDER))
#define GTK_IS_FILE_CHOOSER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER))
#define GTK_IS_FILE_CHOOSER_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG))
#define GTK_IS_FILE_CHOOSER_WIDGET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET))
#define GTK_IS_FILE_FILTER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_FILTER))
#define GTK_IS_FILE_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_SELECTION))
#define GTK_IS_FIXED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FIXED))
#define GTK_IS_FONT_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_BUTTON))
#define GTK_IS_FONT_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_SELECTION))
#define GTK_IS_FONT_SELECTION_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_SELECTION_DIALOG))
#define GTK_IS_FRAME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FRAME))
#define GTK_IS_GAMMA_CURVE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_GAMMA_CURVE))
#define GTK_IS_HANDLE_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HANDLE_BOX))
#define GTK_IS_HBOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HBOX))
#define GTK_IS_HBUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HBUTTON_BOX))
#define GTK_IS_HPANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HPANED))
#define GTK_IS_HRULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HRULER))
#define GTK_IS_HSCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSCALE))
#define GTK_IS_HSCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSCROLLBAR))
#define GTK_IS_HSEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSEPARATOR))
#define GTK_IS_ICON_THEME(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ICON_THEME))
#define GTK_IS_IMAGE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IMAGE))
#define GTK_IS_IMAGE_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IMAGE_MENU_ITEM))
#define GTK_IS_IM_CONTEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IM_CONTEXT))
#define GTK_IS_IM_CONTEXT_SIMPLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE))
#define GTK_IS_IM_MULTICONTEXT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IM_MULTICONTEXT))
#define GTK_IS_INPUT_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_INPUT_DIALOG))
#define GTK_IS_INVISIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_INVISIBLE))
#define GTK_IS_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ITEM))
#define GTK_IS_LABEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LABEL))
#define GTK_IS_LAYOUT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LAYOUT))
#define GTK_IS_LIST_STORE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LIST_STORE))
#define GTK_IS_MENU(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU))
#define GTK_IS_MENU_BAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_BAR))
#define GTK_IS_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_ITEM))
#define GTK_IS_MENU_SHELL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_SHELL))
#define GTK_IS_MESSAGE_DIALOG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MESSAGE_DIALOG))
#define GTK_IS_MISC(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MISC))
#define GTK_IS_NOTEBOOK(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_NOTEBOOK))
#define GTK_IS_PANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PANED))
#define GTK_IS_PLUG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PLUG))
#define GTK_IS_PROGRESS_BAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PROGRESS_BAR))
#define GTK_IS_RADIO_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_ACTION))
#define GTK_IS_RADIO_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_BUTTON))
#define GTK_IS_RADIO_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_MENU_ITEM))
#define GTK_IS_RADIO_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_TOOL_BUTTON))
#define GTK_IS_RANGE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RANGE))
#define GTK_IS_RULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RULER))
#define GTK_IS_SCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCALE))
#define GTK_IS_SCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCROLLBAR))
#define GTK_IS_SCROLLED_WINDOW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCROLLED_WINDOW))
#define GTK_IS_SEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR))
#define GTK_IS_SEPARATOR_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM))
#define GTK_IS_SEPARATOR_TOOL_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM))
#define GTK_IS_SETTINGS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SETTINGS))
#define GTK_IS_SIZE_GROUP(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SIZE_GROUP))
#define GTK_IS_SOCKET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SOCKET))
#define GTK_IS_SPIN_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SPIN_BUTTON))
#define GTK_IS_STATUSBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_STATUSBAR))
#define GTK_IS_TABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TABLE))
#define GTK_IS_TEAROFF_MENU_ITEM(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEAROFF_MENU_ITEM))
#define GTK_IS_TEXT_BUFFER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_BUFFER))
#define GTK_IS_TEXT_TAG(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_TAG))
#define GTK_IS_TEXT_TAG_TABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_TAG_TABLE))
#define GTK_IS_TEXT_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_VIEW))
#define GTK_IS_TOGGLE_ACTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOGGLE_ACTION))
#define GTK_IS_TOGGLE_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOGGLE_BUTTON))
#define GTK_IS_TOGGLE_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON))
#define GTK_IS_TOOLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLBAR))
#define GTK_IS_TOOLTIPS(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLTIPS))
#define GTK_IS_TOOL_BUTTON(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOL_BUTTON))
#define GTK_IS_TREE_DRAG_DEST(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_DRAG_DEST))
#define GTK_IS_TREE_DRAG_SOURCE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_DRAG_SOURCE))
#define GTK_IS_TREE_MODEL(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL))
#define GTK_IS_TREE_MODEL_FILTER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL_FILTER))
#define GTK_IS_TREE_MODEL_SORT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL_SORT))
#define GTK_IS_TREE_SELECTION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_SELECTION))
#define GTK_IS_TREE_SORTABLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_SORTABLE))
#define GTK_IS_TREE_STORE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_STORE))
#define GTK_IS_TREE_VIEW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_VIEW))
#define GTK_IS_TREE_VIEW_COLUMN(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_VIEW_COLUMN))
#define GTK_IS_UI_MANAGER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_UI_MANAGER))
#define GTK_IS_VBOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VBOX))
#define GTK_IS_VBUTTON_BOX(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VBUTTON_BOX))
#define GTK_IS_VIEWPORT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VIEWPORT))
#define GTK_IS_VPANED(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VPANED))
#define GTK_IS_VRULER(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VRULER))
#define GTK_IS_VSCALE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VSCALE))
#define GTK_IS_VSCROLLBAR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VSCROLLBAR))
#define GTK_IS_VSEPARATOR(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VSEPARATOR))
#define GTK_IS_WINDOW(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_WINDOW))
#define GTK_IS_ABOUT_DIALOG(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_ABOUT_DIALOG))
#define GTK_IS_ACCEL_GROUP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_ACCEL_GROUP))
#define GTK_IS_FILE_CHOOSER_BUTTON(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_FILE_CHOOSER_BUTTON))
#define GTK_IS_ICON_FACTORY(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_ICON_FACTORY))
#define GTK_IS_RC_STYLE(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_RC_STYLE))
#define GTK_IS_STYLE(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_STYLE))
#define GTK_IS_TEXT_CHILD_ANCHOR(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_TEXT_CHILD_ANCHOR))
#define GTK_IS_TEXT_MARK(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_TEXT_MARK))
#define GTK_IS_WINDOW_GROUP(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_WINDOW_GROUP))
#define GTK_IS_WIDGET(widget)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((widget), GTK_TYPE_WIDGET))
#define GTK_ACTION_GROUP_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_ACTION_GROUP, \
	GtkActionGroupClass))
#define GTK_CELL_VIEW_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_CELL_VIEW, \
	GtkCellViewClass))
#define GTK_COMBO_BOX_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_COMBO_BOX, \
	GtkComboBoxClass))
#define GTK_COMBO_BOX_ENTRY_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_COMBO_BOX_ENTRY, \
	GtkComboBoxEntryClass))
#define GTK_MENU_TOOL_BUTTON_GET_CLASS(o)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_MENU_TOOL_BUTTON, \
	GtkMenuToolButtonClass))
#define GTK_ABOUT_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ABOUT_DIALOG, \
	GtkAboutDialogClass))
#define GTK_ACCEL_GROUP_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_GROUP, \
	GtkAccelGroupClass))
#define GTK_ACCEL_LABEL_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_LABEL, \
	GtkAccelLabelClass))
#define GTK_ACCEL_MAP_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_MAP, \
	GtkAccelMapClass))
#define GTK_ACCESSIBLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCESSIBLE, \
	GtkAccessibleClass))
#define GTK_ADJUSTMENT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ADJUSTMENT, \
	GtkAdjustmentClass))
#define GTK_ALIGNMENT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ALIGNMENT, \
	GtkAlignmentClass))
#define GTK_ARROW_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ARROW, GtkArrowClass))
#define GTK_ASPECT_FRAME_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ASPECT_FRAME, \
	GtkAspectFrameClass))
#define GTK_BIN_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BIN, GtkBinClass))
#define GTK_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BOX, GtkBoxClass))
#define GTK_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUTTON, GtkButtonClass))
#define GTK_BUTTON_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUTTON_BOX, \
	GtkButtonBoxClass))
#define GTK_CALENDAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CALENDAR, \
	GtkCalendarClass))
#define GTK_CELL_RENDERER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER, \
	GtkCellRendererClass))
#define GTK_CELL_RENDERER_COMBO_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_COMBO, \
	GtkCellRendererTextClass))
#define GTK_CELL_RENDERER_PIXBUF_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF, \
	GtkCellRendererPixbufClass))
#define GTK_CELL_RENDERER_PROGRESS_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS, \
	GtkCellRendererProgressClass))
#define GTK_CELL_RENDERER_TEXT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_TEXT, \
	GtkCellRendererTextClass))
#define GTK_CELL_RENDERER_TOGGLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE, \
	GtkCellRendererToggleClass))
#define GTK_CHECK_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CHECK_BUTTON, \
	GtkCheckButtonClass))
#define GTK_CHECK_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CHECK_MENU_ITEM, \
	GtkCheckMenuItemClass))
#define GTK_COLOR_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_BUTTON, \
	GtkColorButtonClass))
#define GTK_COLOR_SELECTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_SELECTION, \
	GtkColorSelectionClass))
#define GTK_COLOR_SELECTION_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG, \
	GtkColorSelectionDialogClass))
#define GTK_CONTAINER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CONTAINER, \
	GtkContainerClass))
#define GTK_CURVE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CURVE, GtkCurveClass))
#define GTK_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DIALOG, GtkDialogClass))
#define GTK_DRAWING_AREA_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DRAWING_AREA, \
	GtkDrawingAreaClass))
#define GTK_ENTRY_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY, GtkEntryClass))
#define GTK_ENTRY_COMPLETION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY_COMPLETION, \
	GtkEntryCompletionClass))
#define GTK_EVENT_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_EVENT_BOX, \
	GtkEventBoxClass))
#define GTK_EXPANDER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_EXPANDER, \
	GtkExpanderClass))
#define GTK_FILE_CHOOSER_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG, \
	GtkFileChooserDialogClass))
#define GTK_FILE_CHOOSER_WIDGET_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET, \
	GtkFileChooserWidgetClass))
#define GTK_FILE_SELECTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_SELECTION, \
	GtkFileSelectionClass))
#define GTK_FIXED_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FIXED, GtkFixedClass))
#define GTK_FONT_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_BUTTON, \
	GtkFontButtonClass))
#define GTK_FONT_SELECTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_SELECTION, \
	GtkFontSelectionClass))
#define GTK_FONT_SELECTION_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_SELECTION_DIALOG, \
	GtkFontSelectionDialogClass))
#define GTK_FRAME_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FRAME, GtkFrameClass))
#define GTK_GAMMA_CURVE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_GAMMA_CURVE, \
	GtkGammaCurveClass))
#define GTK_HANDLE_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HANDLE_BOX, \
	GtkHandleBoxClass))
#define GTK_HBOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HBOX, GtkHBoxClass))
#define GTK_HBUTTON_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HBUTTON_BOX, \
	GtkHButtonBoxClass))
#define GTK_HPANED_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HPANED, GtkHPanedClass))
#define GTK_HRULER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HRULER, GtkHRulerClass))
#define GTK_HSCALE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSCALE, GtkHScaleClass))
#define GTK_HSCROLLBAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSCROLLBAR, \
	GtkHScrollbarClass))
#define GTK_HSEPARATOR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSEPARATOR, \
	GtkHSeparatorClass))
#define GTK_ICON_FACTORY_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ICON_FACTORY, \
	GtkIconFactoryClass))
#define GTK_ICON_THEME_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ICON_THEME, \
	GtkIconThemeClass))
#define GTK_IMAGE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IMAGE, GtkImageClass))
#define GTK_IMAGE_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IMAGE_MENU_ITEM, \
	GtkImageMenuItemClass))
#define GTK_IM_CONTEXT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IM_CONTEXT, \
	GtkIMContextClass))
#define GTK_IM_CONTEXT_SIMPLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE, \
	GtkIMContextSimpleClass))
#define GTK_IM_MULTICONTEXT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IM_MULTICONTEXT, \
	GtkIMMulticontextClass))
#define GTK_INPUT_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_INPUT_DIALOG, \
	GtkInputDialogClass))
#define GTK_INVISIBLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_INVISIBLE, \
	GtkInvisibleClass))
#define GTK_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ITEM, GtkItemClass))
#define GTK_LABEL_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LABEL, GtkLabelClass))
#define GTK_LAYOUT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LAYOUT, GtkLayoutClass))
#define GTK_LIST_STORE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LIST_STORE, \
	GtkListStoreClass))
#define GTK_MENU_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU, GtkMenuClass))
#define GTK_MENU_BAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_BAR, \
	GtkMenuBarClass))
#define GTK_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_ITEM, \
	GtkMenuItemClass))
#define GTK_MENU_SHELL_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_SHELL, \
	GtkMenuShellClass))
#define GTK_MESSAGE_DIALOG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MESSAGE_DIALOG, \
	GtkMessageDialogClass))
#define GTK_MISC_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MISC, GtkMiscClass))
#define GTK_NOTEBOOK_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_NOTEBOOK, \
	GtkNotebookClass))
#define GTK_PANED_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PANED, GtkPanedClass))
#define GTK_PLUG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PLUG, GtkPlugClass))
#define GTK_PROGRESS_BAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PROGRESS_BAR, \
	GtkProgressBarClass))
#define GTK_RADIO_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RADIO_BUTTON, \
	GtkRadioButtonClass))
#define GTK_RADIO_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RADIO_MENU_ITEM, \
	GtkRadioMenuItemClass))
#define GTK_RANGE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RANGE, GtkRangeClass))
#define GTK_RC_STYLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RC_STYLE, \
	GtkRcStyleClass))
#define GTK_RULER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RULER, GtkRulerClass))
#define GTK_SCALE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCALE, GtkScaleClass))
#define GTK_SCROLLBAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCROLLBAR, \
	GtkScrollbarClass))
#define GTK_SCROLLED_WINDOW_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCROLLED_WINDOW, \
	GtkScrolledWindowClass))
#define GTK_SEPARATOR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SEPARATOR, \
	GtkSeparatorClass))
#define GTK_SEPARATOR_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM, \
	GtkSeparatorMenuItemClass))
#define GTK_SETTINGS_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SETTINGS, \
	GtkSettingsClass))
#define GTK_SIZE_GROUP_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SIZE_GROUP, \
	GtkSizeGroupClass))
#define GTK_SOCKET_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SOCKET, GtkSocketClass))
#define GTK_SPIN_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SPIN_BUTTON, \
	GtkSpinButtonClass))
#define GTK_STATUSBAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_STATUSBAR, \
	GtkStatusbarClass))
#define GTK_STYLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_STYLE, GtkStyleClass))
#define GTK_TABLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TABLE, GtkTableClass))
#define GTK_TEAROFF_MENU_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEAROFF_MENU_ITEM, \
	GtkTearoffMenuItemClass))
#define GTK_TEXT_BUFFER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_BUFFER, \
	GtkTextBufferClass))
#define GTK_TEXT_CHILD_ANCHOR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_CHILD_ANCHOR, \
	GtkTextChildAnchorClass))
#define GTK_TEXT_MARK_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_MARK, \
	GtkTextMarkClass))
#define GTK_TEXT_TAG_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_TAG, \
	GtkTextTagClass))
#define GTK_TEXT_TAG_TABLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_TAG_TABLE, \
	GtkTextTagTableClass))
#define GTK_TEXT_VIEW_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_VIEW, \
	GtkTextViewClass))
#define GTK_TOGGLE_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOGGLE_BUTTON, \
	GtkToggleButtonClass))
#define GTK_TOOLBAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOLBAR, \
	GtkToolbarClass))
#define GTK_TOOLTIPS_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOLTIPS, \
	GtkTooltipsClass))
#define GTK_TREE_MODEL_FILTER_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_MODEL_FILTER, \
	GtkTreeModelFilterClass))
#define GTK_TREE_MODEL_SORT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_MODEL_SORT, \
	GtkTreeModelSortClass))
#define GTK_TREE_SELECTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_SELECTION, \
	GtkTreeSelectionClass))
#define GTK_TREE_STORE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_STORE, \
	GtkTreeStoreClass))
#define GTK_TREE_VIEW_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_VIEW, \
	GtkTreeViewClass))
#define GTK_TREE_VIEW_COLUMN_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_VIEW_COLUMN, \
	GtkTreeViewColumnClass))
#define GTK_VBOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VBOX, GtkVBoxClass))
#define GTK_VBUTTON_BOX_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VBUTTON_BOX, \
	GtkVButtonBoxClass))
#define GTK_VIEWPORT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VIEWPORT, \
	GtkViewportClass))
#define GTK_VPANED_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VPANED, GtkVPanedClass))
#define GTK_VRULER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VRULER, GtkVRulerClass))
#define GTK_VSCALE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VSCALE, GtkVScaleClass))
#define GTK_VSCROLLBAR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VSCROLLBAR, \
	GtkVScrollbarClass))
#define GTK_VSEPARATOR_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VSEPARATOR, \
	GtkVSeparatorClass))
#define GTK_WIDGET_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_WIDGET, GtkWidgetClass))
#define GTK_WINDOW_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_WINDOW, GtkWindowClass))
#define GTK_WINDOW_GROUP_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_WINDOW_GROUP, \
	GtkWindowGroupClass))
#define GTK_FILE_CHOOSER_BUTTON_GET_CLASS(object)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((object), GTK_TYPE_FILE_CHOOSER_BUTTON, \
	GtkFileChooserButtonClass))
#define GTK_TOOL_ITEM_GET_CLASS(o)	 \
	(G_TYPE_INSTANCE_GET_CLASS((o), GTK_TYPE_TOOL_ITEM, \
	GtkToolItemClass))
#define GTK_ACTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_ACTION, GtkActionClass))
#define GTK_RADIO_ACTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_RADIO_ACTION, \
	GtkRadioActionClass))
#define GTK_RADIO_TOOL_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_RADIO_TOOL_BUTTON, \
	GtkRadioToolButtonClass))
#define GTK_SEPARATOR_TOOL_ITEM_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM, \
	GtkSeparatorToolItemClass))
#define GTK_TOGGLE_ACTION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOGGLE_ACTION, \
	GtkToggleActionClass))
#define GTK_TOGGLE_TOOL_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON, \
	GtkToggleToolButtonClass))
#define GTK_TOOL_BUTTON_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOOL_BUTTON, \
	GtkToolButtonClass))
#define GTK_UI_MANAGER_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_UI_MANAGER, \
	GtkUIManagerClass))
#define GTK_EDITABLE_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_EDITABLE, \
	GtkEditableClass))
#define GTK_CELL_EDITABLE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_CELL_EDITABLE, \
	GtkCellEditableIface))
#define GTK_CELL_LAYOUT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_CELL_LAYOUT, \
	GtkCellLayoutIface))
#define GTK_TREE_DRAG_DEST_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_DRAG_DEST, \
	GtkTreeDragDestIface))
#define GTK_TREE_DRAG_SOURCE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_DRAG_SOURCE, \
	GtkTreeDragSourceIface))
#define GTK_TREE_MODEL_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_MODEL, \
	GtkTreeModelIface))
#define GTK_TREE_SORTABLE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_SORTABLE, \
	GtkTreeSortableIface))
#define GTK_OBJECT_TYPE_NAME(object)	 \
	(g_type_name (GTK_OBJECT_TYPE (object)))
#define GTK_CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID(object,property_id,pspec)	 \
	G_OBJECT_WARN_INVALID_PSPEC ((object), "child property id", \
	(property_id), (pspec))
#define GTK_OBJECT_UNSET_FLAGS(obj,flag)	 \
	G_STMT_START{ (GTK_OBJECT_FLAGS (obj) &= ~(flag)); }G_STMT_END
#define GTK_OBJECT_SET_FLAGS(obj,flag)	 \
	G_STMT_START{ (GTK_OBJECT_FLAGS (obj) |= (flag)); }G_STMT_END
#define GTK_WIDGET_UNSET_FLAGS(wid,flag)	 \
	G_STMT_START{ (GTK_WIDGET_FLAGS (wid) &= ~(flag)); }G_STMT_END
#define GTK_WIDGET_SET_FLAGS(wid,flag)	 \
	G_STMT_START{ (GTK_WIDGET_FLAGS (wid) |= (flag)); }G_STMT_END
#define GTK_MAJOR_VERSION	(2)
#define GTK_TEXT_VIEW_PRIORITY_VALIDATE	(GDK_PRIORITY_REDRAW + 5)
#define GTK_TYPE_ABOUT_DIALOG	(gtk_about_dialog_get_type ())
#define GTK_TYPE_ACCEL_FLAGS	(gtk_accel_flags_get_type())
#define GTK_TYPE_ACCEL_GROUP	(gtk_accel_group_get_type ())
#define GTK_TYPE_ACCEL_LABEL	(gtk_accel_label_get_type ())
#define GTK_TYPE_ACCEL_MAP	(gtk_accel_map_get_type ())
#define GTK_TYPE_ACCESSIBLE	(gtk_accessible_get_type ())
#define GTK_TYPE_ACTION	(gtk_action_get_type ())
#define GTK_TYPE_ACTION_GROUP	(gtk_action_group_get_type ())
#define GTK_TYPE_ADJUSTMENT	(gtk_adjustment_get_type ())
#define GTK_TYPE_ALIGNMENT	(gtk_alignment_get_type ())
#define GTK_TYPE_ANCHOR_TYPE	(gtk_anchor_type_get_type())
#define GTK_TYPE_ARG_FLAGS	(gtk_arg_flags_get_type())
#define GTK_TYPE_ARROW	(gtk_arrow_get_type ())
#define GTK_TYPE_ARROW_TYPE	(gtk_arrow_type_get_type())
#define GTK_TYPE_ASPECT_FRAME	(gtk_aspect_frame_get_type ())
#define GTK_TYPE_ATTACH_OPTIONS	(gtk_attach_options_get_type())
#define GTK_TYPE_BIN	(gtk_bin_get_type ())
#define GTK_TYPE_BORDER	(gtk_border_get_type ())
#define GTK_TYPE_BOX	(gtk_box_get_type ())
#define GTK_TYPE_BUTTONS_TYPE	(gtk_buttons_type_get_type())
#define GTK_TYPE_BUTTON_BOX	(gtk_button_box_get_type ())
#define GTK_TYPE_BUTTON_BOX_STYLE	(gtk_button_box_style_get_type())
#define GTK_TYPE_BUTTON	(gtk_button_get_type ())
#define GTK_TYPE_CALENDAR	(gtk_calendar_get_type ())
#define GTK_TYPE_CELL_EDITABLE	(gtk_cell_editable_get_type ())
#define GTK_TYPE_CELL_LAYOUT	(gtk_cell_layout_get_type ())
#define GTK_TYPE_CELL_RENDERER_COMBO	(gtk_cell_renderer_combo_get_type ())
#define GTK_TYPE_CELL_RENDERER	(gtk_cell_renderer_get_type ())
#define GTK_TYPE_CELL_RENDERER_MODE	(gtk_cell_renderer_mode_get_type())
#define GTK_TYPE_CELL_RENDERER_STATE	(gtk_cell_renderer_state_get_type())
#define GTK_TYPE_CELL_RENDERER_TEXT	(gtk_cell_renderer_text_get_type ())
#define GTK_TYPE_CELL_VIEW	(gtk_cell_view_get_type ())
#define GTK_TYPE_CHECK_BUTTON	(gtk_check_button_get_type ())
#define GTK_LIST(obj)	(GTK_CHECK_CAST ((obj), GTK_TYPE_LIST, GtkList))
#define GTK_TYPE_CHECK_MENU_ITEM	(gtk_check_menu_item_get_type ())
#define GTK_IS_ICON_VIEW(obj)	(GTK_CHECK_TYPE ((obj), GTK_TYPE_ICON_VIEW))
#define GTK_IS_LIST(obj)	(GTK_CHECK_TYPE ((obj), GTK_TYPE_LIST))
#define GTK_IS_OBJECT(object)	(GTK_CHECK_TYPE ((object), GTK_TYPE_OBJECT))
#define GTK_TYPE_CLIPBOARD	(gtk_clipboard_get_type ())
#define GTK_TYPE_COLOR_BUTTON	(gtk_color_button_get_type ())
#define GTK_TYPE_COLOR_SELECTION	(gtk_color_selection_get_type ())
#define GTK_TYPE_COMBO_BOX_ENTRY	(gtk_combo_box_entry_get_type ())
#define GTK_TYPE_COMBO_BOX	(gtk_combo_box_get_type ())
#define GTK_TYPE_CONTAINER	(gtk_container_get_type ())
#define GTK_TYPE_CORNER_TYPE	(gtk_corner_type_get_type())
#define GTK_TYPE_CURVE	(gtk_curve_get_type ())
#define GTK_TYPE_CURVE_TYPE	(gtk_curve_type_get_type())
#define GTK_TYPE_DEBUG_FLAG	(gtk_debug_flag_get_type())
#define GTK_TYPE_DELETE_TYPE	(gtk_delete_type_get_type())
#define GTK_TYPE_DEST_DEFAULTS	(gtk_dest_defaults_get_type())
#define GTK_TYPE_DIALOG_FLAGS	(gtk_dialog_flags_get_type())
#define GTK_TYPE_DIALOG	(gtk_dialog_get_type ())
#define GTK_TYPE_DIRECTION_TYPE	(gtk_direction_type_get_type())
#define GTK_TYPE_DRAWING_AREA	(gtk_drawing_area_get_type ())
#define GTK_TYPE_EDITABLE	(gtk_editable_get_type ())
#define GTK_TYPE_ENTRY_COMPLETION	(gtk_entry_completion_get_type ())
#define GTK_TYPE_ENTRY	(gtk_entry_get_type ())
#define GTK_TYPE_EVENT_BOX	(gtk_event_box_get_type ())
#define GTK_TYPE_EXPANDER	(gtk_expander_get_type ())
#define GTK_TYPE_EXPANDER_STYLE	(gtk_expander_style_get_type())
#define GTK_TYPE_FILE_CHOOSER_ACTION	(gtk_file_chooser_action_get_type())
#define GTK_TYPE_FILE_CHOOSER_BUTTON	(gtk_file_chooser_button_get_type ())
#define GTK_TYPE_FILE_CHOOSER_DIALOG	(gtk_file_chooser_dialog_get_type ())
#define GTK_TYPE_FILE_CHOOSER_ERROR	(gtk_file_chooser_error_get_type())
#define GTK_FILE_CHOOSER_ERROR	(gtk_file_chooser_error_quark ())
#define GTK_TYPE_FILE_CHOOSER	(gtk_file_chooser_get_type ())
#define GTK_TYPE_FILE_CHOOSER_WIDGET	(gtk_file_chooser_widget_get_type ())
#define GTK_TYPE_FILE_FILTER_FLAGS	(gtk_file_filter_flags_get_type())
#define GTK_TYPE_FILE_FILTER	(gtk_file_filter_get_type ())
#define GTK_TYPE_FILE_SELECTION	(gtk_file_selection_get_type ())
#define GTK_TYPE_FIXED	(gtk_fixed_get_type ())
#define GTK_TYPE_FONT_BUTTON	(gtk_font_button_get_type ())
#define GTK_TYPE_FONT_SELECTION	(gtk_font_selection_get_type ())
#define GTK_TYPE_FRAME	(gtk_frame_get_type ())
#define GTK_TYPE_GAMMA_CURVE	(gtk_gamma_curve_get_type ())
#define GTK_TYPE_HANDLE_BOX	(gtk_handle_box_get_type ())
#define GTK_TYPE_HBOX	(gtk_hbox_get_type ())
#define GTK_TYPE_HBUTTON_BOX	(gtk_hbutton_box_get_type ())
#define GTK_TYPE_HPANED	(gtk_hpaned_get_type ())
#define GTK_TYPE_HRULER	(gtk_hruler_get_type ())
#define GTK_TYPE_HSCALE	(gtk_hscale_get_type ())
#define GTK_TYPE_HSCROLLBAR	(gtk_hscrollbar_get_type ())
#define GTK_TYPE_HSEPARATOR	(gtk_hseparator_get_type ())
#define GTK_TYPE_ICON_FACTORY	(gtk_icon_factory_get_type ())
#define GTK_TYPE_ICON_INFO	(gtk_icon_info_get_type ())
#define GTK_TYPE_ICON_LOOKUP_FLAGS	(gtk_icon_lookup_flags_get_type())
#define GTK_TYPE_ICON_SET	(gtk_icon_set_get_type ())
#define GTK_TYPE_ICON_SIZE	(gtk_icon_size_get_type())
#define GTK_TYPE_ICON_SOURCE	(gtk_icon_source_get_type ())
#define GTK_TYPE_ICON_THEME_ERROR	(gtk_icon_theme_error_get_type())
#define GTK_TYPE_ICON_THEME	(gtk_icon_theme_get_type ())
#define GTK_TYPE_ICON_VIEW	(gtk_icon_view_get_type ())
#define GTK_TYPE_IDENTIFIER	(gtk_identifier_get_type ())
#define GTK_TYPE_IMAGE	(gtk_image_get_type ())
#define GTK_TYPE_IMAGE_MENU_ITEM	(gtk_image_menu_item_get_type ())
#define GTK_TYPE_IMAGE_TYPE	(gtk_image_type_get_type())
#define GTK_TYPE_IM_CONTEXT	(gtk_im_context_get_type ())
#define GTK_TYPE_IM_CONTEXT_SIMPLE	(gtk_im_context_simple_get_type ())
#define GTK_TYPE_IM_MULTICONTEXT	(gtk_im_multicontext_get_type ())
#define GTK_TYPE_IM_PREEDIT_STYLE	(gtk_im_preedit_style_get_type())
#define GTK_TYPE_IM_STATUS_STYLE	(gtk_im_status_style_get_type())
#define GTK_TYPE_INPUT_DIALOG	(gtk_input_dialog_get_type ())
#define GTK_TYPE_INVISIBLE	(gtk_invisible_get_type ())
#define GTK_TYPE_ITEM	(gtk_item_get_type ())
#define GTK_TYPE_JUSTIFICATION	(gtk_justification_get_type())
#define GTK_TYPE_LABEL	(gtk_label_get_type ())
#define GTK_TYPE_LAYOUT	(gtk_layout_get_type ())
#define GTK_TYPE_LIST	(gtk_list_get_type ())
#define GTK_TYPE_LIST_STORE	(gtk_list_store_get_type ())
#define GTK_TYPE_MATCH_TYPE	(gtk_match_type_get_type())
#define GTK_TYPE_MENU_BAR	(gtk_menu_bar_get_type ())
#define GTK_TYPE_MENU_DIRECTION_TYPE	(gtk_menu_direction_type_get_type())
#define GTK_TYPE_MENU	(gtk_menu_get_type ())
#define GTK_TYPE_MENU_ITEM	(gtk_menu_item_get_type ())
#define GTK_TYPE_MENU_SHELL	(gtk_menu_shell_get_type ())
#define GTK_TYPE_MENU_TOOL_BUTTON	(gtk_menu_tool_button_get_type ())
#define GTK_TYPE_MESSAGE_DIALOG	(gtk_message_dialog_get_type ())
#define GTK_TYPE_MESSAGE_TYPE	(gtk_message_type_get_type())
#define GTK_TYPE_METRIC_TYPE	(gtk_metric_type_get_type())
#define GTK_TYPE_MISC	(gtk_misc_get_type ())
#define GTK_TYPE_MOVEMENT_STEP	(gtk_movement_step_get_type())
#define GTK_TYPE_NOTEBOOK	(gtk_notebook_get_type ())
#define GTK_TYPE_NOTEBOOK_TAB	(gtk_notebook_tab_get_type())
#define GTK_OBJECT_FLAGS(obj)	(GTK_OBJECT (obj)->flags)
#define GTK_WIDGET_FLAGS(wid)	(GTK_OBJECT_FLAGS (wid))
#define GTK_TYPE_OBJECT_FLAGS	(gtk_object_flags_get_type())
#define GTK_TYPE_OBJECT	(gtk_object_get_type ())
#define GTK_WIDGET_TYPE(wid)	(GTK_OBJECT_TYPE (wid))
#define GTK_TYPE_ORIENTATION	(gtk_orientation_get_type())
#define GTK_TYPE_PACK_TYPE	(gtk_pack_type_get_type())
#define GTK_TYPE_PANED	(gtk_paned_get_type ())
#define GTK_TYPE_PATH_PRIORITY_TYPE	(gtk_path_priority_type_get_type())
#define GTK_TYPE_PATH_TYPE	(gtk_path_type_get_type())
#define GTK_TYPE_PLUG	(gtk_plug_get_type ())
#define GTK_TYPE_POLICY_TYPE	(gtk_policy_type_get_type())
#define GTK_TYPE_POSITION_TYPE	(gtk_position_type_get_type())
#define GTK_TYPE_PROGRESS_BAR	(gtk_progress_bar_get_type ())
#define GTK_TYPE_PROGRESS_BAR_STYLE	(gtk_progress_bar_style_get_type())
#define GTK_TYPE_RADIO_ACTION	(gtk_radio_action_get_type ())
#define GTK_TYPE_RADIO_BUTTON	(gtk_radio_button_get_type ())
#define GTK_TYPE_RADIO_MENU_ITEM	(gtk_radio_menu_item_get_type ())
#define GTK_TYPE_RADIO_TOOL_BUTTON	(gtk_radio_tool_button_get_type ())
#define GTK_TYPE_RANGE	(gtk_range_get_type ())
#define GTK_TYPE_RC_FLAGS	(gtk_rc_flags_get_type())
#define GTK_TYPE_RC_STYLE	(gtk_rc_style_get_type ())
#define GTK_TYPE_RC_TOKEN_TYPE	(gtk_rc_token_type_get_type())
#define GTK_TYPE_RELIEF_STYLE	(gtk_relief_style_get_type())
#define GTK_TYPE_REQUISITION	(gtk_requisition_get_type ())
#define GTK_TYPE_RESIZE_MODE	(gtk_resize_mode_get_type())
#define GTK_TYPE_RESPONSE_TYPE	(gtk_response_type_get_type())
#define GTK_TYPE_RULER	(gtk_ruler_get_type ())
#define GTK_TYPE_SCALE	(gtk_scale_get_type ())
#define GTK_TYPE_SCROLLBAR	(gtk_scrollbar_get_type ())
#define GTK_TYPE_SCROLLED_WINDOW	(gtk_scrolled_window_get_type ())
#define GTK_TYPE_SCROLL_STEP	(gtk_scroll_step_get_type())
#define GTK_TYPE_SCROLL_TYPE	(gtk_scroll_type_get_type())
#define GTK_TYPE_SELECTION_DATA	(gtk_selection_data_get_type ())
#define GTK_TYPE_SELECTION_MODE	(gtk_selection_mode_get_type())
#define GTK_TYPE_SEPARATOR	(gtk_separator_get_type ())
#define GTK_TYPE_SEPARATOR_MENU_ITEM	(gtk_separator_menu_item_get_type ())
#define GTK_TYPE_SEPARATOR_TOOL_ITEM	(gtk_separator_tool_item_get_type ())
#define GTK_TYPE_SETTINGS	(gtk_settings_get_type ())
#define GTK_TYPE_SHADOW_TYPE	(gtk_shadow_type_get_type())
#define GTK_TYPE_SIDE_TYPE	(gtk_side_type_get_type())
#define GTK_TYPE_SIGNAL_RUN_TYPE	(gtk_signal_run_type_get_type())
#define GTK_TYPE_SIZE_GROUP	(gtk_size_group_get_type ())
#define GTK_TYPE_SIZE_GROUP_MODE	(gtk_size_group_mode_get_type())
#define GTK_TYPE_SOCKET	(gtk_socket_get_type ())
#define GTK_TYPE_SORT_TYPE	(gtk_sort_type_get_type())
#define GTK_TYPE_SPIN_BUTTON	(gtk_spin_button_get_type ())
#define GTK_TYPE_SPIN_TYPE	(gtk_spin_type_get_type())
#define GTK_TYPE_STATE_TYPE	(gtk_state_type_get_type())
#define GTK_TYPE_STATUSBAR	(gtk_statusbar_get_type ())
#define GTK_STYLE_ATTACHED(style)	(GTK_STYLE (style)->attach_count > 0)
#define GTK_TYPE_STYLE	(gtk_style_get_type ())
#define GTK_TYPE_SUBMENU_DIRECTION	(gtk_submenu_direction_get_type())
#define GTK_TYPE_SUBMENU_PLACEMENT	(gtk_submenu_placement_get_type())
#define GTK_TYPE_TABLE	(gtk_table_get_type ())
#define GTK_TYPE_TARGET_FLAGS	(gtk_target_flags_get_type())
#define GTK_TYPE_TEAROFF_MENU_ITEM	(gtk_tearoff_menu_item_get_type ())
#define GTK_TYPE_TEXT_ATTRIBUTES	(gtk_text_attributes_get_type ())
#define GTK_TYPE_TEXT_BUFFER	(gtk_text_buffer_get_type ())
#define GTK_TYPE_TEXT_CHILD_ANCHOR	(gtk_text_child_anchor_get_type ())
#define GTK_TYPE_TEXT_DIRECTION	(gtk_text_direction_get_type())
#define GTK_TYPE_TEXT_ITER	(gtk_text_iter_get_type ())
#define GTK_TYPE_TEXT_MARK	(gtk_text_mark_get_type ())
#define GTK_TYPE_TEXT_SEARCH_FLAGS	(gtk_text_search_flags_get_type())
#define GTK_TYPE_TEXT_TAG	(gtk_text_tag_get_type ())
#define GTK_TYPE_TEXT_TAG_TABLE	(gtk_text_tag_table_get_type ())
#define GTK_TYPE_TEXT_VIEW	(gtk_text_view_get_type ())
#define GTK_TYPE_TEXT_WINDOW_TYPE	(gtk_text_window_type_get_type())
#define GTK_TYPE_TOGGLE_ACTION	(gtk_toggle_action_get_type ())
#define GTK_TYPE_TOGGLE_BUTTON	(gtk_toggle_button_get_type ())
#define GTK_TYPE_TOGGLE_TOOL_BUTTON	(gtk_toggle_tool_button_get_type ())
#define GTK_TYPE_TOOLBAR_CHILD_TYPE	(gtk_toolbar_child_type_get_type())
#define GTK_TYPE_TOOLBAR	(gtk_toolbar_get_type ())
#define GTK_TYPE_TOOLBAR_SPACE_STYLE	(gtk_toolbar_space_style_get_type())
#define GTK_TYPE_TOOLBAR_STYLE	(gtk_toolbar_style_get_type())
#define GTK_TYPE_TOOLTIPS	(gtk_tooltips_get_type ())
#define GTK_TYPE_TOOL_BUTTON	(gtk_tool_button_get_type ())
#define GTK_TYPE_TOOL_ITEM	(gtk_tool_item_get_type ())
#define GTK_TYPE_TREE_DRAG_DEST	(gtk_tree_drag_dest_get_type ())
#define GTK_TYPE_TREE_DRAG_SOURCE	(gtk_tree_drag_source_get_type ())
#define GTK_TYPE_TREE_ITER	(gtk_tree_iter_get_type ())
#define GTK_TYPE_TREE_MODEL_FILTER	(gtk_tree_model_filter_get_type ())
#define GTK_TYPE_TREE_MODEL_FLAGS	(gtk_tree_model_flags_get_type())
#define GTK_TYPE_TREE_MODEL	(gtk_tree_model_get_type ())
#define GTK_TYPE_TREE_MODEL_SORT	(gtk_tree_model_sort_get_type ())
#define GTK_TYPE_TREE_PATH	(gtk_tree_path_get_type ())
#define GTK_TYPE_TREE_ROW_REFERENCE	(gtk_tree_row_reference_get_type ())
#define GTK_TYPE_TREE_SELECTION	(gtk_tree_selection_get_type ())
#define GTK_TYPE_TREE_SORTABLE	(gtk_tree_sortable_get_type ())
#define GTK_TYPE_TREE_STORE	(gtk_tree_store_get_type ())
#define GTK_TYPE_TREE_VIEW_COLUMN	(gtk_tree_view_column_get_type ())
#define GTK_TYPE_TREE_VIEW	(gtk_tree_view_get_type ())
#define GTK_TYPE_TREE_VIEW_MODE	(gtk_tree_view_mode_get_type())
#define GTK_TYPE_UI_MANAGER	(gtk_ui_manager_get_type ())
#define GTK_TYPE_UPDATE_TYPE	(gtk_update_type_get_type())
#define GTK_TYPE_VBOX	(gtk_vbox_get_type ())
#define GTK_TYPE_VBUTTON_BOX	(gtk_vbutton_box_get_type ())
#define GTK_TYPE_VIEWPORT	(gtk_viewport_get_type ())
#define GTK_TYPE_VISIBILITY	(gtk_visibility_get_type())
#define GTK_TYPE_VPANED	(gtk_vpaned_get_type ())
#define GTK_TYPE_VRULER	(gtk_vruler_get_type ())
#define GTK_TYPE_VSCALE	(gtk_vscale_get_type ())
#define GTK_TYPE_VSCROLLBAR	(gtk_vscrollbar_get_type ())
#define GTK_TYPE_VSEPARATOR	(gtk_vseparator_get_type ())
#define GTK_WIDGET_SAVED_STATE(wid)	(GTK_WIDGET (wid)->saved_state)
#define GTK_WIDGET_STATE(wid)	(GTK_WIDGET (wid)->state)
#define GTK_TYPE_WIDGET_FLAGS	(gtk_widget_flags_get_type())
#define GTK_TYPE_WIDGET	(gtk_widget_get_type ())
#define GTK_TYPE_WIDGET_HELP_TYPE	(gtk_widget_help_type_get_type())
#define GTK_TYPE_WINDOW	(gtk_window_get_type ())
#define GTK_TYPE_WINDOW_GROUP	(gtk_window_group_get_type ())
#define GTK_TYPE_WINDOW_POSITION	(gtk_window_position_get_type())
#define GTK_TYPE_WINDOW_TYPE	(gtk_window_type_get_type())
#define GTK_TYPE_WRAP_MODE	(gtk_wrap_mode_get_type())
#define GTK_PRIORITY_RESIZE	(G_PRIORITY_HIGH_IDLE + 10)
#define GTK_IS_BIN(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BIN))
#define GTK_IS_BOX(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BOX))
#define GTK_OBJECT_TYPE(object)	(G_TYPE_FROM_INSTANCE (object))
#define GTK_BUTTONBOX_DEFAULT	-1
#define GTK_INPUT_ERROR	-1
#define GTK_PATH_PRIO_MASK	0x0f
#define GTK_MAX_COMPOSE_LEN	7
#define GTKMAIN_C_VAR	extern
#define GTKVAR	extern
#define GTK_STOCK_ABOUT	"gtk-about"
#define GTK_STOCK_ADD	"gtk-add"
#define GTK_STOCK_APPLY	"gtk-apply"
#define GTK_STOCK_BOLD	"gtk-bold"
#define GTK_STOCK_CANCEL	"gtk-cancel"
#define GTK_STOCK_CDROM	"gtk-cdrom"
#define GTK_STOCK_CLEAR	"gtk-clear"
#define GTK_STOCK_CLOSE	"gtk-close"
#define GTK_STOCK_COLOR_PICKER	"gtk-color-picker"
#define GTK_STOCK_CONNECT	"gtk-connect"
#define GTK_STOCK_CONVERT	"gtk-convert"
#define GTK_STOCK_COPY	"gtk-copy"
#define GTK_STOCK_CUT	"gtk-cut"
#define GTK_STOCK_DELETE	"gtk-delete"
#define GTK_STOCK_DIALOG_AUTHENTICATION	"gtk-dialog-authentication"
#define GTK_STOCK_DIALOG_ERROR	"gtk-dialog-error"
#define GTK_STOCK_DIALOG_INFO	"gtk-dialog-info"
#define GTK_STOCK_DIALOG_QUESTION	"gtk-dialog-question"
#define GTK_STOCK_DIALOG_WARNING	"gtk-dialog-warning"
#define GTK_STOCK_DIRECTORY	"gtk-directory"
#define GTK_STOCK_DISCONNECT	"gtk-disconnect"
#define GTK_STOCK_DND	"gtk-dnd"
#define GTK_STOCK_DND_MULTIPLE	"gtk-dnd-multiple"
#define GTK_STOCK_EDIT	"gtk-edit"
#define GTK_STOCK_EXECUTE	"gtk-execute"
#define GTK_STOCK_FILE	"gtk-file"
#define GTK_STOCK_FIND	"gtk-find"
#define GTK_STOCK_FIND_AND_REPLACE	"gtk-find-and-replace"
#define GTK_STOCK_FLOPPY	"gtk-floppy"
#define GTK_STOCK_GO_BACK	"gtk-go-back"
#define GTK_STOCK_GO_DOWN	"gtk-go-down"
#define GTK_STOCK_GO_FORWARD	"gtk-go-forward"
#define GTK_STOCK_GO_UP	"gtk-go-up"
#define GTK_STOCK_GOTO_BOTTOM	"gtk-goto-bottom"
#define GTK_STOCK_GOTO_FIRST	"gtk-goto-first"
#define GTK_STOCK_GOTO_LAST	"gtk-goto-last"
#define GTK_STOCK_GOTO_TOP	"gtk-goto-top"
#define GTK_STOCK_HARDDISK	"gtk-harddisk"
#define GTK_STOCK_HELP	"gtk-help"
#define GTK_STOCK_HOME	"gtk-home"
#define GTK_STOCK_INDENT	"gtk-indent"
#define GTK_STOCK_INDEX	"gtk-index"
#define GTK_STOCK_ITALIC	"gtk-italic"
#define GTK_STOCK_JUMP_TO	"gtk-jump-to"
#define GTK_STOCK_JUSTIFY_CENTER	"gtk-justify-center"
#define GTK_STOCK_JUSTIFY_FILL	"gtk-justify-fill"
#define GTK_STOCK_JUSTIFY_LEFT	"gtk-justify-left"
#define GTK_STOCK_JUSTIFY_RIGHT	"gtk-justify-right"
#define GTK_STOCK_MEDIA_FORWARD	"gtk-media-forward"
#define GTK_STOCK_MEDIA_NEXT	"gtk-media-next"
#define GTK_STOCK_MEDIA_PAUSE	"gtk-media-pause"
#define GTK_STOCK_MEDIA_PLAY	"gtk-media-play"
#define GTK_STOCK_MEDIA_PREVIOUS	"gtk-media-previous"
#define GTK_STOCK_MEDIA_RECORD	"gtk-media-record"
#define GTK_STOCK_MEDIA_REWIND	"gtk-media-rewind"
#define GTK_STOCK_MEDIA_STOP	"gtk-media-stop"
#define GTK_STOCK_MISSING_IMAGE	"gtk-missing-image"
#define GTK_STOCK_NETWORK	"gtk-network"
#define GTK_STOCK_NEW	"gtk-new"
#define GTK_STOCK_NO	"gtk-no"
#define GTK_STOCK_OK	"gtk-ok"
#define GTK_STOCK_OPEN	"gtk-open"
#define GTK_STOCK_PASTE	"gtk-paste"
#define GTK_STOCK_PREFERENCES	"gtk-preferences"
#define GTK_STOCK_PRINT	"gtk-print"
#define GTK_STOCK_PRINT_PREVIEW	"gtk-print-preview"
#define GTK_STOCK_PROPERTIES	"gtk-properties"
#define GTK_STOCK_QUIT	"gtk-quit"
#define GTK_STOCK_REDO	"gtk-redo"
#define GTK_STOCK_REFRESH	"gtk-refresh"
#define GTK_STOCK_REMOVE	"gtk-remove"
#define GTK_STOCK_REVERT_TO_SAVED	"gtk-revert-to-saved"
#define GTK_STOCK_SAVE	"gtk-save"
#define GTK_STOCK_SAVE_AS	"gtk-save-as"
#define GTK_STOCK_SELECT_COLOR	"gtk-select-color"
#define GTK_STOCK_SELECT_FONT	"gtk-select-font"
#define GTK_STOCK_SORT_ASCENDING	"gtk-sort-ascending"
#define GTK_STOCK_SORT_DESCENDING	"gtk-sort-descending"
#define GTK_STOCK_SPELL_CHECK	"gtk-spell-check"
#define GTK_STOCK_STOP	"gtk-stop"
#define GTK_STOCK_STRIKETHROUGH	"gtk-strikethrough"
#define GTK_STOCK_UNDELETE	"gtk-undelete"
#define GTK_STOCK_UNDERLINE	"gtk-underline"
#define GTK_STOCK_UNDO	"gtk-undo"
#define GTK_STOCK_UNINDENT	"gtk-unindent"
#define GTK_STOCK_YES	"gtk-yes"
#define GTK_STOCK_ZOOM_100	"gtk-zoom-100"
#define GTK_STOCK_ZOOM_FIT	"gtk-zoom-fit"
#define GTK_STOCK_ZOOM_IN	"gtk-zoom-in"
#define GTK_STOCK_ZOOM_OUT	"gtk-zoom-out"
#define gtk_accel_label_accelerator_width	gtk_accel_label_get_accel_width
#define gtk_binding_entry_add	gtk_binding_entry_clear
#define GTK_ICON_THEME_ERROR	gtk_icon_theme_error_quark ()
#define GTK_SIGNAL_FUNC(f)	G_CALLBACK(f)
#define GTK_CHECK_CLASS_CAST	G_TYPE_CHECK_CLASS_CAST
#define GTK_CHECK_CLASS_TYPE	G_TYPE_CHECK_CLASS_TYPE
#define GTK_CHECK_CAST	G_TYPE_CHECK_INSTANCE_CAST
#define GTK_CHECK_TYPE	G_TYPE_CHECK_INSTANCE_TYPE
#define GTK_CHECK_GET_CLASS	G_TYPE_INSTANCE_GET_CLASS
#if __LSB_VERSION__ < 40
#define GTK_MICRO_VERSION	(10)
#define GTK_MINOR_VERSION	(6)
#endif				/* __LSB_VERSION__ < 4.0 */

#if __LSB_VERSION__ < 41
#define GTK_INTERFACE_AGE	(10)
#define GTK_BINARY_AGE	(610)
#endif				/* __LSB_VERSION__ < 4.1 */

#if __LSB_VERSION__ >= 40
#define GTK_STOCK_FULLSCREEN	"gtk-fullscreen"
#define GTK_STOCK_INFO	"gtk-info"
#define GTK_STOCK_LEAVE_FULLSCREEN	"gtk-leave-fullscreen"
#if __LSB_VERSION__ < 41
#define GTK_MICRO_VERSION	(11)
#define GTK_MINOR_VERSION	(8)
#endif				/* __LSB_VERSION__ < 4.1 */

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
#define __GTK_ASSISTANT_H__
#define __GTK_PAGE_SETUP_H__
#define __GTK_PAPER_SIZE_H__
#define __GTK_PRINT_CONTEXT_H__
#define __GTK_PRINT_OPERATION_H__
#define __GTK_PRINT_SETTINGS_H__
#define __GTK_RECENT_CHOOSER_DIALOG_H__
#define __GTK_RECENT_CHOOSER_H__
#define __GTK_RECENT_CHOOSER_MENU_H__
#define __GTK_RECENT_CHOOSER_WIDGET_H__
#define GTK_TYPE_ASSISTANT	(gtk_assistant_get_type ())
#define GTK_TYPE_CELL_RENDERER_ACCEL	(gtk_cell_renderer_accel_get_type ())
#define GTK_TYPE_CELL_RENDERER_ACCEL_MODE	(gtk_cell_renderer_accel_mode_get_type ())
#define GTK_TYPE_CELL_RENDERER_SPIN	(gtk_cell_renderer_spin_get_type ())
#define GTK_TYPE_LINK_BUTTON	(gtk_link_button_get_type ())
#define __GTK_LINK_BUTTON_H__	(gtk_link_button_get_type ())
#define GTK_TYPE_PAGE_ORIENTATION	(gtk_page_orientation_get_type ())
#define GTK_TYPE_PAGE_SETUP	(gtk_page_setup_get_type ())
#define GTK_TYPE_PAGE_SET	(gtk_page_set_get_type ())
#define GTK_TYPE_PAPER_SIZE	(gtk_paper_size_get_type ())
#define GTK_TYPE_PRINT_CONTEXT	(gtk_print_context_get_type ())
#define GTK_TYPE_PRINT_DUPLEX	(gtk_print_duplex_get_type ())
#define GTK_TYPE_PRINT_ERROR	(gtk_print_error_get_type ())
#define GTK_TYPE_PRINT_OPERATION_ACTION	(gtk_print_operation_action_get_type ())
#define GTK_TYPE_PRINT_OPERATION	(gtk_print_operation_get_type ())
#define GTK_TYPE_PRINT_OPERATION_RESULT	(gtk_print_operation_result_get_type ())
#define GTK_TYPE_PRINT_PAGES	(gtk_print_pages_get_type ())
#define GTK_TYPE_PRINT_QUALITY	(gtk_print_quality_get_type ())
#define GTK_TYPE_PRINT_SETTINGS	(gtk_print_settings_get_type ())
#define GTK_TYPE_PRINT_STATUS	(gtk_print_status_get_type ())
#define GTK_TYPE_RECENT_CHOOSER_DIALOG	(gtk_recent_chooser_dialog_get_type ())
#define GTK_TYPE_RECENT_CHOOSER_ERROR	(gtk_recent_chooser_error_get_type ())
#define GTK_RECENT_CHOOSER_ERROR	(gtk_recent_chooser_error_quark ())
#define GTK_TYPE_RECENT_CHOOSER	(gtk_recent_chooser_get_type ())
#define GTK_TYPE_RECENT_CHOOSER_MENU	(gtk_recent_chooser_menu_get_type ())
#define GTK_TYPE_RECENT_CHOOSER_WIDGET	(gtk_recent_chooser_widget_get_type ())
#define GTK_TYPE_RECENT_FILTER_FLAGS	(gtk_recent_filter_flags_get_type ())
#define GTK_TYPE_RECENT_MANAGER_ERROR	(gtk_recent_manager_error_get_type ())
#define GTK_TYPE_RECENT_SORT_TYPE	(gtk_recent_sort_type_get_type ())
#define GTK_TYPE_SENSITIVITY_TYPE	(gtk_sensitivity_type_get_type ())
#define GTK_TYPE_TARGET_LIST	(gtk_target_list_get_type ())
#define GTK_TYPE_TEXT_BUFFER_TARGET_INFO	(gtk_text_buffer_target_info_get_type ())
#define GTK_TYPE_TREE_VIEW_GRID_LINES	(gtk_tree_view_grid_lines_get_type ())
#define GTK_TYPE_UNIT	(gtk_unit_get_type ())
#define GTK_ASSISTANT_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_ASSISTANT, GtkAssistantClass))
#define GTK_CELL_RENDERER_ACCEL_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccelClass))
#define GTK_CELL_RENDERER_SPIN_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererSpinClass))
#define GTK_LINK_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LINK_BUTTON, GtkLinkButtonClass))
#define GTK_PRINT_OPERATION_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PRINT_OPERATION, GtkPrintOperationClass))
#define GTK_RECENT_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialogClass))
#define GTK_RECENT_CHOOSER_MENU_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenuClass))
#define GTK_RECENT_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidgetClass))
#define GTK_IS_ASSISTANT_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_ASSISTANT))
#define GTK_IS_CELL_RENDERER_ACCEL_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_ACCEL))
#define GTK_IS_CELL_RENDERER_SPIN_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_SPIN))
#define GTK_IS_LINK_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LINK_BUTTON))
#define GTK_IS_PRINT_OPERATION_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PRINT_OPERATION))
#define GTK_IS_RECENT_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_DIALOG))
#define GTK_IS_RECENT_CHOOSER_MENU_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_MENU))
#define GTK_IS_RECENT_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_WIDGET))
#define GTK_ASSISTANT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_ASSISTANT, GtkAssistant))
#define GTK_CELL_RENDERER_ACCEL(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccel))
#define GTK_CELL_RENDERER_SPIN(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererSpin))
#define GTK_LINK_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LINK_BUTTON, GtkLinkButton))
#define GTK_PAGE_SETUP(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PAGE_SETUP, GtkPageSetup))
#define GTK_PRINT_CONTEXT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_CONTEXT, GtkPrintContext))
#define GTK_PRINT_OPERATION(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_OPERATION, GtkPrintOperation))
#define GTK_PRINT_SETTINGS(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_SETTINGS, GtkPrintSettings))
#define GTK_RECENT_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER, GtkRecentChooser))
#define GTK_RECENT_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialog))
#define GTK_RECENT_CHOOSER_MENU(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenu))
#define GTK_RECENT_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidget))
#define GTK_IS_ASSISTANT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_ASSISTANT))
#define GTK_IS_CELL_RENDERER_ACCEL(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_ACCEL))
#define GTK_IS_CELL_RENDERER_SPIN(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_SPIN))
#define GTK_IS_LINK_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LINK_BUTTON))
#define GTK_IS_PAGE_SETUP(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PAGE_SETUP))
#define GTK_IS_PRINT_CONTEXT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_CONTEXT))
#define GTK_IS_PRINT_OPERATION(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_OPERATION))
#define GTK_IS_PRINT_SETTINGS(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_SETTINGS))
#define GTK_IS_RECENT_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER))
#define GTK_IS_RECENT_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG))
#define GTK_IS_RECENT_CHOOSER_MENU(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_MENU))
#define GTK_IS_RECENT_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET))
#define GTK_ASSISTANT_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_ASSISTANT, GtkAssistantClass))
#define GTK_CELL_RENDERER_ACCEL_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccelClass))
#define GTK_CELL_RENDERER_SPIN_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererTextClass))
#define GTK_LINK_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LINK_BUTTON, GtkLinkButtonClass))
#define GTK_PRINT_OPERATION_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PRINT_OPERATION, GtkPrintOperationClass))
#define GTK_RECENT_CHOOSER_DIALOG_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialogClass))
#define GTK_RECENT_CHOOSER_MENU_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_MENU, GtkRecentChooserMenuClass))
#define GTK_RECENT_CHOOSER_WIDGET_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_WIDGET, GtkRecentChooserWidgetClass))
#define GTK_RECENT_CHOOSER_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_RECENT_CHOOSER, GtkRecentChooserIface))
#define GTK_MINOR_VERSION	10
#define GTK_BINARY_AGE	1004
#define GTK_INTERFACE_AGE	4
#define GTK_MICRO_VERSION	4
#define GTK_PRINT_SETTINGS_COLLATE	"collate"
#define GTK_PRINT_SETTINGS_DEFAULT_SOURCE	"default-source"
#define GTK_PRINT_SETTINGS_DITHER	"dither"
#define GTK_PRINT_SETTINGS_DUPLEX	"duplex"
#define GTK_PRINT_SETTINGS_FINISHINGS	"finishings"
#define GTK_STOCK_SELECT_ALL	"gtk-select-all"
#define GTK_PRINT_ERROR	gtk_print_error_quark ()
#define GTK_PAPER_NAME_A3	"iso_a3"
#define GTK_PAPER_NAME_A4	"iso_a4"
#define GTK_PAPER_NAME_A5	"iso_a5"
#define GTK_PAPER_NAME_B5	"iso_b5"
#define GTK_PRINT_SETTINGS_MEDIA_TYPE	"media-type"
#define GTK_PRINT_SETTINGS_N_COPIES	"n-copies"
#define GTK_PAPER_NAME_EXECUTIVE	"na_executive"
#define GTK_PAPER_NAME_LEGAL	"na_legal"
#define GTK_PAPER_NAME_LETTER	"na_letter"
#define GTK_PRINT_SETTINGS_NUMBER_UP	"number-up"
#define GTK_PRINT_SETTINGS_NUMBER_UP_LAYOUT	"number-up-layout"
#define GTK_PRINT_SETTINGS_ORIENTATION	"orientation"
#define GTK_PRINT_SETTINGS_OUTPUT_BIN	"output-bin"
#define GTK_PRINT_SETTINGS_OUTPUT_FILE_FORMAT	"output-file-format"
#define GTK_PRINT_SETTINGS_OUTPUT_URI	"output-uri"
#define GTK_PRINT_SETTINGS_PAGE_RANGES	"page-ranges"
#define GTK_PRINT_SETTINGS_PAGE_SET	"page-set"
#define GTK_PRINT_SETTINGS_PAPER_FORMAT	"paper-format"
#define GTK_PRINT_SETTINGS_PAPER_HEIGHT	"paper-height"
#define GTK_PRINT_SETTINGS_PAPER_WIDTH	"paper-width"
#define GTK_PRINT_SETTINGS_PRINT_PAGES	"print-pages"
#define GTK_PRINT_SETTINGS_PRINTER	"printer"
#define GTK_PRINT_SETTINGS_PRINTER_LPI	"printer-lpi"
#define GTK_PRINT_SETTINGS_QUALITY	"quality"
#define GTK_PRINT_SETTINGS_RESOLUTION	"resolution"
#define GTK_PRINT_SETTINGS_RESOLUTION_X	"resolution-x"
#define GTK_PRINT_SETTINGS_RESOLUTION_Y	"resolution-y"
#define GTK_PRINT_SETTINGS_REVERSE	"reverse"
#define GTK_PRINT_SETTINGS_SCALE	"scale"
#define GTK_PRINT_SETTINGS_USE_COLOR	"use-color"
#define GTK_PRINT_SETTINGS_WIN32_DRIVER_EXTRA	"win32-driver-extra"
#define GTK_PRINT_SETTINGS_WIN32_DRIVER_VERSION	"win32-driver-version"
#endif				/* __LSB_VERSION__ >= 4.1 */



    typedef struct _GtkIconSet GtkIconSet;

    typedef struct _GtkObject GtkObject;

    typedef enum {
	GTK_RC_FG = 1,
	GTK_RC_BG = 2,
	GTK_RC_TEXT = 4,
	GTK_RC_BASE = 8
    } GtkRcFlags;

    typedef struct _GtkRcStyle GtkRcStyle;

    typedef struct _GtkStyle GtkStyle;

    typedef struct _GtkRequisition GtkRequisition;

    typedef GdkRectangle GtkAllocation;

    typedef struct _GtkWidget GtkWidget;

    typedef struct _GtkAdjustment GtkAdjustment;

    typedef struct _GtkProgress GtkProgress;

    typedef enum {
	GTK_PROGRESS_CONTINUOUS = 0,
	GTK_PROGRESS_DISCRETE = 1
    } GtkProgressBarStyle;

    typedef enum {
	GTK_PROGRESS_LEFT_TO_RIGHT = 0,
	GTK_PROGRESS_RIGHT_TO_LEFT = 1,
	GTK_PROGRESS_BOTTOM_TO_TOP = 2,
	GTK_PROGRESS_TOP_TO_BOTTOM = 3
    } GtkProgressBarOrientation;

    typedef struct _GtkProgressBar GtkProgressBar;

    typedef struct _GtkTextTagTable GtkTextTagTable;

    typedef struct _GtkTextBTree GtkTextBTree;

    typedef struct _GtkTextLogAttrCache GtkTextLogAttrCache;

    typedef struct _GtkTextBuffer GtkTextBuffer;

    typedef struct _GtkTextIter GtkTextIter;

#include <gtk-2.0/gtk/gtktextbufferrichtext.h>
    typedef GType GtkType;

    typedef struct _GtkContainer GtkContainer;

    typedef struct _GtkBin GtkBin;

    typedef struct _GtkComboBoxPrivate GtkComboBoxPrivate;

    typedef struct _GtkComboBox GtkComboBox;

    typedef struct _GtkMisc GtkMisc;

    typedef struct _GtkBox GtkBox;

    typedef struct _GtkHBox GtkHBox;

    typedef struct _GtkStatusbar GtkStatusbar;

    typedef struct _GtkTargetList GtkTargetList;

    typedef struct _GtkWindow GtkWindow;

    typedef struct _GtkWindowGeometryInfo GtkWindowGeometryInfo;

    typedef struct _GtkWindowGroup GtkWindowGroup;

    typedef struct _GtkTreeRowReference GtkTreeRowReference;

    typedef enum {
	GTK_TREE_MODEL_ITERS_PERSIST = 1,
	GTK_TREE_MODEL_LIST_ONLY = 2
    } GtkTreeModelFlags;

    typedef struct _GtkTreeModel GtkTreeModel;

    typedef struct _GtkTargetEntry GtkTargetEntry;

    typedef struct _GtkIMContext GtkIMContext;

    typedef struct _GtkEntry GtkEntry;

    typedef struct _GtkComboBoxEntryPrivate GtkComboBoxEntryPrivate;

    typedef struct _GtkComboBoxEntry GtkComboBoxEntry;

    typedef struct _GtkLayout GtkLayout;

    typedef struct _GtkTreeIter GtkTreeIter;

    typedef gint(*GtkTreeIterCompareFunc) (GtkTreeModel *, GtkTreeIter *,
					   GtkTreeIter *, gpointer);

    typedef void (*GtkDestroyNotify) (gpointer);

    typedef struct _GtkTreeStore GtkTreeStore;

    typedef struct _GtkDialog GtkDialog;

    typedef struct _GtkAboutDialog GtkAboutDialog;

    typedef void (*GtkAboutDialogActivateLinkFunc) (GtkAboutDialog *,
						    const gchar *,
						    gpointer);

    typedef struct _GtkTreeSortable GtkTreeSortable;

    typedef struct _GtkRangeLayout GtkRangeLayout;

    typedef struct _GtkRangeStepTimer GtkRangeStepTimer;

    typedef struct _GtkRange GtkRange;

    typedef struct _GtkAccelKey GtkAccelKey;

    typedef struct _GtkAccelGroupEntry GtkAccelGroupEntry;

    typedef struct _GtkAccelGroup GtkAccelGroup;

    typedef struct _GtkSocket GtkSocket;

    typedef struct _GtkCellEditable GtkCellEditable;

    typedef enum {
	GTK_TREE_VIEW_COLUMN_GROW_ONLY = 0,
	GTK_TREE_VIEW_COLUMN_AUTOSIZE = 1,
	GTK_TREE_VIEW_COLUMN_FIXED = 2
    } GtkTreeViewColumnSizing;

    typedef struct _GtkTreeViewColumn GtkTreeViewColumn;

    typedef struct _GtkCellRenderer GtkCellRenderer;

    typedef struct _GtkButtonBox GtkButtonBox;

    typedef struct _GtkActionPrivate GtkActionPrivate;

    typedef struct _GtkAction GtkAction;

    typedef struct _GtkToggleActionPrivate GtkToggleActionPrivate;

    typedef struct _GtkToggleAction GtkToggleAction;

    typedef struct _GtkTextAppearance GtkTextAppearance;

    typedef struct _GtkTextAttributes GtkTextAttributes;

    typedef struct _GtkTextTag GtkTextTag;

    typedef struct _GtkFileFilter GtkFileFilter;

    typedef enum {
	GTK_FILE_FILTER_FILENAME = 1,
	GTK_FILE_FILTER_URI = 2,
	GTK_FILE_FILTER_DISPLAY_NAME = 4,
	GTK_FILE_FILTER_MIME_TYPE = 8
    } GtkFileFilterFlags;

    typedef struct _GtkFileFilterInfo GtkFileFilterInfo;

    typedef struct _GtkIconSource GtkIconSource;

    typedef struct _GtkToolItemPrivate GtkToolItemPrivate;

    typedef struct _GtkToolItem GtkToolItem;

    typedef struct _GtkToolButtonPrivate GtkToolButtonPrivate;

    typedef struct _GtkToolButton GtkToolButton;

    typedef struct _GtkIconViewPrivate GtkIconViewPrivate;

    typedef struct _GtkIconView GtkIconView;

    typedef struct _GtkLabelSelectionInfo GtkLabelSelectionInfo;

    typedef struct _GtkLabel GtkLabel;

    typedef struct _GtkSettingsPropertyValue GtkSettingsPropertyValue;

    typedef struct _GtkRcContext GtkRcContext;

    typedef struct _GtkSettings GtkSettings;

    typedef struct _GtkUIManagerPrivate GtkUIManagerPrivate;

    typedef struct _GtkUIManager GtkUIManager;

    typedef struct _GtkItem GtkItem;

    typedef struct _GtkMenuItem GtkMenuItem;

    typedef struct _GtkCheckMenuItem GtkCheckMenuItem;

    typedef struct _GtkRadioMenuItem GtkRadioMenuItem;

    typedef struct _GtkCellViewPrivate GtkCellViewPrivate;

    typedef struct _GtkCellView GtkCellView;

    typedef struct _GtkSelectionData GtkSelectionData;

    typedef struct _GtkFileChooser GtkFileChooser;

    typedef struct _GtkDrawingArea GtkDrawingArea;

    typedef struct _GtkCurve GtkCurve;

    typedef struct _GtkNotebookPage GtkNotebookPage;

    typedef struct _GtkNotebook GtkNotebook;

    typedef struct _GtkIconFactory GtkIconFactory;

    typedef struct _GtkRadioActionPrivate GtkRadioActionPrivate;

    typedef struct _GtkRadioAction GtkRadioAction;

    typedef struct _GtkTextMark GtkTextMark;

    typedef struct _GtkVBox GtkVBox;

    typedef struct _GtkColorSelection GtkColorSelection;

    typedef enum {
	GTK_CALENDAR_SHOW_HEADING = 1,
	GTK_CALENDAR_SHOW_DAY_NAMES = 2,
	GTK_CALENDAR_NO_MONTH_CHANGE = 4,
	GTK_CALENDAR_SHOW_WEEK_NUMBERS = 8,
	GTK_CALENDAR_WEEK_START_MONDAY = 16
    } GtkCalendarDisplayOptions;

    typedef struct _GtkCalendar GtkCalendar;

    typedef struct _GtkIconInfo GtkIconInfo;

    typedef struct _GtkTreePath GtkTreePath;

    typedef struct _GtkTreeDragSource GtkTreeDragSource;

    typedef struct _GtkTableRowCol GtkTableRowCol;

    typedef struct _GtkTable GtkTable;

    typedef gboolean(*GtkFunction) (gpointer);

    typedef void (*GtkSignalFunc) (void);

    typedef struct _GtkArg GtkArg;

    typedef void (*GtkCallbackMarshal) (GtkObject *, gpointer, guint,
					GtkArg *);

    typedef struct _GtkMenuShell GtkMenuShell;

    typedef struct _GtkMenu GtkMenu;

    typedef void (*GtkMenuPositionFunc) (GtkMenu *, gint *, gint *,
					 gboolean *, gpointer);

    typedef struct _GtkButton GtkButton;

    typedef struct _GtkToggleButton GtkToggleButton;

    typedef struct _GtkIconThemePrivate GtkIconThemePrivate;

    typedef struct _GtkIconTheme GtkIconTheme;

    typedef struct _GtkTextWindow GtkTextWindow;

    typedef struct _GtkTextPendingScroll GtkTextPendingScroll;

    typedef struct _GtkTextView GtkTextView;

    typedef enum {
	GTK_TEXT_WINDOW_PRIVATE = 0,
	GTK_TEXT_WINDOW_WIDGET = 1,
	GTK_TEXT_WINDOW_TEXT = 2,
	GTK_TEXT_WINDOW_LEFT = 3,
	GTK_TEXT_WINDOW_RIGHT = 4,
	GTK_TEXT_WINDOW_TOP = 5,
	GTK_TEXT_WINDOW_BOTTOM = 6
    } GtkTextWindowType;

    typedef struct _GtkObjectClass GtkObjectClass;

    typedef enum {
	GTK_WIDGET_HELP_TOOLTIP = 0,
	GTK_WIDGET_HELP_WHATS_THIS = 1
    } GtkWidgetHelpType;

    typedef struct _GtkWidgetClass GtkWidgetClass;

    typedef gboolean(*GtkRcPropertyParser) (const GParamSpec *,
					    const GString *, GValue *);

    typedef enum {
	GTK_IMAGE_EMPTY = 0,
	GTK_IMAGE_PIXMAP = 1,
	GTK_IMAGE_IMAGE = 2,
	GTK_IMAGE_PIXBUF = 3,
	GTK_IMAGE_STOCK = 4,
	GTK_IMAGE_ICON_SET = 5,
	GTK_IMAGE_ANIMATION = 6,
	GTK_IMAGE_ICON_NAME = 7
    } GtkImageType;

#include <gtk-2.0/gtk/gtkstatusicon.h>
    typedef struct _GtkImagePixmapData GtkImagePixmapData;

    typedef struct _GtkImageImageData GtkImageImageData;

    typedef struct _GtkImagePixbufData GtkImagePixbufData;

    typedef struct _GtkImageStockData GtkImageStockData;

    typedef struct _GtkImageIconSetData GtkImageIconSetData;

    typedef struct _GtkImageAnimationData GtkImageAnimationData;

    typedef struct _GtkImageIconNameData GtkImageIconNameData;

    typedef struct _GtkImage GtkImage;

    typedef struct _GtkTreeViewPrivate GtkTreeViewPrivate;

    typedef struct _GtkTreeView GtkTreeView;

    typedef enum {
	GTK_UPDATE_ALWAYS = 0,
	GTK_UPDATE_IF_VALID = 1
    } GtkSpinButtonUpdatePolicy;

    typedef struct _GtkSpinButton GtkSpinButton;

    typedef struct _GtkCellLayout GtkCellLayout;

    typedef struct _GtkFileSelection GtkFileSelection;

    typedef struct _GtkTooltips GtkTooltips;

    typedef struct _GtkTooltipsData GtkTooltipsData;

    typedef gboolean(*GtkTreeViewRowSeparatorFunc) (GtkTreeModel *,
						    GtkTreeIter *,
						    gpointer);

    typedef struct _GtkEntryCompletionPrivate GtkEntryCompletionPrivate;

    typedef struct _GtkEntryCompletion GtkEntryCompletion;

    typedef struct _GtkClipboard GtkClipboard;

    typedef struct _GtkTreeModelFilterPrivate GtkTreeModelFilterPrivate;

    typedef struct _GtkTreeModelFilter GtkTreeModelFilter;

    typedef struct _GtkTreeModelSort GtkTreeModelSort;

    typedef void (*GtkTreeCellDataFunc) (GtkTreeViewColumn *,
					 GtkCellRenderer *, GtkTreeModel *,
					 GtkTreeIter *, gpointer);

    typedef struct _GtkColorButtonPrivate GtkColorButtonPrivate;

    typedef struct _GtkColorButton GtkColorButton;

    typedef enum {
	GTK_FILE_CHOOSER_ACTION_OPEN = 0,
	GTK_FILE_CHOOSER_ACTION_SAVE = 1,
	GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER = 2,
	GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER = 3
    } GtkFileChooserAction;

    typedef void (*GtkCallback) (GtkWidget *, gpointer);

    typedef struct _GtkHandleBox GtkHandleBox;

    typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;

    typedef struct _GtkActionGroup GtkActionGroup;

    typedef struct _GtkBindingSet GtkBindingSet;

    typedef struct _GtkBindingEntry GtkBindingEntry;

    typedef struct _GtkBindingSignal GtkBindingSignal;

    typedef struct _GtkBindingArg GtkBindingArg;

    typedef struct _GtkScrolledWindow GtkScrolledWindow;

    typedef struct _GtkFrame GtkFrame;

    typedef struct _GtkTextChildAnchor GtkTextChildAnchor;

    typedef struct _GtkSeparatorToolItemPrivate
	GtkSeparatorToolItemPrivate;

    typedef struct _GtkSeparatorToolItem GtkSeparatorToolItem;

    typedef struct _GtkTreeSelection GtkTreeSelection;

    typedef gboolean(*GtkTreeSelectionFunc) (GtkTreeSelection *,
					     GtkTreeModel *, GtkTreePath *,
					     gboolean, gpointer);

    typedef struct _GtkExpanderPrivate GtkExpanderPrivate;

    typedef struct _GtkExpander GtkExpander;

    typedef enum {
	GTK_UI_MANAGER_AUTO = 0,
	GTK_UI_MANAGER_MENUBAR = 1,
	GTK_UI_MANAGER_MENU = 2,
	GTK_UI_MANAGER_TOOLBAR = 4,
	GTK_UI_MANAGER_PLACEHOLDER = 8,
	GTK_UI_MANAGER_POPUP = 16,
	GTK_UI_MANAGER_MENUITEM = 32,
	GTK_UI_MANAGER_TOOLITEM = 64,
	GTK_UI_MANAGER_SEPARATOR = 128,
	GTK_UI_MANAGER_ACCELERATOR = 256
    } GtkUIManagerItemType;

    typedef struct _GtkFontSelectionDialog GtkFontSelectionDialog;

    typedef struct _GtkPanedPrivate GtkPanedPrivate;

    typedef struct _GtkPaned GtkPaned;

    typedef struct _GtkViewport GtkViewport;

    typedef struct _GtkScale GtkScale;

    typedef struct _GtkListStore GtkListStore;

    typedef struct _GtkEditable GtkEditable;

    typedef void (*GtkClipboardGetFunc) (GtkClipboard *,
					 GtkSelectionData *, guint,
					 gpointer);

    typedef void (*GtkClipboardClearFunc) (GtkClipboard *, gpointer);

    typedef struct _GtkRadioActionEntry GtkRadioActionEntry;

    typedef gboolean(*GtkTreeViewColumnDropFunc) (GtkTreeView *,
						  GtkTreeViewColumn *,
						  GtkTreeViewColumn *,
						  GtkTreeViewColumn *,
						  gpointer);

    typedef struct _GtkEventBox GtkEventBox;

    typedef struct _GtkTreeDragDest GtkTreeDragDest;

    typedef struct _GtkToggleActionEntry GtkToggleActionEntry;

    typedef struct _GtkAccelLabel GtkAccelLabel;

    typedef struct _GtkImageMenuItem GtkImageMenuItem;

    typedef struct _GtkPlug GtkPlug;

    typedef struct _GtkFileChooserButtonPrivate
	GtkFileChooserButtonPrivate;

    typedef struct _GtkFileChooserButton GtkFileChooserButton;

    typedef struct _GtkStockItem GtkStockItem;

    typedef gchar *(*GtkTranslateFunc) (const gchar *, gpointer);

    typedef struct _GtkToolbar GtkToolbar;

    typedef void (*GtkCellLayoutDataFunc) (GtkCellLayout *,
					   GtkCellRenderer *,
					   GtkTreeModel *, GtkTreeIter *,
					   gpointer);

    typedef struct _GtkCellRendererToggle GtkCellRendererToggle;

    typedef void (*GtkClipboardImageReceivedFunc) (GtkClipboard *,
						   GdkPixbuf *, gpointer);

    typedef enum {
	GTK_CELL_RENDERER_SELECTED = 1,
	GTK_CELL_RENDERER_PRELIT = 2,
	GTK_CELL_RENDERER_INSENSITIVE = 4,
	GTK_CELL_RENDERER_SORTED = 8,
	GTK_CELL_RENDERER_FOCUSED = 16
    } GtkCellRendererState;

    typedef struct _GtkActionEntry GtkActionEntry;

    typedef struct _GtkCheckButton GtkCheckButton;

    typedef struct _GtkRadioButton GtkRadioButton;

    typedef struct _GtkAlignment GtkAlignment;

    typedef struct _GtkContainerClass GtkContainerClass;

    typedef struct _GtkFontButtonPrivate GtkFontButtonPrivate;

    typedef struct _GtkFontButton GtkFontButton;

    typedef struct _GtkBorder GtkBorder;

    typedef struct _GtkMessageDialog GtkMessageDialog;

    typedef struct _GtkRulerMetric GtkRulerMetric;

    typedef struct _GtkRuler GtkRuler;

    typedef enum {
	GTK_ACCEL_VISIBLE = 1,
	GTK_ACCEL_LOCKED = 2,
	GTK_ACCEL_MASK = 7
    } GtkAccelFlags;

    typedef gboolean(*GtkTextCharPredicate) (gunichar, gpointer);

    typedef struct _GtkMenuToolButtonPrivate GtkMenuToolButtonPrivate;

    typedef struct _GtkMenuToolButton GtkMenuToolButton;

    typedef struct _GtkToggleToolButtonPrivate GtkToggleToolButtonPrivate;

    typedef struct _GtkToggleToolButton GtkToggleToolButton;

    typedef struct _GtkRadioToolButton GtkRadioToolButton;

    typedef struct _GtkSizeGroup GtkSizeGroup;

    typedef enum {
	GTK_SIZE_GROUP_NONE = 0,
	GTK_SIZE_GROUP_HORIZONTAL = 1,
	GTK_SIZE_GROUP_VERTICAL = 2,
	GTK_SIZE_GROUP_BOTH = 3
    } GtkSizeGroupMode;

    typedef enum {
	GTK_DIALOG_MODAL = 1,
	GTK_DIALOG_DESTROY_WITH_PARENT = 2,
	GTK_DIALOG_NO_SEPARATOR = 4
    } GtkDialogFlags;

    typedef void (*GtkTreeSelectionForeachFunc) (GtkTreeModel *,
						 GtkTreePath *,
						 GtkTreeIter *, gpointer);

    typedef enum {
	GTK_ICON_LOOKUP_NO_SVG = 1,
	GTK_ICON_LOOKUP_FORCE_SVG = 2,
	GTK_ICON_LOOKUP_USE_BUILTIN = 4
    } GtkIconLookupFlags;

    typedef gboolean(*GtkTreeViewSearchEqualFunc) (GtkTreeModel *, gint,
						   const gchar *,
						   GtkTreeIter *,
						   gpointer);

    typedef struct _GtkIMContextSimple GtkIMContextSimple;

    typedef void (*GtkClipboardTargetsReceivedFunc) (GtkClipboard *,
						     GdkAtom *, gint,
						     gpointer);

    typedef struct _GtkFontSelection GtkFontSelection;

    typedef void (*GtkClipboardTextReceivedFunc) (GtkClipboard *,
						  const gchar *, gpointer);

    typedef gboolean(*GtkAccelGroupFindFunc) (GtkAccelKey *, GClosure *,
					      gpointer);

    typedef void (*GtkTreeDestroyCountFunc) (GtkTreeView *, GtkTreePath *,
					     gint, gpointer);

    typedef enum {
	GTK_TREE_VIEW_DROP_BEFORE = 0,
	GTK_TREE_VIEW_DROP_AFTER = 1,
	GTK_TREE_VIEW_DROP_INTO_OR_BEFORE = 2,
	GTK_TREE_VIEW_DROP_INTO_OR_AFTER = 3
    } GtkTreeViewDropPosition;

    typedef struct _GtkAspectFrame GtkAspectFrame;

    typedef gboolean(*GtkFileFilterFunc) (const GtkFileFilterInfo *
					  filter_info, gpointer data);

    typedef struct _GtkIMMulticontextPrivate GtkIMMulticontextPrivate;

    typedef struct _GtkIMMulticontext GtkIMMulticontext;

    typedef enum {
	GTK_BUTTONS_NONE = 0,
	GTK_BUTTONS_OK = 1,
	GTK_BUTTONS_CLOSE = 2,
	GTK_BUTTONS_CANCEL = 3,
	GTK_BUTTONS_YES_NO = 4,
	GTK_BUTTONS_OK_CANCEL = 5
    } GtkButtonsType;

    typedef void (*GtkAccelMapForeach) (gpointer, const gchar *, guint,
					GdkModifierType, gboolean);

    typedef void (*GtkColorSelectionChangePaletteWithScreenFunc) (GdkScreen
								  *,
								  const
								  GdkColor
								  *, gint);

    typedef void (*GtkClipboardReceivedFunc) (GtkClipboard *,
					      GtkSelectionData *,
					      gpointer);

    typedef void (*GtkTreeViewMappingFunc) (GtkTreeView *, GtkTreePath *,
					    gpointer);

    typedef gboolean(*GtkTreeModelFilterVisibleFunc) (GtkTreeModel *,
						      GtkTreeIter *,
						      gpointer);

    typedef enum {
	GTK_TEXT_SEARCH_VISIBLE_ONLY = 1,
	GTK_TEXT_SEARCH_TEXT_ONLY = 2
    } GtkTextSearchFlags;

    typedef struct _GtkFixed GtkFixed;

    typedef enum {
	GTK_DEST_DEFAULT_MOTION = 1,
	GTK_DEST_DEFAULT_HIGHLIGHT = 2,
	GTK_DEST_DEFAULT_DROP = 4,
	GTK_DEST_DEFAULT_ALL = 7
    } GtkDestDefaults;

    typedef gint(*GtkKeySnoopFunc) (GtkWidget *, GdkEventKey *, gpointer);

    typedef enum {
	GTK_SPIN_STEP_FORWARD = 0,
	GTK_SPIN_STEP_BACKWARD = 1,
	GTK_SPIN_PAGE_FORWARD = 2,
	GTK_SPIN_PAGE_BACKWARD = 3,
	GTK_SPIN_HOME = 4,
	GTK_SPIN_END = 5,
	GTK_SPIN_USER_DEFINED = 6
    } GtkSpinType;

    typedef void (*GtkMenuDetachFunc) (GtkWidget *, GtkMenu *);

    typedef struct _GtkInvisible GtkInvisible;

    typedef void (*GtkTextTagTableForeach) (GtkTextTag *, gpointer);

    typedef gboolean(*GtkEntryCompletionMatchFunc) (GtkEntryCompletion *,
						    const gchar *,
						    GtkTreeIter *,
						    gpointer);

    typedef struct _GtkAccessible GtkAccessible;

    typedef struct _GtkArrow GtkArrow;

    typedef void (*GtkIconViewForeachFunc) (GtkIconView *, GtkTreePath *,
					    gpointer);

    typedef void (*GtkTreeModelFilterModifyFunc) (GtkTreeModel *,
						  GtkTreeIter *, GValue *,
						  gint, gpointer);

    typedef struct _GtkCellRendererText GtkCellRendererText;

    typedef gboolean(*GtkTreeModelForeachFunc) (GtkTreeModel *,
						GtkTreePath *,
						GtkTreeIter *, gpointer);

    typedef struct _GtkSettingsValue GtkSettingsValue;

    typedef struct _GtkAccelMap GtkAccelMap;

    typedef struct _GtkBinClass GtkBinClass;

    typedef struct _GtkWindowClass GtkWindowClass;

    typedef struct _GtkRangeClass GtkRangeClass;

    typedef struct _GtkScaleClass GtkScaleClass;

    typedef struct _GtkBoxClass GtkBoxClass;

    typedef struct _GtkMiscClass GtkMiscClass;

    typedef struct _GtkHRuler GtkHRuler;

    typedef struct _GtkHBoxClass GtkHBoxClass;

    typedef struct _GtkPanedClass GtkPanedClass;

    typedef struct _GtkHPanedClass GtkHPanedClass;

    typedef struct _GtkSizeGroupClass GtkSizeGroupClass;

    typedef struct _GtkViewportClass GtkViewportClass;

    typedef struct _GtkEditableClass GtkEditableClass;

    typedef enum {
	GTK_NOTEBOOK_TAB_FIRST = 0,
	GTK_NOTEBOOK_TAB_LAST = 1
    } GtkNotebookTab;

    typedef struct _GtkDialogClass GtkDialogClass;

    typedef struct _GtkCellRendererPixbuf GtkCellRendererPixbuf;

    typedef struct _GtkTreeViewColumnClass GtkTreeViewColumnClass;

    typedef struct _GtkRulerClass GtkRulerClass;

    typedef struct _GtkHRulerClass GtkHRulerClass;

    typedef struct _GtkAccelMapClass GtkAccelMapClass;

    typedef struct _GtkInvisibleClass GtkInvisibleClass;

    typedef struct _GtkVRulerClass GtkVRulerClass;

    typedef struct _GtkToolItemClass GtkToolItemClass;

    typedef struct _GtkWindowGroupClass GtkWindowGroupClass;

    typedef struct _GtkWidgetAuxInfo GtkWidgetAuxInfo;

    typedef struct _GtkItemClass GtkItemClass;

    typedef struct _GtkMenuItemClass GtkMenuItemClass;

    typedef struct _GtkCheckMenuItemClass GtkCheckMenuItemClass;

    typedef struct _GtkRcProperty GtkRcProperty;

    typedef struct _GtkFontSelectionDialogClass
	GtkFontSelectionDialogClass;

    typedef struct _GtkFileChooserDialogPrivate
	GtkFileChooserDialogPrivate;

    typedef struct _GtkFileChooserDialog GtkFileChooserDialog;

    typedef struct _GtkActionClass GtkActionClass;

    typedef struct _GtkToggleActionClass GtkToggleActionClass;

    typedef struct _GtkVBoxClass GtkVBoxClass;

    typedef struct _GtkButtonBoxClass GtkButtonBoxClass;

    typedef struct _GtkHButtonBoxClass GtkHButtonBoxClass;

    typedef struct _GtkThemeEngine GtkThemeEngine;

    typedef struct _GtkTreeStoreClass GtkTreeStoreClass;

    typedef struct _GtkBoxChild GtkBoxChild;

    typedef struct _GtkHButtonBox GtkHButtonBox;

    typedef struct _GtkAccelGroupClass GtkAccelGroupClass;

    typedef struct _GtkSeparator GtkSeparator;

    typedef struct _GtkButtonClass GtkButtonClass;

    typedef void (*GtkWindowKeysForeachFunc) (GtkWindow *, guint,
					      GdkModifierType, gboolean,
					      gpointer);

    typedef struct _GtkIconFactoryClass GtkIconFactoryClass;

    typedef struct _GtkTreeSelectionClass GtkTreeSelectionClass;

    typedef struct _GtkMenuShellClass GtkMenuShellClass;

    typedef struct _GtkTreeDragSourceIface GtkTreeDragSourceIface;

    typedef struct _GtkLabelClass GtkLabelClass;

    typedef struct _GtkScrollbar GtkScrollbar;

    typedef struct _GtkWidgetShapeInfo GtkWidgetShapeInfo;

    typedef struct _GtkActionGroupClass GtkActionGroupClass;

    typedef struct _GtkSettingsClass GtkSettingsClass;

    typedef struct _GtkIMContextClass GtkIMContextClass;

    typedef struct _GtkCellRendererClass GtkCellRendererClass;

    typedef struct _GtkToolButtonClass GtkToolButtonClass;

    typedef struct _GtkMenuToolButtonClass GtkMenuToolButtonClass;

    typedef struct _GtkVSeparator GtkVSeparator;

    typedef struct _GtkDrawingAreaClass GtkDrawingAreaClass;

    typedef struct _GtkTargetPair GtkTargetPair;

    typedef struct _GtkCellViewClass GtkCellViewClass;

    typedef struct _GtkCellLayoutIface GtkCellLayoutIface;

    typedef struct _GtkAlignmentPrivate GtkAlignmentPrivate;

    typedef struct _GtkFixedClass GtkFixedClass;

    typedef struct _GtkHScaleClass GtkHScaleClass;

    typedef struct _GtkScrollbarClass GtkScrollbarClass;

    typedef struct _GtkAccelLabelClass GtkAccelLabelClass;

    typedef void (*GtkModuleDisplayInitFunc) (GdkDisplay *);

    typedef struct _GtkTextBufferClass GtkTextBufferClass;

    typedef struct _GtkVRuler GtkVRuler;

    typedef struct _GtkSocketClass GtkSocketClass;

    typedef struct _GtkIconThemeClass GtkIconThemeClass;

    typedef struct _GtkVPaned GtkVPaned;

    typedef struct _GtkTableChild GtkTableChild;

    typedef struct _GtkArrowClass GtkArrowClass;

    typedef struct _GtkHScrollbar GtkHScrollbar;

    typedef struct _GtkFileChooserWidgetPrivate
	GtkFileChooserWidgetPrivate;

    typedef struct _GtkFileChooserWidget GtkFileChooserWidget;

    typedef struct _GtkPlugClass GtkPlugClass;

    typedef struct _GtkCellRendererPixbufClass GtkCellRendererPixbufClass;

    typedef struct _GtkVButtonBoxClass GtkVButtonBoxClass;

    typedef struct _GtkTextChildAnchorClass GtkTextChildAnchorClass;

    typedef struct _GtkCellRendererCombo GtkCellRendererCombo;

    typedef struct _GtkTreeModelIface GtkTreeModelIface;

    typedef struct _GtkAccessibleClass GtkAccessibleClass;

    typedef struct _GtkCellRendererTextClass GtkCellRendererTextClass;

    typedef struct _GtkVScaleClass GtkVScaleClass;

    typedef struct _GtkCurveClass GtkCurveClass;

    typedef struct _GtkSeparatorToolItemClass GtkSeparatorToolItemClass;

    typedef struct _GtkStyleClass GtkStyleClass;

    typedef struct _GtkSeparatorMenuItemClass GtkSeparatorMenuItemClass;

    typedef struct _GtkIMMulticontextClass GtkIMMulticontextClass;

    typedef struct _GtkToggleToolButtonClass GtkToggleToolButtonClass;

    typedef struct _GtkRadioToolButtonClass GtkRadioToolButtonClass;

    typedef struct _GtkCellRendererProgressClass
	GtkCellRendererProgressClass;

    typedef struct _GtkVScrollbar GtkVScrollbar;

    typedef struct _GtkVPanedClass GtkVPanedClass;

    typedef struct _GtkToggleButtonClass GtkToggleButtonClass;

    typedef struct _GtkCellRendererToggleClass GtkCellRendererToggleClass;

    typedef struct _GtkVButtonBox GtkVButtonBox;

    typedef struct _GtkTreeDragDestIface GtkTreeDragDestIface;

    typedef struct _GtkColorSelectionClass GtkColorSelectionClass;

    typedef struct _GtkCellRendererProgressPrivate
	GtkCellRendererProgressPrivate;

    typedef struct _GtkCellRendererProgress GtkCellRendererProgress;

    typedef struct _GtkImageClass GtkImageClass;

    typedef struct _GtkMessageDialogClass GtkMessageDialogClass;

    typedef struct _GtkTreeSortableIface GtkTreeSortableIface;

    typedef struct _GtkCalendarClass GtkCalendarClass;

    typedef struct _GtkEntryClass GtkEntryClass;

    typedef struct _GtkSpinButtonClass GtkSpinButtonClass;

    typedef struct _GtkInputDialog GtkInputDialog;

    typedef struct _GtkInputDialogClass GtkInputDialogClass;

    typedef struct _GtkEntryCompletionClass GtkEntryCompletionClass;

    typedef struct _GtkAlignmentClass GtkAlignmentClass;

    typedef struct _GtkTreeModelFilterClass GtkTreeModelFilterClass;

    typedef struct _GtkRcStyleClass GtkRcStyleClass;

    typedef struct _GtkUIManagerClass GtkUIManagerClass;

    typedef struct _GtkSeparatorClass GtkSeparatorClass;

    typedef struct _GtkVSeparatorClass GtkVSeparatorClass;

    typedef struct _GtkCheckButtonClass GtkCheckButtonClass;

    typedef struct _GtkRadioMenuItemClass GtkRadioMenuItemClass;

    typedef struct _GtkTextViewClass GtkTextViewClass;

    typedef void (*GtkColorSelectionChangePaletteFunc) (const GdkColor *,
							gint);

    typedef struct _GtkTreeModelSortClass GtkTreeModelSortClass;

    typedef struct _GtkCellEditableIface GtkCellEditableIface;

    typedef struct _GtkToolbarClass GtkToolbarClass;

    typedef struct _GtkHandleBoxClass GtkHandleBoxClass;

    typedef struct _GtkHSeparator GtkHSeparator;

    typedef struct _GtkTextTagTableClass GtkTextTagTableClass;

    typedef struct _GtkComboBoxClass GtkComboBoxClass;

    typedef struct _GtkComboBoxEntryClass GtkComboBoxEntryClass;

    typedef struct _GtkFontSelectionClass GtkFontSelectionClass;

    typedef struct _GtkFrameClass GtkFrameClass;

    typedef struct _GtkHScrollbarClass GtkHScrollbarClass;

    typedef struct _GtkFileSelectionClass GtkFileSelectionClass;

    typedef struct _GtkScrolledWindowClass GtkScrolledWindowClass;

    typedef struct _GtkTextMarkClass GtkTextMarkClass;

    typedef struct _GtkToolbarPrivate GtkToolbarPrivate;

    typedef struct _GtkVScale GtkVScale;

    typedef struct _GtkFixedChild GtkFixedChild;

    typedef struct _GtkLayoutClass GtkLayoutClass;

    typedef struct _GtkEventBoxClass GtkEventBoxClass;

    typedef struct _GtkIMContextSimpleClass GtkIMContextSimpleClass;

    typedef struct _GtkExpanderClass GtkExpanderClass;

    typedef struct _GtkProgressClass GtkProgressClass;

    typedef void (*GtkModuleInitFunc) (gint *, gchar * **);

    typedef struct _GtkFileChooserDialogClass GtkFileChooserDialogClass;

    typedef struct _GtkVScrollbarClass GtkVScrollbarClass;

    typedef struct _GtkTableClass GtkTableClass;

    typedef struct _GtkFontButtonClass GtkFontButtonClass;

    typedef struct _GtkHSeparatorClass GtkHSeparatorClass;

    typedef struct _GtkColorSelectionDialogClass
	GtkColorSelectionDialogClass;

    typedef struct _GtkColorButtonClass GtkColorButtonClass;

    typedef struct _GtkMenuBar GtkMenuBar;

    typedef struct _GtkMenuBarClass GtkMenuBarClass;

    typedef struct _GtkColorSelectionDialog GtkColorSelectionDialog;

    typedef struct _GtkStatusbarClass GtkStatusbarClass;

    typedef struct _GtkSeparatorMenuItem GtkSeparatorMenuItem;

    typedef struct _GtkAboutDialogClass GtkAboutDialogClass;

    typedef struct _GtkListStoreClass GtkListStoreClass;

    typedef struct _GtkFileChooserButtonClass GtkFileChooserButtonClass;

    typedef enum {
	GTK_TOOLBAR_SPACE_EMPTY = 0,
	GTK_TOOLBAR_SPACE_LINE = 1
    } GtkToolbarSpaceStyle;

    typedef struct _GtkMenuClass GtkMenuClass;

    typedef struct _GtkHScale GtkHScale;

    typedef struct _GtkGammaCurveClass GtkGammaCurveClass;

    typedef struct _GtkCellRendererComboClass GtkCellRendererComboClass;

    typedef struct _GtkTearoffMenuItem GtkTearoffMenuItem;

    typedef struct _GtkNotebookClass GtkNotebookClass;

    typedef struct _GtkImageMenuItemClass GtkImageMenuItemClass;

    typedef struct _GtkTooltipsClass GtkTooltipsClass;

    typedef struct _GtkTreeViewClass GtkTreeViewClass;

    typedef struct _GtkFileChooserWidgetClass GtkFileChooserWidgetClass;

    typedef struct _GtkTearoffMenuItemClass GtkTearoffMenuItemClass;

    typedef struct _GtkRadioButtonClass GtkRadioButtonClass;

    typedef struct _GtkAdjustmentClass GtkAdjustmentClass;

    typedef struct _GtkHPaned GtkHPaned;

    typedef struct _GtkRadioActionClass GtkRadioActionClass;

    typedef struct _GtkTextTagClass GtkTextTagClass;

    typedef struct _GtkIconViewClass GtkIconViewClass;

    typedef struct _GtkProgressBarClass GtkProgressBarClass;

    typedef struct _GtkAspectFrameClass GtkAspectFrameClass;

    typedef struct _GtkGammaCurve GtkGammaCurve;

    typedef gboolean(*GtkAccelGroupActivate) (GtkAccelGroup *, GObject *,
					      guint, GdkModifierType);

    typedef enum {
	GTK_DEBUG_MISC = 1 << 0,
	GTK_DEBUG_PLUGSOCKET = 1 << 1,
	GTK_DEBUG_TEXT = 1 << 2,
	GTK_DEBUG_TREE = 1 << 3,
	GTK_DEBUG_UPDATES = 1 << 4,
	GTK_DEBUG_KEYBINDINGS = 1 << 5,
	GTK_DEBUG_MULTIHEAD = 1 << 6,
	GTK_DEBUG_MODULES = 1 << 7,
	GTK_DEBUG_GEOMETRY = 1 << 8,
	GTK_DEBUG_ICONTHEME = 1 << 9
    } GtkDebugFlag;

    typedef enum {
	GTK_CELL_RENDERER_MODE_INERT,
	GTK_CELL_RENDERER_MODE_ACTIVATABLE,
	GTK_CELL_RENDERER_MODE_EDITABLE
    } GtkCellRendererMode;

    typedef enum {
	GTK_ICON_THEME_NOT_FOUND,
	GTK_ICON_THEME_FAILED
    } GtkIconThemeError;

    typedef enum {
	GTK_RESPONSE_NONE = -1,
	GTK_RESPONSE_REJECT = -2,
	GTK_RESPONSE_ACCEPT = -3,
	GTK_RESPONSE_DELETE_EVENT = -4,
	GTK_RESPONSE_OK = -5,
	GTK_RESPONSE_CANCEL = -6,
	GTK_RESPONSE_CLOSE = -7,
	GTK_RESPONSE_YES = -8,
	GTK_RESPONSE_NO = -9,
	GTK_RESPONSE_APPLY = -10,
	GTK_RESPONSE_HELP = -11
    } GtkResponseType;

    typedef enum {
	GTK_TARGET_SAME_APP = 1 << 0,
	GTK_TARGET_SAME_WIDGET = 1 << 1
    } GtkTargetFlags;

    typedef enum {
	GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
	GTK_FILE_CHOOSER_ERROR_BAD_FILENAME
    } GtkFileChooserError;

    typedef enum {
	GTK_IN_DESTRUCTION = 1 << 0,
	GTK_FLOATING = 1 << 1,
	GTK_RESERVED_1 = 1 << 2,
	GTK_RESERVED_2 = 1 << 3
    } GtkObjectFlags;

    typedef enum {
	GTK_RC_TOKEN_INVALID = G_TOKEN_LAST,
	GTK_RC_TOKEN_INCLUDE,
	GTK_RC_TOKEN_NORMAL,
	GTK_RC_TOKEN_ACTIVE,
	GTK_RC_TOKEN_PRELIGHT,
	GTK_RC_TOKEN_SELECTED,
	GTK_RC_TOKEN_INSENSITIVE,
	GTK_RC_TOKEN_FG,
	GTK_RC_TOKEN_BG,
	GTK_RC_TOKEN_TEXT,
	GTK_RC_TOKEN_BASE,
	GTK_RC_TOKEN_XTHICKNESS,
	GTK_RC_TOKEN_YTHICKNESS,
	GTK_RC_TOKEN_FONT,
	GTK_RC_TOKEN_FONTSET,
	GTK_RC_TOKEN_FONT_NAME,
	GTK_RC_TOKEN_BG_PIXMAP,
	GTK_RC_TOKEN_PIXMAP_PATH,
	GTK_RC_TOKEN_STYLE,
	GTK_RC_TOKEN_BINDING,
	GTK_RC_TOKEN_BIND,
	GTK_RC_TOKEN_WIDGET,
	GTK_RC_TOKEN_WIDGET_CLASS,
	GTK_RC_TOKEN_CLASS,
	GTK_RC_TOKEN_LOWEST,
	GTK_RC_TOKEN_GTK,
	GTK_RC_TOKEN_APPLICATION,
	GTK_RC_TOKEN_THEME,
	GTK_RC_TOKEN_RC,
	GTK_RC_TOKEN_HIGHEST,
	GTK_RC_TOKEN_ENGINE,
	GTK_RC_TOKEN_MODULE_PATH,
	GTK_RC_TOKEN_IM_MODULE_PATH,
	GTK_RC_TOKEN_IM_MODULE_FILE,
	GTK_RC_TOKEN_STOCK,
	GTK_RC_TOKEN_LTR,
	GTK_RC_TOKEN_RTL,
	GTK_RC_TOKEN_LAST
    } GtkRcTokenType;

    typedef enum {
	GTK_TOPLEVEL = 1 << 4,
	GTK_NO_WINDOW = 1 << 5,
	GTK_REALIZED = 1 << 6,
	GTK_MAPPED = 1 << 7,
	GTK_VISIBLE = 1 << 8,
	GTK_SENSITIVE = 1 << 9,
	GTK_PARENT_SENSITIVE = 1 << 10,
	GTK_CAN_FOCUS = 1 << 11,
	GTK_HAS_FOCUS = 1 << 12,
	GTK_CAN_DEFAULT = 1 << 13,
	GTK_HAS_DEFAULT = 1 << 14,
	GTK_HAS_GRAB = 1 << 15,
	GTK_RC_STYLE = 1 << 16,
	GTK_COMPOSITE_CHILD = 1 << 17,
	GTK_NO_REPARENT = 1 << 18,
	GTK_APP_PAINTABLE = 1 << 19,
	GTK_RECEIVES_DEFAULT = 1 << 20,
	GTK_DOUBLE_BUFFERED = 1 << 21,
	GTK_NO_SHOW_ALL = 1 << 22
    } GtkWidgetFlags;

#if __LSB_VERSION__ >= 40
    typedef enum {
	GTK_ICON_VIEW_NO_DROP,
	GTK_ICON_VIEW_DROP_INTO,
	GTK_ICON_VIEW_DROP_LEFT,
	GTK_ICON_VIEW_DROP_RIGHT,
	GTK_ICON_VIEW_DROP_ABOVE,
	GTK_ICON_VIEW_DROP_BELOW
    } GtkIconViewDropPosition;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    typedef struct _GtkPageSetup GtkPageSetup;

    typedef struct _GtkPrintContext GtkPrintContext;

    typedef struct _GtkPaperSize GtkPaperSize;

    typedef struct _GtkPrintOperationClass GtkPrintOperationClass;

    typedef struct _GtkPrintOperationPrivate GtkPrintOperationPrivate;

    typedef struct _GtkPrintOperation GtkPrintOperation;

    typedef enum {
	GTK_PRINT_STATUS_INITIAL,
	GTK_PRINT_STATUS_PREPARING,
	GTK_PRINT_STATUS_GENERATING_DATA,
	GTK_PRINT_STATUS_SENDING_DATA,
	GTK_PRINT_STATUS_PENDING,
	GTK_PRINT_STATUS_PENDING_ISSUE,
	GTK_PRINT_STATUS_PRINTING,
	GTK_PRINT_STATUS_FINISHED,
	GTK_PRINT_STATUS_FINISHED_ABORTED
    } GtkPrintStatus;

    typedef enum {
	GTK_PRINT_OPERATION_RESULT_ERROR,
	GTK_PRINT_OPERATION_RESULT_APPLY,
	GTK_PRINT_OPERATION_RESULT_CANCEL,
	GTK_PRINT_OPERATION_RESULT_IN_PROGRESS
    } GtkPrintOperationResult;

    typedef enum {
	GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG,
	GTK_PRINT_OPERATION_ACTION_PRINT,
	GTK_PRINT_OPERATION_ACTION_PREVIEW,
	GTK_PRINT_OPERATION_ACTION_EXPORT
    } GtkPrintOperationAction;

    typedef enum {
	GTK_PRINT_ERROR_GENERAL,
	GTK_PRINT_ERROR_INTERNAL_ERROR,
	GTK_PRINT_ERROR_NOMEM,
	GTK_PRINT_ERROR_INVALID_FILE
    } GtkPrintError;

    typedef void (*GtkPageSetupDoneFunc) (GtkPageSetup *, gpointer);

    typedef struct _GtkPrintSettings GtkPrintSettings;

    typedef void (*GtkPrintSettingsFunc) (const char *, const char *,
					  gpointer);

    typedef struct _GtkPageRange GtkPageRange;

    typedef struct _GtkLinkButton GtkLinkButton;

    typedef struct _GtkLinkButtonClass GtkLinkButtonClass;

    typedef struct _GtkLinkButtonPrivate GtkLinkButtonPrivate;

    typedef void (*GtkLinkButtonUriFunc) (GtkLinkButton *, const char *,
					  gpointer);

    typedef GtkNotebook *(*GtkNotebookWindowCreationFunc) (GtkNotebook *,
							   GtkWidget *,
							   gint, gint,
							   gpointer);

    typedef enum {
	GTK_ASSISTANT_PAGE_CONTENT,
	GTK_ASSISTANT_PAGE_INTRO,
	GTK_ASSISTANT_PAGE_CONFIRM,
	GTK_ASSISTANT_PAGE_SUMMARY,
	GTK_ASSISTANT_PAGE_PROGRESS
    } GtkAssistantPageType;

    typedef struct _GtkAssistant GtkAssistant;

    typedef struct _GtkAssistantPrivate GtkAssistantPrivate;

    typedef struct _GtkAssistantClass GtkAssistantClass;

    typedef gint(*GtkAssistantPageFunc) (gint, gpointer);

    typedef enum {
	GTK_RECENT_SORT_NONE,
	GTK_RECENT_SORT_MRU,
	GTK_RECENT_SORT_LRU,
	GTK_RECENT_SORT_CUSTOM
    } GtkRecentSortType;

    typedef gint(*GtkRecentSortFunc) (GtkRecentInfo *, GtkRecentInfo *,
				      gpointer);

    typedef struct _GtkRecentChooser GtkRecentChooser;

    typedef struct _GtkRecentChooserIface GtkRecentChooserIface;

    typedef enum {
	GTK_RECENT_CHOOSER_ERROR_NOT_FOUND,
	GTK_RECENT_CHOOSER_ERROR_INVALID_URI
    } GtkRecentChooserError;

    typedef struct _GtkRecentChooserDialog GtkRecentChooserDialog;

    typedef struct _GtkRecentChooserDialogClass
	GtkRecentChooserDialogClass;

    typedef struct _GtkRecentChooserDialogPrivate
	GtkRecentChooserDialogPrivate;

    typedef struct _GtkRecentChooserWidget GtkRecentChooserWidget;

    typedef struct _GtkRecentChooserWidgetClass
	GtkRecentChooserWidgetClass;

    typedef struct _GtkRecentChooserWidgetPrivate
	GtkRecentChooserWidgetPrivate;

    typedef struct _GtkRecentChooserMenu GtkRecentChooserMenu;

    typedef struct _GtkRecentChooserMenuClass GtkRecentChooserMenuClass;

    typedef struct _GtkRecentChooserMenuPrivate
	GtkRecentChooserMenuPrivate;

    typedef void (*GtkClipboardRichTextReceivedFunc) (GtkClipboard *,
						      GdkAtom,
						      const unsigned char
						      *, gsize, gpointer);

    typedef struct _GtkCellRendererSpin GtkCellRendererSpin;

    typedef struct _GtkCellRendererSpinClass GtkCellRendererSpinClass;

    typedef struct _GtkCellRendererSpinPrivate GtkCellRendererSpinPrivate;

    typedef struct _GtkCellRendererAccel GtkCellRendererAccel;

    typedef struct _GtkCellRendererAccelClass GtkCellRendererAccelClass;

    typedef enum {
	GTK_CELL_RENDERER_ACCEL_MODE_GTK,
	GTK_CELL_RENDERER_ACCEL_MODE_OTHER
    } GtkCellRendererAccelMode;

    typedef void (*GtkTreeViewSearchPositionFunc) (GtkTreeView *,
						   GtkWidget *, gpointer);

#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    typedef struct _GtkTooltip GtkTooltip;

#endif				/* __LSB_VERSION__ >= 5.0 */

    enum {
	GTK_TREE_SORTABLE_DEFAULT_SORT_COLUMN_ID = -1,
	GTK_TREE_SORTABLE_UNSORTED_SORT_COLUMN_ID = -2
    };

    struct _GtkObject {
	GObject parent_instance;
	guint32 flags;
    };

    struct _GtkRcStyle {
	GObject parent_instance;
	gchar *name;
	gchar *bg_pixmap_name[5];
	PangoFontDescription *font_desc;
	GtkRcFlags color_flags[5];
	GdkColor fg[5];
	GdkColor bg[5];
	GdkColor text[5];
	GdkColor base[5];
	gint xthickness;
	gint ythickness;
	GArray *rc_properties;
	GSList *rc_style_lists;
	GSList *icon_factories;
	guint engine_specified:1;
    };

    struct _GtkStyle {
	GObject parent_instance;
	GdkColor fg[5];
	GdkColor bg[5];
	GdkColor light[5];
	GdkColor dark[5];
	GdkColor mid[5];
	GdkColor text[5];
	GdkColor base[5];
	GdkColor text_aa[5];
	GdkColor black;
	GdkColor white;
	PangoFontDescription *font_desc;
	gint xthickness;
	gint ythickness;
	GdkGC *fg_gc[5];
	GdkGC *bg_gc[5];
	GdkGC *light_gc[5];
	GdkGC *dark_gc[5];
	GdkGC *mid_gc[5];
	GdkGC *text_gc[5];
	GdkGC *base_gc[5];
	GdkGC *text_aa_gc[5];
	GdkGC *black_gc;
	GdkGC *white_gc;
	GdkPixmap *bg_pixmap[5];
	gint attach_count;
	gint depth;
	GdkColormap *colormap;
	GdkFont *private_font;
	PangoFontDescription *private_font_desc;
	GtkRcStyle *rc_style;
	GSList *styles;
	GArray *property_cache;
	GSList *icon_factories;
    };

    struct _GtkRequisition {
	gint width;
	gint height;
    };

    struct _GtkWidget {
	GtkObject object;
	guint16 private_flags;
	guint8 state;
	guint8 saved_state;
	gchar *name;
	GtkStyle *style;
	GtkRequisition requisition;
	GtkAllocation allocation;
	GdkWindow *window;
	GtkWidget *parent;
    };

    struct _GtkAdjustment {
	GtkObject parent_instance;
	gdouble lower;
	gdouble upper;
	gdouble value;
	gdouble step_increment;
	gdouble page_increment;
	gdouble page_size;
    };

    struct _GtkProgress {
	GtkWidget widget;
	GtkAdjustment *adjustment;
	GdkPixmap *offscreen_pixmap;
	gchar *format;
	gfloat x_align;
	gfloat y_align;
	guint show_text:1;
	guint activity_mode:1;
	guint use_text_format:1;
    };

    struct _GtkProgressBar {
	GtkProgress progress;
	GtkProgressBarStyle bar_style;
	GtkProgressBarOrientation orientation;
	guint blocks;
	gint in_block;
	gint activity_pos;
	guint activity_step;
	guint activity_blocks;
	gdouble pulse_fraction;
	guint activity_dir:1;
	guint ellipsize:3;
    };

    struct _GtkTextTagTable {
	GObject parent_instance;
	GHashTable *hash;
	GSList *anonymous;
	gint anon_count;
	GSList *buffers;
    };

    struct _GtkTextBuffer {
	GObject parent_instance;
	GtkTextTagTable *tag_table;
	GtkTextBTree *btree;
	GSList *clipboard_contents_buffers;
	GSList *selection_clipboards;
	GtkTextLogAttrCache *log_attr_cache;
	guint user_action_count;
	guint modified:1;
    };

    struct _GtkTextIter {
	gpointer dummy1;
	gpointer dummy2;
	gint dummy3;
	gint dummy4;
	gint dummy5;
	gint dummy6;
	gint dummy7;
	gint dummy8;
	gpointer dummy9;
	gpointer dummy10;
	gint dummy11;
	gint dummy12;
	gint dummy13;
	gpointer dummy14;
    };

    struct _GtkContainer {
	GtkWidget widget;
	GtkWidget *focus_child;
	guint border_width:16;
	guint need_resize:1;
	guint resize_mode:2;
	guint reallocate_redraws:1;
	guint has_focus_chain:1;
    };

    struct _GtkBin {
	GtkContainer container;
	GtkWidget *child;
    };

    struct _GtkComboBox {
	GtkBin parent_instance;
	GtkComboBoxPrivate *priv;
    };

    struct _GtkMisc {
	GtkWidget widget;
	gfloat xalign;
	gfloat yalign;
	guint16 xpad;
	guint16 ypad;
    };

    struct _GtkBox {
	GtkContainer container;
	GList *children;
	gint16 spacing;
	guint homogeneous:1;
    };

    struct _GtkHBox {
	GtkBox box;
    };

    struct _GtkStatusbar {
	GtkHBox parent_widget;
	GtkWidget *frame;
	GtkWidget *label;
	GSList *messages;
	GSList *keys;
	guint seq_context_id;
	guint seq_message_id;
	GdkWindow *grip_window;
	guint has_resize_grip:1;
    };

    struct _GtkTargetList {
	GList *list;
	guint ref_count;
    };

    struct _GtkWindow {
	GtkBin bin;
	gchar *title;
	gchar *wmclass_name;
	gchar *wmclass_class;
	gchar *wm_role;
	GtkWidget *focus_widget;
	GtkWidget *default_widget;
	GtkWindow *transient_parent;
	GtkWindowGeometryInfo *geometry_info;
	GdkWindow *frame;
	GtkWindowGroup *group;
	guint16 configure_request_count;
	guint allow_shrink:1;
	guint allow_grow:1;
	guint configure_notify_received:1;
	guint need_default_position:1;
	guint need_default_size:1;
	guint position:3;
	guint type:4;
	guint has_user_ref_count:1;
	guint has_focus:1;
	guint modal:1;
	guint destroy_with_parent:1;
	guint has_frame:1;
	guint iconify_initially:1;
	guint stick_initially:1;
	guint maximize_initially:1;
	guint decorated:1;
	guint type_hint:3;
	guint gravity:5;
	guint is_active:1;
	guint has_toplevel_focus:1;
	guint frame_left;
	guint frame_top;
	guint frame_right;
	guint frame_bottom;
	guint keys_changed_handler;
	GdkModifierType mnemonic_modifier;
	GdkScreen *screen;
    };

    struct _GtkWindowGroup {
	GObject parent_instance;
	GSList *grabs;
    };

    struct _GtkTargetEntry {
	gchar *target;
	guint flags;
	guint info;
    };

    struct _GtkIMContext {
	GObject parent_instance;
    };

    struct _GtkEntry {
	GtkWidget widget;
	gchar *text;
	guint editable:1;
	guint visible:1;
	guint overwrite_mode:1;
	guint in_drag:1;
	guint16 text_length;
	guint16 text_max_length;
	GdkWindow *text_area;
	GtkIMContext *im_context;
	GtkWidget *popup_menu;
	gint current_pos;
	gint selection_bound;
	PangoLayout *cached_layout;
	guint cache_includes_preedit:1;
	guint need_im_reset:1;
	guint has_frame:1;
	guint activates_default:1;
	guint cursor_visible:1;
	guint in_click:1;
	guint is_cell_renderer:1;
	guint editing_canceled:1;
	guint mouse_cursor_obscured:1;
	guint select_words:1;
	guint select_lines:1;
	guint resolved_dir:4;
#if __LSB_VERSION__ >= 41
	guint truncate_multiline:1;
#endif				/* __LSB_VERSION__ >= 41 */
	guint button;
	guint blink_timeout;
	guint recompute_idle;
	gint scroll_offset;
	gint ascent;
	gint descent;
	guint16 text_size;
	guint16 n_bytes;
	guint16 preedit_length;
	guint16 preedit_cursor;
	gint dnd_position;
	gint drag_start_x;
	gint drag_start_y;
	gunichar invisible_char;
	gint width_chars;
    };

    struct _GtkComboBoxEntry {
	GtkComboBox parent_instance;
	GtkComboBoxEntryPrivate *priv;
    };

    struct _GtkLayout {
	GtkContainer container;
	GList *children;
	guint width;
	guint height;
	GtkAdjustment *hadjustment;
	GtkAdjustment *vadjustment;
	GdkWindow *bin_window;
	GdkVisibilityState visibility;
	gint scroll_x;
	gint scroll_y;
	guint freeze_count;
    };

    struct _GtkTreeIter {
	gint stamp;
	gpointer user_data;
	gpointer user_data2;
	gpointer user_data3;
    };

    struct _GtkTreeStore {
	GObject parent;
	gint stamp;
	gpointer root;
	gpointer last;
	gint n_columns;
	gint sort_column_id;
	GList *sort_list;
	GtkSortType order;
	GType *column_headers;
	GtkTreeIterCompareFunc default_sort_func;
	gpointer default_sort_data;
	GtkDestroyNotify default_sort_destroy;
	guint columns_dirty:1;
    };

    struct _GtkDialog {
	GtkWindow window;
	GtkWidget *vbox;
	GtkWidget *action_area;
	GtkWidget *separator;
    };

    struct _GtkAboutDialog {
	GtkDialog parent_instance;
	gpointer private_data;
    };

    struct _GtkRange {
	GtkWidget widget;
	GtkAdjustment *adjustment;
	GtkUpdateType update_policy;
	guint inverted:1;
	guint flippable:1;
	guint has_stepper_a:1;
	guint has_stepper_b:1;
	guint has_stepper_c:1;
	guint has_stepper_d:1;
	guint need_recalc:1;
	guint slider_size_fixed:1;
	gint min_slider_size;
	GtkOrientation orientation;
	GdkRectangle range_rect;
	gint slider_start;
	gint slider_end;
	gint round_digits;
	guint trough_click_forward:1;
	guint update_pending:1;
	GtkRangeLayout *layout;
	GtkRangeStepTimer *timer;
	gint slide_initial_slider_position;
	gint slide_initial_coordinate;
	guint update_timeout_id;
	GdkWindow *event_window;
    };

    struct _GtkAccelKey {
	guint accel_key;
	GdkModifierType accel_mods;
	guint accel_flags:16;
    };

    struct _GtkAccelGroupEntry {
	GtkAccelKey key;
	GClosure *closure;
	GQuark accel_path_quark;
    };

    struct _GtkAccelGroup {
	GObject parent;
	guint lock_count;
	GdkModifierType modifier_mask;
	GSList *acceleratables;
	guint n_accels;
	GtkAccelGroupEntry *priv_accels;
    };

    struct _GtkSocket {
	GtkContainer container;
	guint16 request_width;
	guint16 request_height;
	guint16 current_width;
	guint16 current_height;
	GdkWindow *plug_window;
	GtkWidget *plug_widget;
	gshort xembed_version;
	guint same_app:1;
	guint focus_in:1;
	guint have_size:1;
	guint need_map:1;
	guint is_mapped:1;
	guint active:1;
	GtkAccelGroup *accel_group;
	GtkWidget *toplevel;
    };

    struct _GtkTreeViewColumn {
	GtkObject parent;
	GtkWidget *tree_view;
	GtkWidget *button;
	GtkWidget *child;
	GtkWidget *arrow;
	GtkWidget *alignment;
	GdkWindow *window;
	GtkCellEditable *editable_widget;
	gfloat xalign;
	guint property_changed_signal;
	gint spacing;
	GtkTreeViewColumnSizing column_type;
	gint requested_width;
	gint button_request;
	gint resized_width;
	gint width;
	gint fixed_width;
	gint min_width;
	gint max_width;
	gint drag_x;
	gint drag_y;
	gchar *title;
	GList *cell_list;
	guint sort_clicked_signal;
	guint sort_column_changed_signal;
	gint sort_column_id;
	GtkSortType sort_order;
	guint visible:1;
	guint resizable:1;
	guint clickable:1;
	guint dirty:1;
	guint show_sort_indicator:1;
	guint maybe_reordered:1;
	guint reorderable:1;
	guint use_resized_width:1;
	guint expand:1;
    };

    struct _GtkCellRenderer {
	GtkObject parent;
	gfloat xalign;
	gfloat yalign;
	gint width;
	gint height;
	guint16 xpad;
	guint16 ypad;
	guint mode:2;
	guint visible:1;
	guint is_expander:1;
	guint is_expanded:1;
	guint cell_background_set:1;
	guint sensitive:1;
	guint editing:1;
    };

    struct _GtkButtonBox {
	GtkBox box;
	gint child_min_width;
	gint child_min_height;
	gint child_ipad_x;
	gint child_ipad_y;
	GtkButtonBoxStyle layout_style;
    };

    struct _GtkAction {
	GObject object;
	GtkActionPrivate *private_data;
    };

    struct _GtkToggleAction {
	GtkAction parent;
	GtkToggleActionPrivate *private_data;
    };

    struct _GtkTextAppearance {
	GdkColor bg_color;
	GdkColor fg_color;
	GdkBitmap *bg_stipple;
	GdkBitmap *fg_stipple;
	gint rise;
	gpointer padding1;
	guint underline:4;
	guint strikethrough:1;
	guint draw_bg:1;
	guint inside_selection:1;
	guint is_text:1;
	guint pad1:1;
	guint pad2:1;
	guint pad3:1;
	guint pad4:1;
    };

    struct _GtkTextAttributes {
	guint refcount;
	GtkTextAppearance appearance;
	GtkJustification justification;
	GtkTextDirection direction;
	PangoFontDescription *font;
	gdouble font_scale;
	gint left_margin;
	gint indent;
	gint right_margin;
	gint pixels_above_lines;
	gint pixels_below_lines;
	gint pixels_inside_wrap;
	PangoTabArray *tabs;
	GtkWrapMode wrap_mode;
	PangoLanguage *language;
#if __LSB_VERSION__ < 50
	gpointer padding1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	GdkColor *pg_bg_color;
#endif				/* __LSB_VERSION__ >= 50 */
	guint invisible:1;
	guint bg_full_height:1;
	guint editable:1;
	guint realized:1;
	guint pad1:1;
	guint pad2:1;
	guint pad3:1;
	guint pad4:1;
    };

    struct _GtkTextTag {
	GObject parent_instance;
	GtkTextTagTable *table;
	char *name;
	int priority;
	GtkTextAttributes *values;
	guint bg_color_set:1;
	guint bg_stipple_set:1;
	guint fg_color_set:1;
	guint scale_set:1;
	guint fg_stipple_set:1;
	guint justification_set:1;
	guint left_margin_set:1;
	guint indent_set:1;
	guint rise_set:1;
	guint strikethrough_set:1;
	guint right_margin_set:1;
	guint pixels_above_lines_set:1;
	guint pixels_below_lines_set:1;
	guint pixels_inside_wrap_set:1;
	guint tabs_set:1;
	guint underline_set:1;
	guint wrap_mode_set:1;
	guint bg_full_height_set:1;
	guint invisible_set:1;
	guint editable_set:1;
	guint language_set:1;
	guint pad1:1;
	guint pad2:1;
	guint pad3:1;
    };

    struct _GtkFileFilterInfo {
	GtkFileFilterFlags contains;
	const gchar *filename;
	const gchar *uri;
	const gchar *display_name;
	const gchar *mime_type;
    };

    struct _GtkToolItem {
	GtkBin parent;
	GtkToolItemPrivate *priv;
    };

    struct _GtkToolButton {
	GtkToolItem parent;
	GtkToolButtonPrivate *priv;
    };

    struct _GtkIconView {
	GtkContainer parent;
	GtkIconViewPrivate *priv;
    };

    struct _GtkLabel {
	GtkMisc misc;
	gchar *label;
	guint jtype:2;
	guint wrap:1;
	guint use_underline:1;
	guint use_markup:1;
	guint ellipsize:3;
	guint mnemonic_keyval;
	gchar *text;
	PangoAttrList *attrs;
	PangoAttrList *effective_attrs;
	PangoLayout *layout;
	GtkWidget *mnemonic_widget;
	GtkWindow *mnemonic_window;
	GtkLabelSelectionInfo *select_info;
    };

    struct _GtkSettings {
	GObject parent_instance;
	GData *queued_settings;
	GtkSettingsPropertyValue *property_values;
	GtkRcContext *rc_context;
	GdkScreen *screen;
    };

    struct _GtkUIManager {
	GObject parent;
	GtkUIManagerPrivate *private_data;
    };

    struct _GtkItem {
	GtkBin bin;
    };

    struct _GtkMenuItem {
	GtkItem item;
	GtkWidget *submenu;
	GdkWindow *event_window;
	guint16 toggle_size;
	guint16 accelerator_width;
	gchar *accel_path;
	guint show_submenu_indicator:1;
	guint submenu_placement:1;
	guint submenu_direction:1;
	guint right_justify:1;
	guint timer_from_keypress:1;
	guint timer;
    };

    struct _GtkCheckMenuItem {
	GtkMenuItem menu_item;
	guint active:1;
	guint always_show_toggle:1;
	guint inconsistent:1;
	guint draw_as_radio:1;
    };

    struct _GtkRadioMenuItem {
	GtkCheckMenuItem check_menu_item;
	GSList *group;
    };

    struct _GtkCellView {
	GtkWidget parent_instance;
	GtkCellViewPrivate *priv;
    };

    struct _GtkSelectionData {
	GdkAtom selection;
	GdkAtom target;
	GdkAtom type;
	gint format;
	guchar *data;
	gint length;
	GdkDisplay *display;
    };

    struct _GtkDrawingArea {
	GtkWidget widget;
	gpointer draw_data;
    };

    struct _GtkCurve {
	GtkDrawingArea graph;
	gint cursor_type;
	gfloat min_x;
	gfloat max_x;
	gfloat min_y;
	gfloat max_y;
	GdkPixmap *pixmap;
	GtkCurveType curve_type;
	gint height;
	gint grab_point;
	gint last;
	gint num_points;
	GdkPoint *point;
	gint num_ctlpoints;
	gfloat *(ctlpoint)[2];
    };

    struct _GtkNotebook {
	GtkContainer container;
	GtkNotebookPage *cur_page;
	GList *children;
	GList *first_tab;
	GList *focus_tab;
	GtkWidget *menu;
	GdkWindow *event_window;
	guint32 timer;
	guint16 tab_hborder;
	guint16 tab_vborder;
	guint show_tabs:1;
	guint homogeneous:1;
	guint show_border:1;
	guint tab_pos:2;
	guint scrollable:1;
	guint in_child:3;
	guint click_child:3;
	guint button:2;
	guint need_timer:1;
	guint child_has_focus:1;
	guint have_visible_child:1;
	guint focus_out:1;
	guint has_before_previous:1;
	guint has_before_next:1;
	guint has_after_previous:1;
	guint has_after_next:1;
    };

    struct _GtkIconFactory {
	GObject parent_instance;
	GHashTable *icons;
    };

    struct _GtkRadioAction {
	GtkToggleAction parent;
	GtkRadioActionPrivate *private_data;
    };

    struct _GtkTextMark {
	GObject parent_instance;
	gpointer segment;
    };

    struct _GtkVBox {
	GtkBox box;
    };

    struct _GtkColorSelection {
	GtkVBox parent_instance;
	gpointer private_data;
    };

    struct _GtkCalendar {
	GtkWidget widget;
	GtkStyle *header_style;
	GtkStyle *label_style;
	gint month;
	gint year;
	gint selected_day;
	gint day_month[6][7];
	gint day[6][7];
	gint num_marked_dates;
	gint marked_date[31];
	GtkCalendarDisplayOptions display_flags;
	GdkColor marked_date_color[31];
	GdkGC *gc;
	GdkGC *xor_gc;
	gint focus_row;
	gint focus_col;
	gint highlight_row;
	gint highlight_col;
	gpointer private_data;
	gchar grow_space[32];
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTableRowCol {
	guint16 requisition;
	guint16 allocation;
	guint16 spacing;
	guint need_expand:1;
	guint need_shrink:1;
	guint expand:1;
	guint shrink:1;
	guint empty:1;
    };

    struct _GtkTable {
	GtkContainer container;
	GList *children;
	GtkTableRowCol *rows;
	GtkTableRowCol *cols;
	guint16 nrows;
	guint16 ncols;
	guint16 column_spacing;
	guint16 row_spacing;
	guint homogeneous:1;
    };

    struct _GtkMenuShell {
	GtkContainer container;
	GList *children;
	GtkWidget *active_menu_item;
	GtkWidget *parent_menu_shell;
	guint button;
	guint32 activate_time;
	guint active:1;
	guint have_grab:1;
	guint have_xgrab:1;
	guint ignore_leave:1;
	guint menu_flag:1;
	guint ignore_enter:1;
    };

    struct _GtkMenu {
	GtkMenuShell menu_shell;
	GtkWidget *parent_menu_item;
	GtkWidget *old_active_menu_item;
	GtkAccelGroup *accel_group;
	gchar *accel_path;
	GtkMenuPositionFunc position_func;
	gpointer position_func_data;
	guint toggle_size;
	GtkWidget *toplevel;
	GtkWidget *tearoff_window;
	GtkWidget *tearoff_hbox;
	GtkWidget *tearoff_scrollbar;
	GtkAdjustment *tearoff_adjustment;
	GdkWindow *view_window;
	GdkWindow *bin_window;
	gint scroll_offset;
	gint saved_scroll_offset;
	gint scroll_step;
	guint timeout_id;
	GdkRegion *navigation_region;
	guint navigation_timeout;
	guint needs_destruction_ref_count:1;
	guint torn_off:1;
	guint tearoff_active:1;
	guint scroll_fast:1;
	guint upper_arrow_visible:1;
	guint lower_arrow_visible:1;
	guint upper_arrow_prelight:1;
	guint lower_arrow_prelight:1;
    };

    struct _GtkButton {
	GtkBin bin;
	GdkWindow *event_window;
	gchar *label_text;
	guint activate_timeout;
	guint constructed:1;
	guint in_button:1;
	guint button_down:1;
	guint relief:2;
	guint use_underline:1;
	guint use_stock:1;
	guint depressed:1;
	guint depress_on_activate:1;
	guint focus_on_click:1;
    };

    struct _GtkToggleButton {
	GtkButton button;
	guint active:1;
	guint draw_indicator:1;
	guint inconsistent:1;
    };

    struct _GtkIconTheme {
	GObject parent_instance;
	GtkIconThemePrivate *priv;
    };

    struct _GtkTextView {
	GtkContainer parent_instance;
	struct _GtkTextLayout *layout;
	GtkTextBuffer *buffer;
	guint selection_drag_handler;
	guint scroll_timeout;
	gint pixels_above_lines;
	gint pixels_below_lines;
	gint pixels_inside_wrap;
	GtkWrapMode wrap_mode;
	GtkJustification justify;
	gint left_margin;
	gint right_margin;
	gint indent;
	PangoTabArray *tabs;
	guint editable:1;
	guint overwrite_mode:1;
	guint cursor_visible:1;
	guint need_im_reset:1;
	guint accepts_tab:1;
	guint reserved:1;
	guint onscreen_validated:1;
	guint mouse_cursor_obscured:1;
	GtkTextWindow *text_window;
	GtkTextWindow *left_window;
	GtkTextWindow *right_window;
	GtkTextWindow *top_window;
	GtkTextWindow *bottom_window;
	GtkAdjustment *hadjustment;
	GtkAdjustment *vadjustment;
	gint xoffset;
	gint yoffset;
	gint width;
	gint height;
	gint virtual_cursor_x;
	gint virtual_cursor_y;
	GtkTextMark *first_para_mark;
	gint first_para_pixels;
	GtkTextMark *dnd_mark;
	guint blink_timeout;
	guint first_validate_idle;
	guint incremental_validate_idle;
	GtkIMContext *im_context;
	GtkWidget *popup_menu;
	gint drag_start_x;
	gint drag_start_y;
	GSList *children;
	GtkTextPendingScroll *pending_scroll;
	gint pending_place_cursor_button;
    };

    struct _GtkObjectClass {
	GObjectClass parent_class;
	void (*set_arg) (GtkObject *, GtkArg *, guint);
	void (*get_arg) (GtkObject *, GtkArg *, guint);
	void (*destroy) (GtkObject *);
    };

    struct _GtkWidgetClass {
	GtkObjectClass parent_class;
	guint activate_signal;
	guint set_scroll_adjustments_signal;
	void (*dispatch_child_properties_changed) (GtkWidget *, guint,
						   GParamSpec * *);
	void (*show) (GtkWidget *);
	void (*show_all) (GtkWidget *);
	void (*hide) (GtkWidget *);
	void (*hide_all) (GtkWidget *);
	void (*map) (GtkWidget *);
	void (*unmap) (GtkWidget *);
	void (*realize) (GtkWidget *);
	void (*unrealize) (GtkWidget *);
	void (*size_request) (GtkWidget *, GtkRequisition *);
	void (*size_allocate) (GtkWidget *, GtkAllocation *);
	void (*state_changed) (GtkWidget *, GtkStateType);
	void (*parent_set) (GtkWidget *, GtkWidget *);
	void (*hierarchy_changed) (GtkWidget *, GtkWidget *);
	void (*style_set) (GtkWidget *, GtkStyle *);
	void (*direction_changed) (GtkWidget *, GtkTextDirection);
	void (*grab_notify) (GtkWidget *, gboolean);
	void (*child_notify) (GtkWidget *, GParamSpec *);
	 gboolean(*mnemonic_activate) (GtkWidget *, gboolean);
	void (*grab_focus) (GtkWidget *);
	 gboolean(*focus) (GtkWidget *, GtkDirectionType);
	 gboolean(*event) (GtkWidget *, GdkEvent *);
	 gboolean(*button_press_event) (GtkWidget *, GdkEventButton *);
	 gboolean(*button_release_event) (GtkWidget *, GdkEventButton *);
	 gboolean(*scroll_event) (GtkWidget *, GdkEventScroll *);
	 gboolean(*motion_notify_event) (GtkWidget *, GdkEventMotion *);
	 gboolean(*delete_event) (GtkWidget *, GdkEventAny *);
	 gboolean(*destroy_event) (GtkWidget *, GdkEventAny *);
	 gboolean(*expose_event) (GtkWidget *, GdkEventExpose *);
	 gboolean(*key_press_event) (GtkWidget *, GdkEventKey *);
	 gboolean(*key_release_event) (GtkWidget *, GdkEventKey *);
	 gboolean(*enter_notify_event) (GtkWidget *, GdkEventCrossing *);
	 gboolean(*leave_notify_event) (GtkWidget *, GdkEventCrossing *);
	 gboolean(*configure_event) (GtkWidget *, GdkEventConfigure *);
	 gboolean(*focus_in_event) (GtkWidget *, GdkEventFocus *);
	 gboolean(*focus_out_event) (GtkWidget *, GdkEventFocus *);
	 gboolean(*map_event) (GtkWidget *, GdkEventAny *);
	 gboolean(*unmap_event) (GtkWidget *, GdkEventAny *);
	 gboolean(*property_notify_event) (GtkWidget *,
					   GdkEventProperty *);
	 gboolean(*selection_clear_event) (GtkWidget *,
					   GdkEventSelection *);
	 gboolean(*selection_request_event) (GtkWidget *,
					     GdkEventSelection *);
	 gboolean(*selection_notify_event) (GtkWidget *,
					    GdkEventSelection *);
	 gboolean(*proximity_in_event) (GtkWidget *, GdkEventProximity *);
	 gboolean(*proximity_out_event) (GtkWidget *, GdkEventProximity *);
	 gboolean(*visibility_notify_event) (GtkWidget *,
					     GdkEventVisibility *);
	 gboolean(*client_event) (GtkWidget *, GdkEventClient *);
	 gboolean(*no_expose_event) (GtkWidget *, GdkEventAny *);
	 gboolean(*window_state_event) (GtkWidget *,
					GdkEventWindowState *);
	void (*selection_get) (GtkWidget *, GtkSelectionData *, guint,
			       guint);
	void (*selection_received) (GtkWidget *, GtkSelectionData *,
				    guint);
	void (*drag_begin) (GtkWidget *, GdkDragContext *);
	void (*drag_end) (GtkWidget *, GdkDragContext *);
	void (*drag_data_get) (GtkWidget *, GdkDragContext *,
			       GtkSelectionData *, guint, guint);
	void (*drag_data_delete) (GtkWidget *, GdkDragContext *);
	void (*drag_leave) (GtkWidget *, GdkDragContext *, guint);
	 gboolean(*drag_motion) (GtkWidget *, GdkDragContext *, gint, gint,
				 guint);
	 gboolean(*drag_drop) (GtkWidget *, GdkDragContext *, gint, gint,
			       guint);
	void (*drag_data_received) (GtkWidget *, GdkDragContext *, gint,
				    gint, GtkSelectionData *, guint,
				    guint);
	 gboolean(*popup_menu) (GtkWidget *);
	 gboolean(*show_help) (GtkWidget *, GtkWidgetHelpType);
	AtkObject *(*get_accessible) (GtkWidget *);
	void (*screen_changed) (GtkWidget *, GdkScreen *);
	 gboolean(*can_activate_accel) (GtkWidget *, guint);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved2) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*grab_broken_event) (void);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved3) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*composited_changed) (GtkWidget *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved4) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*query_tooltip) (GtkWidget *, gint, gint, gboolean,
				   GtkTooltip *);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };

    struct _GtkImagePixmapData {
	GdkPixmap *pixmap;
    };

    struct _GtkImageImageData {
	GdkImage *image;
    };

    struct _GtkImagePixbufData {
	GdkPixbuf *pixbuf;
    };

    struct _GtkImageStockData {
	gchar *stock_id;
    };

    struct _GtkImageIconSetData {
	GtkIconSet *icon_set;
    };

    struct _GtkImageAnimationData {
	GdkPixbufAnimation *anim;
	GdkPixbufAnimationIter *iter;
	guint frame_timeout;
    };

    struct _GtkImageIconNameData {
	gchar *icon_name;
	GdkPixbuf *pixbuf;
	guint theme_change_id;
    };

    struct _GtkImage {
	GtkMisc misc;
	GtkImageType storage_type;
	union {
	    GtkImagePixmapData pixmap;
	    GtkImageImageData image;
	    GtkImagePixbufData pixbuf;
	    GtkImageStockData stock;
	    GtkImageIconSetData icon_set;
	    GtkImageAnimationData anim;
	    GtkImageIconNameData name;
	} data;
	GdkBitmap *mask;
	GtkIconSize icon_size;
    };

    struct _GtkTreeView {
	GtkContainer parent;
	GtkTreeViewPrivate *priv;
    };

    struct _GtkSpinButton {
	GtkEntry entry;
	GtkAdjustment *adjustment;
	GdkWindow *panel;
	guint32 timer;
	gdouble climb_rate;
	gdouble timer_step;
	GtkSpinButtonUpdatePolicy update_policy;
	guint in_child:2;
	guint click_child:2;
	guint button:2;
	guint need_timer:1;
	guint timer_calls:3;
	guint digits:10;
	guint numeric:1;
	guint wrap:1;
	guint snap_to_ticks:1;
    };

    struct _GtkFileSelection {
	GtkDialog parent_instance;
	GtkWidget *dir_list;
	GtkWidget *file_list;
	GtkWidget *selection_entry;
	GtkWidget *selection_text;
	GtkWidget *main_vbox;
	GtkWidget *ok_button;
	GtkWidget *cancel_button;
	GtkWidget *help_button;
	GtkWidget *history_pulldown;
	GtkWidget *history_menu;
	GList *history_list;
	GtkWidget *fileop_dialog;
	GtkWidget *fileop_entry;
	gchar *fileop_file;
	gpointer cmpl_state;
	GtkWidget *fileop_c_dir;
	GtkWidget *fileop_del_file;
	GtkWidget *fileop_ren_file;
	GtkWidget *button_area;
	GtkWidget *action_area;
	GPtrArray *selected_names;
	gchar *last_selected;
    };

    struct _GtkTooltips {
	GtkObject parent_instance;
	GtkWidget *tip_window;
	GtkWidget *tip_label;
	GtkTooltipsData *active_tips_data;
	GList *tips_data_list;
	guint delay:30;
	guint enabled:1;
	guint have_grab:1;
	guint use_sticky_delay:1;
	gint timer_tag;
	GTimeVal last_popdown;
    };

    struct _GtkTooltipsData {
	GtkTooltips *tooltips;
	GtkWidget *widget;
	gchar *tip_text;
	gchar *tip_private;
    };

    struct _GtkEntryCompletion {
	GObject parent_instance;
	GtkEntryCompletionPrivate *priv;
    };

    struct _GtkTreeModelFilter {
	GObject parent;
	GtkTreeModelFilterPrivate *priv;
    };

    struct _GtkTreeModelSort {
	GObject parent;
	gpointer root;
	gint stamp;
	guint child_flags;
	GtkTreeModel *child_model;
	gint zero_ref_count;
	GList *sort_list;
	gint sort_column_id;
	GtkSortType order;
	GtkTreeIterCompareFunc default_sort_func;
	gpointer default_sort_data;
	GtkDestroyNotify default_sort_destroy;
	guint changed_id;
	guint inserted_id;
	guint has_child_toggled_id;
	guint deleted_id;
	guint reordered_id;
    };

    struct _GtkColorButton {
	GtkButton button;
	GtkColorButtonPrivate *priv;
    };

    struct _GtkHandleBox {
	GtkBin bin;
	GdkWindow *bin_window;
	GdkWindow *float_window;
	GtkShadowType shadow_type;
	guint handle_position:2;
	guint float_window_mapped:1;
	guint child_detached:1;
	guint in_drag:1;
	guint shrink_on_detach:1;
	int snap_edge:3;
	gint deskoff_x;
	gint deskoff_y;
	GtkAllocation attach_allocation;
	GtkAllocation float_allocation;
    };

    struct _GtkActionGroup {
	GObject parent;
	GtkActionGroupPrivate *private_data;
    };

    struct _GtkBindingSet {
	gchar *set_name;
	gint priority;
	GSList *widget_path_pspecs;
	GSList *widget_class_pspecs;
	GSList *class_branch_pspecs;
	GtkBindingEntry *entries;
	GtkBindingEntry *current;
	guint parsed:1;
    };

    struct _GtkBindingEntry {
	guint keyval;
	GdkModifierType modifiers;
	GtkBindingSet *binding_set;
	guint destroyed:1;
	guint in_emission:1;
	GtkBindingEntry *set_next;
	GtkBindingEntry *hash_next;
	GtkBindingSignal *signals;
    };

    struct _GtkBindingSignal {
	GtkBindingSignal *next;
	gchar *signal_name;
	guint n_args;
	GtkBindingArg *args;
    };

    struct _GtkBindingArg {
	GType arg_type;
	union {
	    glong long_data;
	    gdouble double_data;
	    gchar *string_data;
	} d;
    };

    struct _GtkScrolledWindow {
	GtkBin container;
	GtkWidget *hscrollbar;
	GtkWidget *vscrollbar;
	guint hscrollbar_policy:2;
	guint vscrollbar_policy:2;
	guint hscrollbar_visible:1;
	guint vscrollbar_visible:1;
	guint window_placement:2;
	guint focus_out:1;
	guint16 shadow_type;
    };

    struct _GtkFrame {
	GtkBin bin;
	GtkWidget *label_widget;
	gint16 shadow_type;
	gfloat label_xalign;
	gfloat label_yalign;
	GtkAllocation child_allocation;
    };

    struct _GtkTextChildAnchor {
	GObject parent_instance;
	gpointer segment;
    };

    struct _GtkSeparatorToolItem {
	GtkToolItem parent;
	GtkSeparatorToolItemPrivate *priv;
    };

    struct _GtkTreeSelection {
	GObject parent;
	GtkTreeView *tree_view;
	GtkSelectionMode type;
	GtkTreeSelectionFunc user_func;
	gpointer user_data;
	GtkDestroyNotify destroy;
    };

    struct _GtkExpander {
	GtkBin bin;
	GtkExpanderPrivate *priv;
    };

    struct _GtkFontSelectionDialog {
	GtkDialog parent_instance;
	GtkWidget *fontsel;
	GtkWidget *main_vbox;
	GtkWidget *action_area;
	GtkWidget *ok_button;
	GtkWidget *apply_button;
	GtkWidget *cancel_button;
	gint dialog_width;
	gboolean auto_resize;
    };

    struct _GtkPaned {
	GtkContainer container;
	GtkWidget *child1;
	GtkWidget *child2;
	GdkWindow *handle;
	GdkGC *xor_gc;
	GdkCursorType cursor_type;
	GdkRectangle handle_pos;
	gint child1_size;
	gint last_allocation;
	gint min_position;
	gint max_position;
	guint position_set:1;
	guint in_drag:1;
	guint child1_shrink:1;
	guint child1_resize:1;
	guint child2_shrink:1;
	guint child2_resize:1;
	guint orientation:1;
	guint in_recursion:1;
	guint handle_prelit:1;
	GtkWidget *last_child1_focus;
	GtkWidget *last_child2_focus;
	GtkPanedPrivate *priv;
	gint drag_pos;
	gint original_position;
    };

    struct _GtkViewport {
	GtkBin bin;
	GtkShadowType shadow_type;
	GdkWindow *view_window;
	GdkWindow *bin_window;
	GtkAdjustment *hadjustment;
	GtkAdjustment *vadjustment;
    };

    struct _GtkScale {
	GtkRange range;
	gint digits;
	guint draw_value:1;
	guint value_pos:2;
    };

    struct _GtkListStore {
	GObject parent;
	gint stamp;
	gpointer seq;
	gpointer _gtk_reserved1;
	GList *sort_list;
	gint n_columns;
	gint sort_column_id;
	GtkSortType order;
	GType *column_headers;
	gint length;
	GtkTreeIterCompareFunc default_sort_func;
	gpointer default_sort_data;
	GtkDestroyNotify default_sort_destroy;
	guint columns_dirty:1;
    };

    struct _GtkRadioActionEntry {
	const gchar *name;
	const gchar *stock_id;
	const gchar *label;
	const gchar *accelerator;
	const gchar *tooltip;
	gint value;
    };

    struct _GtkEventBox {
	GtkBin bin;
    };

    struct _GtkToggleActionEntry {
	const gchar *name;
	const gchar *stock_id;
	const gchar *label;
	const gchar *accelerator;
	const gchar *tooltip;
	GCallback callback;
	gboolean is_active;
    };

    struct _GtkAccelLabel {
	GtkLabel label;
	guint gtk_reserved;
	guint accel_padding;
	GtkWidget *accel_widget;
	GClosure *accel_closure;
	GtkAccelGroup *accel_group;
	gchar *accel_string;
	guint16 accel_string_width;
    };

    struct _GtkImageMenuItem {
	GtkMenuItem menu_item;
	GtkWidget *image;
    };

    struct _GtkPlug {
	GtkWindow window;
	GdkWindow *socket_window;
	GtkWidget *modality_window;
	GtkWindowGroup *modality_group;
	GHashTable *grabbed_keys;
	guint same_app:1;
    };

    struct _GtkFileChooserButton {
	GtkHBox parent;
	GtkFileChooserButtonPrivate *priv;
    };

    struct _GtkStockItem {
	gchar *stock_id;
	gchar *label;
	GdkModifierType modifier;
	guint keyval;
	gchar *translation_domain;
    };

    struct _GtkToolbar {
	GtkContainer container;
	gint num_children;
	GList *children;
	GtkOrientation orientation;
	GtkToolbarStyle style;
	GtkIconSize icon_size;
	GtkTooltips *tooltips;
	gint button_maxw;
	gint button_maxh;
	guint style_set_connection;
	guint icon_size_connection;
	guint style_set:1;
	guint icon_size_set:1;
    };

    struct _GtkCellRendererToggle {
	GtkCellRenderer parent;
	guint active:1;
	guint activatable:1;
	guint radio:1;
    };

    struct _GtkActionEntry {
	const gchar *name;
	const gchar *stock_id;
	const gchar *label;
	const gchar *accelerator;
	const gchar *tooltip;
	GCallback callback;
    };

    struct _GtkCheckButton {
	GtkToggleButton toggle_button;
    };

    struct _GtkRadioButton {
	GtkCheckButton check_button;
	GSList *group;
    };

    struct _GtkAlignment {
	GtkBin bin;
	gfloat xalign;
	gfloat yalign;
	gfloat xscale;
	gfloat yscale;
    };

    struct _GtkContainerClass {
	GtkWidgetClass parent_class;
	void (*add) (GtkContainer *, GtkWidget *);
	void (*remove) (GtkContainer *, GtkWidget *);
	void (*check_resize) (GtkContainer *);
	void (*forall) (GtkContainer *, gboolean, GtkCallback, gpointer);
	void (*set_focus_child) (GtkContainer *, GtkWidget *);
	 GType(*child_type) (GtkContainer *);
	gchar *(*composite_name) (GtkContainer *, GtkWidget *);
	void (*set_child_property) (GtkContainer *, GtkWidget *, guint,
				    const GValue *, GParamSpec *);
	void (*get_child_property) (GtkContainer *, GtkWidget *, guint,
				    GValue *, GParamSpec *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFontButton {
	GtkButton button;
	GtkFontButtonPrivate *priv;
    };

    struct _GtkBorder {
	gint left;
	gint right;
	gint top;
	gint bottom;
    };

    struct _GtkMessageDialog {
	GtkDialog parent_instance;
	GtkWidget *image;
	GtkWidget *label;
    };

    struct _GtkRulerMetric {
	gchar *metric_name;
	gchar *abbrev;
	gdouble pixels_per_unit;
	gdouble ruler_scale[10];
	gint subdivide[5];
    };

    struct _GtkRuler {
	GtkWidget widget;
	GdkPixmap *backing_store;
	GdkGC *non_gr_exp_gc;
	GtkRulerMetric *metric;
	gint xsrc;
	gint ysrc;
	gint slider_size;
	gdouble lower;
	gdouble upper;
	gdouble position;
	gdouble max_size;
    };

    struct _GtkMenuToolButton {
	GtkToolButton parent;
	GtkMenuToolButtonPrivate *priv;
    };

    struct _GtkToggleToolButton {
	GtkToolButton parent;
	GtkToggleToolButtonPrivate *priv;
    };

    struct _GtkRadioToolButton {
	GtkToggleToolButton parent;
    };

    struct _GtkSizeGroup {
	GObject parent_instance;
	GSList *widgets;
	guint8 mode;
	guint have_width:1;
	guint have_height:1;
	GtkRequisition requisition;
    };

    struct _GtkIMContextSimple {
	GtkIMContext object;
	GSList *tables;
	guint compose_buffer[8];
	gunichar tentative_match;
	gint tentative_match_len;
	guint in_hex_sequence:1;
    };

    struct _GtkFontSelection {
	GtkVBox parent_instance;
	GtkWidget *font_entry;
	GtkWidget *family_list;
	GtkWidget *font_style_entry;
	GtkWidget *face_list;
	GtkWidget *size_entry;
	GtkWidget *size_list;
	GtkWidget *pixels_button;
	GtkWidget *points_button;
	GtkWidget *filter_button;
	GtkWidget *preview_entry;
	PangoFontFamily *family;
	PangoFontFace *face;
	gint size;
	GdkFont *font;
    };

    struct _GtkAspectFrame {
	GtkFrame frame;
	gfloat xalign;
	gfloat yalign;
	gfloat ratio;
	gboolean obey_child;
	GtkAllocation center_allocation;
    };

    struct _GtkIMMulticontext {
	GtkIMContext object;
	GtkIMContext *slave;
	GtkIMMulticontextPrivate *priv;
	const gchar *context_id;
    };

    struct _GtkFixed {
	GtkContainer container;
	GList *children;
    };

    struct _GtkInvisible {
	GtkWidget widget;
	gboolean has_user_ref_count;
	GdkScreen *screen;
    };

    struct _GtkAccessible {
	AtkObject parent;
	GtkWidget *widget;
    };

    struct _GtkArrow {
	GtkMisc misc;
	gint16 arrow_type;
	gint16 shadow_type;
    };

    struct _GtkCellRendererText {
	GtkCellRenderer parent;
	gchar *text;
	PangoFontDescription *font;
	gdouble font_scale;
	PangoColor foreground;
	PangoColor background;
	PangoAttrList *extra_attrs;
	PangoUnderline underline_style;
	gint rise;
	gint fixed_height_rows;
	guint strikethrough:1;
	guint editable:1;
	guint scale_set:1;
	guint foreground_set:1;
	guint background_set:1;
	guint underline_set:1;
	guint rise_set:1;
	guint strikethrough_set:1;
	guint editable_set:1;
	guint calc_fixed_height:1;
    };

    struct _GtkSettingsValue {
	gchar *origin;
	GValue value;
    };

    struct _GtkBinClass {
	GtkContainerClass parent_class;
    };

    struct _GtkWindowClass {
	GtkBinClass parent_class;
	void (*set_focus) (GtkWindow *, GtkWidget *);
	 gboolean(*frame_event) (GtkWindow *, GdkEvent *);
	void (*activate_focus) (GtkWindow *);
	void (*activate_default) (GtkWindow *);
	void (*move_focus) (GtkWindow *, GtkDirectionType);
	void (*keys_changed) (GtkWindow *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRangeClass {
	GtkWidgetClass parent_class;
	gchar *slider_detail;
	gchar *stepper_detail;
	void (*value_changed) (GtkRange *);
	void (*adjust_bounds) (GtkRange *, gdouble);
	void (*move_slider) (GtkRange *, GtkScrollType);
	void (*get_range_border) (GtkRange *, GtkBorder *);
	 gboolean(*change_value) (GtkRange *, GtkScrollType, gdouble);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkScaleClass {
	GtkRangeClass parent_class;
	gchar *(*format_value) (GtkScale *, gdouble);
	void (*draw_value) (GtkScale *);
	void (*get_layout_offsets) (GtkScale *, gint *, gint *);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkBoxClass {
	GtkContainerClass parent_class;
    };

    struct _GtkMiscClass {
	GtkWidgetClass parent_class;
    };

    struct _GtkHRuler {
	GtkRuler ruler;
    };

    struct _GtkHBoxClass {
	GtkBoxClass parent_class;
    };

    struct _GtkPanedClass {
	GtkContainerClass parent_class;
	 gboolean(*cycle_child_focus) (GtkPaned *, gboolean);
	 gboolean(*toggle_handle_focus) (GtkPaned *);
	 gboolean(*move_handle) (GtkPaned *, GtkScrollType);
	 gboolean(*cycle_handle_focus) (GtkPaned *, gboolean);
	 gboolean(*accept_position) (GtkPaned *);
	 gboolean(*cancel_position) (GtkPaned *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHPanedClass {
	GtkPanedClass parent_class;
    };

    struct _GtkSizeGroupClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkViewportClass {
	GtkBinClass parent_class;
	void (*set_scroll_adjustments) (GtkViewport *, GtkAdjustment *,
					GtkAdjustment *);
    };

    struct _GtkEditableClass {
	GTypeInterface base_iface;
	void (*insert_text) (GtkEditable *, const gchar *, gint, gint *);
	void (*delete_text) (GtkEditable *, gint, gint);
	void (*changed) (GtkEditable *);
	void (*do_insert_text) (GtkEditable *, const gchar *, gint,
				gint *);
	void (*do_delete_text) (GtkEditable *, gint, gint);
	gchar *(*get_chars) (GtkEditable *, gint, gint);
	void (*set_selection_bounds) (GtkEditable *, gint, gint);
	 gboolean(*get_selection_bounds) (GtkEditable *, gint *, gint *);
	void (*set_position) (GtkEditable *, gint);
	 gint(*get_position) (GtkEditable *);
    };

    struct _GtkDialogClass {
	GtkWindowClass parent_class;
	void (*response) (GtkDialog *, gint);
	void (*close) (GtkDialog *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererPixbuf {
	GtkCellRenderer parent;
	GdkPixbuf *pixbuf;
	GdkPixbuf *pixbuf_expander_open;
	GdkPixbuf *pixbuf_expander_closed;
    };

    struct _GtkTreeViewColumnClass {
	GtkObjectClass parent_class;
	void (*clicked) (GtkTreeViewColumn *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRulerClass {
	GtkWidgetClass parent_class;
	void (*draw_ticks) (GtkRuler *);
	void (*draw_pos) (GtkRuler *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHRulerClass {
	GtkRulerClass parent_class;
    };

    struct _GtkInvisibleClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVRulerClass {
	GtkRulerClass parent_class;
    };

    struct _GtkToolItemClass {
	GtkBinClass parent_class;
	 gboolean(*create_menu_proxy) (GtkToolItem *);
	void (*toolbar_reconfigured) (GtkToolItem *);
	 gboolean(*set_tooltip) (GtkToolItem *, GtkTooltips *,
				 const gchar *, const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkWindowGroupClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkWidgetAuxInfo {
	gint x;
	gint y;
	gint width;
	gint height;
	guint x_set:1;
	guint y_set:1;
    };

    struct _GtkItemClass {
	GtkBinClass parent_class;
	void (*select) (GtkItem *);
	void (*deselect) (GtkItem *);
	void (*toggle) (GtkItem *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuItemClass {
	GtkItemClass parent_class;
	guint hide_on_activate:1;
	void (*activate) (GtkMenuItem *);
	void (*activate_item) (GtkMenuItem *);
	void (*toggle_size_request) (GtkMenuItem *, gint *);
	void (*toggle_size_allocate) (GtkMenuItem *, gint);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*set_label) (void);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved2) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	const gchar *(*get_label) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCheckMenuItemClass {
	GtkMenuItemClass parent_class;
	void (*toggled) (GtkCheckMenuItem *);
	void (*draw_indicator) (GtkCheckMenuItem *, GdkRectangle *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRcProperty {
	GQuark type_name;
	GQuark property_name;
	gchar *origin;
	GValue value;
    };

    struct _GtkFontSelectionDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFileChooserDialog {
	GtkDialog parent_instance;
	GtkFileChooserDialogPrivate *priv;
    };

    struct _GtkActionClass {
	GObjectClass parent_class;
	void (*activate) (GtkAction *);
	GType menu_item_type;
	GType toolbar_item_type;
	GtkWidget *(*create_menu_item) (GtkAction *);
	GtkWidget *(*create_tool_item) (GtkAction *);
	void (*connect_proxy) (GtkAction *, GtkWidget *);
	void (*disconnect_proxy) (GtkAction *, GtkWidget *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	GtkWidget *(*create_menu) (GtkAction *);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToggleActionClass {
	GtkActionClass parent_class;
	void (*toggled) (GtkToggleAction *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVBoxClass {
	GtkBoxClass parent_class;
    };

    struct _GtkButtonBoxClass {
	GtkBoxClass parent_class;
    };

    struct _GtkHButtonBoxClass {
	GtkButtonBoxClass parent_class;
    };

    struct _GtkTreeStoreClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkBoxChild {
	GtkWidget *widget;
	guint16 padding;
	guint expand:1;
	guint fill:1;
	guint pack:1;
	guint is_secondary:1;
    };

    struct _GtkHButtonBox {
	GtkButtonBox button_box;
    };

    struct _GtkAccelGroupClass {
	GObjectClass parent_class;
	void (*accel_changed) (GtkAccelGroup *, guint, GdkModifierType,
			       GClosure *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparator {
	GtkWidget widget;
    };

    struct _GtkButtonClass {
	GtkBinClass parent_class;
	void (*pressed) (GtkButton *);
	void (*released) (GtkButton *);
	void (*clicked) (GtkButton *);
	void (*enter) (GtkButton *);
	void (*leave) (GtkButton *);
	void (*activate) (GtkButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIconFactoryClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeSelectionClass {
	GObjectClass parent_class;
	void (*changed) (GtkTreeSelection *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuShellClass {
	GtkContainerClass parent_class;
	guint submenu_placement:1;
	void (*deactivate) (GtkMenuShell *);
	void (*selection_done) (GtkMenuShell *);
	void (*move_current) (GtkMenuShell *, GtkMenuDirectionType);
	void (*activate_current) (GtkMenuShell *, gboolean);
	void (*cancel) (GtkMenuShell *);
	void (*select_item) (GtkMenuShell *, GtkWidget *);
	void (*insert) (GtkMenuShell *, GtkWidget *, gint);
	 gint(*get_popup_delay) (GtkMenuShell *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*move_selected) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkTreeDragSourceIface {
	GTypeInterface g_iface;
	 gboolean(*row_draggable) (GtkTreeDragSource *, GtkTreePath *);
	 gboolean(*drag_data_get) (GtkTreeDragSource *, GtkTreePath *,
				   GtkSelectionData *);
	 gboolean(*drag_data_delete) (GtkTreeDragSource *, GtkTreePath *);
    };

    struct _GtkLabelClass {
	GtkMiscClass parent_class;
	void (*move_cursor) (GtkLabel *, GtkMovementStep, gint, gboolean);
	void (*copy_clipboard) (GtkLabel *);
	void (*populate_popup) (GtkLabel *, GtkMenu *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*activate_link) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkScrollbar {
	GtkRange range;
    };

    struct _GtkWidgetShapeInfo {
	gint16 offset_x;
	gint16 offset_y;
	GdkBitmap *shape_mask;
    };

    struct _GtkActionGroupClass {
	GObjectClass parent_class;
	GtkAction *(*get_action) (GtkActionGroup *, const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSettingsClass {
	GObjectClass parent_class;
    };

    struct _GtkIMContextClass {
	GtkObjectClass parent_class;
	void (*preedit_start) (GtkIMContext *);
	void (*preedit_end) (GtkIMContext *);
	void (*preedit_changed) (GtkIMContext *);
	void (*commit) (GtkIMContext *, const gchar *);
	 gboolean(*retrieve_surrounding) (GtkIMContext *);
	 gboolean(*delete_surrounding) (GtkIMContext *, gint, gint);
	void (*set_client_window) (GtkIMContext *, GdkWindow *);
	void (*get_preedit_string) (GtkIMContext *, gchar * *,
				    PangoAttrList * *, gint *);
	 gboolean(*filter_keypress) (GtkIMContext *, GdkEventKey *);
	void (*focus_in) (GtkIMContext *);
	void (*focus_out) (GtkIMContext *);
	void (*reset) (GtkIMContext *);
	void (*set_cursor_location) (GtkIMContext *, GdkRectangle *);
	void (*set_use_preedit) (GtkIMContext *, gboolean);
	void (*set_surrounding) (GtkIMContext *, const gchar *, gint,
				 gint);
	 gboolean(*get_surrounding) (GtkIMContext *, gchar * *, gint *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
    };

    struct _GtkCellRendererClass {
	GtkObjectClass parent_class;
	void (*get_size) (GtkCellRenderer *, GtkWidget *, GdkRectangle *,
			  gint *, gint *, gint *, gint *);
	void (*render) (GtkCellRenderer *, GdkDrawable *, GtkWidget *,
			GdkRectangle *, GdkRectangle *, GdkRectangle *,
			GtkCellRendererState);
	 gboolean(*activate) (GtkCellRenderer *, GdkEvent *, GtkWidget *,
			      const gchar *, GdkRectangle *,
			      GdkRectangle *, GtkCellRendererState);
	GtkCellEditable *(*start_editing) (GtkCellRenderer *, GdkEvent *,
					   GtkWidget *, const gchar *,
					   GdkRectangle *, GdkRectangle *,
					   GtkCellRendererState);
	void (*editing_canceled) (GtkCellRenderer *);
	void (*editing_started) (GtkCellRenderer *, GtkCellEditable *,
				 const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
    };

    struct _GtkToolButtonClass {
	GtkToolItemClass parent_class;
	GType button_type;
	void (*clicked) (GtkToolButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuToolButtonClass {
	GtkToolButtonClass parent_class;
	void (*show_menu) (GtkMenuToolButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVSeparator {
	GtkSeparator separator;
    };

    struct _GtkDrawingAreaClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTargetPair {
	GdkAtom target;
	guint flags;
	guint info;
    };

    struct _GtkCellViewClass {
	GtkWidgetClass parent_class;
    };

    struct _GtkCellLayoutIface {
	GTypeInterface g_iface;
	void (*pack_start) (GtkCellLayout *, GtkCellRenderer *, gboolean);
	void (*pack_end) (GtkCellLayout *, GtkCellRenderer *, gboolean);
	void (*clear) (GtkCellLayout *);
	void (*add_attribute) (GtkCellLayout *, GtkCellRenderer *,
			       const gchar *, gint);
	void (*set_cell_data_func) (GtkCellLayout *, GtkCellRenderer *,
				    GtkCellLayoutDataFunc, gpointer,
				    GDestroyNotify);
	void (*clear_attributes) (GtkCellLayout *, GtkCellRenderer *);
	void (*reorder) (GtkCellLayout *, GtkCellRenderer *, gint);
    };

    struct _GtkFixedClass {
	GtkContainerClass parent_class;
    };

    struct _GtkHScaleClass {
	GtkScaleClass parent_class;
    };

    struct _GtkScrollbarClass {
	GtkRangeClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAccelLabelClass {
	GtkLabelClass parent_class;
	gchar *signal_quote1;
	gchar *signal_quote2;
	gchar *mod_name_shift;
	gchar *mod_name_control;
	gchar *mod_name_alt;
	gchar *mod_separator;
	gchar *accel_seperator;
	guint latin1_to_char:1;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextBufferClass {
	GObjectClass parent_class;
	void (*insert_text) (GtkTextBuffer *, GtkTextIter *, const gchar *,
			     gint);
	void (*insert_pixbuf) (GtkTextBuffer *, GtkTextIter *,
			       GdkPixbuf *);
	void (*insert_child_anchor) (GtkTextBuffer *, GtkTextIter *,
				     GtkTextChildAnchor *);
	void (*delete_range) (GtkTextBuffer *, GtkTextIter *,
			      GtkTextIter *);
	void (*changed) (GtkTextBuffer *);
	void (*modified_changed) (GtkTextBuffer *);
	void (*mark_set) (GtkTextBuffer *, const GtkTextIter *,
			  GtkTextMark *);
	void (*mark_deleted) (GtkTextBuffer *, GtkTextMark *);
	void (*apply_tag) (GtkTextBuffer *, GtkTextTag *,
			   const GtkTextIter *, const GtkTextIter *);
	void (*remove_tag) (GtkTextBuffer *, GtkTextTag *,
			    const GtkTextIter *, const GtkTextIter *);
	void (*begin_user_action) (GtkTextBuffer *);
	void (*end_user_action) (GtkTextBuffer *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*paste_done) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
    };

    struct _GtkVRuler {
	GtkRuler ruler;
    };

    struct _GtkSocketClass {
	GtkContainerClass parent_class;
	void (*plug_added) (GtkSocket *);
	 gboolean(*plug_removed) (GtkSocket *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIconThemeClass {
	GObjectClass parent_class;
	void (*changed) (GtkIconTheme *);
    };

    struct _GtkVPaned {
	GtkPaned paned;
    };

    struct _GtkTableChild {
	GtkWidget *widget;
	guint16 left_attach;
	guint16 right_attach;
	guint16 top_attach;
	guint16 bottom_attach;
	guint16 xpadding;
	guint16 ypadding;
	guint xexpand:1;
	guint yexpand:1;
	guint xshrink:1;
	guint yshrink:1;
	guint xfill:1;
	guint yfill:1;
    };

    struct _GtkArrowClass {
	GtkMiscClass parent_class;
    };

    struct _GtkHScrollbar {
	GtkScrollbar scrollbar;
    };

    struct _GtkFileChooserWidget {
	GtkVBox parent_instance;
	GtkFileChooserWidgetPrivate *priv;
    };

    struct _GtkPlugClass {
	GtkWindowClass parent_class;
	void (*embedded) (GtkPlug *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererPixbufClass {
	GtkCellRendererClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVButtonBoxClass {
	GtkButtonBoxClass parent_class;
    };

    struct _GtkTextChildAnchorClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererCombo {
	GtkCellRendererText parent;
	GtkTreeModel *model;
	gint text_column;
	gboolean has_entry;
	guint focus_out_id;
    };

    struct _GtkTreeModelIface {
	GTypeInterface g_iface;
	void (*row_changed) (GtkTreeModel *, GtkTreePath *, GtkTreeIter *);
	void (*row_inserted) (GtkTreeModel *, GtkTreePath *,
			      GtkTreeIter *);
	void (*row_has_child_toggled) (GtkTreeModel *, GtkTreePath *,
				       GtkTreeIter *);
	void (*row_deleted) (GtkTreeModel *, GtkTreePath *);
	void (*rows_reordered) (GtkTreeModel *, GtkTreePath *,
				GtkTreeIter *, gint *);
	 GtkTreeModelFlags(*get_flags) (GtkTreeModel *);
	 gint(*get_n_columns) (GtkTreeModel *);
	 GType(*get_column_type) (GtkTreeModel *, gint);
	 gboolean(*get_iter) (GtkTreeModel *, GtkTreeIter *,
			      GtkTreePath *);
	GtkTreePath *(*get_path) (GtkTreeModel *, GtkTreeIter *);
	void (*get_value) (GtkTreeModel *, GtkTreeIter *, gint, GValue *);
	 gboolean(*iter_next) (GtkTreeModel *, GtkTreeIter *);
	 gboolean(*iter_children) (GtkTreeModel *, GtkTreeIter *,
				   GtkTreeIter *);
	 gboolean(*iter_has_child) (GtkTreeModel *, GtkTreeIter *);
	 gint(*iter_n_children) (GtkTreeModel *, GtkTreeIter *);
	 gboolean(*iter_nth_child) (GtkTreeModel *, GtkTreeIter *,
				    GtkTreeIter *, gint);
	 gboolean(*iter_parent) (GtkTreeModel *, GtkTreeIter *,
				 GtkTreeIter *);
	void (*ref_node) (GtkTreeModel *, GtkTreeIter *);
	void (*unref_node) (GtkTreeModel *, GtkTreeIter *);
    };

    struct _GtkAccessibleClass {
	AtkObjectClass parent_class;
	void (*connect_widget_destroyed) (GtkAccessible *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererTextClass {
	GtkCellRendererClass parent_class;
	void (*edited) (GtkCellRendererText *, const gchar *,
			const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVScaleClass {
	GtkScaleClass parent_class;
    };

    struct _GtkCurveClass {
	GtkDrawingAreaClass parent_class;
	void (*curve_type_changed) (GtkCurve *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparatorToolItemClass {
	GtkToolItemClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStyleClass {
	GObjectClass parent_class;
	void (*realize) (GtkStyle *);
	void (*unrealize) (GtkStyle *);
	void (*copy) (GtkStyle *, GtkStyle *);
	GtkStyle *(*clone) (GtkStyle *);
	void (*init_from_rc) (GtkStyle *, GtkRcStyle *);
	void (*set_background) (GtkStyle *, GdkWindow *, GtkStateType);
	GdkPixbuf *(*render_icon) (GtkStyle *, const GtkIconSource *,
				   GtkTextDirection, GtkStateType,
				   GtkIconSize, GtkWidget *,
				   const gchar *);
	void (*draw_hline) (GtkStyle *, GdkWindow *, GtkStateType,
			    GdkRectangle *, GtkWidget *, const gchar *,
			    gint, gint, gint);
	void (*draw_vline) (GtkStyle *, GdkWindow *, GtkStateType,
			    GdkRectangle *, GtkWidget *, const gchar *,
			    gint, gint, gint);
	void (*draw_shadow) (GtkStyle *, GdkWindow *, GtkStateType,
			     GtkShadowType, GdkRectangle *, GtkWidget *,
			     const gchar *, gint, gint, gint, gint);
	void (*draw_polygon) (GtkStyle *, GdkWindow *, GtkStateType,
			      GtkShadowType, GdkRectangle *, GtkWidget *,
			      const gchar *, GdkPoint *, gint, gboolean);
	void (*draw_arrow) (GtkStyle *, GdkWindow *, GtkStateType,
			    GtkShadowType, GdkRectangle *, GtkWidget *,
			    const gchar *, GtkArrowType, gboolean, gint,
			    gint, gint, gint);
	void (*draw_diamond) (GtkStyle *, GdkWindow *, GtkStateType,
			      GtkShadowType, GdkRectangle *, GtkWidget *,
			      const gchar *, gint, gint, gint, gint);
	void (*draw_string) (GtkStyle *, GdkWindow *, GtkStateType,
			     GdkRectangle *, GtkWidget *, const gchar *,
			     gint, gint, const gchar *);
	void (*draw_box) (GtkStyle *, GdkWindow *, GtkStateType,
			  GtkShadowType, GdkRectangle *, GtkWidget *,
			  const gchar *, gint, gint, gint, gint);
	void (*draw_flat_box) (GtkStyle *, GdkWindow *, GtkStateType,
			       GtkShadowType, GdkRectangle *, GtkWidget *,
			       const gchar *, gint, gint, gint, gint);
	void (*draw_check) (GtkStyle *, GdkWindow *, GtkStateType,
			    GtkShadowType, GdkRectangle *, GtkWidget *,
			    const gchar *, gint, gint, gint, gint);
	void (*draw_option) (GtkStyle *, GdkWindow *, GtkStateType,
			     GtkShadowType, GdkRectangle *, GtkWidget *,
			     const gchar *, gint, gint, gint, gint);
	void (*draw_tab) (GtkStyle *, GdkWindow *, GtkStateType,
			  GtkShadowType, GdkRectangle *, GtkWidget *,
			  const gchar *, gint, gint, gint, gint);
	void (*draw_shadow_gap) (GtkStyle *, GdkWindow *, GtkStateType,
				 GtkShadowType, GdkRectangle *,
				 GtkWidget *, const gchar *, gint, gint,
				 gint, gint, GtkPositionType, gint, gint);
	void (*draw_box_gap) (GtkStyle *, GdkWindow *, GtkStateType,
			      GtkShadowType, GdkRectangle *, GtkWidget *,
			      const gchar *, gint, gint, gint, gint,
			      GtkPositionType, gint, gint);
	void (*draw_extension) (GtkStyle *, GdkWindow *, GtkStateType,
				GtkShadowType, GdkRectangle *, GtkWidget *,
				const gchar *, gint, gint, gint, gint,
				GtkPositionType);
	void (*draw_focus) (GtkStyle *, GdkWindow *, GtkStateType,
			    GdkRectangle *, GtkWidget *, const gchar *,
			    gint, gint, gint, gint);
	void (*draw_slider) (GtkStyle *, GdkWindow *, GtkStateType,
			     GtkShadowType, GdkRectangle *, GtkWidget *,
			     const gchar *, gint, gint, gint, gint,
			     GtkOrientation);
	void (*draw_handle) (GtkStyle *, GdkWindow *, GtkStateType,
			     GtkShadowType, GdkRectangle *, GtkWidget *,
			     const gchar *, gint, gint, gint, gint,
			     GtkOrientation);
	void (*draw_expander) (GtkStyle *, GdkWindow *, GtkStateType,
			       GdkRectangle *, GtkWidget *, const gchar *,
			       gint, gint, GtkExpanderStyle);
	void (*draw_layout) (GtkStyle *, GdkWindow *, GtkStateType,
			     gboolean, GdkRectangle *, GtkWidget *,
			     const gchar *, gint, gint, PangoLayout *);
	void (*draw_resize_grip) (GtkStyle *, GdkWindow *, GtkStateType,
				  GdkRectangle *, GtkWidget *,
				  const gchar *, GdkWindowEdge, gint, gint,
				  gint, gint);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*get_text_area_size) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
	void (*_gtk_reserved9) (void);
	void (*_gtk_reserved10) (void);
	void (*_gtk_reserved11) (void);
	void (*_gtk_reserved12) (void);
    };

    struct _GtkSeparatorMenuItemClass {
	GtkMenuItemClass parent_class;
    };

    struct _GtkIMMulticontextClass {
	GtkIMContextClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToggleToolButtonClass {
	GtkToolButtonClass parent_class;
	void (*toggled) (GtkToggleToolButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRadioToolButtonClass {
	GtkToggleToolButtonClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererProgressClass {
	GtkCellRendererClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVScrollbar {
	GtkScrollbar scrollbar;
    };

    struct _GtkVPanedClass {
	GtkPanedClass parent_class;
    };

    struct _GtkToggleButtonClass {
	GtkButtonClass parent_class;
	void (*toggled) (GtkToggleButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererToggleClass {
	GtkCellRendererClass parent_class;
	void (*toggled) (GtkCellRendererToggle *, const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVButtonBox {
	GtkButtonBox button_box;
    };

    struct _GtkTreeDragDestIface {
	GTypeInterface g_iface;
	 gboolean(*drag_data_received) (GtkTreeDragDest *, GtkTreePath *,
					GtkSelectionData *);
	 gboolean(*row_drop_possible) (GtkTreeDragDest *, GtkTreePath *,
				       GtkSelectionData *);
    };

    struct _GtkColorSelectionClass {
	GtkVBoxClass parent_class;
	void (*color_changed) (GtkColorSelection *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererProgress {
	GtkCellRenderer parent_instance;
	GtkCellRendererProgressPrivate *priv;
    };

    struct _GtkImageClass {
	GtkMiscClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMessageDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeSortableIface {
	GTypeInterface g_iface;
	void (*sort_column_changed) (GtkTreeSortable *);
	 gboolean(*get_sort_column_id) (GtkTreeSortable *, gint *,
					GtkSortType *);
	void (*set_sort_column_id) (GtkTreeSortable *, gint, GtkSortType);
	void (*set_sort_func) (GtkTreeSortable *, gint,
			       GtkTreeIterCompareFunc, gpointer,
			       GtkDestroyNotify);
	void (*set_default_sort_func) (GtkTreeSortable *,
				       GtkTreeIterCompareFunc, gpointer,
				       GtkDestroyNotify);
	 gboolean(*has_default_sort_func) (GtkTreeSortable *);
    };

    struct _GtkCalendarClass {
	GtkWidgetClass parent_class;
	void (*month_changed) (GtkCalendar *);
	void (*day_selected) (GtkCalendar *);
	void (*day_selected_double_click) (GtkCalendar *);
	void (*prev_month) (GtkCalendar *);
	void (*next_month) (GtkCalendar *);
	void (*prev_year) (GtkCalendar *);
	void (*next_year) (GtkCalendar *);
    };

    struct _GtkEntryClass {
	GtkWidgetClass parent_class;
	void (*populate_popup) (GtkEntry *, GtkMenu *);
	void (*activate) (GtkEntry *);
	void (*move_cursor) (GtkEntry *, GtkMovementStep, gint, gboolean);
	void (*insert_at_cursor) (GtkEntry *, const gchar *);
	void (*delete_from_cursor) (GtkEntry *, GtkDeleteType, gint);
	void (*backspace) (GtkEntry *);
	void (*cut_clipboard) (GtkEntry *);
	void (*copy_clipboard) (GtkEntry *);
	void (*paste_clipboard) (GtkEntry *);
	void (*toggle_overwrite) (GtkEntry *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*get_text_area_size) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkSpinButtonClass {
	GtkEntryClass parent_class;
	 gint(*input) (GtkSpinButton *, gdouble *);
	 gint(*output) (GtkSpinButton *);
	void (*value_changed) (GtkSpinButton *);
	void (*change_value) (GtkSpinButton *, GtkScrollType);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*cursor_on_match) (GtkSpinButton *);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkInputDialog {
	GtkDialog dialog;
	GtkWidget *axis_list;
	GtkWidget *axis_listbox;
	GtkWidget *mode_optionmenu;
	GtkWidget *close_button;
	GtkWidget *save_button;
	GtkWidget *axis_items[7];
	GdkDevice *current_device;
	GtkWidget *keys_list;
	GtkWidget *keys_listbox;
    };

    struct _GtkInputDialogClass {
	GtkDialogClass parent_class;
	void (*enable_device) (GtkInputDialog *, GdkDevice *);
	void (*disable_device) (GtkInputDialog *, GdkDevice *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkEntryCompletionClass {
	GObjectClass parent_class;
	 gboolean(*match_selected) (GtkEntryCompletion *, GtkTreeModel *,
				    GtkTreeIter *);
	void (*action_activated) (GtkEntryCompletion *, gint);
	 gboolean(*insert_prefix) (GtkEntryCompletion *, const gchar *);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved0) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*cursor_on_match) (GtkEntryCompletion *, GtkTreeModel *,
				     GtkTreeIter *);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
    };

    struct _GtkAlignmentClass {
	GtkBinClass parent_class;
    };

    struct _GtkTreeModelFilterClass {
	GObjectClass parent_class;
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkRcStyleClass {
	GObjectClass parent_class;
	GtkRcStyle *(*create_rc_style) (GtkRcStyle *);
	 guint(*parse) (GtkRcStyle *, GtkSettings *, GScanner *);
	void (*merge) (GtkRcStyle *, GtkRcStyle *);
	GtkStyle *(*create_style) (GtkRcStyle *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkUIManagerClass {
	GObjectClass parent_class;
	void (*add_widget) (GtkUIManager *, GtkWidget *);
	void (*actions_changed) (GtkUIManager *);
	void (*connect_proxy) (GtkUIManager *, GtkAction *, GtkWidget *);
	void (*disconnect_proxy) (GtkUIManager *, GtkAction *,
				  GtkWidget *);
	void (*pre_activate) (GtkUIManager *, GtkAction *);
	void (*post_activate) (GtkUIManager *, GtkAction *);
	GtkWidget *(*get_widget) (GtkUIManager *, const gchar *);
	GtkAction *(*get_action) (GtkUIManager *, const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
    };

    struct _GtkSeparatorClass {
	GtkWidgetClass parent_class;
    };

    struct _GtkVSeparatorClass {
	GtkSeparatorClass parent_class;
    };

    struct _GtkCheckButtonClass {
	GtkToggleButtonClass parent_class;
	void (*draw_indicator) (GtkCheckButton *, GdkRectangle *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRadioMenuItemClass {
	GtkCheckMenuItemClass parent_class;
	void (*group_changed) (GtkRadioMenuItem *);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextViewClass {
	GtkContainerClass parent_class;
	void (*set_scroll_adjustments) (GtkTextView *, GtkAdjustment *,
					GtkAdjustment *);
	void (*populate_popup) (GtkTextView *, GtkMenu *);
	void (*move_cursor) (GtkTextView *, GtkMovementStep, gint,
			     gboolean);
	void (*page_horizontally) (GtkTextView *, gint, gboolean);
	void (*set_anchor) (GtkTextView *);
	void (*insert_at_cursor) (GtkTextView *, const gchar *);
	void (*delete_from_cursor) (GtkTextView *, GtkDeleteType, gint);
	void (*backspace) (GtkTextView *);
	void (*cut_clipboard) (GtkTextView *);
	void (*copy_clipboard) (GtkTextView *);
	void (*paste_clipboard) (GtkTextView *);
	void (*toggle_overwrite) (GtkTextView *);
	void (*move_focus) (GtkTextView *, GtkDirectionType);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };

    struct _GtkTreeModelSortClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellEditableIface {
	GTypeInterface g_iface;
	void (*editing_done) (GtkCellEditable *);
	void (*remove_widget) (GtkCellEditable *);
	void (*start_editing) (GtkCellEditable *, GdkEvent *);
    };

    struct _GtkToolbarClass {
	GtkContainerClass parent_class;
	void (*orientation_changed) (GtkToolbar *, GtkOrientation);
	void (*style_changed) (GtkToolbar *, GtkToolbarStyle);
	 gboolean(*popup_context_menu) (GtkToolbar *, gint, gint, gint);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkHandleBoxClass {
	GtkBinClass parent_class;
	void (*child_attached) (GtkHandleBox *, GtkWidget *);
	void (*child_detached) (GtkHandleBox *, GtkWidget *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHSeparator {
	GtkSeparator separator;
    };

    struct _GtkTextTagTableClass {
	GObjectClass parent_class;
	void (*tag_changed) (GtkTextTagTable *, GtkTextTag *, gboolean);
	void (*tag_added) (GtkTextTagTable *, GtkTextTag *);
	void (*tag_removed) (GtkTextTagTable *, GtkTextTag *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkComboBoxClass {
	GtkBinClass parent_class;
	void (*changed) (GtkComboBox *);
	gchar *(*get_active_text) (GtkComboBox *);
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
    };

    struct _GtkComboBoxEntryClass {
	GtkComboBoxClass parent_class;
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkFontSelectionClass {
	GtkVBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFrameClass {
	GtkBinClass parent_class;
	void (*compute_child_allocation) (GtkFrame *, GtkAllocation *);
    };

    struct _GtkHScrollbarClass {
	GtkScrollbarClass parent_class;
    };

    struct _GtkFileSelectionClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkScrolledWindowClass {
	GtkBinClass parent_class;
	gint scrollbar_spacing;
	void (*scroll_child) (GtkScrolledWindow *, GtkScrollType,
			      gboolean);
	void (*move_focus_out) (GtkScrolledWindow *, GtkDirectionType);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextMarkClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVScale {
	GtkScale scale;
    };

    struct _GtkFixedChild {
	GtkWidget *widget;
	gint x;
	gint y;
    };

    struct _GtkLayoutClass {
	GtkContainerClass parent_class;
	void (*set_scroll_adjustments) (GtkLayout *, GtkAdjustment *,
					GtkAdjustment *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkEventBoxClass {
	GtkBinClass parent_class;
    };

    struct _GtkIMContextSimpleClass {
	GtkIMContextClass parent_class;
    };

    struct _GtkExpanderClass {
	GtkBinClass parent_class;
	void (*activate) (GtkExpander *);
    };

    struct _GtkProgressClass {
	GtkWidgetClass parent_class;
	void (*paint) (GtkProgress *);
	void (*update) (GtkProgress *);
	void (*act_mode_enter) (GtkProgress *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFileChooserDialogClass {
	GtkDialogClass parent_class;
    };

    struct _GtkVScrollbarClass {
	GtkScrollbarClass parent_class;
    };

    struct _GtkTableClass {
	GtkContainerClass parent_class;
    };

    struct _GtkFontButtonClass {
	GtkButtonClass parent_class;
	void (*font_set) (GtkFontButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHSeparatorClass {
	GtkSeparatorClass parent_class;
    };

    struct _GtkColorSelectionDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkColorButtonClass {
	GtkButtonClass parent_class;
	void (*color_set) (GtkColorButton *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuBar {
	GtkMenuShell menu_shell;
    };

    struct _GtkMenuBarClass {
	GtkMenuShellClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkColorSelectionDialog {
	GtkDialog parent_instance;
	GtkWidget *colorsel;
	GtkWidget *ok_button;
	GtkWidget *cancel_button;
	GtkWidget *help_button;
    };

    struct _GtkStatusbarClass {
	GtkHBoxClass parent_class;
#if __LSB_VERSION__ < 40
	GMemChunk *messages_memchunk;
#endif				/* __LSB_VERSION__ < 40 */
#if __LSB_VERSION__ >= 40
	gpointer reserved;
#endif				/* __LSB_VERSION__ >= 40 */
	void (*text_pushed) (GtkStatusbar *, guint, const gchar *);
	void (*text_popped) (GtkStatusbar *, guint, const gchar *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparatorMenuItem {
	GtkMenuItem menu_item;
    };

    struct _GtkAboutDialogClass {
	GtkDialogClass parent_class;
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*activate_link) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkListStoreClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFileChooserButtonClass {
	GtkHBoxClass parent_class;
#if __LSB_VERSION__ < 50
	void *__gtk_reserved1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*file_set) (GtkFileChooserButton * fc);
#endif				/* __LSB_VERSION__ >= 50 */
	void *__gtk_reserved2;
	void *__gtk_reserved3;
	void *__gtk_reserved4;
	void *__gtk_reserved5;
	void *__gtk_reserved6;
	void *__gtk_reserved7;
	void *__gtk_reserved8;
    };

    struct _GtkMenuClass {
	GtkMenuShellClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHScale {
	GtkScale scale;
    };

    struct _GtkGammaCurveClass {
	GtkVBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererComboClass {
	GtkCellRendererTextClass parent;
    };

    struct _GtkTearoffMenuItem {
	GtkMenuItem menu_item;
	guint torn_off:1;
    };

    struct _GtkNotebookClass {
	GtkContainerClass parent_class;
	void (*switch_page) (GtkNotebook *, GtkNotebookPage *, guint);
	 gboolean(*select_page) (GtkNotebook *, gboolean);
	 gboolean(*focus_tab) (GtkNotebook *, GtkNotebookTab);
	void (*change_current_page) (GtkNotebook *, gint);
	void (*move_focus_out) (GtkNotebook *, GtkDirectionType);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*reorder_tab) (void);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved2) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gint(*insert_page) (void);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved3) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	GtkNotebook *(*create_window) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved4) (void);
    };

    struct _GtkImageMenuItemClass {
	GtkMenuItemClass parent_class;
    };

    struct _GtkTooltipsClass {
	GtkObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeViewClass {
	GtkContainerClass parent_class;
	void (*set_scroll_adjustments) (GtkTreeView *, GtkAdjustment *,
					GtkAdjustment *);
	void (*row_activated) (GtkTreeView *, GtkTreePath *,
			       GtkTreeViewColumn *);
	 gboolean(*test_expand_row) (GtkTreeView *, GtkTreeIter *,
				     GtkTreePath *);
	 gboolean(*test_collapse_row) (GtkTreeView *, GtkTreeIter *,
				       GtkTreePath *);
	void (*row_expanded) (GtkTreeView *, GtkTreeIter *, GtkTreePath *);
	void (*row_collapsed) (GtkTreeView *, GtkTreeIter *,
			       GtkTreePath *);
	void (*columns_changed) (GtkTreeView *);
	void (*cursor_changed) (GtkTreeView *);
	 gboolean(*move_cursor) (GtkTreeView *, GtkMovementStep, gint);
	 gboolean(*select_all) (GtkTreeView *);
	 gboolean(*unselect_all) (GtkTreeView *);
	 gboolean(*select_cursor_row) (GtkTreeView *, gboolean);
	 gboolean(*toggle_cursor_row) (GtkTreeView *);
	 gboolean(*expand_collapse_cursor_row) (GtkTreeView *, gboolean,
						gboolean, gboolean);
	 gboolean(*select_cursor_parent) (GtkTreeView *);
	 gboolean(*start_interactive_search) (GtkTreeView *);
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFileChooserWidgetClass {
	GtkVBoxClass parent_class;
    };

    struct _GtkTearoffMenuItemClass {
	GtkMenuItemClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRadioButtonClass {
	GtkCheckButtonClass parent_class;
	void (*group_changed) (GtkRadioButton *);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAdjustmentClass {
	GtkObjectClass parent_class;
	void (*changed) (GtkAdjustment *);
	void (*value_changed) (GtkAdjustment *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkHPaned {
	GtkPaned paned;
    };

    struct _GtkRadioActionClass {
	GtkToggleActionClass parent_class;
	void (*changed) (GtkRadioAction *, GtkRadioAction *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextTagClass {
	GObjectClass parent_class;
	 gboolean(*event) (GtkTextTag *, GObject *, GdkEvent *,
			   const GtkTextIter *);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIconViewClass {
	GtkContainerClass parent_class;
	void (*set_scroll_adjustments) (GtkIconView *, GtkAdjustment *,
					GtkAdjustment *);
	void (*item_activated) (GtkIconView *, GtkTreePath *);
	void (*selection_changed) (GtkIconView *);
	void (*select_all) (GtkIconView *);
	void (*unselect_all) (GtkIconView *);
	void (*select_cursor_item) (GtkIconView *);
	void (*toggle_cursor_item) (GtkIconView *);
	 gboolean(*move_cursor) (GtkIconView *, GtkMovementStep, gint);
	 gboolean(*activate_cursor_item) (GtkIconView *);
    };

    struct _GtkProgressBarClass {
	GtkProgressClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAspectFrameClass {
	GtkFrameClass parent_class;
    };

    struct _GtkGammaCurve {
	GtkVBox vbox;
	GtkWidget *table;
	GtkWidget *curve;
	GtkWidget *button[5];
	gfloat gamma;
	GtkWidget *gamma_dialog;
	GtkWidget *gamma_text;
    };

#if __LSB_VERSION__ >= 41
    struct _GtkPrintOperationClass {
	GObjectClass parent_class;
	void (*done) (void);
	void (*begin_print) (void);
	 gboolean(*paginate) (void);
	void (*request_page_setup) (void);
	void (*draw_page) (void);
	void (*end_print) (void);
	void (*status_changed) (void);
	GtkWidget *(*create_custom_widget) (void);
	void (*custom_widget_apply) (void);
	 gboolean(*preview) (void);
#if __LSB_VERSION__ < 50
	void (*_gtk_reserved1) (void);
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*update_custom_widget) (void);
#endif				/* __LSB_VERSION__ >= 50 */
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };

    struct _GtkPrintOperation {
	GObject parent_instance;
	GtkPrintOperationPrivate *priv;
    };

    struct _GtkPageRange {
	gint start;
	gint end;
    };

    struct _GtkLinkButton {
	GtkButton parent_instance;
	GtkLinkButtonPrivate *priv;
    };

    struct _GtkLinkButtonClass {
	GtkButtonClass parent_class;
	void (*_gtk_padding1) (void);
	void (*_gtk_padding2) (void);
	void (*_gtk_padding3) (void);
	void (*_gtk_padding4) (void);
    };

    struct _GtkAssistant {
	GtkWindow parent;
	GtkWidget *cancel;
	GtkWidget *forward;
	GtkWidget *back;
	GtkWidget *apply;
	GtkWidget *close;
	GtkWidget *last;
	GtkAssistantPrivate *priv;
    };

    struct _GtkAssistantClass {
	GtkWindowClass parent_class;
	void (*prepare) (void);
	void (*apply) (void);
	void (*close) (void);
	void (*cancel) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
    };

    struct _GtkRecentChooserIface {
	GTypeInterface base_iface;
	 gboolean(*set_current_uri) (void);
	gchar *(*get_current_uri) (void);
	 gboolean(*select_uri) (void);
	void (*unselect_uri) (void);
	void (*select_all) (void);
	void (*unselect_all) (void);
	GList *(*get_items) (void);
	GtkRecentManager *(*get_recent_manager) (void);
	void (*add_filter) (void);
	void (*remove_filter) (void);
	GSList *(*list_filters) (void);
	void (*set_sort_func) (void);
	void (*item_activated) (void);
	void (*selection_changed) (void);
    };

    struct _GtkRecentChooserDialog {
	GtkDialog parent_instance;
	GtkRecentChooserDialogPrivate *priv;
    };

    struct _GtkRecentChooserDialogClass {
	GtkDialogClass parent_class;
    };

    struct _GtkRecentChooserWidget {
	GtkVBox parent_instance;
	GtkRecentChooserWidgetPrivate *priv;
    };

    struct _GtkRecentChooserWidgetClass {
	GtkVBoxClass parent_class;
    };

    struct _GtkRecentChooserMenu {
	GtkMenu parent_instance;
	GtkRecentChooserMenuPrivate *priv;
    };

    struct _GtkRecentChooserMenuClass {
	GtkMenuClass parent_class;
	void (*gtk_recent1) (void);
	void (*gtk_recent2) (void);
	void (*gtk_recent3) (void);
	void (*gtk_recent4) (void);
    };

    struct _GtkCellRendererSpin {
	GtkCellRendererText parent;
    };

    struct _GtkCellRendererSpinClass {
	GtkCellRendererTextClass parent;
    };

    struct _GtkCellRendererAccel {
	GtkCellRendererText parent;
	guint accel_key;
	GdkModifierType accel_mods;
	guint keycode;
	GtkCellRendererAccelMode accel_mode;
	GtkWidget *edit_widget;
	GtkWidget *grab_widget;
	GtkWidget *sizing_label;
    };

    struct _GtkCellRendererAccelClass {
	GtkCellRendererTextClass parent_class;
	void (*accel_edited) (void);
	void (*accel_cleared) (void);
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

#endif				/* __LSB_VERSION__ >= 4.1 */


/* Function prototypes */

    extern const gchar *const *gtk_about_dialog_get_artists(GtkAboutDialog
							    * about);
    extern const gchar *const *gtk_about_dialog_get_authors(GtkAboutDialog
							    * about);
    extern const gchar *gtk_about_dialog_get_comments(GtkAboutDialog *
						      about);
    extern const gchar *gtk_about_dialog_get_copyright(GtkAboutDialog *
						       about);
    extern const gchar *const
	*gtk_about_dialog_get_documenters(GtkAboutDialog * about);
    extern const gchar *gtk_about_dialog_get_license(GtkAboutDialog *
						     about);
    extern GdkPixbuf *gtk_about_dialog_get_logo(GtkAboutDialog * about);
    extern const gchar *gtk_about_dialog_get_logo_icon_name(GtkAboutDialog
							    * about);
    extern const gchar *gtk_about_dialog_get_name(GtkAboutDialog * about);
    extern const gchar
	*gtk_about_dialog_get_translator_credits(GtkAboutDialog * about);
    extern GType gtk_about_dialog_get_type(void);
    extern const gchar *gtk_about_dialog_get_version(GtkAboutDialog *
						     about);
    extern const gchar *gtk_about_dialog_get_website(GtkAboutDialog *
						     about);
    extern const gchar *gtk_about_dialog_get_website_label(GtkAboutDialog *
							   about);
    extern GtkWidget *gtk_about_dialog_new(void);
    extern void gtk_about_dialog_set_artists(GtkAboutDialog * about,
					     const gchar * *artists);
    extern void gtk_about_dialog_set_authors(GtkAboutDialog * about,
					     const gchar * *authors);
    extern void gtk_about_dialog_set_comments(GtkAboutDialog * about,
					      const gchar * comments);
    extern void gtk_about_dialog_set_copyright(GtkAboutDialog * about,
					       const gchar * copyright);
    extern void gtk_about_dialog_set_documenters(GtkAboutDialog * about,
						 const gchar *
						 *documenters);
    extern GtkAboutDialogActivateLinkFunc
	gtk_about_dialog_set_email_hook(GtkAboutDialogActivateLinkFunc
					func, gpointer data,
					GDestroyNotify destroy);
    extern void gtk_about_dialog_set_license(GtkAboutDialog * about,
					     const gchar * license);
    extern void gtk_about_dialog_set_logo(GtkAboutDialog * about,
					  GdkPixbuf * logo);
    extern void gtk_about_dialog_set_logo_icon_name(GtkAboutDialog * about,
						    const gchar *
						    icon_name);
    extern void gtk_about_dialog_set_name(GtkAboutDialog * about,
					  const gchar * name);
    extern void gtk_about_dialog_set_translator_credits(GtkAboutDialog *
							about,
							const gchar *
							translator_credits);
    extern GtkAboutDialogActivateLinkFunc
	gtk_about_dialog_set_url_hook(GtkAboutDialogActivateLinkFunc func,
				      gpointer data,
				      GDestroyNotify destroy);
    extern void gtk_about_dialog_set_version(GtkAboutDialog * about,
					     const gchar * version);
    extern void gtk_about_dialog_set_website(GtkAboutDialog * about,
					     const gchar * website);
    extern void gtk_about_dialog_set_website_label(GtkAboutDialog * about,
						   const gchar *
						   website_label);
    extern GType gtk_accel_flags_get_type(void);
    extern gboolean gtk_accel_group_activate(GtkAccelGroup * accel_group,
					     GQuark accel_quark,
					     GObject * acceleratable,
					     guint accel_key,
					     GdkModifierType accel_mods);
    extern void gtk_accel_group_connect(GtkAccelGroup * accel_group,
					guint accel_key,
					GdkModifierType accel_mods,
					GtkAccelFlags accel_flags,
					GClosure * closure);
    extern void gtk_accel_group_connect_by_path(GtkAccelGroup *
						accel_group,
						const gchar * accel_path,
						GClosure * closure);
    extern gboolean gtk_accel_group_disconnect(GtkAccelGroup * accel_group,
					       GClosure * closure);
    extern gboolean gtk_accel_group_disconnect_key(GtkAccelGroup *
						   accel_group,
						   guint accel_key,
						   GdkModifierType
						   accel_mods);
    extern GtkAccelKey *gtk_accel_group_find(GtkAccelGroup * accel_group,
					     GtkAccelGroupFindFunc
					     find_func, gpointer data);
    extern GtkAccelGroup *gtk_accel_group_from_accel_closure(GClosure *
							     closure);
    extern GType gtk_accel_group_get_type(void);
    extern void gtk_accel_group_lock(GtkAccelGroup * accel_group);
    extern GtkAccelGroup *gtk_accel_group_new(void);
    extern GtkAccelGroupEntry *gtk_accel_group_query(GtkAccelGroup *
						     accel_group,
						     guint accel_key,
						     GdkModifierType
						     accel_mods,
						     guint * n_entries);
    extern void gtk_accel_group_unlock(GtkAccelGroup * accel_group);
    extern gboolean gtk_accel_groups_activate(GObject * object,
					      guint accel_key,
					      GdkModifierType accel_mods);
    extern GSList *gtk_accel_groups_from_object(GObject * object);
    extern GtkWidget *gtk_accel_label_get_accel_widget(GtkAccelLabel *
						       accel_label);
    extern guint gtk_accel_label_get_accel_width(GtkAccelLabel *
						 accel_label);
    extern GType gtk_accel_label_get_type(void);
    extern GtkWidget *gtk_accel_label_new(const gchar * string);
    extern gboolean gtk_accel_label_refetch(GtkAccelLabel * accel_label);
    extern void gtk_accel_label_set_accel_closure(GtkAccelLabel *
						  accel_label,
						  GClosure *
						  accel_closure);
    extern void gtk_accel_label_set_accel_widget(GtkAccelLabel *
						 accel_label,
						 GtkWidget * accel_widget);
    extern void gtk_accel_map_add_entry(const gchar * accel_path,
					guint accel_key,
					GdkModifierType accel_mods);
    extern void gtk_accel_map_add_filter(const gchar * filter_pattern);
    extern gboolean gtk_accel_map_change_entry(const gchar * accel_path,
					       guint accel_key,
					       GdkModifierType accel_mods,
					       gboolean replace);
    extern void gtk_accel_map_foreach(gpointer data,
				      GtkAccelMapForeach foreach_func);
    extern void gtk_accel_map_foreach_unfiltered(gpointer data,
						 GtkAccelMapForeach
						 foreach_func);
    extern GtkAccelMap *gtk_accel_map_get(void);
    extern GType gtk_accel_map_get_type(void);
    extern void gtk_accel_map_load(const gchar * file_name);
    extern void gtk_accel_map_load_fd(gint fd);
    extern void gtk_accel_map_load_scanner(GScanner * scanner);
    extern void gtk_accel_map_lock_path(const gchar * accel_path);
    extern gboolean gtk_accel_map_lookup_entry(const gchar * accel_path,
					       GtkAccelKey * key);
    extern void gtk_accel_map_save(const gchar * file_name);
    extern void gtk_accel_map_save_fd(gint fd);
    extern void gtk_accel_map_unlock_path(const gchar * accel_path);
    extern guint gtk_accelerator_get_default_mod_mask(void);
    extern gchar *gtk_accelerator_get_label(guint accelerator_key,
					    GdkModifierType
					    accelerator_mods);
    extern gchar *gtk_accelerator_name(guint accelerator_key,
				       GdkModifierType accelerator_mods);
    extern void gtk_accelerator_parse(const gchar * accelerator,
				      guint * accelerator_key,
				      GdkModifierType * accelerator_mods);
    extern void gtk_accelerator_set_default_mod_mask(GdkModifierType
						     default_mod_mask);
    extern gboolean gtk_accelerator_valid(guint keyval,
					  GdkModifierType modifiers);
    extern void gtk_accessible_connect_widget_destroyed(GtkAccessible *
							accessible);
    extern GType gtk_accessible_get_type(void);
    extern void gtk_action_activate(GtkAction * action);
    extern void gtk_action_block_activate_from(GtkAction * action,
					       GtkWidget * proxy);
    extern void gtk_action_connect_accelerator(GtkAction * action);
    extern void gtk_action_connect_proxy(GtkAction * action,
					 GtkWidget * proxy);
    extern GtkWidget *gtk_action_create_icon(GtkAction * action,
					     GtkIconSize icon_size);
    extern GtkWidget *gtk_action_create_menu_item(GtkAction * action);
    extern GtkWidget *gtk_action_create_tool_item(GtkAction * action);
    extern void gtk_action_disconnect_accelerator(GtkAction * action);
    extern void gtk_action_disconnect_proxy(GtkAction * action,
					    GtkWidget * proxy);
    extern const gchar *gtk_action_get_accel_path(GtkAction * action);
    extern const gchar *gtk_action_get_name(GtkAction * action);
    extern GSList *gtk_action_get_proxies(GtkAction * action);
    extern gboolean gtk_action_get_sensitive(GtkAction * action);
    extern GType gtk_action_get_type(void);
    extern gboolean gtk_action_get_visible(GtkAction * action);
    extern void gtk_action_group_add_action(GtkActionGroup * action_group,
					    GtkAction * action);
    extern void gtk_action_group_add_action_with_accel(GtkActionGroup *
						       action_group,
						       GtkAction * action,
						       const gchar *
						       accelerator);
    extern void gtk_action_group_add_actions(GtkActionGroup * action_group,
					     const GtkActionEntry *
					     entries, guint n_entries,
					     gpointer user_data);
    extern void gtk_action_group_add_actions_full(GtkActionGroup *
						  action_group,
						  const GtkActionEntry *
						  entries, guint n_entries,
						  gpointer user_data,
						  GDestroyNotify destroy);
    extern void gtk_action_group_add_radio_actions(GtkActionGroup *
						   action_group,
						   const
						   GtkRadioActionEntry *
						   entries,
						   guint n_entries,
						   gint value,
						   GCallback on_change,
						   gpointer user_data);
    extern void gtk_action_group_add_radio_actions_full(GtkActionGroup *
							action_group,
							const
							GtkRadioActionEntry
							* entries,
							guint n_entries,
							gint value,
							GCallback
							on_change,
							gpointer user_data,
							GDestroyNotify
							destroy);
    extern void gtk_action_group_add_toggle_actions(GtkActionGroup *
						    action_group,
						    const
						    GtkToggleActionEntry *
						    entries,
						    guint n_entries,
						    gpointer user_data);
    extern void gtk_action_group_add_toggle_actions_full(GtkActionGroup *
							 action_group,
							 const
							 GtkToggleActionEntry
							 * entries,
							 guint n_entries,
							 gpointer
							 user_data,
							 GDestroyNotify
							 destroy);
    extern GtkAction *gtk_action_group_get_action(GtkActionGroup *
						  action_group,
						  const gchar *
						  action_name);
    extern const gchar *gtk_action_group_get_name(GtkActionGroup *
						  action_group);
    extern gboolean gtk_action_group_get_sensitive(GtkActionGroup *
						   action_group);
    extern GType gtk_action_group_get_type(void);
    extern gboolean gtk_action_group_get_visible(GtkActionGroup *
						 action_group);
    extern GList *gtk_action_group_list_actions(GtkActionGroup *
						action_group);
    extern GtkActionGroup *gtk_action_group_new(const gchar * name);
    extern void gtk_action_group_remove_action(GtkActionGroup *
					       action_group,
					       GtkAction * action);
    extern void gtk_action_group_set_sensitive(GtkActionGroup *
					       action_group,
					       gboolean sensitive);
    extern void gtk_action_group_set_translate_func(GtkActionGroup *
						    action_group,
						    GtkTranslateFunc func,
						    gpointer data,
						    GtkDestroyNotify
						    notify);
    extern void gtk_action_group_set_translation_domain(GtkActionGroup *
							action_group,
							const gchar *
							domain);
    extern void gtk_action_group_set_visible(GtkActionGroup * action_group,
					     gboolean visible);
    extern const gchar *gtk_action_group_translate_string(GtkActionGroup *
							  action_group,
							  const gchar *
							  string);
    extern gboolean gtk_action_is_sensitive(GtkAction * action);
    extern gboolean gtk_action_is_visible(GtkAction * action);
    extern GtkAction *gtk_action_new(const gchar * name,
				     const gchar * label,
				     const gchar * tooltip,
				     const gchar * stock_id);
    extern void gtk_action_set_accel_group(GtkAction * action,
					   GtkAccelGroup * accel_group);
    extern void gtk_action_set_accel_path(GtkAction * action,
					  const gchar * accel_path);
    extern void gtk_action_set_sensitive(GtkAction * action,
					 gboolean sensitive);
    extern void gtk_action_set_visible(GtkAction * action,
				       gboolean visible);
    extern void gtk_action_unblock_activate_from(GtkAction * action,
						 GtkWidget * proxy);
    extern void gtk_adjustment_changed(GtkAdjustment * adjustment);
    extern void gtk_adjustment_clamp_page(GtkAdjustment * adjustment,
					  gdouble lower, gdouble upper);
    extern GType gtk_adjustment_get_type(void);
    extern gdouble gtk_adjustment_get_value(GtkAdjustment * adjustment);
    extern GtkObject *gtk_adjustment_new(gdouble value, gdouble lower,
					 gdouble upper,
					 gdouble step_increment,
					 gdouble page_increment,
					 gdouble page_size);
    extern void gtk_adjustment_set_value(GtkAdjustment * adjustment,
					 gdouble value);
    extern void gtk_adjustment_value_changed(GtkAdjustment * adjustment);
    extern void gtk_alignment_get_padding(GtkAlignment * alignment,
					  guint * padding_top,
					  guint * padding_bottom,
					  guint * padding_left,
					  guint * padding_right);
    extern GType gtk_alignment_get_type(void);
    extern GtkWidget *gtk_alignment_new(gfloat xalign, gfloat yalign,
					gfloat xscale, gfloat yscale);
    extern void gtk_alignment_set(GtkAlignment * alignment, gfloat xalign,
				  gfloat yalign, gfloat xscale,
				  gfloat yscale);
    extern void gtk_alignment_set_padding(GtkAlignment * alignment,
					  guint padding_top,
					  guint padding_bottom,
					  guint padding_left,
					  guint padding_right);
    extern gboolean gtk_alternative_dialog_button_order(GdkScreen *
							screen);
    extern GType gtk_anchor_type_get_type(void);
    extern GType gtk_arg_flags_get_type(void);
    extern GType gtk_arrow_get_type(void);
    extern GtkWidget *gtk_arrow_new(GtkArrowType arrow_type,
				    GtkShadowType shadow_type);
    extern void gtk_arrow_set(GtkArrow * arrow, GtkArrowType arrow_type,
			      GtkShadowType shadow_type);
    extern GType gtk_arrow_type_get_type(void);
    extern GType gtk_aspect_frame_get_type(void);
    extern GtkWidget *gtk_aspect_frame_new(const gchar * label,
					   gfloat xalign, gfloat yalign,
					   gfloat ratio,
					   gboolean obey_child);
    extern void gtk_aspect_frame_set(GtkAspectFrame * aspect_frame,
				     gfloat xalign, gfloat yalign,
				     gfloat ratio, gboolean obey_child);
    extern GType gtk_attach_options_get_type(void);
    extern GtkWidget *gtk_bin_get_child(GtkBin * bin);
    extern GType gtk_bin_get_type(void);
    extern const guint gtk_binary_age;
    extern void gtk_binding_entry_add_signal(GtkBindingSet * binding_set,
					     guint keyval,
					     GdkModifierType modifiers,
					     const gchar * signal_name,
					     guint n_args, ...);
    extern void gtk_binding_entry_add_signall(GtkBindingSet * binding_set,
					      guint keyval,
					      GdkModifierType modifiers,
					      const gchar * signal_name,
					      GSList * binding_args);
    extern void gtk_binding_entry_clear(GtkBindingSet * binding_set,
					guint keyval,
					GdkModifierType modifiers);
    extern void gtk_binding_entry_remove(GtkBindingSet * binding_set,
					 guint keyval,
					 GdkModifierType modifiers);
    extern guint gtk_binding_parse_binding(GScanner * scanner)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern gboolean gtk_binding_set_activate(GtkBindingSet * binding_set,
					     guint keyval,
					     GdkModifierType modifiers,
					     GtkObject * object);
    extern void gtk_binding_set_add_path(GtkBindingSet * binding_set,
					 GtkPathType path_type,
					 const gchar * path_pattern,
					 GtkPathPriorityType priority);
    extern GtkBindingSet *gtk_binding_set_by_class(gpointer object_class);
    extern GtkBindingSet *gtk_binding_set_find(const gchar * set_name);
    extern GtkBindingSet *gtk_binding_set_new(const gchar * set_name);
    extern gboolean gtk_bindings_activate(GtkObject * object, guint keyval,
					  GdkModifierType modifiers);
    extern gboolean gtk_bindings_activate_event(GtkObject * object,
						GdkEventKey * event);
    extern GtkBorder *gtk_border_copy(const GtkBorder * border_);
    extern void gtk_border_free(GtkBorder * border_);
    extern GType gtk_border_get_type(void);
    extern gboolean gtk_box_get_homogeneous(GtkBox * box);
    extern gint gtk_box_get_spacing(GtkBox * box);
    extern GType gtk_box_get_type(void);
    extern void gtk_box_pack_end(GtkBox * box, GtkWidget * child,
				 gboolean expand, gboolean fill,
				 guint padding);
    extern void gtk_box_pack_end_defaults(GtkBox * box,
					  GtkWidget * widget);
    extern void gtk_box_pack_start(GtkBox * box, GtkWidget * child,
				   gboolean expand, gboolean fill,
				   guint padding);
    extern void gtk_box_pack_start_defaults(GtkBox * box,
					    GtkWidget * widget);
    extern void gtk_box_query_child_packing(GtkBox * box,
					    GtkWidget * child,
					    gboolean * expand,
					    gboolean * fill,
					    guint * padding,
					    GtkPackType * pack_type);
    extern void gtk_box_reorder_child(GtkBox * box, GtkWidget * child,
				      gint position);
    extern void gtk_box_set_child_packing(GtkBox * box, GtkWidget * child,
					  gboolean expand, gboolean fill,
					  guint padding,
					  GtkPackType pack_type);
    extern void gtk_box_set_homogeneous(GtkBox * box,
					gboolean homogeneous);
    extern void gtk_box_set_spacing(GtkBox * box, gint spacing);
    extern gboolean gtk_button_box_get_child_secondary(GtkButtonBox *
						       widget,
						       GtkWidget * child);
    extern GtkButtonBoxStyle gtk_button_box_get_layout(GtkButtonBox *
						       widget);
    extern GType gtk_button_box_get_type(void);
    extern void gtk_button_box_set_child_secondary(GtkButtonBox * widget,
						   GtkWidget * child,
						   gboolean is_secondary);
    extern void gtk_button_box_set_layout(GtkButtonBox * widget,
					  GtkButtonBoxStyle layout_style);
    extern GType gtk_button_box_style_get_type(void);
    extern void gtk_button_clicked(GtkButton * button);
    extern void gtk_button_enter(GtkButton * button);
    extern void gtk_button_get_alignment(GtkButton * button,
					 gfloat * xalign, gfloat * yalign);
    extern gboolean gtk_button_get_focus_on_click(GtkButton * button);
    extern GtkWidget *gtk_button_get_image(GtkButton * button);
    extern const gchar *gtk_button_get_label(GtkButton * button);
    extern GtkReliefStyle gtk_button_get_relief(GtkButton * button);
    extern GType gtk_button_get_type(void);
    extern gboolean gtk_button_get_use_stock(GtkButton * button);
    extern gboolean gtk_button_get_use_underline(GtkButton * button);
    extern void gtk_button_leave(GtkButton * button);
    extern GtkWidget *gtk_button_new(void);
    extern GtkWidget *gtk_button_new_from_stock(const gchar * stock_id);
    extern GtkWidget *gtk_button_new_with_label(const gchar * label);
    extern GtkWidget *gtk_button_new_with_mnemonic(const gchar * label);
    extern void gtk_button_pressed(GtkButton * button);
    extern void gtk_button_released(GtkButton * button);
    extern void gtk_button_set_alignment(GtkButton * button, gfloat xalign,
					 gfloat yalign);
    extern void gtk_button_set_focus_on_click(GtkButton * button,
					      gboolean focus_on_click);
    extern void gtk_button_set_image(GtkButton * button,
				     GtkWidget * image);
    extern void gtk_button_set_label(GtkButton * button,
				     const gchar * label);
    extern void gtk_button_set_relief(GtkButton * button,
				      GtkReliefStyle newstyle);
    extern void gtk_button_set_use_stock(GtkButton * button,
					 gboolean use_stock);
    extern void gtk_button_set_use_underline(GtkButton * button,
					     gboolean use_underline);
    extern GType gtk_buttons_type_get_type(void);
    extern void gtk_calendar_clear_marks(GtkCalendar * calendar);
    extern GType gtk_calendar_display_options_get_type(void);
    extern void gtk_calendar_get_date(GtkCalendar * calendar, guint * year,
				      guint * month, guint * day);
    extern GtkCalendarDisplayOptions
	gtk_calendar_get_display_options(GtkCalendar * calendar);
    extern GType gtk_calendar_get_type(void);
    extern gboolean gtk_calendar_mark_day(GtkCalendar * calendar,
					  guint day);
    extern GtkWidget *gtk_calendar_new(void);
    extern void gtk_calendar_select_day(GtkCalendar * calendar, guint day);
    extern gboolean gtk_calendar_select_month(GtkCalendar * calendar,
					      guint month, guint year);
    extern void gtk_calendar_set_display_options(GtkCalendar * calendar,
						 GtkCalendarDisplayOptions
						 flags);
    extern gboolean gtk_calendar_unmark_day(GtkCalendar * calendar,
					    guint day);
    extern void gtk_cell_editable_editing_done(GtkCellEditable *
					       cell_editable);
    extern GType gtk_cell_editable_get_type(void);
    extern void gtk_cell_editable_remove_widget(GtkCellEditable *
						cell_editable);
    extern void gtk_cell_editable_start_editing(GtkCellEditable *
						cell_editable,
						GdkEvent * event);
    extern void gtk_cell_layout_add_attribute(GtkCellLayout * cell_layout,
					      GtkCellRenderer * cell,
					      const gchar * attribute,
					      gint column);
    extern void gtk_cell_layout_clear(GtkCellLayout * cell_layout);
    extern void gtk_cell_layout_clear_attributes(GtkCellLayout *
						 cell_layout,
						 GtkCellRenderer * cell);
    extern GType gtk_cell_layout_get_type(void);
    extern void gtk_cell_layout_pack_end(GtkCellLayout * cell_layout,
					 GtkCellRenderer * cell,
					 gboolean expand);
    extern void gtk_cell_layout_pack_start(GtkCellLayout * cell_layout,
					   GtkCellRenderer * cell,
					   gboolean expand);
    extern void gtk_cell_layout_reorder(GtkCellLayout * cell_layout,
					GtkCellRenderer * cell,
					gint position);
    extern void gtk_cell_layout_set_attributes(GtkCellLayout * cell_layout,
					       GtkCellRenderer * cell,
					       ...);
    extern void gtk_cell_layout_set_cell_data_func(GtkCellLayout *
						   cell_layout,
						   GtkCellRenderer * cell,
						   GtkCellLayoutDataFunc
						   func,
						   gpointer func_data,
						   GDestroyNotify destroy);
    extern gboolean gtk_cell_renderer_activate(GtkCellRenderer * cell,
					       GdkEvent * event,
					       GtkWidget * widget,
					       const gchar * path,
					       const GdkRectangle *
					       background_area,
					       const GdkRectangle *
					       cell_area,
					       GtkCellRendererState flags);
    extern GType gtk_cell_renderer_combo_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_combo_new(void);
    extern void gtk_cell_renderer_get_fixed_size(GtkCellRenderer * cell,
						 gint * width,
						 gint * height);
    extern void gtk_cell_renderer_get_size(GtkCellRenderer * cell,
					   GtkWidget * widget,
					   const GdkRectangle * cell_area,
					   gint * x_offset,
					   gint * y_offset, gint * width,
					   gint * height);
    extern GType gtk_cell_renderer_get_type(void);
    extern GType gtk_cell_renderer_mode_get_type(void);
    extern GType gtk_cell_renderer_pixbuf_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_pixbuf_new(void);
    extern GType gtk_cell_renderer_progress_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_progress_new(void);
    extern void gtk_cell_renderer_render(GtkCellRenderer * cell,
					 GdkWindow * window,
					 GtkWidget * widget,
					 const GdkRectangle *
					 background_area,
					 const GdkRectangle * cell_area,
					 const GdkRectangle * expose_area,
					 GtkCellRendererState flags);
    extern void gtk_cell_renderer_set_fixed_size(GtkCellRenderer * cell,
						 gint width, gint height);
    extern GtkCellEditable *gtk_cell_renderer_start_editing(GtkCellRenderer
							    * cell,
							    GdkEvent *
							    event,
							    GtkWidget *
							    widget,
							    const gchar *
							    path,
							    const
							    GdkRectangle *
							    background_area,
							    const
							    GdkRectangle *
							    cell_area,
							    GtkCellRendererState
							    flags);
    extern GType gtk_cell_renderer_state_get_type(void);
    extern void gtk_cell_renderer_stop_editing(GtkCellRenderer * cell,
					       gboolean canceled);
    extern GType gtk_cell_renderer_text_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_text_new(void);
    extern void
	gtk_cell_renderer_text_set_fixed_height_from_font
	(GtkCellRendererText * renderer, gint number_of_rows);
    extern gboolean
	gtk_cell_renderer_toggle_get_active(GtkCellRendererToggle *
					    toggle);
    extern gboolean
	gtk_cell_renderer_toggle_get_radio(GtkCellRendererToggle * toggle);
    extern GType gtk_cell_renderer_toggle_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_toggle_new(void);
    extern void gtk_cell_renderer_toggle_set_active(GtkCellRendererToggle *
						    toggle,
						    gboolean setting);
    extern void gtk_cell_renderer_toggle_set_radio(GtkCellRendererToggle *
						   toggle, gboolean radio);
    extern GList *gtk_cell_view_get_cell_renderers(GtkCellView *
						   cell_view);
    extern GtkTreePath *gtk_cell_view_get_displayed_row(GtkCellView *
							cell_view);
    extern gboolean gtk_cell_view_get_size_of_row(GtkCellView * cell_view,
						  GtkTreePath * path,
						  GtkRequisition *
						  requisition);
    extern GType gtk_cell_view_get_type(void);
    extern GtkWidget *gtk_cell_view_new(void);
    extern GtkWidget *gtk_cell_view_new_with_markup(const gchar * markup);
    extern GtkWidget *gtk_cell_view_new_with_pixbuf(GdkPixbuf * pixbuf);
    extern GtkWidget *gtk_cell_view_new_with_text(const gchar * text);
    extern void gtk_cell_view_set_background_color(GtkCellView * cell_view,
						   const GdkColor * color);
    extern void gtk_cell_view_set_displayed_row(GtkCellView * cell_view,
						GtkTreePath * path);
    extern void gtk_cell_view_set_model(GtkCellView * cell_view,
					GtkTreeModel * model);
    extern GType gtk_check_button_get_type(void);
    extern GtkWidget *gtk_check_button_new(void);
    extern GtkWidget *gtk_check_button_new_with_label(const gchar * label);
    extern GtkWidget *gtk_check_button_new_with_mnemonic(const gchar *
							 label);
    extern gboolean gtk_check_menu_item_get_active(GtkCheckMenuItem *
						   check_menu_item);
    extern gboolean gtk_check_menu_item_get_draw_as_radio(GtkCheckMenuItem
							  *
							  check_menu_item);
    extern gboolean gtk_check_menu_item_get_inconsistent(GtkCheckMenuItem *
							 check_menu_item);
    extern GType gtk_check_menu_item_get_type(void);
    extern GtkWidget *gtk_check_menu_item_new(void);
    extern GtkWidget *gtk_check_menu_item_new_with_label(const gchar *
							 label);
    extern GtkWidget *gtk_check_menu_item_new_with_mnemonic(const gchar *
							    label);
    extern void gtk_check_menu_item_set_active(GtkCheckMenuItem *
					       check_menu_item,
					       gboolean is_active);
    extern void gtk_check_menu_item_set_draw_as_radio(GtkCheckMenuItem *
						      check_menu_item,
						      gboolean
						      draw_as_radio);
    extern void gtk_check_menu_item_set_inconsistent(GtkCheckMenuItem *
						     check_menu_item,
						     gboolean setting);
    extern void gtk_check_menu_item_toggled(GtkCheckMenuItem *
					    check_menu_item);
    extern const gchar *gtk_check_version(guint required_major,
					  guint required_minor,
					  guint required_micro);
    extern void gtk_clipboard_clear(GtkClipboard * clipboard);
    extern GtkClipboard *gtk_clipboard_get(GdkAtom selection);
    extern GdkDisplay *gtk_clipboard_get_display(GtkClipboard * clipboard);
    extern GtkClipboard *gtk_clipboard_get_for_display(GdkDisplay *
						       display,
						       GdkAtom selection);
    extern GObject *gtk_clipboard_get_owner(GtkClipboard * clipboard);
    extern GType gtk_clipboard_get_type(void);
    extern void gtk_clipboard_request_contents(GtkClipboard * clipboard,
					       GdkAtom target,
					       GtkClipboardReceivedFunc
					       callback,
					       gpointer user_data);
    extern void gtk_clipboard_request_image(GtkClipboard * clipboard,
					    GtkClipboardImageReceivedFunc
					    callback, gpointer user_data);
    extern void gtk_clipboard_request_targets(GtkClipboard * clipboard,
					      GtkClipboardTargetsReceivedFunc
					      callback,
					      gpointer user_data);
    extern void gtk_clipboard_request_text(GtkClipboard * clipboard,
					   GtkClipboardTextReceivedFunc
					   callback, gpointer user_data);
    extern void gtk_clipboard_set_can_store(GtkClipboard * clipboard,
					    const GtkTargetEntry * targets,
					    gint n_targets);
    extern void gtk_clipboard_set_image(GtkClipboard * clipboard,
					GdkPixbuf * pixbuf);
    extern void gtk_clipboard_set_text(GtkClipboard * clipboard,
				       const gchar * text, gint len);
    extern gboolean gtk_clipboard_set_with_data(GtkClipboard * clipboard,
						const GtkTargetEntry *
						targets, guint n_targets,
						GtkClipboardGetFunc
						get_func,
						GtkClipboardClearFunc
						clear_func,
						gpointer user_data);
    extern gboolean gtk_clipboard_set_with_owner(GtkClipboard * clipboard,
						 const GtkTargetEntry *
						 targets, guint n_targets,
						 GtkClipboardGetFunc
						 get_func,
						 GtkClipboardClearFunc
						 clear_func,
						 GObject * owner);
    extern void gtk_clipboard_store(GtkClipboard * clipboard);
    extern GtkSelectionData *gtk_clipboard_wait_for_contents(GtkClipboard *
							     clipboard,
							     GdkAtom
							     target);
    extern GdkPixbuf *gtk_clipboard_wait_for_image(GtkClipboard *
						   clipboard);
    extern gboolean gtk_clipboard_wait_for_targets(GtkClipboard *
						   clipboard,
						   GdkAtom * *targets,
						   gint * n_targets);
    extern gchar *gtk_clipboard_wait_for_text(GtkClipboard * clipboard);
    extern gboolean gtk_clipboard_wait_is_image_available(GtkClipboard *
							  clipboard);
    extern gboolean gtk_clipboard_wait_is_target_available(GtkClipboard *
							   clipboard,
							   GdkAtom target);
    extern gboolean gtk_clipboard_wait_is_text_available(GtkClipboard *
							 clipboard);
    extern guint16 gtk_color_button_get_alpha(GtkColorButton *
					      color_button);
    extern void gtk_color_button_get_color(GtkColorButton * color_button,
					   GdkColor * color);
    extern const gchar *gtk_color_button_get_title(GtkColorButton *
						   color_button);
    extern GType gtk_color_button_get_type(void);
    extern gboolean gtk_color_button_get_use_alpha(GtkColorButton *
						   color_button);
    extern GtkWidget *gtk_color_button_new(void);
    extern GtkWidget *gtk_color_button_new_with_color(const GdkColor *
						      color);
    extern void gtk_color_button_set_alpha(GtkColorButton * color_button,
					   guint16 alpha);
    extern void gtk_color_button_set_color(GtkColorButton * color_button,
					   const GdkColor * color);
    extern void gtk_color_button_set_title(GtkColorButton * color_button,
					   const gchar * title);
    extern void gtk_color_button_set_use_alpha(GtkColorButton *
					       color_button,
					       gboolean use_alpha);
    extern GType gtk_color_selection_dialog_get_type(void);
    extern GtkWidget *gtk_color_selection_dialog_new(const gchar * title);
    extern guint16 gtk_color_selection_get_current_alpha(GtkColorSelection
							 * colorsel);
    extern void gtk_color_selection_get_current_color(GtkColorSelection *
						      colorsel,
						      GdkColor * color);
    extern gboolean
	gtk_color_selection_get_has_opacity_control(GtkColorSelection *
						    colorsel);
    extern gboolean gtk_color_selection_get_has_palette(GtkColorSelection *
							colorsel);
    extern guint16 gtk_color_selection_get_previous_alpha(GtkColorSelection
							  * colorsel);
    extern void gtk_color_selection_get_previous_color(GtkColorSelection *
						       colorsel,
						       GdkColor * color);
    extern GType gtk_color_selection_get_type(void);
    extern gboolean gtk_color_selection_is_adjusting(GtkColorSelection *
						     colorsel);
    extern GtkWidget *gtk_color_selection_new(void);
    extern gboolean gtk_color_selection_palette_from_string(const gchar *
							    str,
							    GdkColor *
							    *colors,
							    gint *
							    n_colors);
    extern gchar *gtk_color_selection_palette_to_string(const GdkColor *
							colors,
							gint n_colors);
    extern GtkColorSelectionChangePaletteWithScreenFunc
	gtk_color_selection_set_change_palette_with_screen_hook
	(GtkColorSelectionChangePaletteWithScreenFunc func);
    extern void gtk_color_selection_set_current_alpha(GtkColorSelection *
						      colorsel,
						      guint16 alpha);
    extern void gtk_color_selection_set_current_color(GtkColorSelection *
						      colorsel,
						      const GdkColor *
						      color);
    extern void
	gtk_color_selection_set_has_opacity_control(GtkColorSelection *
						    colorsel,
						    gboolean has_opacity);
    extern void gtk_color_selection_set_has_palette(GtkColorSelection *
						    colorsel,
						    gboolean has_palette);
    extern void gtk_color_selection_set_previous_alpha(GtkColorSelection *
						       colorsel,
						       guint16 alpha);
    extern void gtk_color_selection_set_previous_color(GtkColorSelection *
						       colorsel,
						       const GdkColor *
						       color);
    extern void gtk_combo_box_append_text(GtkComboBox * combo_box,
					  const gchar * text);
    extern gint gtk_combo_box_entry_get_text_column(GtkComboBoxEntry *
						    entry_box);
    extern GType gtk_combo_box_entry_get_type(void);
    extern GtkWidget *gtk_combo_box_entry_new(void);
    extern GtkWidget *gtk_combo_box_entry_new_text(void);
    extern GtkWidget *gtk_combo_box_entry_new_with_model(GtkTreeModel *
							 model,
							 gint text_column);
    extern void gtk_combo_box_entry_set_text_column(GtkComboBoxEntry *
						    entry_box,
						    gint text_column);
    extern gint gtk_combo_box_get_active(GtkComboBox * combo_box);
    extern gboolean gtk_combo_box_get_active_iter(GtkComboBox * combo_box,
						  GtkTreeIter * iter);
    extern gchar *gtk_combo_box_get_active_text(GtkComboBox * combo_box);
    extern gboolean gtk_combo_box_get_add_tearoffs(GtkComboBox *
						   combo_box);
    extern gint gtk_combo_box_get_column_span_column(GtkComboBox *
						     combo_box);
    extern gboolean gtk_combo_box_get_focus_on_click(GtkComboBox * combo);
    extern GtkTreeModel *gtk_combo_box_get_model(GtkComboBox * combo_box);
    extern AtkObject *gtk_combo_box_get_popup_accessible(GtkComboBox *
							 combo_box);
    extern GtkTreeViewRowSeparatorFunc
	gtk_combo_box_get_row_separator_func(GtkComboBox * combo_box);
    extern gint gtk_combo_box_get_row_span_column(GtkComboBox * combo_box);
    extern GType gtk_combo_box_get_type(void);
    extern gint gtk_combo_box_get_wrap_width(GtkComboBox * combo_box);
    extern void gtk_combo_box_insert_text(GtkComboBox * combo_box,
					  gint position,
					  const gchar * text);
    extern GtkWidget *gtk_combo_box_new(void);
    extern GtkWidget *gtk_combo_box_new_text(void);
    extern GtkWidget *gtk_combo_box_new_with_model(GtkTreeModel * model);
    extern void gtk_combo_box_popdown(GtkComboBox * combo_box);
    extern void gtk_combo_box_popup(GtkComboBox * combo_box);
    extern void gtk_combo_box_prepend_text(GtkComboBox * combo_box,
					   const gchar * text);
    extern void gtk_combo_box_remove_text(GtkComboBox * combo_box,
					  gint position);
    extern void gtk_combo_box_set_active(GtkComboBox * combo_box,
					 gint index_);
    extern void gtk_combo_box_set_active_iter(GtkComboBox * combo_box,
					      GtkTreeIter * iter);
    extern void gtk_combo_box_set_add_tearoffs(GtkComboBox * combo_box,
					       gboolean add_tearoffs);
    extern void gtk_combo_box_set_column_span_column(GtkComboBox *
						     combo_box,
						     gint column_span);
    extern void gtk_combo_box_set_focus_on_click(GtkComboBox * combo,
						 gboolean focus_on_click);
    extern void gtk_combo_box_set_model(GtkComboBox * combo_box,
					GtkTreeModel * model);
    extern void gtk_combo_box_set_row_separator_func(GtkComboBox *
						     combo_box,
						     GtkTreeViewRowSeparatorFunc
						     func, gpointer data,
						     GtkDestroyNotify
						     destroy);
    extern void gtk_combo_box_set_row_span_column(GtkComboBox * combo_box,
						  gint row_span);
    extern void gtk_combo_box_set_wrap_width(GtkComboBox * combo_box,
					     gint width);
    extern void gtk_container_add(GtkContainer * container,
				  GtkWidget * widget);
    extern void gtk_container_add_with_properties(GtkContainer * container,
						  GtkWidget * widget,
						  const gchar *
						  first_prop_name, ...);
    extern void gtk_container_check_resize(GtkContainer * container);
    extern void gtk_container_child_get(GtkContainer * container,
					GtkWidget * child,
					const gchar * first_prop_name,
					...);
    extern void gtk_container_child_get_property(GtkContainer * container,
						 GtkWidget * child,
						 const gchar *
						 property_name,
						 GValue * value);
    extern void gtk_container_child_get_valist(GtkContainer * container,
					       GtkWidget * child,
					       const gchar *
					       first_property_name,
					       va_list var_args);
    extern void gtk_container_child_set(GtkContainer * container,
					GtkWidget * child,
					const gchar * first_prop_name,
					...);
    extern void gtk_container_child_set_property(GtkContainer * container,
						 GtkWidget * child,
						 const gchar *
						 property_name,
						 const GValue * value);
    extern void gtk_container_child_set_valist(GtkContainer * container,
					       GtkWidget * child,
					       const gchar *
					       first_property_name,
					       va_list var_args);
    extern GType gtk_container_child_type(GtkContainer * container);
    extern GParamSpec *gtk_container_class_find_child_property(GObjectClass
							       * cclass,
							       const gchar
							       *
							       property_name);
    extern void
	gtk_container_class_install_child_property(GtkContainerClass *
						   cclass,
						   guint property_id,
						   GParamSpec * pspec);
    extern GParamSpec
	**gtk_container_class_list_child_properties(GObjectClass * cclass,
						    guint * n_properties);
    extern void gtk_container_forall(GtkContainer * container,
				     GtkCallback callback,
				     gpointer callback_data);
    extern void gtk_container_foreach(GtkContainer * container,
				      GtkCallback callback,
				      gpointer callback_data);
    extern guint gtk_container_get_border_width(GtkContainer * container);
    extern GList *gtk_container_get_children(GtkContainer * container);
    extern gboolean gtk_container_get_focus_chain(GtkContainer * container,
						  GList *
						  *focusable_widgets);
    extern GtkAdjustment *gtk_container_get_focus_hadjustment(GtkContainer
							      * container);
    extern GtkAdjustment *gtk_container_get_focus_vadjustment(GtkContainer
							      * container);
    extern GtkResizeMode gtk_container_get_resize_mode(GtkContainer *
						       container);
    extern GType gtk_container_get_type(void);
    extern void gtk_container_propagate_expose(GtkContainer * container,
					       GtkWidget * child,
					       GdkEventExpose * event);
    extern void gtk_container_remove(GtkContainer * container,
				     GtkWidget * widget);
    extern void gtk_container_resize_children(GtkContainer * container);
    extern void gtk_container_set_border_width(GtkContainer * container,
					       guint border_width);
    extern void gtk_container_set_focus_chain(GtkContainer * container,
					      GList * focusable_widgets);
    extern void gtk_container_set_focus_child(GtkContainer * container,
					      GtkWidget * child);
    extern void gtk_container_set_focus_hadjustment(GtkContainer *
						    container,
						    GtkAdjustment *
						    adjustment);
    extern void gtk_container_set_focus_vadjustment(GtkContainer *
						    container,
						    GtkAdjustment *
						    adjustment);
    extern void gtk_container_set_reallocate_redraws(GtkContainer *
						     container,
						     gboolean
						     needs_redraws);
    extern void gtk_container_set_resize_mode(GtkContainer * container,
					      GtkResizeMode resize_mode);
    extern void gtk_container_unset_focus_chain(GtkContainer * container);
    extern GType gtk_corner_type_get_type(void);
    extern GType gtk_curve_get_type(void);
    extern void gtk_curve_get_vector(GtkCurve * curve, int veclen,
				     gfloat * vector);
    extern GtkWidget *gtk_curve_new(void);
    extern void gtk_curve_reset(GtkCurve * curve);
    extern void gtk_curve_set_curve_type(GtkCurve * curve,
					 GtkCurveType type);
    extern void gtk_curve_set_gamma(GtkCurve * curve, gfloat gamma_);
    extern void gtk_curve_set_range(GtkCurve * curve, gfloat min_x,
				    gfloat max_x, gfloat min_y,
				    gfloat max_y);
    extern void gtk_curve_set_vector(GtkCurve * curve, int veclen,
				     gfloat * vector);
    extern GType gtk_curve_type_get_type(void);
    extern GType gtk_debug_flag_get_type(void);
    extern guint gtk_debug_flags;
    extern GType gtk_delete_type_get_type(void);
    extern GType gtk_dest_defaults_get_type(void);
    extern void gtk_dialog_add_action_widget(GtkDialog * dialog,
					     GtkWidget * child,
					     gint response_id);
    extern GtkWidget *gtk_dialog_add_button(GtkDialog * dialog,
					    const gchar * button_text,
					    gint response_id);
    extern void gtk_dialog_add_buttons(GtkDialog * dialog,
				       const gchar * first_button_text,
				       ...);
    extern GType gtk_dialog_flags_get_type(void);
    extern gboolean gtk_dialog_get_has_separator(GtkDialog * dialog);
    extern GType gtk_dialog_get_type(void);
    extern GtkWidget *gtk_dialog_new(void);
    extern GtkWidget *gtk_dialog_new_with_buttons(const gchar * title,
						  GtkWindow * parent,
						  GtkDialogFlags flags,
						  const gchar *
						  first_button_text, ...);
    extern void gtk_dialog_response(GtkDialog * dialog, gint response_id);
    extern gint gtk_dialog_run(GtkDialog * dialog);
    extern void gtk_dialog_set_alternative_button_order(GtkDialog * dialog,
							gint
							first_response_id,
							...);
    extern void
	gtk_dialog_set_alternative_button_order_from_array(GtkDialog *
							   dialog,
							   gint n_params,
							   gint *
							   new_order);
    extern void gtk_dialog_set_default_response(GtkDialog * dialog,
						gint response_id);
    extern void gtk_dialog_set_has_separator(GtkDialog * dialog,
					     gboolean setting);
    extern void gtk_dialog_set_response_sensitive(GtkDialog * dialog,
						  gint response_id,
						  gboolean setting);
    extern GType gtk_direction_type_get_type(void);
    extern void gtk_disable_setlocale(void);
    extern GdkDragContext *gtk_drag_begin(GtkWidget * widget,
					  GtkTargetList * targets,
					  GdkDragAction actions,
					  gint button, GdkEvent * event);
    extern gboolean gtk_drag_check_threshold(GtkWidget * widget,
					     gint start_x, gint start_y,
					     gint current_x,
					     gint current_y);
    extern void gtk_drag_dest_add_image_targets(GtkWidget * widget);
    extern void gtk_drag_dest_add_text_targets(GtkWidget * widget);
    extern void gtk_drag_dest_add_uri_targets(GtkWidget * widget);
    extern GdkAtom gtk_drag_dest_find_target(GtkWidget * widget,
					     GdkDragContext * context,
					     GtkTargetList * target_list);
    extern GtkTargetList *gtk_drag_dest_get_target_list(GtkWidget *
							widget);
    extern void gtk_drag_dest_set(GtkWidget * widget,
				  GtkDestDefaults flags,
				  const GtkTargetEntry * targets,
				  gint n_targets, GdkDragAction actions);
    extern void gtk_drag_dest_set_proxy(GtkWidget * widget,
					GdkWindow * proxy_window,
					GdkDragProtocol protocol,
					gboolean use_coordinates);
    extern void gtk_drag_dest_set_target_list(GtkWidget * widget,
					      GtkTargetList * target_list);
    extern void gtk_drag_dest_unset(GtkWidget * widget);
    extern void gtk_drag_finish(GdkDragContext * context, gboolean success,
				gboolean del, guint32 time_);
    extern void gtk_drag_get_data(GtkWidget * widget,
				  GdkDragContext * context, GdkAtom target,
				  guint32 time_);
    extern GtkWidget *gtk_drag_get_source_widget(GdkDragContext * context);
    extern void gtk_drag_highlight(GtkWidget * widget);
    extern void gtk_drag_set_icon_default(GdkDragContext * context);
    extern void gtk_drag_set_icon_pixbuf(GdkDragContext * context,
					 GdkPixbuf * pixbuf, gint hot_x,
					 gint hot_y);
    extern void gtk_drag_set_icon_pixmap(GdkDragContext * context,
					 GdkColormap * colormap,
					 GdkPixmap * pixmap,
					 GdkBitmap * mask, gint hot_x,
					 gint hot_y);
    extern void gtk_drag_set_icon_stock(GdkDragContext * context,
					const gchar * stock_id, gint hot_x,
					gint hot_y);
    extern void gtk_drag_set_icon_widget(GdkDragContext * context,
					 GtkWidget * widget, gint hot_x,
					 gint hot_y);
    extern void gtk_drag_source_add_image_targets(GtkWidget * widget);
    extern void gtk_drag_source_add_text_targets(GtkWidget * widget);
    extern void gtk_drag_source_add_uri_targets(GtkWidget * widget);
    extern GtkTargetList *gtk_drag_source_get_target_list(GtkWidget *
							  widget);
    extern void gtk_drag_source_set(GtkWidget * widget,
				    GdkModifierType start_button_mask,
				    const GtkTargetEntry * targets,
				    gint n_targets, GdkDragAction actions);
    extern void gtk_drag_source_set_icon(GtkWidget * widget,
					 GdkColormap * colormap,
					 GdkPixmap * pixmap,
					 GdkBitmap * mask);
    extern void gtk_drag_source_set_icon_pixbuf(GtkWidget * widget,
						GdkPixbuf * pixbuf);
    extern void gtk_drag_source_set_icon_stock(GtkWidget * widget,
					       const gchar * stock_id);
    extern void gtk_drag_source_set_target_list(GtkWidget * widget,
						GtkTargetList *
						target_list);
    extern void gtk_drag_source_unset(GtkWidget * widget);
    extern void gtk_drag_unhighlight(GtkWidget * widget);
    extern void gtk_draw_insertion_cursor(GtkWidget * widget,
					  GdkDrawable * drawable,
					  const GdkRectangle * area,
					  const GdkRectangle * location,
					  gboolean is_primary,
					  GtkTextDirection direction,
					  gboolean draw_arrow);
    extern GType gtk_drawing_area_get_type(void);
    extern GtkWidget *gtk_drawing_area_new(void);
    extern void gtk_editable_copy_clipboard(GtkEditable * editable);
    extern void gtk_editable_cut_clipboard(GtkEditable * editable);
    extern void gtk_editable_delete_selection(GtkEditable * editable);
    extern void gtk_editable_delete_text(GtkEditable * editable,
					 gint start_pos, gint end_pos);
    extern gchar *gtk_editable_get_chars(GtkEditable * editable,
					 gint start_pos, gint end_pos);
    extern gboolean gtk_editable_get_editable(GtkEditable * editable);
    extern gint gtk_editable_get_position(GtkEditable * editable);
    extern gboolean gtk_editable_get_selection_bounds(GtkEditable *
						      editable,
						      gint * start,
						      gint * end);
    extern GType gtk_editable_get_type(void);
    extern void gtk_editable_insert_text(GtkEditable * editable,
					 const gchar * new_text,
					 gint new_text_length,
					 gint * position);
    extern void gtk_editable_paste_clipboard(GtkEditable * editable);
    extern void gtk_editable_select_region(GtkEditable * editable,
					   gint start, gint end);
    extern void gtk_editable_set_editable(GtkEditable * editable,
					  gboolean is_editable);
    extern void gtk_editable_set_position(GtkEditable * editable,
					  gint position);
    extern void gtk_entry_completion_complete(GtkEntryCompletion *
					      completion);
    extern void gtk_entry_completion_delete_action(GtkEntryCompletion *
						   completion,
						   gint index_);
    extern GtkWidget *gtk_entry_completion_get_entry(GtkEntryCompletion *
						     completion);
    extern gboolean
	gtk_entry_completion_get_inline_completion(GtkEntryCompletion *
						   completion);
    extern gint
	gtk_entry_completion_get_minimum_key_length(GtkEntryCompletion *
						    completion);
    extern GtkTreeModel *gtk_entry_completion_get_model(GtkEntryCompletion
							* completion);
    extern gboolean
	gtk_entry_completion_get_popup_completion(GtkEntryCompletion *
						  completion);
    extern gint gtk_entry_completion_get_text_column(GtkEntryCompletion *
						     completion);
    extern GType gtk_entry_completion_get_type(void);
    extern void
	gtk_entry_completion_insert_action_markup(GtkEntryCompletion *
						  completion, gint index_,
						  const gchar * markup);
    extern void gtk_entry_completion_insert_action_text(GtkEntryCompletion
							* completion,
							gint index_,
							const gchar *
							text);
    extern void gtk_entry_completion_insert_prefix(GtkEntryCompletion *
						   completion);
    extern GtkEntryCompletion *gtk_entry_completion_new(void);
    extern void
	gtk_entry_completion_set_inline_completion(GtkEntryCompletion *
						   completion,
						   gboolean
						   inline_completion);
    extern void gtk_entry_completion_set_match_func(GtkEntryCompletion *
						    completion,
						    GtkEntryCompletionMatchFunc
						    func,
						    gpointer func_data,
						    GDestroyNotify
						    func_notify);
    extern void
	gtk_entry_completion_set_minimum_key_length(GtkEntryCompletion *
						    completion,
						    gint length);
    extern void gtk_entry_completion_set_model(GtkEntryCompletion *
					       completion,
					       GtkTreeModel * model);
    extern void
	gtk_entry_completion_set_popup_completion(GtkEntryCompletion *
						  completion,
						  gboolean
						  popup_completion);
    extern void gtk_entry_completion_set_text_column(GtkEntryCompletion *
						     completion,
						     gint column);
    extern gboolean gtk_entry_get_activates_default(GtkEntry * entry);
    extern gfloat gtk_entry_get_alignment(GtkEntry * entry);
    extern GtkEntryCompletion *gtk_entry_get_completion(GtkEntry * entry);
    extern gboolean gtk_entry_get_has_frame(GtkEntry * entry);
    extern gunichar gtk_entry_get_invisible_char(GtkEntry * entry);
    extern PangoLayout *gtk_entry_get_layout(GtkEntry * entry);
    extern void gtk_entry_get_layout_offsets(GtkEntry * entry, gint * x,
					     gint * y);
    extern gint gtk_entry_get_max_length(GtkEntry * entry);
    extern const gchar *gtk_entry_get_text(GtkEntry * entry);
    extern GType gtk_entry_get_type(void);
    extern gboolean gtk_entry_get_visibility(GtkEntry * entry);
    extern gint gtk_entry_get_width_chars(GtkEntry * entry);
    extern gint gtk_entry_layout_index_to_text_index(GtkEntry * entry,
						     gint layout_index);
    extern GtkWidget *gtk_entry_new(void);
    extern void gtk_entry_set_activates_default(GtkEntry * entry,
						gboolean setting);
    extern void gtk_entry_set_alignment(GtkEntry * entry, gfloat xalign);
    extern void gtk_entry_set_completion(GtkEntry * entry,
					 GtkEntryCompletion * completion);
    extern void gtk_entry_set_has_frame(GtkEntry * entry,
					gboolean setting);
    extern void gtk_entry_set_invisible_char(GtkEntry * entry,
					     gunichar ch);
    extern void gtk_entry_set_max_length(GtkEntry * entry, gint max);
    extern void gtk_entry_set_text(GtkEntry * entry, const gchar * text);
    extern void gtk_entry_set_visibility(GtkEntry * entry,
					 gboolean visible);
    extern void gtk_entry_set_width_chars(GtkEntry * entry, gint n_chars);
    extern gint gtk_entry_text_index_to_layout_index(GtkEntry * entry,
						     gint text_index);
    extern gboolean gtk_event_box_get_above_child(GtkEventBox * event_box);
    extern GType gtk_event_box_get_type(void);
    extern gboolean gtk_event_box_get_visible_window(GtkEventBox *
						     event_box);
    extern GtkWidget *gtk_event_box_new(void);
    extern void gtk_event_box_set_above_child(GtkEventBox * event_box,
					      gboolean above_child);
    extern void gtk_event_box_set_visible_window(GtkEventBox * event_box,
						 gboolean visible_window);
    extern gboolean gtk_events_pending(void);
    extern gboolean gtk_expander_get_expanded(GtkExpander * expander);
    extern const char *gtk_expander_get_label(GtkExpander * expander);
    extern GtkWidget *gtk_expander_get_label_widget(GtkExpander *
						    expander);
    extern gint gtk_expander_get_spacing(GtkExpander * expander);
    extern GType gtk_expander_get_type(void);
    extern gboolean gtk_expander_get_use_markup(GtkExpander * expander);
    extern gboolean gtk_expander_get_use_underline(GtkExpander * expander);
    extern GtkWidget *gtk_expander_new(const gchar * label);
    extern GtkWidget *gtk_expander_new_with_mnemonic(const gchar * label);
    extern void gtk_expander_set_expanded(GtkExpander * expander,
					  gboolean expanded);
    extern void gtk_expander_set_label(GtkExpander * expander,
				       const gchar * label);
    extern void gtk_expander_set_label_widget(GtkExpander * expander,
					      GtkWidget * label_widget);
    extern void gtk_expander_set_spacing(GtkExpander * expander,
					 gint spacing);
    extern void gtk_expander_set_use_markup(GtkExpander * expander,
					    gboolean use_markup);
    extern void gtk_expander_set_use_underline(GtkExpander * expander,
					       gboolean use_underline);
    extern GType gtk_expander_style_get_type(void);
    extern gboolean gtk_false(void);
    extern GType gtk_file_chooser_action_get_type(void);
    extern void gtk_file_chooser_add_filter(GtkFileChooser * chooser,
					    GtkFileFilter * filter);
    extern gboolean gtk_file_chooser_add_shortcut_folder(GtkFileChooser *
							 chooser,
							 const char
							 *folder,
							 GError * *error);
    extern gboolean gtk_file_chooser_add_shortcut_folder_uri(GtkFileChooser
							     * chooser,
							     const char
							     *uri,
							     GError *
							     *error);
    extern const gchar
	*gtk_file_chooser_button_get_title(GtkFileChooserButton * button);
    extern GType gtk_file_chooser_button_get_type(void);
    extern gint
	gtk_file_chooser_button_get_width_chars(GtkFileChooserButton *
						button);
    extern GtkWidget *gtk_file_chooser_button_new(const gchar * title,
						  GtkFileChooserAction
						  action);
    extern GtkWidget *gtk_file_chooser_button_new_with_backend(const gchar
							       * title,
							       GtkFileChooserAction
							       action,
							       const gchar
							       * backend);
    extern GtkWidget *gtk_file_chooser_button_new_with_dialog(GtkWidget *
							      dialog);
    extern void gtk_file_chooser_button_set_title(GtkFileChooserButton *
						  button,
						  const gchar * title);
    extern void
	gtk_file_chooser_button_set_width_chars(GtkFileChooserButton *
						button, gint n_chars);
    extern GType gtk_file_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_file_chooser_dialog_new(const gchar * title,
						  GtkWindow * parent,
						  GtkFileChooserAction
						  action,
						  const gchar *
						  first_button_text, ...);
    extern GtkWidget *gtk_file_chooser_dialog_new_with_backend(const gchar
							       * title,
							       GtkWindow *
							       parent,
							       GtkFileChooserAction
							       action,
							       const gchar
							       * backend,
							       const gchar
							       *
							       first_button_text,
							       ...);
    extern GType gtk_file_chooser_error_get_type(void);
    extern GQuark gtk_file_chooser_error_quark(void);
    extern GtkFileChooserAction gtk_file_chooser_get_action(GtkFileChooser
							    * chooser);
    extern gchar *gtk_file_chooser_get_current_folder(GtkFileChooser *
						      chooser);
    extern gchar *gtk_file_chooser_get_current_folder_uri(GtkFileChooser *
							  chooser);
    extern GtkWidget *gtk_file_chooser_get_extra_widget(GtkFileChooser *
							chooser);
    extern gchar *gtk_file_chooser_get_filename(GtkFileChooser * chooser);
    extern GSList *gtk_file_chooser_get_filenames(GtkFileChooser *
						  chooser);
    extern GtkFileFilter *gtk_file_chooser_get_filter(GtkFileChooser *
						      chooser);
    extern gboolean gtk_file_chooser_get_local_only(GtkFileChooser *
						    chooser);
    extern char *gtk_file_chooser_get_preview_filename(GtkFileChooser *
						       chooser);
    extern char *gtk_file_chooser_get_preview_uri(GtkFileChooser *
						  chooser);
    extern GtkWidget *gtk_file_chooser_get_preview_widget(GtkFileChooser *
							  chooser);
    extern gboolean
	gtk_file_chooser_get_preview_widget_active(GtkFileChooser *
						   chooser);
    extern gboolean gtk_file_chooser_get_select_multiple(GtkFileChooser *
							 chooser);
    extern gboolean gtk_file_chooser_get_show_hidden(GtkFileChooser *
						     chooser);
    extern GType gtk_file_chooser_get_type(void);
    extern gchar *gtk_file_chooser_get_uri(GtkFileChooser * chooser);
    extern GSList *gtk_file_chooser_get_uris(GtkFileChooser * chooser);
    extern gboolean gtk_file_chooser_get_use_preview_label(GtkFileChooser *
							   chooser);
    extern GSList *gtk_file_chooser_list_filters(GtkFileChooser * chooser);
    extern GSList
	*gtk_file_chooser_list_shortcut_folder_uris(GtkFileChooser *
						    chooser);
    extern GSList *gtk_file_chooser_list_shortcut_folders(GtkFileChooser *
							  chooser);
    extern void gtk_file_chooser_remove_filter(GtkFileChooser * chooser,
					       GtkFileFilter * filter);
    extern gboolean gtk_file_chooser_remove_shortcut_folder(GtkFileChooser
							    * chooser,
							    const char
							    *folder,
							    GError *
							    *error);
    extern gboolean
	gtk_file_chooser_remove_shortcut_folder_uri(GtkFileChooser *
						    chooser,
						    const char *uri,
						    GError * *error);
    extern void gtk_file_chooser_select_all(GtkFileChooser * chooser);
    extern gboolean gtk_file_chooser_select_filename(GtkFileChooser *
						     chooser,
						     const gchar *
						     filename);
    extern gboolean gtk_file_chooser_select_uri(GtkFileChooser * chooser,
						const char *uri);
    extern void gtk_file_chooser_set_action(GtkFileChooser * chooser,
					    GtkFileChooserAction action);
    extern gboolean gtk_file_chooser_set_current_folder(GtkFileChooser *
							chooser,
							const gchar *
							filename);
    extern gboolean gtk_file_chooser_set_current_folder_uri(GtkFileChooser
							    * chooser,
							    const gchar *
							    uri);
    extern void gtk_file_chooser_set_current_name(GtkFileChooser * chooser,
						  const gchar * name);
    extern void gtk_file_chooser_set_extra_widget(GtkFileChooser * chooser,
						  GtkWidget *
						  extra_widget);
    extern gboolean gtk_file_chooser_set_filename(GtkFileChooser * chooser,
						  const gchar * filename);
    extern void gtk_file_chooser_set_filter(GtkFileChooser * chooser,
					    GtkFileFilter * filter);
    extern void gtk_file_chooser_set_local_only(GtkFileChooser * chooser,
						gboolean local_only);
    extern void gtk_file_chooser_set_preview_widget(GtkFileChooser *
						    chooser,
						    GtkWidget *
						    preview_widget);
    extern void gtk_file_chooser_set_preview_widget_active(GtkFileChooser *
							   chooser,
							   gboolean
							   active);
    extern void gtk_file_chooser_set_select_multiple(GtkFileChooser *
						     chooser,
						     gboolean
						     select_multiple);
    extern void gtk_file_chooser_set_show_hidden(GtkFileChooser * chooser,
						 gboolean show_hidden);
    extern gboolean gtk_file_chooser_set_uri(GtkFileChooser * chooser,
					     const char *uri);
    extern void gtk_file_chooser_set_use_preview_label(GtkFileChooser *
						       chooser,
						       gboolean use_label);
    extern void gtk_file_chooser_unselect_all(GtkFileChooser * chooser);
    extern void gtk_file_chooser_unselect_filename(GtkFileChooser *
						   chooser,
						   const char *filename);
    extern void gtk_file_chooser_unselect_uri(GtkFileChooser * chooser,
					      const char *uri);
    extern GType gtk_file_chooser_widget_get_type(void);
    extern GtkWidget *gtk_file_chooser_widget_new(GtkFileChooserAction
						  action);
    extern GtkWidget
	*gtk_file_chooser_widget_new_with_backend(GtkFileChooserAction
						  action,
						  const gchar * backend);
    extern void gtk_file_filter_add_custom(GtkFileFilter * filter,
					   GtkFileFilterFlags needed,
					   GtkFileFilterFunc func,
					   gpointer data,
					   GDestroyNotify notify);
    extern void gtk_file_filter_add_mime_type(GtkFileFilter * filter,
					      const gchar * mime_type);
    extern void gtk_file_filter_add_pattern(GtkFileFilter * filter,
					    const gchar * pattern);
    extern void gtk_file_filter_add_pixbuf_formats(GtkFileFilter * filter);
    extern gboolean gtk_file_filter_filter(GtkFileFilter * filter,
					   const GtkFileFilterInfo *
					   filter_info);
    extern GType gtk_file_filter_flags_get_type(void);
    extern const gchar *gtk_file_filter_get_name(GtkFileFilter * filter);
    extern GtkFileFilterFlags gtk_file_filter_get_needed(GtkFileFilter *
							 filter);
    extern GType gtk_file_filter_get_type(void);
    extern GtkFileFilter *gtk_file_filter_new(void);
    extern void gtk_file_filter_set_name(GtkFileFilter * filter,
					 const gchar * name);
    /* gtk_file_selection_complete is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern void gtk_file_selection_complete(GtkFileSelection * filesel,
					    const gchar * pattern)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_get_filename is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern const gchar *gtk_file_selection_get_filename(GtkFileSelection *
							filesel)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_get_select_multiple is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern gboolean gtk_file_selection_get_select_multiple(GtkFileSelection
							   * filesel)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_get_selections is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern gchar **gtk_file_selection_get_selections(GtkFileSelection *
						     filesel)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern GType gtk_file_selection_get_type(void);
    /* gtk_file_selection_hide_fileop_buttons is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern void gtk_file_selection_hide_fileop_buttons(GtkFileSelection *
						       filesel)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_new is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern GtkWidget *gtk_file_selection_new(const gchar * title)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_set_filename is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern void gtk_file_selection_set_filename(GtkFileSelection * filesel,
						const gchar * filename)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_set_select_multiple is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern void gtk_file_selection_set_select_multiple(GtkFileSelection *
						       filesel,
						       gboolean
						       select_multiple)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_file_selection_show_fileop_buttons is deprecated and should not be used in newly-written code. GtkFileSelection has been superseded by the newer GtkFileChooser family of widgets. */
    extern void gtk_file_selection_show_fileop_buttons(GtkFileSelection *
						       filesel)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern gboolean gtk_fixed_get_has_window(GtkFixed * fixed);
    extern GType gtk_fixed_get_type(void);
    extern void gtk_fixed_move(GtkFixed * fixed, GtkWidget * widget,
			       gint x, gint y);
    extern GtkWidget *gtk_fixed_new(void);
    extern void gtk_fixed_put(GtkFixed * fixed, GtkWidget * widget, gint x,
			      gint y);
    extern void gtk_fixed_set_has_window(GtkFixed * fixed,
					 gboolean has_window);
    extern const gchar *gtk_font_button_get_font_name(GtkFontButton *
						      font_button);
    extern gboolean gtk_font_button_get_show_size(GtkFontButton *
						  font_button);
    extern gboolean gtk_font_button_get_show_style(GtkFontButton *
						   font_button);
    extern const gchar *gtk_font_button_get_title(GtkFontButton *
						  font_button);
    extern GType gtk_font_button_get_type(void);
    extern gboolean gtk_font_button_get_use_font(GtkFontButton *
						 font_button);
    extern gboolean gtk_font_button_get_use_size(GtkFontButton *
						 font_button);
    extern GtkWidget *gtk_font_button_new(void);
    extern GtkWidget *gtk_font_button_new_with_font(const gchar *
						    fontname);
    extern gboolean gtk_font_button_set_font_name(GtkFontButton *
						  font_button,
						  const gchar * fontname);
    extern void gtk_font_button_set_show_size(GtkFontButton * font_button,
					      gboolean show_size);
    extern void gtk_font_button_set_show_style(GtkFontButton * font_button,
					       gboolean show_style);
    extern void gtk_font_button_set_title(GtkFontButton * font_button,
					  const gchar * title);
    extern void gtk_font_button_set_use_font(GtkFontButton * font_button,
					     gboolean use_font);
    extern void gtk_font_button_set_use_size(GtkFontButton * font_button,
					     gboolean use_size);
    extern gchar
	*gtk_font_selection_dialog_get_font_name(GtkFontSelectionDialog *
						 fsd);
    extern const gchar
	*gtk_font_selection_dialog_get_preview_text(GtkFontSelectionDialog
						    * fsd);
    extern GType gtk_font_selection_dialog_get_type(void);
    extern GtkWidget *gtk_font_selection_dialog_new(const gchar * title);
    extern gboolean
	gtk_font_selection_dialog_set_font_name(GtkFontSelectionDialog *
						fsd,
						const gchar * fontname);
    extern void
	gtk_font_selection_dialog_set_preview_text(GtkFontSelectionDialog *
						   fsd,
						   const gchar * text);
    extern gchar *gtk_font_selection_get_font_name(GtkFontSelection *
						   fontsel);
    extern const gchar
	*gtk_font_selection_get_preview_text(GtkFontSelection * fontsel);
    extern GType gtk_font_selection_get_type(void);
    extern GtkWidget *gtk_font_selection_new(void);
    extern gboolean gtk_font_selection_set_font_name(GtkFontSelection *
						     fontsel,
						     const gchar *
						     fontname);
    extern void gtk_font_selection_set_preview_text(GtkFontSelection *
						    fontsel,
						    const gchar * text);
    extern const gchar *gtk_frame_get_label(GtkFrame * frame);
    extern void gtk_frame_get_label_align(GtkFrame * frame,
					  gfloat * xalign,
					  gfloat * yalign);
    extern GtkWidget *gtk_frame_get_label_widget(GtkFrame * frame);
    extern GtkShadowType gtk_frame_get_shadow_type(GtkFrame * frame);
    extern GType gtk_frame_get_type(void);
    extern GtkWidget *gtk_frame_new(const gchar * label);
    extern void gtk_frame_set_label(GtkFrame * frame, const gchar * label);
    extern void gtk_frame_set_label_align(GtkFrame * frame, gfloat xalign,
					  gfloat yalign);
    extern void gtk_frame_set_label_widget(GtkFrame * frame,
					   GtkWidget * label_widget);
    extern void gtk_frame_set_shadow_type(GtkFrame * frame,
					  GtkShadowType type);
    extern GType gtk_gamma_curve_get_type(void);
    extern GtkWidget *gtk_gamma_curve_new(void);
    extern GdkGC *gtk_gc_get(gint depth, GdkColormap * colormap,
			     GdkGCValues * values,
			     GdkGCValuesMask values_mask);
    extern void gtk_gc_release(GdkGC * gc);
    extern GdkEvent *gtk_get_current_event(void);
    extern gboolean gtk_get_current_event_state(GdkModifierType * state);
    extern guint32 gtk_get_current_event_time(void);
    extern PangoLanguage *gtk_get_default_language(void);
    extern GtkWidget *gtk_get_event_widget(GdkEvent * event);
    extern GOptionGroup *gtk_get_option_group(gboolean
					      open_default_display);
    extern void gtk_grab_add(GtkWidget * widget);
    extern GtkWidget *gtk_grab_get_current(void);
    extern void gtk_grab_remove(GtkWidget * widget);
    extern GtkPositionType gtk_handle_box_get_handle_position(GtkHandleBox
							      *
							      handle_box);
    extern GtkShadowType gtk_handle_box_get_shadow_type(GtkHandleBox *
							handle_box);
    extern GtkPositionType gtk_handle_box_get_snap_edge(GtkHandleBox *
							handle_box);
    extern GType gtk_handle_box_get_type(void);
    extern GtkWidget *gtk_handle_box_new(void);
    extern void gtk_handle_box_set_handle_position(GtkHandleBox *
						   handle_box,
						   GtkPositionType
						   position);
    extern void gtk_handle_box_set_shadow_type(GtkHandleBox * handle_box,
					       GtkShadowType type);
    extern void gtk_handle_box_set_snap_edge(GtkHandleBox * handle_box,
					     GtkPositionType edge);
    extern GType gtk_hbox_get_type(void);
    extern GtkWidget *gtk_hbox_new(gboolean homogeneous, gint spacing);
    extern GType gtk_hbutton_box_get_type(void);
    extern GtkWidget *gtk_hbutton_box_new(void);
    extern GType gtk_hpaned_get_type(void);
    extern GtkWidget *gtk_hpaned_new(void);
    extern GType gtk_hruler_get_type(void);
    extern GtkWidget *gtk_hruler_new(void);
    extern GType gtk_hscale_get_type(void);
    extern GtkWidget *gtk_hscale_new(GtkAdjustment * adjustment);
    extern GtkWidget *gtk_hscale_new_with_range(gdouble min, gdouble max,
						gdouble step);
    extern GType gtk_hscrollbar_get_type(void);
    extern GtkWidget *gtk_hscrollbar_new(GtkAdjustment * adjustment);
    extern GType gtk_hseparator_get_type(void);
    extern GtkWidget *gtk_hseparator_new(void);
    extern void gtk_icon_factory_add(GtkIconFactory * factory,
				     const gchar * stock_id,
				     GtkIconSet * icon_set);
    extern void gtk_icon_factory_add_default(GtkIconFactory * factory);
    extern GType gtk_icon_factory_get_type(void);
    extern GtkIconSet *gtk_icon_factory_lookup(GtkIconFactory * factory,
					       const gchar * stock_id);
    extern GtkIconSet *gtk_icon_factory_lookup_default(const gchar *
						       stock_id);
    extern GtkIconFactory *gtk_icon_factory_new(void);
    extern void gtk_icon_factory_remove_default(GtkIconFactory * factory);
    extern GtkIconInfo *gtk_icon_info_copy(GtkIconInfo * icon_info);
    extern void gtk_icon_info_free(GtkIconInfo * icon_info);
    extern gboolean gtk_icon_info_get_attach_points(GtkIconInfo *
						    icon_info,
						    GdkPoint * *points,
						    gint * n_points);
    extern gint gtk_icon_info_get_base_size(GtkIconInfo * icon_info);
    extern GdkPixbuf *gtk_icon_info_get_builtin_pixbuf(GtkIconInfo *
						       icon_info);
    extern const gchar *gtk_icon_info_get_display_name(GtkIconInfo *
						       icon_info);
    extern gboolean gtk_icon_info_get_embedded_rect(GtkIconInfo *
						    icon_info,
						    GdkRectangle *
						    rectangle);
    extern const gchar *gtk_icon_info_get_filename(GtkIconInfo *
						   icon_info);
    extern GType gtk_icon_info_get_type(void);
    extern GdkPixbuf *gtk_icon_info_load_icon(GtkIconInfo * icon_info,
					      GError * *error);
    extern void gtk_icon_info_set_raw_coordinates(GtkIconInfo * icon_info,
						  gboolean
						  raw_coordinates);
    extern GType gtk_icon_lookup_flags_get_type(void);
    extern void gtk_icon_set_add_source(GtkIconSet * icon_set,
					const GtkIconSource * source);
    extern GtkIconSet *gtk_icon_set_copy(GtkIconSet * icon_set);
    extern void gtk_icon_set_get_sizes(GtkIconSet * icon_set,
				       GtkIconSize * *sizes,
				       gint * n_sizes);
    extern GType gtk_icon_set_get_type(void);
    extern GtkIconSet *gtk_icon_set_new(void);
    extern GtkIconSet *gtk_icon_set_new_from_pixbuf(GdkPixbuf * pixbuf);
    extern GtkIconSet *gtk_icon_set_ref(GtkIconSet * icon_set);
    extern GdkPixbuf *gtk_icon_set_render_icon(GtkIconSet * icon_set,
					       GtkStyle * style,
					       GtkTextDirection direction,
					       GtkStateType state,
					       GtkIconSize size,
					       GtkWidget * widget,
					       const char *detail);
    extern void gtk_icon_set_unref(GtkIconSet * icon_set);
    extern GtkIconSize gtk_icon_size_from_name(const gchar * name);
    extern const gchar *gtk_icon_size_get_name(GtkIconSize size);
    extern GType gtk_icon_size_get_type(void);
    extern gboolean gtk_icon_size_lookup(GtkIconSize size, gint * width,
					 gint * height);
    extern gboolean gtk_icon_size_lookup_for_settings(GtkSettings *
						      settings,
						      GtkIconSize size,
						      gint * width,
						      gint * height);
    extern GtkIconSize gtk_icon_size_register(const gchar * name,
					      gint width, gint height);
    extern void gtk_icon_size_register_alias(const gchar * alias,
					     GtkIconSize target);
    extern GtkIconSource *gtk_icon_source_copy(const GtkIconSource *
					       source);
    extern void gtk_icon_source_free(GtkIconSource * source);
    extern GtkTextDirection gtk_icon_source_get_direction(const
							  GtkIconSource *
							  source);
    extern gboolean gtk_icon_source_get_direction_wildcarded(const
							     GtkIconSource
							     * source);
    extern const gchar *gtk_icon_source_get_filename(const GtkIconSource *
						     source);
    extern const gchar *gtk_icon_source_get_icon_name(const GtkIconSource *
						      source);
    extern GdkPixbuf *gtk_icon_source_get_pixbuf(const GtkIconSource *
						 source);
    extern GtkIconSize gtk_icon_source_get_size(const GtkIconSource *
						source);
    extern gboolean gtk_icon_source_get_size_wildcarded(const GtkIconSource
							* source);
    extern GtkStateType gtk_icon_source_get_state(const GtkIconSource *
						  source);
    extern gboolean gtk_icon_source_get_state_wildcarded(const
							 GtkIconSource *
							 source);
    extern GType gtk_icon_source_get_type(void);
    extern GtkIconSource *gtk_icon_source_new(void);
    extern void gtk_icon_source_set_direction(GtkIconSource * source,
					      GtkTextDirection direction);
    extern void gtk_icon_source_set_direction_wildcarded(GtkIconSource *
							 source,
							 gboolean setting);
    extern void gtk_icon_source_set_filename(GtkIconSource * source,
					     const gchar * filename);
    extern void gtk_icon_source_set_icon_name(GtkIconSource * source,
					      const gchar * icon_name);
    extern void gtk_icon_source_set_pixbuf(GtkIconSource * source,
					   GdkPixbuf * pixbuf);
    extern void gtk_icon_source_set_size(GtkIconSource * source,
					 GtkIconSize size);
    extern void gtk_icon_source_set_size_wildcarded(GtkIconSource * source,
						    gboolean setting);
    extern void gtk_icon_source_set_state(GtkIconSource * source,
					  GtkStateType state);
    extern void gtk_icon_source_set_state_wildcarded(GtkIconSource *
						     source,
						     gboolean setting);
    extern void gtk_icon_theme_add_builtin_icon(const gchar * icon_name,
						gint size,
						GdkPixbuf * pixbuf);
    extern void gtk_icon_theme_append_search_path(GtkIconTheme *
						  icon_theme,
						  const gchar * path);
    extern GType gtk_icon_theme_error_get_type(void);
    extern GQuark gtk_icon_theme_error_quark(void);
    extern GtkIconTheme *gtk_icon_theme_get_default(void);
    extern char *gtk_icon_theme_get_example_icon_name(GtkIconTheme *
						      icon_theme);
    extern GtkIconTheme *gtk_icon_theme_get_for_screen(GdkScreen * screen);
    extern gint *gtk_icon_theme_get_icon_sizes(GtkIconTheme * icon_theme,
					       const char *icon_name);
    extern void gtk_icon_theme_get_search_path(GtkIconTheme * icon_theme,
					       gchar * **path,
					       gint * n_elements);
    extern GType gtk_icon_theme_get_type(void);
    extern gboolean gtk_icon_theme_has_icon(GtkIconTheme * icon_theme,
					    const char *icon_name);
    extern GList *gtk_icon_theme_list_icons(GtkIconTheme * icon_theme,
					    const char *context);
    extern GdkPixbuf *gtk_icon_theme_load_icon(GtkIconTheme * icon_theme,
					       const gchar * icon_name,
					       gint size,
					       GtkIconLookupFlags flags,
					       GError * *error);
    extern GtkIconInfo *gtk_icon_theme_lookup_icon(GtkIconTheme *
						   icon_theme,
						   const gchar * icon_name,
						   gint size,
						   GtkIconLookupFlags
						   flags);
    extern GtkIconTheme *gtk_icon_theme_new(void);
    extern void gtk_icon_theme_prepend_search_path(GtkIconTheme *
						   icon_theme,
						   const gchar * path);
    extern gboolean gtk_icon_theme_rescan_if_needed(GtkIconTheme *
						    icon_theme);
    extern void gtk_icon_theme_set_custom_theme(GtkIconTheme * icon_theme,
						const gchar * theme_name);
    extern void gtk_icon_theme_set_screen(GtkIconTheme * icon_theme,
					  GdkScreen * screen);
    extern void gtk_icon_theme_set_search_path(GtkIconTheme * icon_theme,
					       const gchar * *path,
					       gint n_elements);
    extern gint gtk_icon_view_get_column_spacing(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_columns(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_item_width(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_margin(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_markup_column(GtkIconView * icon_view);
    extern GtkTreeModel *gtk_icon_view_get_model(GtkIconView * icon_view);
    extern GtkOrientation gtk_icon_view_get_orientation(GtkIconView *
							icon_view);
    extern GtkTreePath *gtk_icon_view_get_path_at_pos(GtkIconView *
						      icon_view, gint x,
						      gint y);
    extern gint gtk_icon_view_get_pixbuf_column(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_row_spacing(GtkIconView * icon_view);
    extern GList *gtk_icon_view_get_selected_items(GtkIconView *
						   icon_view);
    extern GtkSelectionMode gtk_icon_view_get_selection_mode(GtkIconView *
							     icon_view);
    extern gint gtk_icon_view_get_spacing(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_text_column(GtkIconView * icon_view);
    extern GType gtk_icon_view_get_type(void);
    extern void gtk_icon_view_item_activated(GtkIconView * icon_view,
					     GtkTreePath * path);
    extern GtkWidget *gtk_icon_view_new(void);
    extern GtkWidget *gtk_icon_view_new_with_model(GtkTreeModel * model);
    extern gboolean gtk_icon_view_path_is_selected(GtkIconView * icon_view,
						   GtkTreePath * path);
    extern void gtk_icon_view_select_all(GtkIconView * icon_view);
    extern void gtk_icon_view_select_path(GtkIconView * icon_view,
					  GtkTreePath * path);
    extern void gtk_icon_view_selected_foreach(GtkIconView * icon_view,
					       GtkIconViewForeachFunc func,
					       gpointer data);
    extern void gtk_icon_view_set_column_spacing(GtkIconView * icon_view,
						 gint column_spacing);
    extern void gtk_icon_view_set_columns(GtkIconView * icon_view,
					  gint columns);
    extern void gtk_icon_view_set_item_width(GtkIconView * icon_view,
					     gint item_width);
    extern void gtk_icon_view_set_margin(GtkIconView * icon_view,
					 gint margin);
    extern void gtk_icon_view_set_markup_column(GtkIconView * icon_view,
						gint column);
    extern void gtk_icon_view_set_model(GtkIconView * icon_view,
					GtkTreeModel * model);
    extern void gtk_icon_view_set_orientation(GtkIconView * icon_view,
					      GtkOrientation orientation);
    extern void gtk_icon_view_set_pixbuf_column(GtkIconView * icon_view,
						gint column);
    extern void gtk_icon_view_set_row_spacing(GtkIconView * icon_view,
					      gint row_spacing);
    extern void gtk_icon_view_set_selection_mode(GtkIconView * icon_view,
						 GtkSelectionMode mode);
    extern void gtk_icon_view_set_spacing(GtkIconView * icon_view,
					  gint spacing);
    extern void gtk_icon_view_set_text_column(GtkIconView * icon_view,
					      gint column);
    extern void gtk_icon_view_unselect_all(GtkIconView * icon_view);
    extern void gtk_icon_view_unselect_path(GtkIconView * icon_view,
					    GtkTreePath * path);
    extern GType gtk_identifier_get_type(void);
    extern gboolean gtk_im_context_delete_surrounding(GtkIMContext *
						      context, gint offset,
						      gint n_chars);
    extern gboolean gtk_im_context_filter_keypress(GtkIMContext * context,
						   GdkEventKey * event);
    extern void gtk_im_context_focus_in(GtkIMContext * context);
    extern void gtk_im_context_focus_out(GtkIMContext * context);
    extern void gtk_im_context_get_preedit_string(GtkIMContext * context,
						  gchar * *str,
						  PangoAttrList * *attrs,
						  gint * cursor_pos);
    extern gboolean gtk_im_context_get_surrounding(GtkIMContext * context,
						   gchar * *text,
						   gint * cursor_index);
    extern GType gtk_im_context_get_type(void);
    extern void gtk_im_context_reset(GtkIMContext * context);
    extern void gtk_im_context_set_client_window(GtkIMContext * context,
						 GdkWindow * window);
    extern void gtk_im_context_set_cursor_location(GtkIMContext * context,
						   const GdkRectangle *
						   area);
    extern void gtk_im_context_set_surrounding(GtkIMContext * context,
					       const gchar * text,
					       gint len,
					       gint cursor_index);
    extern void gtk_im_context_set_use_preedit(GtkIMContext * context,
					       gboolean use_preedit);
    extern void gtk_im_context_simple_add_table(GtkIMContextSimple *
						context_simple,
						guint16 * data,
						gint max_seq_len,
						gint n_seqs);
    extern GType gtk_im_context_simple_get_type(void);
    extern GtkIMContext *gtk_im_context_simple_new(void);
    extern void gtk_im_multicontext_append_menuitems(GtkIMMulticontext *
						     context,
						     GtkMenuShell *
						     menushell);
    extern GType gtk_im_multicontext_get_type(void);
    extern GtkIMContext *gtk_im_multicontext_new(void);
    extern GType gtk_im_preedit_style_get_type(void);
    extern GType gtk_im_status_style_get_type(void);
    extern GdkPixbufAnimation *gtk_image_get_animation(GtkImage * image);
    extern void gtk_image_get_icon_name(GtkImage * image,
					const gchar * *icon_name,
					GtkIconSize * size);
    extern void gtk_image_get_icon_set(GtkImage * image,
				       GtkIconSet * *icon_set,
				       GtkIconSize * size);
    extern void gtk_image_get_image(GtkImage * image,
				    GdkImage * *gdk_image,
				    GdkBitmap * *mask);
    extern GdkPixbuf *gtk_image_get_pixbuf(GtkImage * image);
    extern gint gtk_image_get_pixel_size(GtkImage * image);
    extern void gtk_image_get_pixmap(GtkImage * image, GdkPixmap * *pixmap,
				     GdkBitmap * *mask);
    extern void gtk_image_get_stock(GtkImage * image, gchar * *stock_id,
				    GtkIconSize * size);
    extern GtkImageType gtk_image_get_storage_type(GtkImage * image);
    extern GType gtk_image_get_type(void);
    extern GtkWidget *gtk_image_menu_item_get_image(GtkImageMenuItem *
						    image_menu_item);
    extern GType gtk_image_menu_item_get_type(void);
    extern GtkWidget *gtk_image_menu_item_new(void);
    extern GtkWidget *gtk_image_menu_item_new_from_stock(const gchar *
							 stock_id,
							 GtkAccelGroup *
							 accel_group);
    extern GtkWidget *gtk_image_menu_item_new_with_label(const gchar *
							 label);
    extern GtkWidget *gtk_image_menu_item_new_with_mnemonic(const gchar *
							    label);
    extern void gtk_image_menu_item_set_image(GtkImageMenuItem *
					      image_menu_item,
					      GtkWidget * image);
    extern GtkWidget *gtk_image_new(void);
    extern GtkWidget *gtk_image_new_from_animation(GdkPixbufAnimation *
						   animation);
    extern GtkWidget *gtk_image_new_from_file(const gchar * filename);
    extern GtkWidget *gtk_image_new_from_icon_name(const gchar * icon_name,
						   GtkIconSize size);
    extern GtkWidget *gtk_image_new_from_icon_set(GtkIconSet * icon_set,
						  GtkIconSize size);
    extern GtkWidget *gtk_image_new_from_image(GdkImage * image,
					       GdkBitmap * mask);
    extern GtkWidget *gtk_image_new_from_pixbuf(GdkPixbuf * pixbuf);
    extern GtkWidget *gtk_image_new_from_pixmap(GdkPixmap * pixmap,
						GdkBitmap * mask);
    extern GtkWidget *gtk_image_new_from_stock(const gchar * stock_id,
					       GtkIconSize size);
    extern void gtk_image_set_from_animation(GtkImage * image,
					     GdkPixbufAnimation *
					     animation);
    extern void gtk_image_set_from_file(GtkImage * image,
					const gchar * filename);
    extern void gtk_image_set_from_icon_name(GtkImage * image,
					     const gchar * icon_name,
					     GtkIconSize size);
    extern void gtk_image_set_from_icon_set(GtkImage * image,
					    GtkIconSet * icon_set,
					    GtkIconSize size);
    extern void gtk_image_set_from_image(GtkImage * image,
					 GdkImage * gdk_image,
					 GdkBitmap * mask);
    extern void gtk_image_set_from_pixbuf(GtkImage * image,
					  GdkPixbuf * pixbuf);
    extern void gtk_image_set_from_pixmap(GtkImage * image,
					  GdkPixmap * pixmap,
					  GdkBitmap * mask);
    extern void gtk_image_set_from_stock(GtkImage * image,
					 const gchar * stock_id,
					 GtkIconSize size);
    extern void gtk_image_set_pixel_size(GtkImage * image,
					 gint pixel_size);
    extern GType gtk_image_type_get_type(void);
    extern void gtk_init(int *argc, char ***argv);
    extern void gtk_init_add(GtkFunction function, gpointer data);
    extern gboolean gtk_init_check(int *argc, char ***argv);
    extern gboolean gtk_init_with_args(int *argc, char ***argv,
				       const char *parameter_string,
				       GOptionEntry * entries,
				       const char *translation_domain,
				       GError * *error);
    extern GType gtk_input_dialog_get_type(void);
    extern GtkWidget *gtk_input_dialog_new(void);
    extern const guint gtk_interface_age;
    extern GdkScreen *gtk_invisible_get_screen(GtkInvisible * invisible);
    extern GType gtk_invisible_get_type(void);
    extern GtkWidget *gtk_invisible_new(void);
    extern GtkWidget *gtk_invisible_new_for_screen(GdkScreen * screen);
    extern void gtk_invisible_set_screen(GtkInvisible * invisible,
					 GdkScreen * screen);
    extern void gtk_item_deselect(GtkItem * item);
    extern GType gtk_item_get_type(void);
    extern void gtk_item_select(GtkItem * item);
    extern void gtk_item_toggle(GtkItem * item);
    extern GType gtk_justification_get_type(void);
    extern guint gtk_key_snooper_install(GtkKeySnoopFunc snooper,
					 gpointer func_data);
    extern void gtk_key_snooper_remove(guint snooper_handler_id);
    extern gdouble gtk_label_get_angle(GtkLabel * label);
    extern PangoAttrList *gtk_label_get_attributes(GtkLabel * label);
    extern PangoEllipsizeMode gtk_label_get_ellipsize(GtkLabel * label);
    extern GtkJustification gtk_label_get_justify(GtkLabel * label);
    extern const gchar *gtk_label_get_label(GtkLabel * label);
    extern PangoLayout *gtk_label_get_layout(GtkLabel * label);
    extern void gtk_label_get_layout_offsets(GtkLabel * label, gint * x,
					     gint * y);
    extern gboolean gtk_label_get_line_wrap(GtkLabel * label);
    extern gint gtk_label_get_max_width_chars(GtkLabel * label);
    extern guint gtk_label_get_mnemonic_keyval(GtkLabel * label);
    extern GtkWidget *gtk_label_get_mnemonic_widget(GtkLabel * label);
    extern gboolean gtk_label_get_selectable(GtkLabel * label);
    extern gboolean gtk_label_get_selection_bounds(GtkLabel * label,
						   gint * start,
						   gint * end);
    extern gboolean gtk_label_get_single_line_mode(GtkLabel * label);
    extern const gchar *gtk_label_get_text(GtkLabel * label);
    extern GType gtk_label_get_type(void);
    extern gboolean gtk_label_get_use_markup(GtkLabel * label);
    extern gboolean gtk_label_get_use_underline(GtkLabel * label);
    extern gint gtk_label_get_width_chars(GtkLabel * label);
    extern GtkWidget *gtk_label_new(const gchar * str);
    extern GtkWidget *gtk_label_new_with_mnemonic(const gchar * str);
    extern void gtk_label_select_region(GtkLabel * label,
					gint start_offset,
					gint end_offset);
    extern void gtk_label_set_angle(GtkLabel * label, gdouble angle);
    extern void gtk_label_set_attributes(GtkLabel * label,
					 PangoAttrList * attrs);
    extern void gtk_label_set_ellipsize(GtkLabel * label,
					PangoEllipsizeMode mode);
    extern void gtk_label_set_justify(GtkLabel * label,
				      GtkJustification jtype);
    extern void gtk_label_set_label(GtkLabel * label, const gchar * str);
    extern void gtk_label_set_line_wrap(GtkLabel * label, gboolean wrap);
    extern void gtk_label_set_markup(GtkLabel * label, const gchar * str);
    extern void gtk_label_set_markup_with_mnemonic(GtkLabel * label,
						   const gchar * str);
    extern void gtk_label_set_max_width_chars(GtkLabel * label,
					      gint n_chars);
    extern void gtk_label_set_mnemonic_widget(GtkLabel * label,
					      GtkWidget * widget);
    extern void gtk_label_set_pattern(GtkLabel * label,
				      const gchar * pattern);
    extern void gtk_label_set_selectable(GtkLabel * label,
					 gboolean setting);
    extern void gtk_label_set_single_line_mode(GtkLabel * label,
					       gboolean single_line_mode);
    extern void gtk_label_set_text(GtkLabel * label, const gchar * str);
    extern void gtk_label_set_text_with_mnemonic(GtkLabel * label,
						 const gchar * str);
    extern void gtk_label_set_use_markup(GtkLabel * label,
					 gboolean setting);
    extern void gtk_label_set_use_underline(GtkLabel * label,
					    gboolean setting);
    extern void gtk_label_set_width_chars(GtkLabel * label, gint n_chars);
    extern GtkAdjustment *gtk_layout_get_hadjustment(GtkLayout * layout);
    extern void gtk_layout_get_size(GtkLayout * layout, guint * width,
				    guint * height);
    extern GType gtk_layout_get_type(void);
    extern GtkAdjustment *gtk_layout_get_vadjustment(GtkLayout * layout);
    extern void gtk_layout_move(GtkLayout * layout,
				GtkWidget * child_widget, gint x, gint y);
    extern GtkWidget *gtk_layout_new(GtkAdjustment * hadjustment,
				     GtkAdjustment * vadjustment);
    extern void gtk_layout_put(GtkLayout * layout,
			       GtkWidget * child_widget, gint x, gint y);
    extern void gtk_layout_set_hadjustment(GtkLayout * layout,
					   GtkAdjustment * adjustment);
    extern void gtk_layout_set_size(GtkLayout * layout, guint width,
				    guint height);
    extern void gtk_layout_set_vadjustment(GtkLayout * layout,
					   GtkAdjustment * adjustment);
    extern void gtk_list_store_append(GtkListStore * list_store,
				      GtkTreeIter * iter);
    extern void gtk_list_store_clear(GtkListStore * list_store);
    extern GType gtk_list_store_get_type(void);
    extern void gtk_list_store_insert(GtkListStore * list_store,
				      GtkTreeIter * iter, gint position);
    extern void gtk_list_store_insert_after(GtkListStore * list_store,
					    GtkTreeIter * iter,
					    GtkTreeIter * sibling);
    extern void gtk_list_store_insert_before(GtkListStore * list_store,
					     GtkTreeIter * iter,
					     GtkTreeIter * sibling);
    extern void gtk_list_store_insert_with_values(GtkListStore *
						  list_store,
						  GtkTreeIter * iter,
						  gint position, ...);
    extern void gtk_list_store_insert_with_valuesv(GtkListStore *
						   list_store,
						   GtkTreeIter * iter,
						   gint position,
						   gint * columns,
						   GValue * values,
						   gint n_values);
    extern gboolean gtk_list_store_iter_is_valid(GtkListStore * list_store,
						 GtkTreeIter * iter);
    extern void gtk_list_store_move_after(GtkListStore * store,
					  GtkTreeIter * iter,
					  GtkTreeIter * position);
    extern void gtk_list_store_move_before(GtkListStore * store,
					   GtkTreeIter * iter,
					   GtkTreeIter * position);
    extern GtkListStore *gtk_list_store_new(gint n_columns, ...);
    extern GtkListStore *gtk_list_store_newv(gint n_columns,
					     GType * types);
    extern void gtk_list_store_prepend(GtkListStore * list_store,
				       GtkTreeIter * iter);
    extern gboolean gtk_list_store_remove(GtkListStore * list_store,
					  GtkTreeIter * iter);
    extern void gtk_list_store_reorder(GtkListStore * store,
				       gint * new_order);
    extern void gtk_list_store_set(GtkListStore * list_store,
				   GtkTreeIter * iter, ...);
    extern void gtk_list_store_set_column_types(GtkListStore * list_store,
						gint n_columns,
						GType * types);
    extern void gtk_list_store_set_valist(GtkListStore * list_store,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_list_store_set_value(GtkListStore * list_store,
					 GtkTreeIter * iter, gint column,
					 GValue * value);
    extern void gtk_list_store_swap(GtkListStore * store, GtkTreeIter * a,
				    GtkTreeIter * b);
    extern void gtk_main(void);
    extern void gtk_main_do_event(GdkEvent * event);
    extern gboolean gtk_main_iteration(void);
    extern gboolean gtk_main_iteration_do(gboolean blocking);
    extern guint gtk_main_level(void);
    extern void gtk_main_quit(void);
    extern const guint gtk_major_version;
    extern GType gtk_match_type_get_type(void);
    extern void gtk_menu_attach(GtkMenu * menu, GtkWidget * child,
				guint left_attach, guint right_attach,
				guint top_attach, guint bottom_attach);
    extern void gtk_menu_attach_to_widget(GtkMenu * menu,
					  GtkWidget * attach_widget,
					  GtkMenuDetachFunc detacher);
    extern GType gtk_menu_bar_get_type(void);
    extern GtkWidget *gtk_menu_bar_new(void);
    extern void gtk_menu_detach(GtkMenu * menu);
    extern GType gtk_menu_direction_type_get_type(void);
    extern GtkAccelGroup *gtk_menu_get_accel_group(GtkMenu * menu);
    extern GtkWidget *gtk_menu_get_active(GtkMenu * menu);
    extern GtkWidget *gtk_menu_get_attach_widget(GtkMenu * menu);
    extern GList *gtk_menu_get_for_attach_widget(GtkWidget * widget);
    extern gboolean gtk_menu_get_tearoff_state(GtkMenu * menu);
    extern const gchar *gtk_menu_get_title(GtkMenu * menu);
    extern GType gtk_menu_get_type(void);
    extern void gtk_menu_item_activate(GtkMenuItem * menu_item);
    extern void gtk_menu_item_deselect(GtkMenuItem * menu_item);
    extern gboolean gtk_menu_item_get_right_justified(GtkMenuItem *
						      menu_item);
    extern GtkWidget *gtk_menu_item_get_submenu(GtkMenuItem * menu_item);
    extern GType gtk_menu_item_get_type(void);
    extern GtkWidget *gtk_menu_item_new(void);
    extern GtkWidget *gtk_menu_item_new_with_label(const gchar * label);
    extern GtkWidget *gtk_menu_item_new_with_mnemonic(const gchar * label);
    /* gtk_menu_item_remove_submenu is deprecated and should not be used in newly-written code. Use gtk_menu_item_set_submenu instead. */
    extern void gtk_menu_item_remove_submenu(GtkMenuItem * menu_item)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern void gtk_menu_item_select(GtkMenuItem * menu_item);
    extern void gtk_menu_item_set_accel_path(GtkMenuItem * menu_item,
					     const gchar * accel_path);
    extern void gtk_menu_item_set_right_justified(GtkMenuItem * menu_item,
						  gboolean
						  right_justified);
    extern void gtk_menu_item_set_submenu(GtkMenuItem * menu_item,
					  GtkWidget * submenu);
    extern void gtk_menu_item_toggle_size_allocate(GtkMenuItem * menu_item,
						   gint allocation);
    extern void gtk_menu_item_toggle_size_request(GtkMenuItem * menu_item,
						  gint * requisition);
    extern GtkWidget *gtk_menu_new(void);
    extern void gtk_menu_popdown(GtkMenu * menu);
    extern void gtk_menu_popup(GtkMenu * menu,
			       GtkWidget * parent_menu_shell,
			       GtkWidget * parent_menu_item,
			       GtkMenuPositionFunc func, gpointer data,
			       guint button, guint32 activate_time);
    extern void gtk_menu_reorder_child(GtkMenu * menu, GtkWidget * child,
				       gint position);
    extern void gtk_menu_reposition(GtkMenu * menu);
    extern void gtk_menu_set_accel_group(GtkMenu * menu,
					 GtkAccelGroup * accel_group);
    extern void gtk_menu_set_accel_path(GtkMenu * menu,
					const gchar * accel_path);
    extern void gtk_menu_set_active(GtkMenu * menu, guint index_);
    extern void gtk_menu_set_monitor(GtkMenu * menu, gint monitor_num);
    extern void gtk_menu_set_screen(GtkMenu * menu, GdkScreen * screen);
    extern void gtk_menu_set_tearoff_state(GtkMenu * menu,
					   gboolean torn_off);
    extern void gtk_menu_set_title(GtkMenu * menu, const gchar * title);
    extern void gtk_menu_shell_activate_item(GtkMenuShell * menu_shell,
					     GtkWidget * menu_item,
					     gboolean force_deactivate);
    extern void gtk_menu_shell_append(GtkMenuShell * menu_shell,
				      GtkWidget * child);
    extern void gtk_menu_shell_cancel(GtkMenuShell * menu_shell);
    extern void gtk_menu_shell_deactivate(GtkMenuShell * menu_shell);
    extern void gtk_menu_shell_deselect(GtkMenuShell * menu_shell);
    extern GType gtk_menu_shell_get_type(void);
    extern void gtk_menu_shell_insert(GtkMenuShell * menu_shell,
				      GtkWidget * child, gint position);
    extern void gtk_menu_shell_prepend(GtkMenuShell * menu_shell,
				       GtkWidget * child);
    extern void gtk_menu_shell_select_first(GtkMenuShell * menu_shell,
					    gboolean search_sensitive);
    extern void gtk_menu_shell_select_item(GtkMenuShell * menu_shell,
					   GtkWidget * menu_item);
    extern GtkWidget *gtk_menu_tool_button_get_menu(GtkMenuToolButton *
						    button);
    extern GType gtk_menu_tool_button_get_type(void);
    extern GtkToolItem *gtk_menu_tool_button_new(GtkWidget * icon_widget,
						 const gchar * label);
    extern GtkToolItem *gtk_menu_tool_button_new_from_stock(const gchar *
							    stock_id);
    extern void gtk_menu_tool_button_set_arrow_tooltip(GtkMenuToolButton *
						       button,
						       GtkTooltips *
						       tooltips,
						       const gchar *
						       tip_text,
						       const gchar *
						       tip_private);
    extern void gtk_menu_tool_button_set_menu(GtkMenuToolButton * button,
					      GtkWidget * menu);
    extern void gtk_message_dialog_format_secondary_markup(GtkMessageDialog
							   *
							   message_dialog,
							   const gchar *
							   message_format,
							   ...);
    extern void gtk_message_dialog_format_secondary_text(GtkMessageDialog *
							 message_dialog,
							 const gchar *
							 message_format,
							 ...);
    extern GType gtk_message_dialog_get_type(void);
    extern GtkWidget *gtk_message_dialog_new(GtkWindow * parent,
					     GtkDialogFlags flags,
					     GtkMessageType type,
					     GtkButtonsType buttons,
					     const gchar * message_format,
					     ...);
    extern GtkWidget *gtk_message_dialog_new_with_markup(GtkWindow *
							 parent,
							 GtkDialogFlags
							 flags,
							 GtkMessageType
							 type,
							 GtkButtonsType
							 buttons,
							 const gchar *
							 message_format,
							 ...);
    extern void gtk_message_dialog_set_markup(GtkMessageDialog *
					      message_dialog,
					      const gchar * str);
    extern GType gtk_message_type_get_type(void);
    extern GType gtk_metric_type_get_type(void);
    extern const guint gtk_micro_version;
    extern const guint gtk_minor_version;
    extern void gtk_misc_get_alignment(GtkMisc * misc, gfloat * xalign,
				       gfloat * yalign);
    extern void gtk_misc_get_padding(GtkMisc * misc, gint * xpad,
				     gint * ypad);
    extern GType gtk_misc_get_type(void);
    extern void gtk_misc_set_alignment(GtkMisc * misc, gfloat xalign,
				       gfloat yalign);
    extern void gtk_misc_set_padding(GtkMisc * misc, gint xpad, gint ypad);
    extern GType gtk_movement_step_get_type(void);
    extern gint gtk_notebook_append_page(GtkNotebook * notebook,
					 GtkWidget * child,
					 GtkWidget * tab_label);
    extern gint gtk_notebook_append_page_menu(GtkNotebook * notebook,
					      GtkWidget * child,
					      GtkWidget * tab_label,
					      GtkWidget * menu_label);
    extern gint gtk_notebook_get_current_page(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_menu_label(GtkNotebook * notebook,
						  GtkWidget * child);
    extern const gchar *gtk_notebook_get_menu_label_text(GtkNotebook *
							 notebook,
							 GtkWidget *
							 child);
    extern gint gtk_notebook_get_n_pages(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_nth_page(GtkNotebook * notebook,
						gint page_num);
    extern gboolean gtk_notebook_get_scrollable(GtkNotebook * notebook);
    extern gboolean gtk_notebook_get_show_border(GtkNotebook * notebook);
    extern gboolean gtk_notebook_get_show_tabs(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_tab_label(GtkNotebook * notebook,
						 GtkWidget * child);
    extern const gchar *gtk_notebook_get_tab_label_text(GtkNotebook *
							notebook,
							GtkWidget * child);
    extern GtkPositionType gtk_notebook_get_tab_pos(GtkNotebook *
						    notebook);
    extern GType gtk_notebook_get_type(void);
    extern gint gtk_notebook_insert_page(GtkNotebook * notebook,
					 GtkWidget * child,
					 GtkWidget * tab_label,
					 gint position);
    extern gint gtk_notebook_insert_page_menu(GtkNotebook * notebook,
					      GtkWidget * child,
					      GtkWidget * tab_label,
					      GtkWidget * menu_label,
					      gint position);
    extern GtkWidget *gtk_notebook_new(void);
    extern void gtk_notebook_next_page(GtkNotebook * notebook);
    extern gint gtk_notebook_page_num(GtkNotebook * notebook,
				      GtkWidget * child);
    extern void gtk_notebook_popup_disable(GtkNotebook * notebook);
    extern void gtk_notebook_popup_enable(GtkNotebook * notebook);
    extern gint gtk_notebook_prepend_page(GtkNotebook * notebook,
					  GtkWidget * child,
					  GtkWidget * tab_label);
    extern gint gtk_notebook_prepend_page_menu(GtkNotebook * notebook,
					       GtkWidget * child,
					       GtkWidget * tab_label,
					       GtkWidget * menu_label);
    extern void gtk_notebook_prev_page(GtkNotebook * notebook);
    extern void gtk_notebook_query_tab_label_packing(GtkNotebook *
						     notebook,
						     GtkWidget * child,
						     gboolean * expand,
						     gboolean * fill,
						     GtkPackType *
						     pack_type);
    extern void gtk_notebook_remove_page(GtkNotebook * notebook,
					 gint page_num);
    extern void gtk_notebook_reorder_child(GtkNotebook * notebook,
					   GtkWidget * child,
					   gint position);
    extern void gtk_notebook_set_current_page(GtkNotebook * notebook,
					      gint page_num);
    extern void gtk_notebook_set_menu_label(GtkNotebook * notebook,
					    GtkWidget * child,
					    GtkWidget * menu_label);
    extern void gtk_notebook_set_menu_label_text(GtkNotebook * notebook,
						 GtkWidget * child,
						 const gchar * menu_text);
    extern void gtk_notebook_set_scrollable(GtkNotebook * notebook,
					    gboolean scrollable);
    extern void gtk_notebook_set_show_border(GtkNotebook * notebook,
					     gboolean show_border);
    extern void gtk_notebook_set_show_tabs(GtkNotebook * notebook,
					   gboolean show_tabs);
    extern void gtk_notebook_set_tab_label(GtkNotebook * notebook,
					   GtkWidget * child,
					   GtkWidget * tab_label);
    extern void gtk_notebook_set_tab_label_packing(GtkNotebook * notebook,
						   GtkWidget * child,
						   gboolean expand,
						   gboolean fill,
						   GtkPackType pack_type);
    extern void gtk_notebook_set_tab_label_text(GtkNotebook * notebook,
						GtkWidget * child,
						const gchar * tab_text);
    extern void gtk_notebook_set_tab_pos(GtkNotebook * notebook,
					 GtkPositionType pos);
    extern GType gtk_notebook_tab_get_type(void);
    extern void gtk_object_destroy(GtkObject * object);
    extern GType gtk_object_flags_get_type(void);
    extern long unsigned int gtk_object_get_type(void);
    extern void gtk_object_sink(GtkObject * object);
    extern GType gtk_orientation_get_type(void);
    extern GType gtk_pack_type_get_type(void);
    extern void gtk_paint_arrow(GtkStyle * style, GdkWindow * window,
				GtkStateType state_type,
				GtkShadowType shadow_type,
				const GdkRectangle * area,
				GtkWidget * widget, const gchar * detail,
				GtkArrowType arrow_type, gboolean fill,
				gint x, gint y, gint width, gint height);
    extern void gtk_paint_box(GtkStyle * style, GdkWindow * window,
			      GtkStateType state_type,
			      GtkShadowType shadow_type,
			      const GdkRectangle * area,
			      GtkWidget * widget, const gchar * detail,
			      gint x, gint y, gint width, gint height);
    extern void gtk_paint_box_gap(GtkStyle * style, GdkWindow * window,
				  GtkStateType state_type,
				  GtkShadowType shadow_type,
				  const GdkRectangle * area,
				  GtkWidget * widget, const gchar * detail,
				  gint x, gint y, gint width, gint height,
				  GtkPositionType gap_side, gint gap_x,
				  gint gap_width);
    extern void gtk_paint_check(GtkStyle * style, GdkWindow * window,
				GtkStateType state_type,
				GtkShadowType shadow_type,
				const GdkRectangle * area,
				GtkWidget * widget, const gchar * detail,
				gint x, gint y, gint width, gint height);
    extern void gtk_paint_diamond(GtkStyle * style, GdkWindow * window,
				  GtkStateType state_type,
				  GtkShadowType shadow_type,
				  const GdkRectangle * area,
				  GtkWidget * widget, const gchar * detail,
				  gint x, gint y, gint width, gint height);
    extern void gtk_paint_expander(GtkStyle * style, GdkWindow * window,
				   GtkStateType state_type,
				   const GdkRectangle * area,
				   GtkWidget * widget,
				   const gchar * detail, gint x, gint y,
				   GtkExpanderStyle expander_style);
    extern void gtk_paint_extension(GtkStyle * style, GdkWindow * window,
				    GtkStateType state_type,
				    GtkShadowType shadow_type,
				    const GdkRectangle * area,
				    GtkWidget * widget,
				    const gchar * detail, gint x, gint y,
				    gint width, gint height,
				    GtkPositionType gap_side);
    extern void gtk_paint_flat_box(GtkStyle * style, GdkWindow * window,
				   GtkStateType state_type,
				   GtkShadowType shadow_type,
				   const GdkRectangle * area,
				   GtkWidget * widget,
				   const gchar * detail, gint x, gint y,
				   gint width, gint height);
    extern void gtk_paint_focus(GtkStyle * style, GdkWindow * window,
				GtkStateType state_type,
				const GdkRectangle * area,
				GtkWidget * widget, const gchar * detail,
				gint x, gint y, gint width, gint height);
    extern void gtk_paint_handle(GtkStyle * style, GdkWindow * window,
				 GtkStateType state_type,
				 GtkShadowType shadow_type,
				 const GdkRectangle * area,
				 GtkWidget * widget, const gchar * detail,
				 gint x, gint y, gint width, gint height,
				 GtkOrientation orientation);
    extern void gtk_paint_hline(GtkStyle * style, GdkWindow * window,
				GtkStateType state_type,
				const GdkRectangle * area,
				GtkWidget * widget, const gchar * detail,
				gint x1, gint x2, gint y);
    extern void gtk_paint_layout(GtkStyle * style, GdkWindow * window,
				 GtkStateType state_type,
				 gboolean use_text,
				 const GdkRectangle * area,
				 GtkWidget * widget, const gchar * detail,
				 gint x, gint y, PangoLayout * layout);
    extern void gtk_paint_option(GtkStyle * style, GdkWindow * window,
				 GtkStateType state_type,
				 GtkShadowType shadow_type,
				 const GdkRectangle * area,
				 GtkWidget * widget, const gchar * detail,
				 gint x, gint y, gint width, gint height);
    extern void gtk_paint_polygon(GtkStyle * style, GdkWindow * window,
				  GtkStateType state_type,
				  GtkShadowType shadow_type,
				  const GdkRectangle * area,
				  GtkWidget * widget, const gchar * detail,
				  const GdkPoint * points, gint npoints,
				  gboolean fill);
    extern void gtk_paint_resize_grip(GtkStyle * style, GdkWindow * window,
				      GtkStateType state_type,
				      const GdkRectangle * area,
				      GtkWidget * widget,
				      const gchar * detail,
				      GdkWindowEdge edge, gint x, gint y,
				      gint width, gint height);
    extern void gtk_paint_shadow(GtkStyle * style, GdkWindow * window,
				 GtkStateType state_type,
				 GtkShadowType shadow_type,
				 const GdkRectangle * area,
				 GtkWidget * widget, const gchar * detail,
				 gint x, gint y, gint width, gint height);
    extern void gtk_paint_shadow_gap(GtkStyle * style, GdkWindow * window,
				     GtkStateType state_type,
				     GtkShadowType shadow_type,
				     const GdkRectangle * area,
				     GtkWidget * widget,
				     const gchar * detail, gint x, gint y,
				     gint width, gint height,
				     GtkPositionType gap_side, gint gap_x,
				     gint gap_width);
    extern void gtk_paint_slider(GtkStyle * style, GdkWindow * window,
				 GtkStateType state_type,
				 GtkShadowType shadow_type,
				 const GdkRectangle * area,
				 GtkWidget * widget, const gchar * detail,
				 gint x, gint y, gint width, gint height,
				 GtkOrientation orientation);
    extern void gtk_paint_tab(GtkStyle * style, GdkWindow * window,
			      GtkStateType state_type,
			      GtkShadowType shadow_type,
			      const GdkRectangle * area,
			      GtkWidget * widget, const gchar * detail,
			      gint x, gint y, gint width, gint height);
    extern void gtk_paint_vline(GtkStyle * style, GdkWindow * window,
				GtkStateType state_type,
				const GdkRectangle * area,
				GtkWidget * widget, const gchar * detail,
				gint y1_, gint y2_, gint x);
    extern void gtk_paned_add1(GtkPaned * paned, GtkWidget * child);
    extern void gtk_paned_add2(GtkPaned * paned, GtkWidget * child);
    extern GtkWidget *gtk_paned_get_child1(GtkPaned * paned);
    extern GtkWidget *gtk_paned_get_child2(GtkPaned * paned);
    extern gint gtk_paned_get_position(GtkPaned * paned);
    extern GType gtk_paned_get_type(void);
    extern void gtk_paned_pack1(GtkPaned * paned, GtkWidget * child,
				gboolean resize, gboolean shrink);
    extern void gtk_paned_pack2(GtkPaned * paned, GtkWidget * child,
				gboolean resize, gboolean shrink);
    extern void gtk_paned_set_position(GtkPaned * paned, gint position);
    extern gboolean gtk_parse_args(int *argc, char ***argv);
    extern GType gtk_path_priority_type_get_type(void);
    extern GType gtk_path_type_get_type(void);
    extern void gtk_plug_construct(GtkPlug * plug,
				   GdkNativeWindow socket_id);
    extern void gtk_plug_construct_for_display(GtkPlug * plug,
					       GdkDisplay * display,
					       GdkNativeWindow socket_id);
    extern GdkNativeWindow gtk_plug_get_id(GtkPlug * plug);
    extern GType gtk_plug_get_type(void);
    extern GtkWidget *gtk_plug_new(GdkNativeWindow socket_id);
    extern GtkWidget *gtk_plug_new_for_display(GdkDisplay * display,
					       GdkNativeWindow socket_id);
    extern GType gtk_policy_type_get_type(void);
    extern GType gtk_position_type_get_type(void);
    extern PangoEllipsizeMode gtk_progress_bar_get_ellipsize(GtkProgressBar
							     * pbar);
    extern gdouble gtk_progress_bar_get_fraction(GtkProgressBar * pbar);
    extern GtkProgressBarOrientation
	gtk_progress_bar_get_orientation(GtkProgressBar * pbar);
    extern gdouble gtk_progress_bar_get_pulse_step(GtkProgressBar * pbar);
    extern const gchar *gtk_progress_bar_get_text(GtkProgressBar * pbar);
    extern GType gtk_progress_bar_get_type(void);
    extern GtkWidget *gtk_progress_bar_new(void);
    extern GType gtk_progress_bar_orientation_get_type(void);
    extern void gtk_progress_bar_pulse(GtkProgressBar * pbar);
    extern void gtk_progress_bar_set_ellipsize(GtkProgressBar * pbar,
					       PangoEllipsizeMode mode);
    extern void gtk_progress_bar_set_fraction(GtkProgressBar * pbar,
					      gdouble fraction);
    extern void gtk_progress_bar_set_orientation(GtkProgressBar * pbar,
						 GtkProgressBarOrientation
						 orientation);
    extern void gtk_progress_bar_set_pulse_step(GtkProgressBar * pbar,
						gdouble fraction);
    extern void gtk_progress_bar_set_text(GtkProgressBar * pbar,
					  const gchar * text);
    extern GType gtk_progress_bar_style_get_type(void);
    extern void gtk_propagate_event(GtkWidget * widget, GdkEvent * event);
    extern guint gtk_quit_add(guint main_level, GtkFunction function,
			      gpointer data);
    extern void gtk_quit_add_destroy(guint main_level, GtkObject * object);
    extern guint gtk_quit_add_full(guint main_level, GtkFunction function,
				   GtkCallbackMarshal marshal,
				   gpointer data,
				   GtkDestroyNotify destroy);
    extern void gtk_quit_remove(guint quit_handler_id);
    extern void gtk_quit_remove_by_data(gpointer data);
    extern gint gtk_radio_action_get_current_value(GtkRadioAction *
						   action);
    extern GSList *gtk_radio_action_get_group(GtkRadioAction * action);
    extern GType gtk_radio_action_get_type(void);
    extern GtkRadioAction *gtk_radio_action_new(const gchar * name,
						const gchar * label,
						const gchar * tooltip,
						const gchar * stock_id,
						gint value);
    extern void gtk_radio_action_set_group(GtkRadioAction * action,
					   GSList * group);
    extern GSList *gtk_radio_button_get_group(GtkRadioButton *
					      radio_button);
    extern GType gtk_radio_button_get_type(void);
    extern GtkWidget *gtk_radio_button_new(GSList * group);
    extern GtkWidget *gtk_radio_button_new_from_widget(GtkRadioButton *
						       radio_group_member);
    extern GtkWidget *gtk_radio_button_new_with_label(GSList * group,
						      const gchar * label);
    extern GtkWidget
	*gtk_radio_button_new_with_label_from_widget(GtkRadioButton *
						     radio_group_member,
						     const gchar * label);
    extern GtkWidget *gtk_radio_button_new_with_mnemonic(GSList * group,
							 const gchar *
							 label);
    extern GtkWidget
	*gtk_radio_button_new_with_mnemonic_from_widget(GtkRadioButton *
							radio_group_member,
							const gchar *
							label);
    extern void gtk_radio_button_set_group(GtkRadioButton * radio_button,
					   GSList * group);
    extern GSList *gtk_radio_menu_item_get_group(GtkRadioMenuItem *
						 radio_menu_item);
    extern GType gtk_radio_menu_item_get_type(void);
    extern GtkWidget *gtk_radio_menu_item_new(GSList * group);
    extern GtkWidget *gtk_radio_menu_item_new_from_widget(GtkRadioMenuItem
							  * group);
    extern GtkWidget *gtk_radio_menu_item_new_with_label(GSList * group,
							 const gchar *
							 label);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_label_from_widget(GtkRadioMenuItem *
							group,
							const gchar *
							label);
    extern GtkWidget *gtk_radio_menu_item_new_with_mnemonic(GSList * group,
							    const gchar *
							    label);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_mnemonic_from_widget(GtkRadioMenuItem
							   * group,
							   const gchar *
							   label);
    extern void gtk_radio_menu_item_set_group(GtkRadioMenuItem *
					      radio_menu_item,
					      GSList * group);
    extern GSList *gtk_radio_tool_button_get_group(GtkRadioToolButton *
						   button);
    extern GType gtk_radio_tool_button_get_type(void);
    extern GtkToolItem *gtk_radio_tool_button_new(GSList * group);
    extern GtkToolItem *gtk_radio_tool_button_new_from_stock(GSList *
							     group,
							     const gchar *
							     stock_id);
    extern GtkToolItem
	*gtk_radio_tool_button_new_from_widget(GtkRadioToolButton * group);
    extern GtkToolItem
	*gtk_radio_tool_button_new_with_stock_from_widget
	(GtkRadioToolButton * group, const gchar * stock_id);
    extern void gtk_radio_tool_button_set_group(GtkRadioToolButton *
						button, GSList * group);
    extern GtkAdjustment *gtk_range_get_adjustment(GtkRange * range);
    extern gboolean gtk_range_get_inverted(GtkRange * range);
    extern GType gtk_range_get_type(void);
    extern GtkUpdateType gtk_range_get_update_policy(GtkRange * range);
    extern gdouble gtk_range_get_value(GtkRange * range);
    extern void gtk_range_set_adjustment(GtkRange * range,
					 GtkAdjustment * adjustment);
    extern void gtk_range_set_increments(GtkRange * range, gdouble step,
					 gdouble page);
    extern void gtk_range_set_inverted(GtkRange * range, gboolean setting);
    extern void gtk_range_set_range(GtkRange * range, gdouble min,
				    gdouble max);
    extern void gtk_range_set_update_policy(GtkRange * range,
					    GtkUpdateType policy);
    extern void gtk_range_set_value(GtkRange * range, gdouble value);
    extern void gtk_rc_add_default_file(const gchar * filename);
    extern gchar *gtk_rc_find_module_in_path(const gchar * module_file);
    extern gchar *gtk_rc_find_pixmap_in_path(GtkSettings * settings,
					     GScanner * scanner,
					     const gchar * pixmap_file);
    extern GType gtk_rc_flags_get_type(void);
    extern gchar **gtk_rc_get_default_files(void);
    extern gchar *gtk_rc_get_im_module_file(void);
    extern gchar *gtk_rc_get_im_module_path(void);
    extern gchar *gtk_rc_get_module_dir(void);
    extern GtkStyle *gtk_rc_get_style(GtkWidget * widget);
    extern GtkStyle *gtk_rc_get_style_by_paths(GtkSettings * settings,
					       const char *widget_path,
					       const char *class_path,
					       GType type);
    extern gchar *gtk_rc_get_theme_dir(void);
    extern void gtk_rc_parse(const gchar * filename);
    extern guint gtk_rc_parse_color(GScanner * scanner, GdkColor * color);
    extern guint gtk_rc_parse_priority(GScanner * scanner,
				       GtkPathPriorityType * priority);
    extern guint gtk_rc_parse_state(GScanner * scanner,
				    GtkStateType * state);
    extern void gtk_rc_parse_string(const gchar * rc_string);
    extern gboolean gtk_rc_property_parse_border(const GParamSpec * pspec,
						 const GString * gstring,
						 GValue * property_value);
    extern gboolean gtk_rc_property_parse_color(const GParamSpec * pspec,
						const GString * gstring,
						GValue * property_value);
    extern gboolean gtk_rc_property_parse_enum(const GParamSpec * pspec,
					       const GString * gstring,
					       GValue * property_value);
    extern gboolean gtk_rc_property_parse_flags(const GParamSpec * pspec,
						const GString * gstring,
						GValue * property_value);
    extern gboolean gtk_rc_property_parse_requisition(const GParamSpec *
						      pspec,
						      const GString *
						      gstring,
						      GValue *
						      property_value);
    extern gboolean gtk_rc_reparse_all(void);
    extern gboolean gtk_rc_reparse_all_for_settings(GtkSettings * settings,
						    gboolean force_load);
    extern void gtk_rc_reset_styles(GtkSettings * settings);
    extern GScanner *gtk_rc_scanner_new(void);
    extern void gtk_rc_set_default_files(gchar * *filenames);
    extern GtkRcStyle *gtk_rc_style_copy(GtkRcStyle * orig);
    extern GType gtk_rc_style_get_type(void);
    extern GtkRcStyle *gtk_rc_style_new(void);
    /* gtk_rc_style_ref is deprecated and should not be used in newly-written code. Use g_object_ref instead. */
    extern void gtk_rc_style_ref(GtkRcStyle * rc_style)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    /* gtk_rc_style_unref is deprecated and should not be used in newly-written code. Use g_object_unref instead. */
    extern void gtk_rc_style_unref(GtkRcStyle * rc_style)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern GType gtk_rc_token_type_get_type(void);
    extern GType gtk_relief_style_get_type(void);
    extern GtkRequisition *gtk_requisition_copy(const GtkRequisition *
						requisition);
    extern void gtk_requisition_free(GtkRequisition * requisition);
    extern GType gtk_requisition_get_type(void);
    extern GType gtk_resize_mode_get_type(void);
    extern GType gtk_response_type_get_type(void);
    extern void gtk_ruler_draw_pos(GtkRuler * ruler);
    extern void gtk_ruler_draw_ticks(GtkRuler * ruler);
    extern GtkMetricType gtk_ruler_get_metric(GtkRuler * ruler);
    extern void gtk_ruler_get_range(GtkRuler * ruler, gdouble * lower,
				    gdouble * upper, gdouble * position,
				    gdouble * max_size);
    extern GType gtk_ruler_get_type(void);
    extern void gtk_ruler_set_metric(GtkRuler * ruler,
				     GtkMetricType metric);
    extern void gtk_ruler_set_range(GtkRuler * ruler, gdouble lower,
				    gdouble upper, gdouble position,
				    gdouble max_size);
    extern gint gtk_scale_get_digits(GtkScale * scale);
    extern gboolean gtk_scale_get_draw_value(GtkScale * scale);
    extern PangoLayout *gtk_scale_get_layout(GtkScale * scale);
    extern void gtk_scale_get_layout_offsets(GtkScale * scale, gint * x,
					     gint * y);
    extern GType gtk_scale_get_type(void);
    extern GtkPositionType gtk_scale_get_value_pos(GtkScale * scale);
    extern void gtk_scale_set_digits(GtkScale * scale, gint digits);
    extern void gtk_scale_set_draw_value(GtkScale * scale,
					 gboolean draw_value);
    extern void gtk_scale_set_value_pos(GtkScale * scale,
					GtkPositionType pos);
    extern GType gtk_scroll_step_get_type(void);
    extern GType gtk_scroll_type_get_type(void);
    extern GType gtk_scrollbar_get_type(void);
    extern void gtk_scrolled_window_add_with_viewport(GtkScrolledWindow *
						      scrolled_window,
						      GtkWidget * child);
    extern GtkAdjustment
	*gtk_scrolled_window_get_hadjustment(GtkScrolledWindow *
					     scrolled_window);
    extern GtkCornerType
	gtk_scrolled_window_get_placement(GtkScrolledWindow *
					  scrolled_window);
    extern void gtk_scrolled_window_get_policy(GtkScrolledWindow *
					       scrolled_window,
					       GtkPolicyType *
					       hscrollbar_policy,
					       GtkPolicyType *
					       vscrollbar_policy);
    extern GtkShadowType
	gtk_scrolled_window_get_shadow_type(GtkScrolledWindow *
					    scrolled_window);
    extern GType gtk_scrolled_window_get_type(void);
    extern GtkAdjustment
	*gtk_scrolled_window_get_vadjustment(GtkScrolledWindow *
					     scrolled_window);
    extern GtkWidget *gtk_scrolled_window_new(GtkAdjustment * hadjustment,
					      GtkAdjustment * vadjustment);
    extern void gtk_scrolled_window_set_hadjustment(GtkScrolledWindow *
						    scrolled_window,
						    GtkAdjustment *
						    hadjustment);
    extern void gtk_scrolled_window_set_placement(GtkScrolledWindow *
						  scrolled_window,
						  GtkCornerType
						  window_placement);
    extern void gtk_scrolled_window_set_policy(GtkScrolledWindow *
					       scrolled_window,
					       GtkPolicyType
					       hscrollbar_policy,
					       GtkPolicyType
					       vscrollbar_policy);
    extern void gtk_scrolled_window_set_shadow_type(GtkScrolledWindow *
						    scrolled_window,
						    GtkShadowType type);
    extern void gtk_scrolled_window_set_vadjustment(GtkScrolledWindow *
						    scrolled_window,
						    GtkAdjustment *
						    vadjustment);
    extern void gtk_selection_add_target(GtkWidget * widget,
					 GdkAtom selection, GdkAtom target,
					 guint info);
    extern void gtk_selection_add_targets(GtkWidget * widget,
					  GdkAtom selection,
					  const GtkTargetEntry * targets,
					  guint ntargets);
    extern void gtk_selection_clear_targets(GtkWidget * widget,
					    GdkAtom selection);
    extern gboolean gtk_selection_convert(GtkWidget * widget,
					  GdkAtom selection,
					  GdkAtom target, guint32 time_);
    extern GtkSelectionData *gtk_selection_data_copy(GtkSelectionData *
						     data);
    extern void gtk_selection_data_free(GtkSelectionData * data);
    extern GdkPixbuf *gtk_selection_data_get_pixbuf(GtkSelectionData *
						    selection_data);
    extern gboolean gtk_selection_data_get_targets(GtkSelectionData *
						   selection_data,
						   GdkAtom * *targets,
						   gint * n_atoms);
    extern guchar *gtk_selection_data_get_text(GtkSelectionData *
					       selection_data);
    extern GType gtk_selection_data_get_type(void);
    extern gchar **gtk_selection_data_get_uris(GtkSelectionData *
					       selection_data);
    extern void gtk_selection_data_set(GtkSelectionData * selection_data,
				       GdkAtom type, gint format,
				       const guchar * data, gint length);
    extern gboolean gtk_selection_data_set_pixbuf(GtkSelectionData *
						  selection_data,
						  GdkPixbuf * pixbuf);
    extern gboolean gtk_selection_data_set_text(GtkSelectionData *
						selection_data,
						const gchar * str,
						gint len);
    extern gboolean gtk_selection_data_set_uris(GtkSelectionData *
						selection_data,
						gchar * *uris);
    extern gboolean
	gtk_selection_data_targets_include_image(GtkSelectionData *
						 selection_data,
						 gboolean writable);
    extern gboolean
	gtk_selection_data_targets_include_text(GtkSelectionData *
						selection_data);
    extern GType gtk_selection_mode_get_type(void);
    extern gboolean gtk_selection_owner_set(GtkWidget * widget,
					    GdkAtom selection,
					    guint32 time_);
    extern gboolean gtk_selection_owner_set_for_display(GdkDisplay *
							display,
							GtkWidget * widget,
							GdkAtom selection,
							guint32 time_);
    extern void gtk_selection_remove_all(GtkWidget * widget);
    extern GType gtk_separator_get_type(void);
    extern GType gtk_separator_menu_item_get_type(void);
    extern GtkWidget *gtk_separator_menu_item_new(void);
    extern gboolean gtk_separator_tool_item_get_draw(GtkSeparatorToolItem *
						     item);
    extern GType gtk_separator_tool_item_get_type(void);
    extern GtkToolItem *gtk_separator_tool_item_new(void);
    extern void gtk_separator_tool_item_set_draw(GtkSeparatorToolItem *
						 item, gboolean draw);
    extern gchar *gtk_set_locale(void);
    extern GtkSettings *gtk_settings_get_default(void);
    extern GtkSettings *gtk_settings_get_for_screen(GdkScreen * screen);
    extern GType gtk_settings_get_type(void);
    extern void gtk_settings_install_property(GParamSpec * pspec);
    extern void gtk_settings_install_property_parser(GParamSpec * pspec,
						     GtkRcPropertyParser
						     parser);
    extern void gtk_settings_set_double_property(GtkSettings * settings,
						 const gchar * name,
						 gdouble v_double,
						 const gchar * origin);
    extern void gtk_settings_set_long_property(GtkSettings * settings,
					       const gchar * name,
					       glong v_long,
					       const gchar * origin);
    extern void gtk_settings_set_property_value(GtkSettings * settings,
						const gchar * name,
						const GtkSettingsValue *
						svalue);
    extern void gtk_settings_set_string_property(GtkSettings * settings,
						 const gchar * name,
						 const gchar * v_string,
						 const gchar * origin);
    extern GType gtk_shadow_type_get_type(void);
    extern void gtk_show_about_dialog(GtkWindow * parent,
				      const gchar * first_property_name,
				      ...);
    extern GType gtk_side_type_get_type(void);
    extern GType gtk_signal_run_type_get_type(void);
    extern void gtk_size_group_add_widget(GtkSizeGroup * size_group,
					  GtkWidget * widget);
    extern GtkSizeGroupMode gtk_size_group_get_mode(GtkSizeGroup *
						    size_group);
    extern GType gtk_size_group_get_type(void);
    extern GType gtk_size_group_mode_get_type(void);
    extern GtkSizeGroup *gtk_size_group_new(GtkSizeGroupMode mode);
    extern void gtk_size_group_remove_widget(GtkSizeGroup * size_group,
					     GtkWidget * widget);
    extern void gtk_size_group_set_mode(GtkSizeGroup * size_group,
					GtkSizeGroupMode mode);
    extern void gtk_socket_add_id(GtkSocket * socket_,
				  GdkNativeWindow window_id);
    extern GdkNativeWindow gtk_socket_get_id(GtkSocket * socket_);
    extern GType gtk_socket_get_type(void);
    extern GtkWidget *gtk_socket_new(void);
    extern GType gtk_sort_type_get_type(void);
    extern void gtk_spin_button_configure(GtkSpinButton * spin_button,
					  GtkAdjustment * adjustment,
					  gdouble climb_rate,
					  guint digits);
    extern GtkAdjustment *gtk_spin_button_get_adjustment(GtkSpinButton *
							 spin_button);
    extern guint gtk_spin_button_get_digits(GtkSpinButton * spin_button);
    extern void gtk_spin_button_get_increments(GtkSpinButton * spin_button,
					       gdouble * step,
					       gdouble * page);
    extern gboolean gtk_spin_button_get_numeric(GtkSpinButton *
						spin_button);
    extern void gtk_spin_button_get_range(GtkSpinButton * spin_button,
					  gdouble * min, gdouble * max);
    extern gboolean gtk_spin_button_get_snap_to_ticks(GtkSpinButton *
						      spin_button);
    extern GType gtk_spin_button_get_type(void);
    extern GtkSpinButtonUpdatePolicy
	gtk_spin_button_get_update_policy(GtkSpinButton * spin_button);
    extern gdouble gtk_spin_button_get_value(GtkSpinButton * spin_button);
    extern gint gtk_spin_button_get_value_as_int(GtkSpinButton *
						 spin_button);
    extern gboolean gtk_spin_button_get_wrap(GtkSpinButton * spin_button);
    extern GtkWidget *gtk_spin_button_new(GtkAdjustment * adjustment,
					  gdouble climb_rate,
					  guint digits);
    extern GtkWidget *gtk_spin_button_new_with_range(gdouble min,
						     gdouble max,
						     gdouble step);
    extern void gtk_spin_button_set_adjustment(GtkSpinButton * spin_button,
					       GtkAdjustment * adjustment);
    extern void gtk_spin_button_set_digits(GtkSpinButton * spin_button,
					   guint digits);
    extern void gtk_spin_button_set_increments(GtkSpinButton * spin_button,
					       gdouble step, gdouble page);
    extern void gtk_spin_button_set_numeric(GtkSpinButton * spin_button,
					    gboolean numeric);
    extern void gtk_spin_button_set_range(GtkSpinButton * spin_button,
					  gdouble min, gdouble max);
    extern void gtk_spin_button_set_snap_to_ticks(GtkSpinButton *
						  spin_button,
						  gboolean snap_to_ticks);
    extern void gtk_spin_button_set_update_policy(GtkSpinButton *
						  spin_button,
						  GtkSpinButtonUpdatePolicy
						  policy);
    extern void gtk_spin_button_set_value(GtkSpinButton * spin_button,
					  gdouble value);
    extern void gtk_spin_button_set_wrap(GtkSpinButton * spin_button,
					 gboolean wrap);
    extern void gtk_spin_button_spin(GtkSpinButton * spin_button,
				     GtkSpinType direction,
				     gdouble increment);
    extern void gtk_spin_button_update(GtkSpinButton * spin_button);
    extern GType gtk_spin_button_update_policy_get_type(void);
    extern GType gtk_spin_type_get_type(void);
    extern GType gtk_state_type_get_type(void);
    extern guint gtk_statusbar_get_context_id(GtkStatusbar * statusbar,
					      const gchar *
					      context_description);
    extern gboolean gtk_statusbar_get_has_resize_grip(GtkStatusbar *
						      statusbar);
    extern GType gtk_statusbar_get_type(void);
    extern GtkWidget *gtk_statusbar_new(void);
    extern void gtk_statusbar_pop(GtkStatusbar * statusbar,
				  guint context_id);
    extern guint gtk_statusbar_push(GtkStatusbar * statusbar,
				    guint context_id, const gchar * text);
    extern void gtk_statusbar_remove(GtkStatusbar * statusbar,
				     guint context_id, guint message_id);
    extern void gtk_statusbar_set_has_resize_grip(GtkStatusbar * statusbar,
						  gboolean setting);
    extern void gtk_stock_add(const GtkStockItem * items, guint n_items);
    extern void gtk_stock_add_static(const GtkStockItem * items,
				     guint n_items);
    extern GtkStockItem *gtk_stock_item_copy(const GtkStockItem * item);
    extern void gtk_stock_item_free(GtkStockItem * item);
    extern GSList *gtk_stock_list_ids(void);
    extern gboolean gtk_stock_lookup(const gchar * stock_id,
				     GtkStockItem * item);
    extern void gtk_style_apply_default_background(GtkStyle * style,
						   GdkWindow * window,
						   gboolean set_bg,
						   GtkStateType state_type,
						   const GdkRectangle *
						   area, gint x, gint y,
						   gint width,
						   gint height);
    extern GtkStyle *gtk_style_attach(GtkStyle * style,
				      GdkWindow * window);
    extern GtkStyle *gtk_style_copy(GtkStyle * style);
    extern void gtk_style_detach(GtkStyle * style);
    extern GType gtk_style_get_type(void);
    extern GtkIconSet *gtk_style_lookup_icon_set(GtkStyle * style,
						 const char *stock_id);
    extern GtkStyle *gtk_style_new(void);
    extern GdkPixbuf *gtk_style_render_icon(GtkStyle * style,
					    const GtkIconSource * source,
					    GtkTextDirection direction,
					    GtkStateType state,
					    GtkIconSize size,
					    GtkWidget * widget,
					    const gchar * detail);
    extern void gtk_style_set_background(GtkStyle * style,
					 GdkWindow * window,
					 GtkStateType state_type);
    extern GType gtk_submenu_direction_get_type(void);
    extern GType gtk_submenu_placement_get_type(void);
    extern void gtk_table_attach(GtkTable * table, GtkWidget * child,
				 guint left_attach, guint right_attach,
				 guint top_attach, guint bottom_attach,
				 GtkAttachOptions xoptions,
				 GtkAttachOptions yoptions, guint xpadding,
				 guint ypadding);
    extern void gtk_table_attach_defaults(GtkTable * table,
					  GtkWidget * widget,
					  guint left_attach,
					  guint right_attach,
					  guint top_attach,
					  guint bottom_attach);
    extern guint gtk_table_get_col_spacing(GtkTable * table, guint column);
    extern guint gtk_table_get_default_col_spacing(GtkTable * table);
    extern guint gtk_table_get_default_row_spacing(GtkTable * table);
    extern gboolean gtk_table_get_homogeneous(GtkTable * table);
    extern guint gtk_table_get_row_spacing(GtkTable * table, guint row);
    extern GType gtk_table_get_type(void);
    extern GtkWidget *gtk_table_new(guint rows, guint columns,
				    gboolean homogeneous);
    extern void gtk_table_resize(GtkTable * table, guint rows,
				 guint columns);
    extern void gtk_table_set_col_spacing(GtkTable * table, guint column,
					  guint spacing);
    extern void gtk_table_set_col_spacings(GtkTable * table,
					   guint spacing);
    extern void gtk_table_set_homogeneous(GtkTable * table,
					  gboolean homogeneous);
    extern void gtk_table_set_row_spacing(GtkTable * table, guint row,
					  guint spacing);
    extern void gtk_table_set_row_spacings(GtkTable * table,
					   guint spacing);
    extern GType gtk_target_flags_get_type(void);
    extern void gtk_target_list_add(GtkTargetList * list, GdkAtom target,
				    guint flags, guint info);
    extern void gtk_target_list_add_image_targets(GtkTargetList * list,
						  guint info,
						  gboolean writable);
    extern void gtk_target_list_add_table(GtkTargetList * list,
					  const GtkTargetEntry * targets,
					  guint ntargets);
    extern void gtk_target_list_add_text_targets(GtkTargetList * list,
						 guint info);
    extern void gtk_target_list_add_uri_targets(GtkTargetList * list,
						guint info);
    extern gboolean gtk_target_list_find(GtkTargetList * list,
					 GdkAtom target, guint * info);
    extern GtkTargetList *gtk_target_list_new(const GtkTargetEntry *
					      targets, guint ntargets);
    extern void gtk_target_list_remove(GtkTargetList * list,
				       GdkAtom target);
    extern void gtk_target_list_unref(GtkTargetList * list);
    extern GType gtk_tearoff_menu_item_get_type(void);
    extern GtkWidget *gtk_tearoff_menu_item_new(void);
    extern GtkTextAttributes *gtk_text_attributes_copy(GtkTextAttributes *
						       src);
    extern void gtk_text_attributes_copy_values(GtkTextAttributes * src,
						GtkTextAttributes * dest);
    extern GType gtk_text_attributes_get_type(void);
    extern GtkTextAttributes *gtk_text_attributes_new(void);
    extern GtkTextAttributes *gtk_text_attributes_ref(GtkTextAttributes *
						      values);
    extern void gtk_text_attributes_unref(GtkTextAttributes * values);
    extern void gtk_text_buffer_add_selection_clipboard(GtkTextBuffer *
							buffer,
							GtkClipboard *
							clipboard);
    extern void gtk_text_buffer_apply_tag(GtkTextBuffer * buffer,
					  GtkTextTag * tag,
					  const GtkTextIter * start,
					  const GtkTextIter * end);
    extern void gtk_text_buffer_apply_tag_by_name(GtkTextBuffer * buffer,
						  const gchar * name,
						  const GtkTextIter *
						  start,
						  const GtkTextIter * end);
    extern gboolean gtk_text_buffer_backspace(GtkTextBuffer * buffer,
					      GtkTextIter * iter,
					      gboolean interactive,
					      gboolean default_editable);
    extern void gtk_text_buffer_begin_user_action(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_copy_clipboard(GtkTextBuffer * buffer,
					       GtkClipboard * clipboard);
    extern GtkTextChildAnchor
	*gtk_text_buffer_create_child_anchor(GtkTextBuffer * buffer,
					     GtkTextIter * iter);
    extern GtkTextMark *gtk_text_buffer_create_mark(GtkTextBuffer * buffer,
						    const gchar *
						    mark_name,
						    const GtkTextIter *
						    where,
						    gboolean left_gravity);
    extern GtkTextTag *gtk_text_buffer_create_tag(GtkTextBuffer * buffer,
						  const gchar * tag_name,
						  const gchar *
						  first_property_name,
						  ...);
    extern void gtk_text_buffer_cut_clipboard(GtkTextBuffer * buffer,
					      GtkClipboard * clipboard,
					      gboolean default_editable);
    extern void gtk_text_buffer_delete(GtkTextBuffer * buffer,
				       GtkTextIter * start,
				       GtkTextIter * end);
    extern gboolean gtk_text_buffer_delete_interactive(GtkTextBuffer *
						       buffer,
						       GtkTextIter *
						       start_iter,
						       GtkTextIter *
						       end_iter,
						       gboolean
						       default_editable);
    extern void gtk_text_buffer_delete_mark(GtkTextBuffer * buffer,
					    GtkTextMark * mark);
    extern void gtk_text_buffer_delete_mark_by_name(GtkTextBuffer * buffer,
						    const gchar * name);
    extern gboolean gtk_text_buffer_delete_selection(GtkTextBuffer *
						     buffer,
						     gboolean interactive,
						     gboolean
						     default_editable);
    extern void gtk_text_buffer_end_user_action(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_get_bounds(GtkTextBuffer * buffer,
					   GtkTextIter * start,
					   GtkTextIter * end);
    extern gint gtk_text_buffer_get_char_count(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_get_end_iter(GtkTextBuffer * buffer,
					     GtkTextIter * iter);
    extern GtkTextMark *gtk_text_buffer_get_insert(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_get_iter_at_child_anchor(GtkTextBuffer *
							 buffer,
							 GtkTextIter *
							 iter,
							 GtkTextChildAnchor
							 * anchor);
    extern void gtk_text_buffer_get_iter_at_line(GtkTextBuffer * buffer,
						 GtkTextIter * iter,
						 gint line_number);
    extern void gtk_text_buffer_get_iter_at_line_index(GtkTextBuffer *
						       buffer,
						       GtkTextIter * iter,
						       gint line_number,
						       gint byte_index);
    extern void gtk_text_buffer_get_iter_at_line_offset(GtkTextBuffer *
							buffer,
							GtkTextIter * iter,
							gint line_number,
							gint char_offset);
    extern void gtk_text_buffer_get_iter_at_mark(GtkTextBuffer * buffer,
						 GtkTextIter * iter,
						 GtkTextMark * mark);
    extern void gtk_text_buffer_get_iter_at_offset(GtkTextBuffer * buffer,
						   GtkTextIter * iter,
						   gint char_offset);
    extern gint gtk_text_buffer_get_line_count(GtkTextBuffer * buffer);
    extern GtkTextMark *gtk_text_buffer_get_mark(GtkTextBuffer * buffer,
						 const gchar * name);
    extern gboolean gtk_text_buffer_get_modified(GtkTextBuffer * buffer);
    extern GtkTextMark *gtk_text_buffer_get_selection_bound(GtkTextBuffer *
							    buffer);
    extern gboolean gtk_text_buffer_get_selection_bounds(GtkTextBuffer *
							 buffer,
							 GtkTextIter *
							 start,
							 GtkTextIter *
							 end);
    extern gchar *gtk_text_buffer_get_slice(GtkTextBuffer * buffer,
					    const GtkTextIter * start,
					    const GtkTextIter * end,
					    gboolean include_hidden_chars);
    extern void gtk_text_buffer_get_start_iter(GtkTextBuffer * buffer,
					       GtkTextIter * iter);
    extern GtkTextTagTable *gtk_text_buffer_get_tag_table(GtkTextBuffer *
							  buffer);
    extern gchar *gtk_text_buffer_get_text(GtkTextBuffer * buffer,
					   const GtkTextIter * start,
					   const GtkTextIter * end,
					   gboolean include_hidden_chars);
    extern GType gtk_text_buffer_get_type(void);
    extern void gtk_text_buffer_insert(GtkTextBuffer * buffer,
				       GtkTextIter * iter,
				       const gchar * text, gint len);
    extern void gtk_text_buffer_insert_at_cursor(GtkTextBuffer * buffer,
						 const gchar * text,
						 gint len);
    extern void gtk_text_buffer_insert_child_anchor(GtkTextBuffer * buffer,
						    GtkTextIter * iter,
						    GtkTextChildAnchor *
						    anchor);
    extern gboolean gtk_text_buffer_insert_interactive(GtkTextBuffer *
						       buffer,
						       GtkTextIter * iter,
						       const gchar * text,
						       gint len,
						       gboolean
						       default_editable);
    extern gboolean
	gtk_text_buffer_insert_interactive_at_cursor(GtkTextBuffer *
						     buffer,
						     const gchar * text,
						     gint len,
						     gboolean
						     default_editable);
    extern void gtk_text_buffer_insert_pixbuf(GtkTextBuffer * buffer,
					      GtkTextIter * iter,
					      GdkPixbuf * pixbuf);
    extern void gtk_text_buffer_insert_range(GtkTextBuffer * buffer,
					     GtkTextIter * iter,
					     const GtkTextIter * start,
					     const GtkTextIter * end);
    extern gboolean gtk_text_buffer_insert_range_interactive(GtkTextBuffer
							     * buffer,
							     GtkTextIter *
							     iter,
							     const
							     GtkTextIter *
							     start,
							     const
							     GtkTextIter *
							     end,
							     gboolean
							     default_editable);
    extern void gtk_text_buffer_insert_with_tags(GtkTextBuffer * buffer,
						 GtkTextIter * iter,
						 const gchar * text,
						 gint len,
						 GtkTextTag * first_tag,
						 ...);
    extern void gtk_text_buffer_insert_with_tags_by_name(GtkTextBuffer *
							 buffer,
							 GtkTextIter *
							 iter,
							 const gchar *
							 text, gint len,
							 const gchar *
							 first_tag_name,
							 ...);
    extern void gtk_text_buffer_move_mark(GtkTextBuffer * buffer,
					  GtkTextMark * mark,
					  const GtkTextIter * where);
    extern void gtk_text_buffer_move_mark_by_name(GtkTextBuffer * buffer,
						  const gchar * name,
						  const GtkTextIter *
						  where);
    extern GtkTextBuffer *gtk_text_buffer_new(GtkTextTagTable * table);
    extern void gtk_text_buffer_paste_clipboard(GtkTextBuffer * buffer,
						GtkClipboard * clipboard,
						GtkTextIter *
						override_location,
						gboolean default_editable);
    extern void gtk_text_buffer_place_cursor(GtkTextBuffer * buffer,
					     const GtkTextIter * where);
    extern void gtk_text_buffer_remove_all_tags(GtkTextBuffer * buffer,
						const GtkTextIter * start,
						const GtkTextIter * end);
    extern void gtk_text_buffer_remove_selection_clipboard(GtkTextBuffer *
							   buffer,
							   GtkClipboard *
							   clipboard);
    extern void gtk_text_buffer_remove_tag(GtkTextBuffer * buffer,
					   GtkTextTag * tag,
					   const GtkTextIter * start,
					   const GtkTextIter * end);
    extern void gtk_text_buffer_remove_tag_by_name(GtkTextBuffer * buffer,
						   const gchar * name,
						   const GtkTextIter *
						   start,
						   const GtkTextIter *
						   end);
    extern void gtk_text_buffer_select_range(GtkTextBuffer * buffer,
					     const GtkTextIter * ins,
					     const GtkTextIter * bound);
    extern void gtk_text_buffer_set_modified(GtkTextBuffer * buffer,
					     gboolean setting);
    extern void gtk_text_buffer_set_text(GtkTextBuffer * buffer,
					 const gchar * text, gint len);
    extern gboolean gtk_text_child_anchor_get_deleted(GtkTextChildAnchor *
						      anchor);
    extern GType gtk_text_child_anchor_get_type(void);
    extern GList *gtk_text_child_anchor_get_widgets(GtkTextChildAnchor *
						    anchor);
    extern GtkTextChildAnchor *gtk_text_child_anchor_new(void);
    extern GType gtk_text_direction_get_type(void);
    extern gboolean gtk_text_iter_backward_char(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_chars(GtkTextIter * iter,
						 gint count);
    extern gboolean gtk_text_iter_backward_cursor_position(GtkTextIter *
							   iter);
    extern gboolean gtk_text_iter_backward_cursor_positions(GtkTextIter *
							    iter,
							    gint count);
    extern gboolean gtk_text_iter_backward_find_char(GtkTextIter * iter,
						     GtkTextCharPredicate
						     pred,
						     gpointer user_data,
						     const GtkTextIter *
						     limit);
    extern gboolean gtk_text_iter_backward_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_lines(GtkTextIter * iter,
						 gint count);
    extern gboolean gtk_text_iter_backward_search(const GtkTextIter * iter,
						  const gchar * str,
						  GtkTextSearchFlags flags,
						  GtkTextIter *
						  match_start,
						  GtkTextIter * match_end,
						  const GtkTextIter *
						  limit);
    extern gboolean gtk_text_iter_backward_sentence_start(GtkTextIter *
							  iter);
    extern gboolean gtk_text_iter_backward_sentence_starts(GtkTextIter *
							   iter,
							   gint count);
    extern gboolean gtk_text_iter_backward_to_tag_toggle(GtkTextIter *
							 iter,
							 GtkTextTag * tag);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_position(GtkTextIter * iter);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_positions(GtkTextIter * iter,
							gint count);
    extern gboolean gtk_text_iter_backward_visible_word_start(GtkTextIter *
							      iter);
    extern gboolean gtk_text_iter_backward_visible_word_starts(GtkTextIter
							       * iter,
							       gint count);
    extern gboolean gtk_text_iter_backward_word_start(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_word_starts(GtkTextIter * iter,
						       gint count);
    extern gboolean gtk_text_iter_begins_tag(const GtkTextIter * iter,
					     GtkTextTag * tag);
    extern gboolean gtk_text_iter_can_insert(const GtkTextIter * iter,
					     gboolean default_editability);
    extern gint gtk_text_iter_compare(const GtkTextIter * lhs,
				      const GtkTextIter * rhs);
    extern GtkTextIter *gtk_text_iter_copy(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_editable(const GtkTextIter * iter,
					   gboolean default_setting);
    extern gboolean gtk_text_iter_ends_line(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_ends_sentence(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_ends_tag(const GtkTextIter * iter,
					   GtkTextTag * tag);
    extern gboolean gtk_text_iter_ends_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_equal(const GtkTextIter * lhs,
					const GtkTextIter * rhs);
    extern gboolean gtk_text_iter_forward_char(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_chars(GtkTextIter * iter,
						gint count);
    extern gboolean gtk_text_iter_forward_cursor_position(GtkTextIter *
							  iter);
    extern gboolean gtk_text_iter_forward_cursor_positions(GtkTextIter *
							   iter,
							   gint count);
    extern gboolean gtk_text_iter_forward_find_char(GtkTextIter * iter,
						    GtkTextCharPredicate
						    pred,
						    gpointer user_data,
						    const GtkTextIter *
						    limit);
    extern gboolean gtk_text_iter_forward_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_lines(GtkTextIter * iter,
						gint count);
    extern gboolean gtk_text_iter_forward_search(const GtkTextIter * iter,
						 const gchar * str,
						 GtkTextSearchFlags flags,
						 GtkTextIter * match_start,
						 GtkTextIter * match_end,
						 const GtkTextIter *
						 limit);
    extern gboolean gtk_text_iter_forward_sentence_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_sentence_ends(GtkTextIter * iter,
							gint count);
    extern void gtk_text_iter_forward_to_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_to_line_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_to_tag_toggle(GtkTextIter * iter,
							GtkTextTag * tag);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_position(GtkTextIter * iter);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_positions(GtkTextIter * iter,
						       gint count);
    extern gboolean gtk_text_iter_forward_visible_word_end(GtkTextIter *
							   iter);
    extern gboolean gtk_text_iter_forward_visible_word_ends(GtkTextIter *
							    iter,
							    gint count);
    extern gboolean gtk_text_iter_forward_word_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_word_ends(GtkTextIter * iter,
						    gint count);
    extern void gtk_text_iter_free(GtkTextIter * iter);
    extern gboolean gtk_text_iter_get_attributes(const GtkTextIter * iter,
						 GtkTextAttributes *
						 values);
    extern GtkTextBuffer *gtk_text_iter_get_buffer(const GtkTextIter *
						   iter);
    extern gint gtk_text_iter_get_bytes_in_line(const GtkTextIter * iter);
    extern gunichar gtk_text_iter_get_char(const GtkTextIter * iter);
    extern gint gtk_text_iter_get_chars_in_line(const GtkTextIter * iter);
    extern GtkTextChildAnchor *gtk_text_iter_get_child_anchor(const
							      GtkTextIter *
							      iter);
    extern PangoLanguage *gtk_text_iter_get_language(const GtkTextIter *
						     iter);
    extern gint gtk_text_iter_get_line(const GtkTextIter * iter);
    extern gint gtk_text_iter_get_line_index(const GtkTextIter * iter);
    extern gint gtk_text_iter_get_line_offset(const GtkTextIter * iter);
    extern GSList *gtk_text_iter_get_marks(const GtkTextIter * iter);
    extern gint gtk_text_iter_get_offset(const GtkTextIter * iter);
    extern GdkPixbuf *gtk_text_iter_get_pixbuf(const GtkTextIter * iter);
    extern gchar *gtk_text_iter_get_slice(const GtkTextIter * start,
					  const GtkTextIter * end);
    extern GSList *gtk_text_iter_get_tags(const GtkTextIter * iter);
    extern gchar *gtk_text_iter_get_text(const GtkTextIter * start,
					 const GtkTextIter * end);
    extern GSList *gtk_text_iter_get_toggled_tags(const GtkTextIter * iter,
						  gboolean toggled_on);
    extern GType gtk_text_iter_get_type(void);
    extern gint gtk_text_iter_get_visible_line_index(const GtkTextIter *
						     iter);
    extern gint gtk_text_iter_get_visible_line_offset(const GtkTextIter *
						      iter);
    extern gchar *gtk_text_iter_get_visible_slice(const GtkTextIter *
						  start,
						  const GtkTextIter * end);
    extern gchar *gtk_text_iter_get_visible_text(const GtkTextIter * start,
						 const GtkTextIter * end);
    extern gboolean gtk_text_iter_has_tag(const GtkTextIter * iter,
					  GtkTextTag * tag);
    extern gboolean gtk_text_iter_in_range(const GtkTextIter * iter,
					   const GtkTextIter * start,
					   const GtkTextIter * end);
    extern gboolean gtk_text_iter_inside_sentence(const GtkTextIter *
						  iter);
    extern gboolean gtk_text_iter_inside_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_is_cursor_position(const GtkTextIter *
						     iter);
    extern gboolean gtk_text_iter_is_end(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_is_start(const GtkTextIter * iter);
    extern void gtk_text_iter_order(GtkTextIter * first,
				    GtkTextIter * second);
    extern void gtk_text_iter_set_line(GtkTextIter * iter,
				       gint line_number);
    extern void gtk_text_iter_set_line_index(GtkTextIter * iter,
					     gint byte_on_line);
    extern void gtk_text_iter_set_line_offset(GtkTextIter * iter,
					      gint char_on_line);
    extern void gtk_text_iter_set_offset(GtkTextIter * iter,
					 gint char_offset);
    extern void gtk_text_iter_set_visible_line_index(GtkTextIter * iter,
						     gint byte_on_line);
    extern void gtk_text_iter_set_visible_line_offset(GtkTextIter * iter,
						      gint char_on_line);
    extern gboolean gtk_text_iter_starts_line(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_starts_sentence(const GtkTextIter *
						  iter);
    extern gboolean gtk_text_iter_starts_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_toggles_tag(const GtkTextIter * iter,
					      GtkTextTag * tag);
    extern GtkTextBuffer *gtk_text_mark_get_buffer(GtkTextMark *);
    extern gboolean gtk_text_mark_get_deleted(GtkTextMark *);
    extern gboolean gtk_text_mark_get_left_gravity(GtkTextMark *);
    extern const char *gtk_text_mark_get_name(GtkTextMark *);
    extern GType gtk_text_mark_get_type(void);
    extern gboolean gtk_text_mark_get_visible(GtkTextMark *);
    extern void gtk_text_mark_set_visible(GtkTextMark *, gboolean);
    extern GType gtk_text_search_flags_get_type(void);
    extern gboolean gtk_text_tag_event(GtkTextTag * tag,
				       GObject * event_object,
				       GdkEvent * event,
				       const GtkTextIter * iter);
    extern gint gtk_text_tag_get_priority(GtkTextTag * tag);
    extern GType gtk_text_tag_get_type(void);
    extern GtkTextTag *gtk_text_tag_new(const gchar * name);
    extern void gtk_text_tag_set_priority(GtkTextTag * tag, gint priority);
    extern void gtk_text_tag_table_add(GtkTextTagTable * table,
				       GtkTextTag * tag);
    extern void gtk_text_tag_table_foreach(GtkTextTagTable * table,
					   GtkTextTagTableForeach func,
					   gpointer data);
    extern gint gtk_text_tag_table_get_size(GtkTextTagTable * table);
    extern GType gtk_text_tag_table_get_type(void);
    extern GtkTextTag *gtk_text_tag_table_lookup(GtkTextTagTable * table,
						 const gchar * name);
    extern GtkTextTagTable *gtk_text_tag_table_new(void);
    extern void gtk_text_tag_table_remove(GtkTextTagTable * table,
					  GtkTextTag * tag);
    extern void gtk_text_view_add_child_at_anchor(GtkTextView * text_view,
						  GtkWidget * child,
						  GtkTextChildAnchor *
						  anchor);
    extern void gtk_text_view_add_child_in_window(GtkTextView * text_view,
						  GtkWidget * child,
						  GtkTextWindowType
						  which_window, gint xpos,
						  gint ypos);
    extern gboolean gtk_text_view_backward_display_line(GtkTextView *
							text_view,
							GtkTextIter *
							iter);
    extern gboolean gtk_text_view_backward_display_line_start(GtkTextView *
							      text_view,
							      GtkTextIter *
							      iter);
    extern void gtk_text_view_buffer_to_window_coords(GtkTextView *
						      text_view,
						      GtkTextWindowType
						      win, gint buffer_x,
						      gint buffer_y,
						      gint * window_x,
						      gint * window_y);
    extern gboolean gtk_text_view_forward_display_line(GtkTextView *
						       text_view,
						       GtkTextIter * iter);
    extern gboolean gtk_text_view_forward_display_line_end(GtkTextView *
							   text_view,
							   GtkTextIter *
							   iter);
    extern gboolean gtk_text_view_get_accepts_tab(GtkTextView * text_view);
    extern gint gtk_text_view_get_border_window_size(GtkTextView *
						     text_view,
						     GtkTextWindowType
						     type);
    extern GtkTextBuffer *gtk_text_view_get_buffer(GtkTextView *
						   text_view);
    extern gboolean gtk_text_view_get_cursor_visible(GtkTextView *
						     text_view);
    extern GtkTextAttributes
	*gtk_text_view_get_default_attributes(GtkTextView * text_view);
    extern gboolean gtk_text_view_get_editable(GtkTextView * text_view);
    extern gint gtk_text_view_get_indent(GtkTextView * text_view);
    extern void gtk_text_view_get_iter_at_location(GtkTextView * text_view,
						   GtkTextIter * iter,
						   gint x, gint y);
    extern void gtk_text_view_get_iter_at_position(GtkTextView * text_view,
						   GtkTextIter * iter,
						   gint * trailing, gint x,
						   gint y);
    extern void gtk_text_view_get_iter_location(GtkTextView * text_view,
						const GtkTextIter * iter,
						GdkRectangle * location);
    extern GtkJustification gtk_text_view_get_justification(GtkTextView *
							    text_view);
    extern gint gtk_text_view_get_left_margin(GtkTextView * text_view);
    extern void gtk_text_view_get_line_at_y(GtkTextView * text_view,
					    GtkTextIter * target_iter,
					    gint y, gint * line_top);
    extern void gtk_text_view_get_line_yrange(GtkTextView * text_view,
					      const GtkTextIter * iter,
					      gint * y, gint * height);
    extern gboolean gtk_text_view_get_overwrite(GtkTextView * text_view);
    extern gint gtk_text_view_get_pixels_above_lines(GtkTextView *
						     text_view);
    extern gint gtk_text_view_get_pixels_below_lines(GtkTextView *
						     text_view);
    extern gint gtk_text_view_get_pixels_inside_wrap(GtkTextView *
						     text_view);
    extern gint gtk_text_view_get_right_margin(GtkTextView * text_view);
    extern PangoTabArray *gtk_text_view_get_tabs(GtkTextView * text_view);
    extern GType gtk_text_view_get_type(void);
    extern void gtk_text_view_get_visible_rect(GtkTextView * text_view,
					       GdkRectangle *
					       visible_rect);
    extern GdkWindow *gtk_text_view_get_window(GtkTextView * text_view,
					       GtkTextWindowType win);
    extern GtkTextWindowType gtk_text_view_get_window_type(GtkTextView *
							   text_view,
							   GdkWindow *
							   window);
    extern GtkWrapMode gtk_text_view_get_wrap_mode(GtkTextView *
						   text_view);
    extern void gtk_text_view_move_child(GtkTextView * text_view,
					 GtkWidget * child, gint xpos,
					 gint ypos);
    extern gboolean gtk_text_view_move_mark_onscreen(GtkTextView *
						     text_view,
						     GtkTextMark * mark);
    extern gboolean gtk_text_view_move_visually(GtkTextView * text_view,
						GtkTextIter * iter,
						gint count);
    extern GtkWidget *gtk_text_view_new(void);
    extern GtkWidget *gtk_text_view_new_with_buffer(GtkTextBuffer *
						    buffer);
    extern gboolean gtk_text_view_place_cursor_onscreen(GtkTextView *
							text_view);
    extern void gtk_text_view_scroll_mark_onscreen(GtkTextView * text_view,
						   GtkTextMark * mark);
    extern gboolean gtk_text_view_scroll_to_iter(GtkTextView * text_view,
						 GtkTextIter * iter,
						 gdouble within_margin,
						 gboolean use_align,
						 gdouble xalign,
						 gdouble yalign);
    extern void gtk_text_view_scroll_to_mark(GtkTextView * text_view,
					     GtkTextMark * mark,
					     gdouble within_margin,
					     gboolean use_align,
					     gdouble xalign,
					     gdouble yalign);
    extern void gtk_text_view_set_accepts_tab(GtkTextView * text_view,
					      gboolean accepts_tab);
    extern void gtk_text_view_set_border_window_size(GtkTextView *
						     text_view,
						     GtkTextWindowType
						     type, gint size);
    extern void gtk_text_view_set_buffer(GtkTextView * text_view,
					 GtkTextBuffer * buffer);
    extern void gtk_text_view_set_cursor_visible(GtkTextView * text_view,
						 gboolean setting);
    extern void gtk_text_view_set_editable(GtkTextView * text_view,
					   gboolean setting);
    extern void gtk_text_view_set_indent(GtkTextView * text_view,
					 gint indent);
    extern void gtk_text_view_set_justification(GtkTextView * text_view,
						GtkJustification
						justification);
    extern void gtk_text_view_set_left_margin(GtkTextView * text_view,
					      gint left_margin);
    extern void gtk_text_view_set_overwrite(GtkTextView * text_view,
					    gboolean overwrite);
    extern void gtk_text_view_set_pixels_above_lines(GtkTextView *
						     text_view,
						     gint
						     pixels_above_lines);
    extern void gtk_text_view_set_pixels_below_lines(GtkTextView *
						     text_view,
						     gint
						     pixels_below_lines);
    extern void gtk_text_view_set_pixels_inside_wrap(GtkTextView *
						     text_view,
						     gint
						     pixels_inside_wrap);
    extern void gtk_text_view_set_right_margin(GtkTextView * text_view,
					       gint right_margin);
    extern void gtk_text_view_set_tabs(GtkTextView * text_view,
				       PangoTabArray * tabs);
    extern void gtk_text_view_set_wrap_mode(GtkTextView * text_view,
					    GtkWrapMode wrap_mode);
    extern gboolean gtk_text_view_starts_display_line(GtkTextView *
						      text_view,
						      const GtkTextIter *
						      iter);
    extern void gtk_text_view_window_to_buffer_coords(GtkTextView *
						      text_view,
						      GtkTextWindowType
						      win, gint window_x,
						      gint window_y,
						      gint * buffer_x,
						      gint * buffer_y);
    extern GType gtk_text_window_type_get_type(void);
    extern gboolean gtk_toggle_action_get_active(GtkToggleAction * action);
    extern gboolean gtk_toggle_action_get_draw_as_radio(GtkToggleAction *
							action);
    extern GType gtk_toggle_action_get_type(void);
    extern GtkToggleAction *gtk_toggle_action_new(const gchar * name,
						  const gchar * label,
						  const gchar * tooltip,
						  const gchar * stock_id);
    extern void gtk_toggle_action_set_active(GtkToggleAction * action,
					     gboolean is_active);
    extern void gtk_toggle_action_set_draw_as_radio(GtkToggleAction *
						    action,
						    gboolean
						    draw_as_radio);
    extern void gtk_toggle_action_toggled(GtkToggleAction * action);
    extern gboolean gtk_toggle_button_get_active(GtkToggleButton *
						 toggle_button);
    extern gboolean gtk_toggle_button_get_inconsistent(GtkToggleButton *
						       toggle_button);
    extern gboolean gtk_toggle_button_get_mode(GtkToggleButton *
					       toggle_button);
    extern GType gtk_toggle_button_get_type(void);
    extern GtkWidget *gtk_toggle_button_new(void);
    extern GtkWidget *gtk_toggle_button_new_with_label(const gchar *
						       label);
    extern GtkWidget *gtk_toggle_button_new_with_mnemonic(const gchar *
							  label);
    extern void gtk_toggle_button_set_active(GtkToggleButton *
					     toggle_button,
					     gboolean is_active);
    extern void gtk_toggle_button_set_inconsistent(GtkToggleButton *
						   toggle_button,
						   gboolean setting);
    extern void gtk_toggle_button_set_mode(GtkToggleButton * toggle_button,
					   gboolean draw_indicator);
    extern void gtk_toggle_button_toggled(GtkToggleButton * toggle_button);
    extern gboolean gtk_toggle_tool_button_get_active(GtkToggleToolButton *
						      button);
    extern GType gtk_toggle_tool_button_get_type(void);
    extern GtkToolItem *gtk_toggle_tool_button_new(void);
    extern GtkToolItem *gtk_toggle_tool_button_new_from_stock(const gchar *
							      stock_id);
    extern void gtk_toggle_tool_button_set_active(GtkToggleToolButton *
						  button,
						  gboolean is_active);
    extern GtkWidget *gtk_tool_button_get_icon_widget(GtkToolButton *
						      button);
    extern const gchar *gtk_tool_button_get_label(GtkToolButton * button);
    extern GtkWidget *gtk_tool_button_get_label_widget(GtkToolButton *
						       button);
    extern const gchar *gtk_tool_button_get_stock_id(GtkToolButton *
						     button);
    extern GType gtk_tool_button_get_type(void);
    extern gboolean gtk_tool_button_get_use_underline(GtkToolButton *
						      button);
    extern GtkToolItem *gtk_tool_button_new(GtkWidget * icon_widget,
					    const gchar * label);
    extern GtkToolItem *gtk_tool_button_new_from_stock(const gchar *
						       stock_id);
    extern void gtk_tool_button_set_icon_widget(GtkToolButton * button,
						GtkWidget * icon_widget);
    extern void gtk_tool_button_set_label(GtkToolButton * button,
					  const gchar * label);
    extern void gtk_tool_button_set_label_widget(GtkToolButton * button,
						 GtkWidget * label_widget);
    extern void gtk_tool_button_set_stock_id(GtkToolButton * button,
					     const gchar * stock_id);
    extern void gtk_tool_button_set_use_underline(GtkToolButton * button,
						  gboolean use_underline);
    extern gboolean gtk_tool_item_get_expand(GtkToolItem * tool_item);
    extern gboolean gtk_tool_item_get_homogeneous(GtkToolItem * tool_item);
    extern GtkIconSize gtk_tool_item_get_icon_size(GtkToolItem *
						   tool_item);
    extern gboolean gtk_tool_item_get_is_important(GtkToolItem *
						   tool_item);
    extern GtkOrientation gtk_tool_item_get_orientation(GtkToolItem *
							tool_item);
    extern GtkWidget *gtk_tool_item_get_proxy_menu_item(GtkToolItem *
							tool_item,
							const gchar *
							menu_item_id);
    extern GtkReliefStyle gtk_tool_item_get_relief_style(GtkToolItem *
							 tool_item);
    extern GtkToolbarStyle gtk_tool_item_get_toolbar_style(GtkToolItem *
							   tool_item);
    extern GType gtk_tool_item_get_type(void);
    extern gboolean gtk_tool_item_get_use_drag_window(GtkToolItem *
						      tool_item);
    extern gboolean gtk_tool_item_get_visible_horizontal(GtkToolItem *
							 tool_item);
    extern gboolean gtk_tool_item_get_visible_vertical(GtkToolItem *
						       tool_item);
    extern GtkToolItem *gtk_tool_item_new(void);
    extern void gtk_tool_item_rebuild_menu(GtkToolItem * tool_item);
    extern GtkWidget *gtk_tool_item_retrieve_proxy_menu_item(GtkToolItem *
							     tool_item);
    extern void gtk_tool_item_set_expand(GtkToolItem * tool_item,
					 gboolean expand);
    extern void gtk_tool_item_set_homogeneous(GtkToolItem * tool_item,
					      gboolean homogeneous);
    extern void gtk_tool_item_set_is_important(GtkToolItem * tool_item,
					       gboolean is_important);
    extern void gtk_tool_item_set_proxy_menu_item(GtkToolItem * tool_item,
						  const gchar *
						  menu_item_id,
						  GtkWidget * menu_item);
    extern void gtk_tool_item_set_tooltip(GtkToolItem * tool_item,
					  GtkTooltips * tooltips,
					  const gchar * tip_text,
					  const gchar * tip_private);
    extern void gtk_tool_item_set_use_drag_window(GtkToolItem * tool_item,
						  gboolean
						  use_drag_window);
    extern void gtk_tool_item_set_visible_horizontal(GtkToolItem *
						     tool_item,
						     gboolean
						     visible_horizontal);
    extern void gtk_tool_item_set_visible_vertical(GtkToolItem * tool_item,
						   gboolean
						   visible_vertical);
    extern GType gtk_toolbar_child_type_get_type(void);
    extern gint gtk_toolbar_get_drop_index(GtkToolbar * toolbar, gint x,
					   gint y);
    extern GtkIconSize gtk_toolbar_get_icon_size(GtkToolbar * toolbar);
    extern gint gtk_toolbar_get_item_index(GtkToolbar * toolbar,
					   GtkToolItem * item);
    extern gint gtk_toolbar_get_n_items(GtkToolbar * toolbar);
    extern GtkToolItem *gtk_toolbar_get_nth_item(GtkToolbar * toolbar,
						 gint n);
    extern GtkOrientation gtk_toolbar_get_orientation(GtkToolbar *
						      toolbar);
    extern GtkReliefStyle gtk_toolbar_get_relief_style(GtkToolbar *
						       toolbar);
    extern gboolean gtk_toolbar_get_show_arrow(GtkToolbar * toolbar);
    extern GtkToolbarStyle gtk_toolbar_get_style(GtkToolbar * toolbar);
    /* gtk_toolbar_get_tooltips is deprecated in modern GTK and should not be used in newly-written code. The toolkit-wide "gtk-enable-tooltips" property is now used instead. */
    extern gboolean gtk_toolbar_get_tooltips(GtkToolbar * toolbar)
#if __LSB_VERSION__ >= 40
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 40 */
    ;
    extern GType gtk_toolbar_get_type(void);
    extern void gtk_toolbar_insert(GtkToolbar * toolbar,
				   GtkToolItem * item, gint pos);
    extern GtkWidget *gtk_toolbar_new(void);
    extern void gtk_toolbar_set_drop_highlight_item(GtkToolbar * toolbar,
						    GtkToolItem *
						    tool_item,
						    gint index_);
    extern void gtk_toolbar_set_orientation(GtkToolbar * toolbar,
					    GtkOrientation orientation);
    extern void gtk_toolbar_set_show_arrow(GtkToolbar * toolbar,
					   gboolean show_arrow);
    extern void gtk_toolbar_set_style(GtkToolbar * toolbar,
				      GtkToolbarStyle style);
    /* gtk_toolbar_set_tooltips is deprecated in modern GTK and should not be used in newly-written code. The toolkit-wide "gtk-enable-tooltips" property is now used instead. */
    extern void gtk_toolbar_set_tooltips(GtkToolbar * toolbar,
					 gboolean enable)
#if __LSB_VERSION__ >= 40
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 40 */
    ;
    extern GType gtk_toolbar_space_style_get_type(void);
    extern GType gtk_toolbar_style_get_type(void);
    extern void gtk_toolbar_unset_style(GtkToolbar * toolbar);
    extern GtkTooltipsData *gtk_tooltips_data_get(GtkWidget * widget);
    extern void gtk_tooltips_disable(GtkTooltips * tooltips);
    extern void gtk_tooltips_enable(GtkTooltips * tooltips);
    extern void gtk_tooltips_force_window(GtkTooltips * tooltips);
    extern gboolean gtk_tooltips_get_info_from_tip_window(GtkWindow *
							  tip_window,
							  GtkTooltips *
							  *tooltips,
							  GtkWidget *
							  *current_widget);
    extern GType gtk_tooltips_get_type(void);
    extern GtkTooltips *gtk_tooltips_new(void);
    extern void gtk_tooltips_set_tip(GtkTooltips * tooltips,
				     GtkWidget * widget,
				     const gchar * tip_text,
				     const gchar * tip_private);
    extern gboolean gtk_tree_drag_dest_drag_data_received(GtkTreeDragDest *
							  drag_dest,
							  GtkTreePath *
							  dest,
							  GtkSelectionData
							  *
							  selection_data);
    extern GType gtk_tree_drag_dest_get_type(void);
    extern gboolean gtk_tree_drag_dest_row_drop_possible(GtkTreeDragDest *
							 drag_dest,
							 GtkTreePath *
							 dest_path,
							 GtkSelectionData *
							 selection_data);
    extern gboolean gtk_tree_drag_source_drag_data_delete(GtkTreeDragSource
							  * drag_source,
							  GtkTreePath *
							  path);
    extern gboolean gtk_tree_drag_source_drag_data_get(GtkTreeDragSource *
						       drag_source,
						       GtkTreePath * path,
						       GtkSelectionData *
						       selection_data);
    extern GType gtk_tree_drag_source_get_type(void);
    extern gboolean gtk_tree_drag_source_row_draggable(GtkTreeDragSource *
						       drag_source,
						       GtkTreePath * path);
    extern gboolean gtk_tree_get_row_drag_data(GtkSelectionData *
					       selection_data,
					       GtkTreeModel * *tree_model,
					       GtkTreePath * *path);
    extern GtkTreeIter *gtk_tree_iter_copy(GtkTreeIter * iter);
    extern void gtk_tree_iter_free(GtkTreeIter * iter);
    extern GType gtk_tree_iter_get_type(void);
    extern void gtk_tree_model_filter_clear_cache(GtkTreeModelFilter *
						  filter);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_child_path_to_path
	(GtkTreeModelFilter * filter, GtkTreePath * child_path);
    extern void
	gtk_tree_model_filter_convert_iter_to_child_iter(GtkTreeModelFilter
							 * filter,
							 GtkTreeIter *
							 child_iter,
							 GtkTreeIter *
							 filter_iter);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_path_to_child_path
	(GtkTreeModelFilter * filter, GtkTreePath * filter_path);
    extern GtkTreeModel *gtk_tree_model_filter_get_model(GtkTreeModelFilter
							 * filter);
    extern GType gtk_tree_model_filter_get_type(void);
    extern GtkTreeModel *gtk_tree_model_filter_new(GtkTreeModel *
						   child_model,
						   GtkTreePath * root);
    extern void gtk_tree_model_filter_refilter(GtkTreeModelFilter *
					       filter);
    extern void gtk_tree_model_filter_set_modify_func(GtkTreeModelFilter *
						      filter,
						      gint n_columns,
						      GType * types,
						      GtkTreeModelFilterModifyFunc
						      func, gpointer data,
						      GtkDestroyNotify
						      destroy);
    extern void gtk_tree_model_filter_set_visible_column(GtkTreeModelFilter
							 * filter,
							 gint column);
    extern void gtk_tree_model_filter_set_visible_func(GtkTreeModelFilter *
						       filter,
						       GtkTreeModelFilterVisibleFunc
						       func, gpointer data,
						       GtkDestroyNotify
						       destroy);
    extern GType gtk_tree_model_flags_get_type(void);
    extern void gtk_tree_model_foreach(GtkTreeModel * model,
				       GtkTreeModelForeachFunc func,
				       gpointer user_data);
    extern void gtk_tree_model_get(GtkTreeModel * tree_model,
				   GtkTreeIter * iter, ...);
    extern GType gtk_tree_model_get_column_type(GtkTreeModel * tree_model,
						gint index_);
    extern GtkTreeModelFlags gtk_tree_model_get_flags(GtkTreeModel *
						      tree_model);
    extern gboolean gtk_tree_model_get_iter(GtkTreeModel * tree_model,
					    GtkTreeIter * iter,
					    GtkTreePath * path);
    extern gboolean gtk_tree_model_get_iter_first(GtkTreeModel *
						  tree_model,
						  GtkTreeIter * iter);
    extern gboolean gtk_tree_model_get_iter_from_string(GtkTreeModel *
							tree_model,
							GtkTreeIter * iter,
							const gchar *
							path_string);
    extern gint gtk_tree_model_get_n_columns(GtkTreeModel * tree_model);
    extern GtkTreePath *gtk_tree_model_get_path(GtkTreeModel * tree_model,
						GtkTreeIter * iter);
    extern gchar *gtk_tree_model_get_string_from_iter(GtkTreeModel *
						      tree_model,
						      GtkTreeIter * iter);
    extern GType gtk_tree_model_get_type(void);
    extern void gtk_tree_model_get_valist(GtkTreeModel * tree_model,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_tree_model_get_value(GtkTreeModel * tree_model,
					 GtkTreeIter * iter, gint column,
					 GValue * value);
    extern gboolean gtk_tree_model_iter_children(GtkTreeModel * tree_model,
						 GtkTreeIter * iter,
						 GtkTreeIter * parent);
    extern gboolean gtk_tree_model_iter_has_child(GtkTreeModel *
						  tree_model,
						  GtkTreeIter * iter);
    extern gint gtk_tree_model_iter_n_children(GtkTreeModel * tree_model,
					       GtkTreeIter * iter);
    extern gboolean gtk_tree_model_iter_next(GtkTreeModel * tree_model,
					     GtkTreeIter * iter);
    extern gboolean gtk_tree_model_iter_nth_child(GtkTreeModel *
						  tree_model,
						  GtkTreeIter * iter,
						  GtkTreeIter * parent,
						  gint n);
    extern gboolean gtk_tree_model_iter_parent(GtkTreeModel * tree_model,
					       GtkTreeIter * iter,
					       GtkTreeIter * child);
    extern void gtk_tree_model_ref_node(GtkTreeModel * tree_model,
					GtkTreeIter * iter);
    extern void gtk_tree_model_row_changed(GtkTreeModel * tree_model,
					   GtkTreePath * path,
					   GtkTreeIter * iter);
    extern void gtk_tree_model_row_deleted(GtkTreeModel * tree_model,
					   GtkTreePath * path);
    extern void gtk_tree_model_row_has_child_toggled(GtkTreeModel *
						     tree_model,
						     GtkTreePath * path,
						     GtkTreeIter * iter);
    extern void gtk_tree_model_row_inserted(GtkTreeModel * tree_model,
					    GtkTreePath * path,
					    GtkTreeIter * iter);
    extern void gtk_tree_model_rows_reordered(GtkTreeModel * tree_model,
					      GtkTreePath * path,
					      GtkTreeIter * iter,
					      gint * new_order);
    extern void gtk_tree_model_sort_clear_cache(GtkTreeModelSort *
						tree_model_sort);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_child_path_to_path(GtkTreeModelSort *
							tree_model_sort,
							GtkTreePath *
							child_path);
    extern void
	gtk_tree_model_sort_convert_iter_to_child_iter(GtkTreeModelSort *
						       tree_model_sort,
						       GtkTreeIter *
						       child_iter,
						       GtkTreeIter *
						       sorted_iter);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_path_to_child_path(GtkTreeModelSort *
							tree_model_sort,
							GtkTreePath *
							sorted_path);
    extern GtkTreeModel *gtk_tree_model_sort_get_model(GtkTreeModelSort *
						       tree_model);
    extern GType gtk_tree_model_sort_get_type(void);
    extern gboolean gtk_tree_model_sort_iter_is_valid(GtkTreeModelSort *
						      tree_model_sort,
						      GtkTreeIter * iter);
    extern GtkTreeModel *gtk_tree_model_sort_new_with_model(GtkTreeModel *
							    child_model);
    extern void
	gtk_tree_model_sort_reset_default_sort_func(GtkTreeModelSort *
						    tree_model_sort);
    extern void gtk_tree_model_unref_node(GtkTreeModel * tree_model,
					  GtkTreeIter * iter);
    extern void gtk_tree_path_append_index(GtkTreePath * path,
					   gint index_);
    extern gint gtk_tree_path_compare(const GtkTreePath * a,
				      const GtkTreePath * b);
    extern GtkTreePath *gtk_tree_path_copy(const GtkTreePath * path);
    extern void gtk_tree_path_down(GtkTreePath * path);
    extern void gtk_tree_path_free(GtkTreePath * path);
    extern gint gtk_tree_path_get_depth(GtkTreePath * path);
    extern gint *gtk_tree_path_get_indices(GtkTreePath * path);
    extern GType gtk_tree_path_get_type(void);
    extern gboolean gtk_tree_path_is_ancestor(GtkTreePath * path,
					      GtkTreePath * descendant);
    extern gboolean gtk_tree_path_is_descendant(GtkTreePath * path,
						GtkTreePath * ancestor);
    extern GtkTreePath *gtk_tree_path_new(void);
    extern GtkTreePath *gtk_tree_path_new_first(void);
    extern GtkTreePath *gtk_tree_path_new_from_indices(gint first_index,
						       ...);
    extern GtkTreePath *gtk_tree_path_new_from_string(const gchar * path);
    extern void gtk_tree_path_next(GtkTreePath * path);
    extern void gtk_tree_path_prepend_index(GtkTreePath * path,
					    gint index_);
    extern gboolean gtk_tree_path_prev(GtkTreePath * path);
    extern gchar *gtk_tree_path_to_string(GtkTreePath * path);
    extern gboolean gtk_tree_path_up(GtkTreePath * path);
    extern GtkTreeRowReference
	*gtk_tree_row_reference_copy(GtkTreeRowReference * reference);
    extern void gtk_tree_row_reference_deleted(GObject * proxy,
					       GtkTreePath * path);
    extern void gtk_tree_row_reference_free(GtkTreeRowReference *
					    reference);
    extern GtkTreePath *gtk_tree_row_reference_get_path(GtkTreeRowReference
							* reference);
    extern GType gtk_tree_row_reference_get_type(void);
    extern void gtk_tree_row_reference_inserted(GObject * proxy,
						GtkTreePath * path);
    extern GtkTreeRowReference *gtk_tree_row_reference_new(GtkTreeModel *
							   model,
							   GtkTreePath *
							   path);
    extern GtkTreeRowReference *gtk_tree_row_reference_new_proxy(GObject *
								 proxy,
								 GtkTreeModel
								 * model,
								 GtkTreePath
								 * path);
    extern void gtk_tree_row_reference_reordered(GObject * proxy,
						 GtkTreePath * path,
						 GtkTreeIter * iter,
						 gint * new_order);
    extern gboolean gtk_tree_row_reference_valid(GtkTreeRowReference *
						 reference);
    extern gint gtk_tree_selection_count_selected_rows(GtkTreeSelection *
						       selection);
    extern GtkSelectionMode gtk_tree_selection_get_mode(GtkTreeSelection *
							selection);
    extern gboolean gtk_tree_selection_get_selected(GtkTreeSelection *
						    selection,
						    GtkTreeModel * *model,
						    GtkTreeIter * iter);
    extern GList *gtk_tree_selection_get_selected_rows(GtkTreeSelection *
						       selection,
						       GtkTreeModel *
						       *model);
    extern GtkTreeView *gtk_tree_selection_get_tree_view(GtkTreeSelection *
							 selection);
    extern GType gtk_tree_selection_get_type(void);
    extern gpointer gtk_tree_selection_get_user_data(GtkTreeSelection *
						     selection);
    extern gboolean gtk_tree_selection_iter_is_selected(GtkTreeSelection *
							selection,
							GtkTreeIter *
							iter);
    extern gboolean gtk_tree_selection_path_is_selected(GtkTreeSelection *
							selection,
							GtkTreePath *
							path);
    extern void gtk_tree_selection_select_all(GtkTreeSelection *
					      selection);
    extern void gtk_tree_selection_select_iter(GtkTreeSelection *
					       selection,
					       GtkTreeIter * iter);
    extern void gtk_tree_selection_select_path(GtkTreeSelection *
					       selection,
					       GtkTreePath * path);
    extern void gtk_tree_selection_select_range(GtkTreeSelection *
						selection,
						GtkTreePath * start_path,
						GtkTreePath * end_path);
    extern void gtk_tree_selection_selected_foreach(GtkTreeSelection *
						    selection,
						    GtkTreeSelectionForeachFunc
						    func, gpointer data);
    extern void gtk_tree_selection_set_mode(GtkTreeSelection * selection,
					    GtkSelectionMode type);
    extern void gtk_tree_selection_set_select_function(GtkTreeSelection *
						       selection,
						       GtkTreeSelectionFunc
						       func, gpointer data,
						       GtkDestroyNotify
						       destroy);
    extern void gtk_tree_selection_unselect_all(GtkTreeSelection *
						selection);
    extern void gtk_tree_selection_unselect_iter(GtkTreeSelection *
						 selection,
						 GtkTreeIter * iter);
    extern void gtk_tree_selection_unselect_path(GtkTreeSelection *
						 selection,
						 GtkTreePath * path);
    extern void gtk_tree_selection_unselect_range(GtkTreeSelection *
						  selection,
						  GtkTreePath * start_path,
						  GtkTreePath * end_path);
    extern gboolean gtk_tree_set_row_drag_data(GtkSelectionData *
					       selection_data,
					       GtkTreeModel * tree_model,
					       GtkTreePath * path);
    extern gboolean gtk_tree_sortable_get_sort_column_id(GtkTreeSortable *
							 sortable,
							 gint *
							 sort_column_id,
							 GtkSortType *
							 order);
    extern GType gtk_tree_sortable_get_type(void);
    extern gboolean gtk_tree_sortable_has_default_sort_func(GtkTreeSortable
							    * sortable);
    extern void gtk_tree_sortable_set_default_sort_func(GtkTreeSortable *
							sortable,
							GtkTreeIterCompareFunc
							sort_func,
							gpointer user_data,
							GtkDestroyNotify
							destroy);
    extern void gtk_tree_sortable_set_sort_column_id(GtkTreeSortable *
						     sortable,
						     gint sort_column_id,
						     GtkSortType order);
    extern void gtk_tree_sortable_set_sort_func(GtkTreeSortable * sortable,
						gint sort_column_id,
						GtkTreeIterCompareFunc
						sort_func,
						gpointer user_data,
						GtkDestroyNotify destroy);
    extern void gtk_tree_sortable_sort_column_changed(GtkTreeSortable *
						      sortable);
    extern void gtk_tree_store_append(GtkTreeStore * tree_store,
				      GtkTreeIter * iter,
				      GtkTreeIter * parent);
    extern void gtk_tree_store_clear(GtkTreeStore * tree_store);
    extern GType gtk_tree_store_get_type(void);
    extern void gtk_tree_store_insert(GtkTreeStore * tree_store,
				      GtkTreeIter * iter,
				      GtkTreeIter * parent, gint position);
    extern void gtk_tree_store_insert_after(GtkTreeStore * tree_store,
					    GtkTreeIter * iter,
					    GtkTreeIter * parent,
					    GtkTreeIter * sibling);
    extern void gtk_tree_store_insert_before(GtkTreeStore * tree_store,
					     GtkTreeIter * iter,
					     GtkTreeIter * parent,
					     GtkTreeIter * sibling);
    extern gboolean gtk_tree_store_is_ancestor(GtkTreeStore * tree_store,
					       GtkTreeIter * iter,
					       GtkTreeIter * descendant);
    extern gint gtk_tree_store_iter_depth(GtkTreeStore * tree_store,
					  GtkTreeIter * iter);
    extern gboolean gtk_tree_store_iter_is_valid(GtkTreeStore * tree_store,
						 GtkTreeIter * iter);
    extern void gtk_tree_store_move_after(GtkTreeStore * tree_store,
					  GtkTreeIter * iter,
					  GtkTreeIter * position);
    extern void gtk_tree_store_move_before(GtkTreeStore * tree_store,
					   GtkTreeIter * iter,
					   GtkTreeIter * position);
    extern GtkTreeStore *gtk_tree_store_new(gint n_columns, ...);
    extern GtkTreeStore *gtk_tree_store_newv(gint n_columns,
					     GType * types);
    extern void gtk_tree_store_prepend(GtkTreeStore * tree_store,
				       GtkTreeIter * iter,
				       GtkTreeIter * parent);
    extern gboolean gtk_tree_store_remove(GtkTreeStore * tree_store,
					  GtkTreeIter * iter);
    extern void gtk_tree_store_reorder(GtkTreeStore * tree_store,
				       GtkTreeIter * parent,
				       gint * new_order);
    extern void gtk_tree_store_set(GtkTreeStore * tree_store,
				   GtkTreeIter * iter, ...);
    extern void gtk_tree_store_set_column_types(GtkTreeStore * tree_store,
						gint n_columns,
						GType * types);
    extern void gtk_tree_store_set_valist(GtkTreeStore * tree_store,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_tree_store_set_value(GtkTreeStore * tree_store,
					 GtkTreeIter * iter, gint column,
					 GValue * value);
    extern void gtk_tree_store_swap(GtkTreeStore * tree_store,
				    GtkTreeIter * a, GtkTreeIter * b);
    extern gint gtk_tree_view_append_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn * column);
    extern void gtk_tree_view_collapse_all(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_collapse_row(GtkTreeView * tree_view,
					       GtkTreePath * path);
    extern void gtk_tree_view_column_add_attribute(GtkTreeViewColumn *
						   tree_column,
						   GtkCellRenderer *
						   cell_renderer,
						   const gchar * attribute,
						   gint column);
    extern gboolean
	gtk_tree_view_column_cell_get_position(GtkTreeViewColumn *
					       tree_column,
					       GtkCellRenderer *
					       cell_renderer,
					       gint * start_pos,
					       gint * width);
    extern void gtk_tree_view_column_cell_get_size(GtkTreeViewColumn *
						   tree_column,
						   const GdkRectangle *
						   cell_area,
						   gint * x_offset,
						   gint * y_offset,
						   gint * width,
						   gint * height);
    extern gboolean gtk_tree_view_column_cell_is_visible(GtkTreeViewColumn
							 * tree_column);
    extern void gtk_tree_view_column_cell_set_cell_data(GtkTreeViewColumn *
							tree_column,
							GtkTreeModel *
							tree_model,
							GtkTreeIter * iter,
							gboolean
							is_expander,
							gboolean
							is_expanded);
    extern void gtk_tree_view_column_clear(GtkTreeViewColumn *
					   tree_column);
    extern void gtk_tree_view_column_clear_attributes(GtkTreeViewColumn *
						      tree_column,
						      GtkCellRenderer *
						      cell_renderer);
    extern void gtk_tree_view_column_clicked(GtkTreeViewColumn *
					     tree_column);
    extern void gtk_tree_view_column_focus_cell(GtkTreeViewColumn *
						tree_column,
						GtkCellRenderer * cell);
    extern gfloat gtk_tree_view_column_get_alignment(GtkTreeViewColumn *
						     tree_column);
    extern GList *gtk_tree_view_column_get_cell_renderers(GtkTreeViewColumn
							  * tree_column);
    extern gboolean gtk_tree_view_column_get_clickable(GtkTreeViewColumn *
						       tree_column);
    extern gboolean gtk_tree_view_column_get_expand(GtkTreeViewColumn *
						    tree_column);
    extern gint gtk_tree_view_column_get_fixed_width(GtkTreeViewColumn *
						     tree_column);
    extern gint gtk_tree_view_column_get_max_width(GtkTreeViewColumn *
						   tree_column);
    extern gint gtk_tree_view_column_get_min_width(GtkTreeViewColumn *
						   tree_column);
    extern gboolean gtk_tree_view_column_get_reorderable(GtkTreeViewColumn
							 * tree_column);
    extern gboolean gtk_tree_view_column_get_resizable(GtkTreeViewColumn *
						       tree_column);
    extern GtkTreeViewColumnSizing
	gtk_tree_view_column_get_sizing(GtkTreeViewColumn * tree_column);
    extern gint gtk_tree_view_column_get_sort_column_id(GtkTreeViewColumn *
							tree_column);
    extern gboolean
	gtk_tree_view_column_get_sort_indicator(GtkTreeViewColumn *
						tree_column);
    extern GtkSortType
	gtk_tree_view_column_get_sort_order(GtkTreeViewColumn *
					    tree_column);
    extern gint gtk_tree_view_column_get_spacing(GtkTreeViewColumn *
						 tree_column);
    extern const gchar *gtk_tree_view_column_get_title(GtkTreeViewColumn *
						       tree_column);
    extern GType gtk_tree_view_column_get_type(void);
    extern gboolean gtk_tree_view_column_get_visible(GtkTreeViewColumn *
						     tree_column);
    extern GtkWidget *gtk_tree_view_column_get_widget(GtkTreeViewColumn *
						      tree_column);
    extern gint gtk_tree_view_column_get_width(GtkTreeViewColumn *
					       tree_column);
    extern GtkTreeViewColumn *gtk_tree_view_column_new(void);
    extern GtkTreeViewColumn
	*gtk_tree_view_column_new_with_attributes(const gchar * title,
						  GtkCellRenderer * cell,
						  ...);
    extern void gtk_tree_view_column_pack_end(GtkTreeViewColumn *
					      tree_column,
					      GtkCellRenderer * cell,
					      gboolean expand);
    extern void gtk_tree_view_column_pack_start(GtkTreeViewColumn *
						tree_column,
						GtkCellRenderer * cell,
						gboolean expand);
    extern void gtk_tree_view_column_set_alignment(GtkTreeViewColumn *
						   tree_column,
						   gfloat xalign);
    extern void gtk_tree_view_column_set_attributes(GtkTreeViewColumn *
						    tree_column,
						    GtkCellRenderer *
						    cell_renderer, ...);
    extern void gtk_tree_view_column_set_cell_data_func(GtkTreeViewColumn *
							tree_column,
							GtkCellRenderer *
							cell_renderer,
							GtkTreeCellDataFunc
							func,
							gpointer func_data,
							GtkDestroyNotify
							destroy);
    extern void gtk_tree_view_column_set_clickable(GtkTreeViewColumn *
						   tree_column,
						   gboolean clickable);
    extern void gtk_tree_view_column_set_expand(GtkTreeViewColumn *
						tree_column,
						gboolean expand);
    extern void gtk_tree_view_column_set_fixed_width(GtkTreeViewColumn *
						     tree_column,
						     gint fixed_width);
    extern void gtk_tree_view_column_set_max_width(GtkTreeViewColumn *
						   tree_column,
						   gint max_width);
    extern void gtk_tree_view_column_set_min_width(GtkTreeViewColumn *
						   tree_column,
						   gint min_width);
    extern void gtk_tree_view_column_set_reorderable(GtkTreeViewColumn *
						     tree_column,
						     gboolean reorderable);
    extern void gtk_tree_view_column_set_resizable(GtkTreeViewColumn *
						   tree_column,
						   gboolean resizable);
    extern void gtk_tree_view_column_set_sizing(GtkTreeViewColumn *
						tree_column,
						GtkTreeViewColumnSizing
						type);
    extern void gtk_tree_view_column_set_sort_column_id(GtkTreeViewColumn *
							tree_column,
							gint
							sort_column_id);
    extern void gtk_tree_view_column_set_sort_indicator(GtkTreeViewColumn *
							tree_column,
							gboolean setting);
    extern void gtk_tree_view_column_set_sort_order(GtkTreeViewColumn *
						    tree_column,
						    GtkSortType order);
    extern void gtk_tree_view_column_set_spacing(GtkTreeViewColumn *
						 tree_column,
						 gint spacing);
    extern void gtk_tree_view_column_set_title(GtkTreeViewColumn *
					       tree_column,
					       const gchar * title);
    extern void gtk_tree_view_column_set_visible(GtkTreeViewColumn *
						 tree_column,
						 gboolean visible);
    extern void gtk_tree_view_column_set_widget(GtkTreeViewColumn *
						tree_column,
						GtkWidget * widget);
    extern GType gtk_tree_view_column_sizing_get_type(void);
    extern void gtk_tree_view_columns_autosize(GtkTreeView * tree_view);
    extern GdkPixmap *gtk_tree_view_create_row_drag_icon(GtkTreeView *
							 tree_view,
							 GtkTreePath *
							 path);
    extern GType gtk_tree_view_drop_position_get_type(void);
    extern void gtk_tree_view_enable_model_drag_dest(GtkTreeView *
						     tree_view,
						     const GtkTargetEntry *
						     targets,
						     gint n_targets,
						     GdkDragAction
						     actions);
    extern void gtk_tree_view_enable_model_drag_source(GtkTreeView *
						       tree_view,
						       GdkModifierType
						       start_button_mask,
						       const GtkTargetEntry
						       * targets,
						       gint n_targets,
						       GdkDragAction
						       actions);
    extern void gtk_tree_view_expand_all(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_expand_row(GtkTreeView * tree_view,
					     GtkTreePath * path,
					     gboolean open_all);
    extern void gtk_tree_view_expand_to_path(GtkTreeView * tree_view,
					     GtkTreePath * path);
    extern void gtk_tree_view_get_background_area(GtkTreeView * tree_view,
						  GtkTreePath * path,
						  GtkTreeViewColumn *
						  column,
						  GdkRectangle * rect);
    extern GdkWindow *gtk_tree_view_get_bin_window(GtkTreeView *
						   tree_view);
    extern void gtk_tree_view_get_cell_area(GtkTreeView * tree_view,
					    GtkTreePath * path,
					    GtkTreeViewColumn * column,
					    GdkRectangle * rect);
    extern GtkTreeViewColumn *gtk_tree_view_get_column(GtkTreeView *
						       tree_view, gint n);
    extern GList *gtk_tree_view_get_columns(GtkTreeView * tree_view);
    extern void gtk_tree_view_get_cursor(GtkTreeView * tree_view,
					 GtkTreePath * *path,
					 GtkTreeViewColumn *
					 *focus_column);
    extern gboolean gtk_tree_view_get_dest_row_at_pos(GtkTreeView *
						      tree_view,
						      gint drag_x,
						      gint drag_y,
						      GtkTreePath * *path,
						      GtkTreeViewDropPosition
						      * pos);
    extern void gtk_tree_view_get_drag_dest_row(GtkTreeView * tree_view,
						GtkTreePath * *path,
						GtkTreeViewDropPosition *
						pos);
    extern gboolean gtk_tree_view_get_enable_search(GtkTreeView *
						    tree_view);
    extern GtkTreeViewColumn *gtk_tree_view_get_expander_column(GtkTreeView
								*
								tree_view);
    extern gboolean gtk_tree_view_get_fixed_height_mode(GtkTreeView *
							tree_view);
    extern GtkAdjustment *gtk_tree_view_get_hadjustment(GtkTreeView *
							tree_view);
    extern gboolean gtk_tree_view_get_headers_visible(GtkTreeView *
						      tree_view);
    extern gboolean gtk_tree_view_get_hover_expand(GtkTreeView *
						   tree_view);
    extern gboolean gtk_tree_view_get_hover_selection(GtkTreeView *
						      tree_view);
    extern GtkTreeModel *gtk_tree_view_get_model(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_get_path_at_pos(GtkTreeView * tree_view,
						  gint x, gint y,
						  GtkTreePath * *path,
						  GtkTreeViewColumn *
						  *column, gint * cell_x,
						  gint * cell_y);
    extern gboolean gtk_tree_view_get_reorderable(GtkTreeView * tree_view);
    extern GtkTreeViewRowSeparatorFunc
	gtk_tree_view_get_row_separator_func(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_get_rules_hint(GtkTreeView * tree_view);
    extern gint gtk_tree_view_get_search_column(GtkTreeView * tree_view);
    extern GtkTreeViewSearchEqualFunc
	gtk_tree_view_get_search_equal_func(GtkTreeView * tree_view);
    extern GtkTreeSelection *gtk_tree_view_get_selection(GtkTreeView *
							 tree_view);
    extern GType gtk_tree_view_get_type(void);
    extern GtkAdjustment *gtk_tree_view_get_vadjustment(GtkTreeView *
							tree_view);
    extern void gtk_tree_view_get_visible_rect(GtkTreeView * tree_view,
					       GdkRectangle *
					       visible_rect);
    extern gint gtk_tree_view_insert_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn * column,
					    gint position);
    extern gint gtk_tree_view_insert_column_with_attributes(GtkTreeView *
							    tree_view,
							    gint position,
							    const gchar *
							    title,
							    GtkCellRenderer
							    * cell, ...);
    extern gint gtk_tree_view_insert_column_with_data_func(GtkTreeView *
							   tree_view,
							   gint position,
							   const gchar *
							   title,
							   GtkCellRenderer
							   * cell,
							   GtkTreeCellDataFunc
							   func,
							   gpointer data,
							   GDestroyNotify
							   dnotify);
    extern void gtk_tree_view_map_expanded_rows(GtkTreeView * tree_view,
						GtkTreeViewMappingFunc
						func, gpointer data);
    extern GType gtk_tree_view_mode_get_type(void);
    extern void gtk_tree_view_move_column_after(GtkTreeView * tree_view,
						GtkTreeViewColumn * column,
						GtkTreeViewColumn *
						base_column);
    extern GtkWidget *gtk_tree_view_new(void);
    extern GtkWidget *gtk_tree_view_new_with_model(GtkTreeModel * model);
    extern gint gtk_tree_view_remove_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn * column);
    extern void gtk_tree_view_row_activated(GtkTreeView * tree_view,
					    GtkTreePath * path,
					    GtkTreeViewColumn * column);
    extern gboolean gtk_tree_view_row_expanded(GtkTreeView * tree_view,
					       GtkTreePath * path);
    extern void gtk_tree_view_scroll_to_cell(GtkTreeView * tree_view,
					     GtkTreePath * path,
					     GtkTreeViewColumn * column,
					     gboolean use_align,
					     gfloat row_align,
					     gfloat col_align);
    extern void gtk_tree_view_scroll_to_point(GtkTreeView * tree_view,
					      gint tree_x, gint tree_y);
    extern void gtk_tree_view_set_column_drag_function(GtkTreeView *
						       tree_view,
						       GtkTreeViewColumnDropFunc
						       func,
						       gpointer user_data,
						       GtkDestroyNotify
						       destroy);
    extern void gtk_tree_view_set_cursor(GtkTreeView * tree_view,
					 GtkTreePath * path,
					 GtkTreeViewColumn * focus_column,
					 gboolean start_editing);
    extern void gtk_tree_view_set_cursor_on_cell(GtkTreeView * tree_view,
						 GtkTreePath * path,
						 GtkTreeViewColumn *
						 focus_column,
						 GtkCellRenderer *
						 focus_cell,
						 gboolean start_editing);
    extern void gtk_tree_view_set_destroy_count_func(GtkTreeView *
						     tree_view,
						     GtkTreeDestroyCountFunc
						     func, gpointer data,
						     GtkDestroyNotify
						     destroy);
    extern void gtk_tree_view_set_drag_dest_row(GtkTreeView * tree_view,
						GtkTreePath * path,
						GtkTreeViewDropPosition
						pos);
    extern void gtk_tree_view_set_enable_search(GtkTreeView * tree_view,
						gboolean enable_search);
    extern void gtk_tree_view_set_expander_column(GtkTreeView * tree_view,
						  GtkTreeViewColumn *
						  column);
    extern void gtk_tree_view_set_fixed_height_mode(GtkTreeView *
						    tree_view,
						    gboolean enable);
    extern void gtk_tree_view_set_hadjustment(GtkTreeView * tree_view,
					      GtkAdjustment * adjustment);
    extern void gtk_tree_view_set_headers_clickable(GtkTreeView *
						    tree_view,
						    gboolean setting);
    extern void gtk_tree_view_set_headers_visible(GtkTreeView * tree_view,
						  gboolean
						  headers_visible);
    extern void gtk_tree_view_set_hover_expand(GtkTreeView * tree_view,
					       gboolean expand);
    extern void gtk_tree_view_set_hover_selection(GtkTreeView * tree_view,
						  gboolean hover);
    extern void gtk_tree_view_set_model(GtkTreeView * tree_view,
					GtkTreeModel * model);
    extern void gtk_tree_view_set_reorderable(GtkTreeView * tree_view,
					      gboolean reorderable);
    extern void gtk_tree_view_set_row_separator_func(GtkTreeView *
						     tree_view,
						     GtkTreeViewRowSeparatorFunc
						     func, gpointer data,
						     GtkDestroyNotify
						     destroy);
    extern void gtk_tree_view_set_rules_hint(GtkTreeView * tree_view,
					     gboolean setting);
    extern void gtk_tree_view_set_search_column(GtkTreeView * tree_view,
						gint column);
    extern void gtk_tree_view_set_search_equal_func(GtkTreeView *
						    tree_view,
						    GtkTreeViewSearchEqualFunc
						    search_equal_func,
						    gpointer
						    search_user_data,
						    GtkDestroyNotify
						    search_destroy);
    extern void gtk_tree_view_set_vadjustment(GtkTreeView * tree_view,
					      GtkAdjustment * adjustment);
    /* GtkTree is deprecated and unsupported. It is known to be buggy. Use GtkTreeView instead. */
    extern void gtk_tree_view_tree_to_widget_coords(GtkTreeView *
						    tree_view, gint tx,
						    gint ty, gint * wx,
						    gint * wy)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern void gtk_tree_view_unset_rows_drag_dest(GtkTreeView *
						   tree_view);
    extern void gtk_tree_view_unset_rows_drag_source(GtkTreeView *
						     tree_view);
    /* GtkTree is deprecated and unsupported. It is known to be buggy. Use GtkTreeView instead. */
    extern void gtk_tree_view_widget_to_tree_coords(GtkTreeView *
						    tree_view, gint wx,
						    gint wy, gint * tx,
						    gint * ty)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern gboolean gtk_true(void);
    extern gpointer gtk_type_class(GtkType type);
    extern void gtk_ui_manager_add_ui(GtkUIManager * self, guint merge_id,
				      const gchar * path,
				      const gchar * name,
				      const gchar * action,
				      GtkUIManagerItemType type,
				      gboolean top);
    extern guint gtk_ui_manager_add_ui_from_file(GtkUIManager * self,
						 const gchar * filename,
						 GError * *error);
    extern guint gtk_ui_manager_add_ui_from_string(GtkUIManager * self,
						   const gchar * buffer,
						   gssize length,
						   GError * *error);
    extern void gtk_ui_manager_ensure_update(GtkUIManager * self);
    extern GtkAccelGroup *gtk_ui_manager_get_accel_group(GtkUIManager *
							 self);
    extern GtkAction *gtk_ui_manager_get_action(GtkUIManager * self,
						const gchar * path);
    extern GList *gtk_ui_manager_get_action_groups(GtkUIManager * self);
    extern gboolean gtk_ui_manager_get_add_tearoffs(GtkUIManager * self);
    extern GSList *gtk_ui_manager_get_toplevels(GtkUIManager * self,
						GtkUIManagerItemType
						types);
    extern GType gtk_ui_manager_get_type(void);
    extern gchar *gtk_ui_manager_get_ui(GtkUIManager * self);
    extern GtkWidget *gtk_ui_manager_get_widget(GtkUIManager * self,
						const gchar * path);
    extern void gtk_ui_manager_insert_action_group(GtkUIManager * self,
						   GtkActionGroup *
						   action_group, gint pos);
    extern GType gtk_ui_manager_item_type_get_type(void);
    extern GtkUIManager *gtk_ui_manager_new(void);
    extern guint gtk_ui_manager_new_merge_id(GtkUIManager * self);
    extern void gtk_ui_manager_remove_action_group(GtkUIManager * self,
						   GtkActionGroup *
						   action_group);
    extern void gtk_ui_manager_remove_ui(GtkUIManager * self,
					 guint merge_id);
    extern void gtk_ui_manager_set_add_tearoffs(GtkUIManager * self,
						gboolean add_tearoffs);
    extern GType gtk_update_type_get_type(void);
    extern GType gtk_vbox_get_type(void);
    extern GtkWidget *gtk_vbox_new(gboolean homogeneous, gint spacing);
    extern GType gtk_vbutton_box_get_type(void);
    extern GtkWidget *gtk_vbutton_box_new(void);
    extern GtkAdjustment *gtk_viewport_get_hadjustment(GtkViewport *
						       viewport);
    extern GtkShadowType gtk_viewport_get_shadow_type(GtkViewport *
						      viewport);
    extern GType gtk_viewport_get_type(void);
    extern GtkAdjustment *gtk_viewport_get_vadjustment(GtkViewport *
						       viewport);
    extern GtkWidget *gtk_viewport_new(GtkAdjustment * hadjustment,
				       GtkAdjustment * vadjustment);
    extern void gtk_viewport_set_hadjustment(GtkViewport * viewport,
					     GtkAdjustment * adjustment);
    extern void gtk_viewport_set_shadow_type(GtkViewport * viewport,
					     GtkShadowType type);
    extern void gtk_viewport_set_vadjustment(GtkViewport * viewport,
					     GtkAdjustment * adjustment);
    extern GType gtk_visibility_get_type(void);
    extern GType gtk_vpaned_get_type(void);
    extern GtkWidget *gtk_vpaned_new(void);
    extern GType gtk_vruler_get_type(void);
    extern GtkWidget *gtk_vruler_new(void);
    extern GType gtk_vscale_get_type(void);
    extern GtkWidget *gtk_vscale_new(GtkAdjustment * adjustment);
    extern GtkWidget *gtk_vscale_new_with_range(gdouble min, gdouble max,
						gdouble step);
    extern GType gtk_vscrollbar_get_type(void);
    extern GtkWidget *gtk_vscrollbar_new(GtkAdjustment * adjustment);
    extern GType gtk_vseparator_get_type(void);
    extern GtkWidget *gtk_vseparator_new(void);
    extern gboolean gtk_widget_activate(GtkWidget * widget);
    extern void gtk_widget_add_accelerator(GtkWidget * widget,
					   const gchar * accel_signal,
					   GtkAccelGroup * accel_group,
					   guint accel_key,
					   GdkModifierType accel_mods,
					   GtkAccelFlags accel_flags);
    extern void gtk_widget_add_events(GtkWidget * widget, gint events);
    extern void gtk_widget_add_mnemonic_label(GtkWidget * widget,
					      GtkWidget * label);
    extern gboolean gtk_widget_can_activate_accel(GtkWidget * widget,
						  guint signal_id);
    extern gboolean gtk_widget_child_focus(GtkWidget * widget,
					   GtkDirectionType direction);
    extern void gtk_widget_child_notify(GtkWidget * widget,
					const gchar * child_property);
    extern GParamSpec *gtk_widget_class_find_style_property(GtkWidgetClass
							    * klass,
							    const gchar *
							    property_name);
    extern void gtk_widget_class_install_style_property(GtkWidgetClass *
							klass,
							GParamSpec *
							pspec);
    extern void
	gtk_widget_class_install_style_property_parser(GtkWidgetClass *
						       klass,
						       GParamSpec * pspec,
						       GtkRcPropertyParser
						       parser);
    extern GParamSpec
	**gtk_widget_class_list_style_properties(GtkWidgetClass * klass,
						 guint * n_properties);
    extern void gtk_widget_class_path(GtkWidget * widget,
				      guint * path_length, gchar * *path,
				      gchar * *path_reversed);
    extern PangoContext *gtk_widget_create_pango_context(GtkWidget *
							 widget);
    extern PangoLayout *gtk_widget_create_pango_layout(GtkWidget * widget,
						       const gchar * text);
    extern void gtk_widget_destroy(GtkWidget * widget);
    extern void gtk_widget_destroyed(GtkWidget * widget,
				     GtkWidget * *widget_pointer);
    extern void gtk_widget_ensure_style(GtkWidget * widget);
    extern gboolean gtk_widget_event(GtkWidget * widget, GdkEvent * event);
    extern GType gtk_widget_flags_get_type(void);
    extern void gtk_widget_freeze_child_notify(GtkWidget * widget);
    extern AtkObject *gtk_widget_get_accessible(GtkWidget * widget);
    extern GtkWidget *gtk_widget_get_ancestor(GtkWidget * widget,
					      GType widget_type);
    extern void gtk_widget_get_child_requisition(GtkWidget * widget,
						 GtkRequisition *
						 requisition);
    extern gboolean gtk_widget_get_child_visible(GtkWidget * widget);
    extern GtkClipboard *gtk_widget_get_clipboard(GtkWidget * widget,
						  GdkAtom selection);
    extern GdkColormap *gtk_widget_get_colormap(GtkWidget * widget);
    extern gchar *gtk_widget_get_composite_name(GtkWidget * widget);
    extern GdkColormap *gtk_widget_get_default_colormap(void);
    extern GtkTextDirection gtk_widget_get_default_direction(void);
    extern GtkStyle *gtk_widget_get_default_style(void);
    extern GdkVisual *gtk_widget_get_default_visual(void);
    extern GtkTextDirection gtk_widget_get_direction(GtkWidget * widget);
    extern GdkDisplay *gtk_widget_get_display(GtkWidget * widget);
    extern gint gtk_widget_get_events(GtkWidget * widget);
    extern GdkExtensionMode gtk_widget_get_extension_events(GtkWidget *
							    widget);
    extern GtkRcStyle *gtk_widget_get_modifier_style(GtkWidget * widget);
    extern const gchar *gtk_widget_get_name(GtkWidget * widget);
    extern gboolean gtk_widget_get_no_show_all(GtkWidget * widget);
    extern PangoContext *gtk_widget_get_pango_context(GtkWidget * widget);
    extern GtkWidget *gtk_widget_get_parent(GtkWidget * widget);
    extern GdkWindow *gtk_widget_get_parent_window(GtkWidget * widget);
    extern void gtk_widget_get_pointer(GtkWidget * widget, gint * x,
				       gint * y);
    extern GdkWindow *gtk_widget_get_root_window(GtkWidget * widget);
    extern GdkScreen *gtk_widget_get_screen(GtkWidget * widget);
    extern GtkSettings *gtk_widget_get_settings(GtkWidget * widget);
    extern void gtk_widget_get_size_request(GtkWidget * widget,
					    gint * width, gint * height);
    extern GtkStyle *gtk_widget_get_style(GtkWidget * widget);
    extern GtkWidget *gtk_widget_get_toplevel(GtkWidget * widget);
    extern GType gtk_widget_get_type(void);
    extern GdkVisual *gtk_widget_get_visual(GtkWidget * widget);
    extern void gtk_widget_grab_default(GtkWidget * widget);
    extern void gtk_widget_grab_focus(GtkWidget * widget);
    extern gboolean gtk_widget_has_screen(GtkWidget * widget);
    extern GType gtk_widget_help_type_get_type(void);
    extern void gtk_widget_hide(GtkWidget * widget);
    extern void gtk_widget_hide_all(GtkWidget * widget);
    extern gboolean gtk_widget_hide_on_delete(GtkWidget * widget);
    extern gboolean gtk_widget_intersect(GtkWidget * widget,
					 const GdkRectangle * area,
					 GdkRectangle * intersection);
    extern gboolean gtk_widget_is_ancestor(GtkWidget * widget,
					   GtkWidget * ancestor);
    extern gboolean gtk_widget_is_focus(GtkWidget * widget);
    extern GList *gtk_widget_list_accel_closures(GtkWidget * widget);
    extern GList *gtk_widget_list_mnemonic_labels(GtkWidget * widget);
    extern void gtk_widget_map(GtkWidget * widget);
    extern gboolean gtk_widget_mnemonic_activate(GtkWidget * widget,
						 gboolean group_cycling);
    extern void gtk_widget_modify_base(GtkWidget * widget,
				       GtkStateType state,
				       const GdkColor * color);
    extern void gtk_widget_modify_bg(GtkWidget * widget,
				     GtkStateType state,
				     const GdkColor * color);
    extern void gtk_widget_modify_fg(GtkWidget * widget,
				     GtkStateType state,
				     const GdkColor * color);
    extern void gtk_widget_modify_font(GtkWidget * widget,
				       PangoFontDescription * font_desc);
    extern void gtk_widget_modify_style(GtkWidget * widget,
					GtkRcStyle * style);
    extern void gtk_widget_modify_text(GtkWidget * widget,
				       GtkStateType state,
				       const GdkColor * color);
    extern GtkWidget *gtk_widget_new(GType type,
				     const gchar * first_property_name,
				     ...);
    extern void gtk_widget_path(GtkWidget * widget, guint * path_length,
				gchar * *path, gchar * *path_reversed);
    extern void gtk_widget_pop_colormap(void);
    extern void gtk_widget_pop_composite_child(void);
    extern void gtk_widget_push_colormap(GdkColormap * cmap);
    extern void gtk_widget_push_composite_child(void);
    extern void gtk_widget_queue_draw(GtkWidget * widget);
    extern void gtk_widget_queue_draw_area(GtkWidget * widget, gint x,
					   gint y, gint width,
					   gint height);
    extern void gtk_widget_queue_resize(GtkWidget * widget);
    extern void gtk_widget_queue_resize_no_redraw(GtkWidget * widget);
    extern void gtk_widget_realize(GtkWidget * widget);
    /* gtk_widget_ref is deprecated and should not be used in newly-written code. Use g_object_ref instead. */
    extern GtkWidget *gtk_widget_ref(GtkWidget * widget)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern GdkRegion *gtk_widget_region_intersect(GtkWidget * widget,
						  const GdkRegion *
						  region);
    extern gboolean gtk_widget_remove_accelerator(GtkWidget * widget,
						  GtkAccelGroup *
						  accel_group,
						  guint accel_key,
						  GdkModifierType
						  accel_mods);
    extern void gtk_widget_remove_mnemonic_label(GtkWidget * widget,
						 GtkWidget * label);
    extern GdkPixbuf *gtk_widget_render_icon(GtkWidget * widget,
					     const gchar * stock_id,
					     GtkIconSize size,
					     const gchar * detail);
    extern void gtk_widget_reparent(GtkWidget * widget,
				    GtkWidget * new_parent);
    extern void gtk_widget_reset_rc_styles(GtkWidget * widget);
    extern void gtk_widget_reset_shapes(GtkWidget * widget);
    extern gint gtk_widget_send_expose(GtkWidget * widget,
				       GdkEvent * event);
    extern void gtk_widget_set_accel_path(GtkWidget * widget,
					  const gchar * accel_path,
					  GtkAccelGroup * accel_group);
    extern void gtk_widget_set_app_paintable(GtkWidget * widget,
					     gboolean app_paintable);
    extern void gtk_widget_set_child_visible(GtkWidget * widget,
					     gboolean is_visible);
    extern void gtk_widget_set_colormap(GtkWidget * widget,
					GdkColormap * colormap);
    extern void gtk_widget_set_composite_name(GtkWidget * widget,
					      const gchar * name);
    extern void gtk_widget_set_default_colormap(GdkColormap * colormap);
    extern void gtk_widget_set_default_direction(GtkTextDirection dir);
    extern void gtk_widget_set_direction(GtkWidget * widget,
					 GtkTextDirection dir);
    extern void gtk_widget_set_double_buffered(GtkWidget * widget,
					       gboolean double_buffered);
    extern void gtk_widget_set_events(GtkWidget * widget, gint events);
    extern void gtk_widget_set_extension_events(GtkWidget * widget,
						GdkExtensionMode mode);
    extern void gtk_widget_set_name(GtkWidget * widget,
				    const gchar * name);
    extern void gtk_widget_set_no_show_all(GtkWidget * widget,
					   gboolean no_show_all);
    extern void gtk_widget_set_parent(GtkWidget * widget,
				      GtkWidget * parent);
    extern void gtk_widget_set_parent_window(GtkWidget * widget,
					     GdkWindow * parent_window);
    extern void gtk_widget_set_redraw_on_allocate(GtkWidget * widget,
						  gboolean
						  redraw_on_allocate);
    extern gboolean gtk_widget_set_scroll_adjustments(GtkWidget * widget,
						      GtkAdjustment *
						      hadjustment,
						      GtkAdjustment *
						      vadjustment);
    extern void gtk_widget_set_sensitive(GtkWidget * widget,
					 gboolean sensitive);
    extern void gtk_widget_set_size_request(GtkWidget * widget, gint width,
					    gint height);
    extern void gtk_widget_set_state(GtkWidget * widget,
				     GtkStateType state);
    extern void gtk_widget_set_style(GtkWidget * widget, GtkStyle * style);
    extern void gtk_widget_shape_combine_mask(GtkWidget * widget,
					      GdkBitmap * shape_mask,
					      gint offset_x,
					      gint offset_y);
    extern void gtk_widget_show(GtkWidget * widget);
    extern void gtk_widget_show_all(GtkWidget * widget);
    extern void gtk_widget_show_now(GtkWidget * widget);
    extern void gtk_widget_size_allocate(GtkWidget * widget,
					 GtkAllocation * allocation);
    extern void gtk_widget_size_request(GtkWidget * widget,
					GtkRequisition * requisition);
    extern void gtk_widget_style_get(GtkWidget * widget,
				     const gchar * first_property_name,
				     ...);
    extern void gtk_widget_style_get_property(GtkWidget * widget,
					      const gchar * property_name,
					      GValue * value);
    extern void gtk_widget_style_get_valist(GtkWidget * widget,
					    const gchar *
					    first_property_name,
					    va_list var_args);
    extern void gtk_widget_thaw_child_notify(GtkWidget * widget);
    extern gboolean gtk_widget_translate_coordinates(GtkWidget *
						     src_widget,
						     GtkWidget *
						     dest_widget,
						     gint src_x,
						     gint src_y,
						     gint * dest_x,
						     gint * dest_y);
    extern void gtk_widget_unmap(GtkWidget * widget);
    extern void gtk_widget_unparent(GtkWidget * widget);
    extern void gtk_widget_unrealize(GtkWidget * widget);
    /* gtk_widget_unref is deprecated and should not be used in newly-written code. Use g_object_unref instead. */
    extern void gtk_widget_unref(GtkWidget * widget)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern gboolean gtk_window_activate_default(GtkWindow * window);
    extern gboolean gtk_window_activate_focus(GtkWindow * window);
    extern gboolean gtk_window_activate_key(GtkWindow * window,
					    GdkEventKey * event);
    extern void gtk_window_add_accel_group(GtkWindow * window,
					   GtkAccelGroup * accel_group);
    extern void gtk_window_add_mnemonic(GtkWindow * window, guint keyval,
					GtkWidget * target);
    extern void gtk_window_begin_move_drag(GtkWindow * window, gint button,
					   gint root_x, gint root_y,
					   guint32 timestamp);
    extern void gtk_window_begin_resize_drag(GtkWindow * window,
					     GdkWindowEdge edge,
					     gint button, gint root_x,
					     gint root_y,
					     guint32 timestamp);
    extern void gtk_window_deiconify(GtkWindow * window);
    extern void gtk_window_fullscreen(GtkWindow * window);
    extern gboolean gtk_window_get_accept_focus(GtkWindow * window);
    extern gboolean gtk_window_get_decorated(GtkWindow * window);
    extern GList *gtk_window_get_default_icon_list(void);
    extern void gtk_window_get_default_size(GtkWindow * window,
					    gint * width, gint * height);
    extern gboolean gtk_window_get_destroy_with_parent(GtkWindow * window);
    extern GtkWidget *gtk_window_get_focus(GtkWindow * window);
    extern gboolean gtk_window_get_focus_on_map(GtkWindow * window);
    extern void gtk_window_get_frame_dimensions(GtkWindow * window,
						gint * left, gint * top,
						gint * right,
						gint * bottom);
    extern GdkGravity gtk_window_get_gravity(GtkWindow * window);
    extern gboolean gtk_window_get_has_frame(GtkWindow * window);
    extern GdkPixbuf *gtk_window_get_icon(GtkWindow * window);
    extern GList *gtk_window_get_icon_list(GtkWindow * window);
    extern const gchar *gtk_window_get_icon_name(GtkWindow * window);
    extern GdkModifierType gtk_window_get_mnemonic_modifier(GtkWindow *
							    window);
    extern gboolean gtk_window_get_modal(GtkWindow * window);
    extern void gtk_window_get_position(GtkWindow * window, gint * root_x,
					gint * root_y);
    extern gboolean gtk_window_get_resizable(GtkWindow * window);
    extern const gchar *gtk_window_get_role(GtkWindow * window);
    extern GdkScreen *gtk_window_get_screen(GtkWindow * window);
    extern void gtk_window_get_size(GtkWindow * window, gint * width,
				    gint * height);
    extern gboolean gtk_window_get_skip_pager_hint(GtkWindow * window);
    extern gboolean gtk_window_get_skip_taskbar_hint(GtkWindow * window);
    extern const gchar *gtk_window_get_title(GtkWindow * window);
    extern GtkWindow *gtk_window_get_transient_for(GtkWindow * window);
    extern GType gtk_window_get_type(void);
    extern GdkWindowTypeHint gtk_window_get_type_hint(GtkWindow * window);
    extern void gtk_window_group_add_window(GtkWindowGroup * window_group,
					    GtkWindow * window);
    extern GType gtk_window_group_get_type(void);
    extern GtkWindowGroup *gtk_window_group_new(void);
    extern void gtk_window_group_remove_window(GtkWindowGroup *
					       window_group,
					       GtkWindow * window);
    extern gboolean gtk_window_has_toplevel_focus(GtkWindow * window);
    extern void gtk_window_iconify(GtkWindow * window);
    extern gboolean gtk_window_is_active(GtkWindow * window);
    extern GList *gtk_window_list_toplevels(void);
    extern void gtk_window_maximize(GtkWindow * window);
    extern gboolean gtk_window_mnemonic_activate(GtkWindow * window,
						 guint keyval,
						 GdkModifierType modifier);
    extern void gtk_window_move(GtkWindow * window, gint x, gint y);
    extern GtkWidget *gtk_window_new(GtkWindowType type);
    extern gboolean gtk_window_parse_geometry(GtkWindow * window,
					      const gchar * geometry);
    extern GType gtk_window_position_get_type(void);
    extern void gtk_window_present(GtkWindow * window);
    extern gboolean gtk_window_propagate_key_event(GtkWindow * window,
						   GdkEventKey * event);
    extern void gtk_window_remove_accel_group(GtkWindow * window,
					      GtkAccelGroup * accel_group);
    extern void gtk_window_remove_mnemonic(GtkWindow * window,
					   guint keyval,
					   GtkWidget * target);
    extern void gtk_window_reshow_with_initial_size(GtkWindow * window);
    extern void gtk_window_resize(GtkWindow * window, gint width,
				  gint height);
    extern void gtk_window_set_accept_focus(GtkWindow * window,
					    gboolean setting);
    extern void gtk_window_set_auto_startup_notification(gboolean setting);
    extern void gtk_window_set_decorated(GtkWindow * window,
					 gboolean setting);
    extern void gtk_window_set_default(GtkWindow * window,
				       GtkWidget * default_widget);
    extern void gtk_window_set_default_icon(GdkPixbuf * icon);
    extern gboolean gtk_window_set_default_icon_from_file(const gchar *
							  filename,
							  GError * *err);
    extern void gtk_window_set_default_icon_list(GList * list);
    extern void gtk_window_set_default_icon_name(const gchar * name);
    extern void gtk_window_set_default_size(GtkWindow * window, gint width,
					    gint height);
    extern void gtk_window_set_destroy_with_parent(GtkWindow * window,
						   gboolean setting);
    extern void gtk_window_set_focus(GtkWindow * window,
				     GtkWidget * focus);
    extern void gtk_window_set_focus_on_map(GtkWindow * window,
					    gboolean setting);
    extern void gtk_window_set_frame_dimensions(GtkWindow * window,
						gint left, gint top,
						gint right, gint bottom);
    extern void gtk_window_set_geometry_hints(GtkWindow * window,
					      GtkWidget * geometry_widget,
					      GdkGeometry * geometry,
					      GdkWindowHints geom_mask);
    extern void gtk_window_set_gravity(GtkWindow * window,
				       GdkGravity gravity);
    extern void gtk_window_set_has_frame(GtkWindow * window,
					 gboolean setting);
    extern void gtk_window_set_icon(GtkWindow * window, GdkPixbuf * icon);
    extern gboolean gtk_window_set_icon_from_file(GtkWindow * window,
						  const gchar * filename,
						  GError * *err);
    extern void gtk_window_set_icon_list(GtkWindow * window, GList * list);
    extern void gtk_window_set_icon_name(GtkWindow * window,
					 const gchar * name);
    extern void gtk_window_set_keep_above(GtkWindow * window,
					  gboolean setting);
    extern void gtk_window_set_keep_below(GtkWindow * window,
					  gboolean setting);
    extern void gtk_window_set_mnemonic_modifier(GtkWindow * window,
						 GdkModifierType modifier);
    extern void gtk_window_set_modal(GtkWindow * window, gboolean modal);
    extern void gtk_window_set_position(GtkWindow * window,
					GtkWindowPosition position);
    extern void gtk_window_set_resizable(GtkWindow * window,
					 gboolean resizable);
    extern void gtk_window_set_role(GtkWindow * window,
				    const gchar * role);
    extern void gtk_window_set_screen(GtkWindow * window,
				      GdkScreen * screen);
    extern void gtk_window_set_skip_pager_hint(GtkWindow * window,
					       gboolean setting);
    extern void gtk_window_set_skip_taskbar_hint(GtkWindow * window,
						 gboolean setting);
    extern void gtk_window_set_title(GtkWindow * window,
				     const gchar * title);
    extern void gtk_window_set_transient_for(GtkWindow * window,
					     GtkWindow * parent);
    extern void gtk_window_set_type_hint(GtkWindow * window,
					 GdkWindowTypeHint hint);
    extern void gtk_window_set_wmclass(GtkWindow * window,
				       const gchar * wmclass_name,
				       const gchar * wmclass_class);
    extern void gtk_window_stick(GtkWindow * window);
    extern GType gtk_window_type_get_type(void);
    extern void gtk_window_unfullscreen(GtkWindow * window);
    extern void gtk_window_unmaximize(GtkWindow * window);
    extern void gtk_window_unstick(GtkWindow * window);
    extern GType gtk_wrap_mode_get_type(void);
#if __LSB_VERSION__ < 32
    extern void gtk_window_add_embedded_xid(GtkWindow * window, guint xid);
    extern void gtk_window_remove_embedded_xid(GtkWindow * window,
					       guint xid);
#endif				/* __LSB_VERSION__ < 3.2 */

#if __LSB_VERSION__ < 50
    extern void gtk_target_list_ref(GtkTargetList * list);
    extern void
	gtk_tree_model_filter_convert_child_iter_to_iter(GtkTreeModelFilter
							 * filter,
							 GtkTreeIter *
							 filter_iter,
							 GtkTreeIter *
							 child_iter);
    extern void
	gtk_tree_model_sort_convert_child_iter_to_iter(GtkTreeModelSort *
						       tree_model_sort,
						       GtkTreeIter *
						       sort_iter,
						       GtkTreeIter *
						       child_iter);
#endif				/* __LSB_VERSION__ < 5.0 */

#if __LSB_VERSION__ >= 32
    extern void gtk_toolbar_set_icon_size(GtkToolbar * toolbar,
					  GtkIconSize icon_size);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern gboolean gtk_about_dialog_get_wrap_license(GtkAboutDialog *
						      about);
    extern void gtk_about_dialog_set_wrap_license(GtkAboutDialog * about,
						  gboolean wrap_license);
    extern GClosure *gtk_action_get_accel_closure(GtkAction * action);
    extern GType gtk_combo_get_type(void);
    extern gint gtk_dialog_get_response_for_widget(GtkDialog * dialog,
						   GtkWidget * widget);
    extern void gtk_drag_set_icon_name(GdkDragContext * context,
				       const gchar * icon_name, gint hot_x,
				       gint hot_y);
    extern void gtk_drag_source_set_icon_name(GtkWidget * widget,
					      const gchar * icon_name);
    extern gboolean
	gtk_entry_completion_get_popup_set_width(GtkEntryCompletion *
						 completion);
    extern gboolean
	gtk_entry_completion_get_popup_single_match(GtkEntryCompletion *
						    completion);
    extern void gtk_entry_completion_set_popup_set_width(GtkEntryCompletion
							 * completion,
							 gboolean
							 popup_set_width);
    extern void
	gtk_entry_completion_set_popup_single_match(GtkEntryCompletion *
						    completion,
						    gboolean
						    popup_single_match);
    extern gboolean
	gtk_file_chooser_get_do_overwrite_confirmation(GtkFileChooser *
						       chooser);
    extern void
	gtk_file_chooser_set_do_overwrite_confirmation(GtkFileChooser *
						       chooser,
						       gboolean
						       do_overwrite_confirmation);
    extern GdkPixmap *gtk_icon_view_create_drag_icon(GtkIconView *
						     icon_view,
						     GtkTreePath * path);
    extern void gtk_icon_view_enable_model_drag_dest(GtkIconView *
						     icon_view,
						     const GtkTargetEntry *
						     targets,
						     gint n_targets,
						     GdkDragAction
						     actions);
    extern void gtk_icon_view_enable_model_drag_source(GtkIconView *
						       icon_view,
						       GdkModifierType
						       start_button_mask,
						       const GtkTargetEntry
						       * targets,
						       gint n_targets,
						       GdkDragAction
						       actions);
    extern gboolean gtk_icon_view_get_cursor(GtkIconView * icon_view,
					     GtkTreePath * *path,
					     GtkCellRenderer * *cell);
    extern gboolean gtk_icon_view_get_dest_item_at_pos(GtkIconView *
						       icon_view,
						       gint drag_x,
						       gint drag_y,
						       GtkTreePath * *path,
						       GtkIconViewDropPosition
						       * pos);
    extern void gtk_icon_view_get_drag_dest_item(GtkIconView * icon_view,
						 GtkTreePath * *path,
						 GtkIconViewDropPosition *
						 pos);
    extern gboolean gtk_icon_view_get_item_at_pos(GtkIconView * icon_view,
						  gint x, gint y,
						  GtkTreePath * *path,
						  GtkCellRenderer * *cell);
    extern gboolean gtk_icon_view_get_reorderable(GtkIconView * icon_view);
    extern gboolean gtk_icon_view_get_visible_range(GtkIconView *
						    icon_view,
						    GtkTreePath *
						    *start_path,
						    GtkTreePath *
						    *end_path);
    extern void gtk_icon_view_scroll_to_path(GtkIconView * icon_view,
					     GtkTreePath * path,
					     gboolean use_align,
					     gfloat row_align,
					     gfloat col_align);
    extern void gtk_icon_view_set_cursor(GtkIconView * icon_view,
					 GtkTreePath * path,
					 GtkCellRenderer * cell,
					 gboolean start_editing);
    extern void gtk_icon_view_set_drag_dest_item(GtkIconView * icon_view,
						 GtkTreePath * path,
						 GtkIconViewDropPosition
						 pos);
    extern void gtk_icon_view_set_reorderable(GtkIconView * icon_view,
					      gboolean reorderable);
    extern void gtk_icon_view_unset_model_drag_dest(GtkIconView *
						    icon_view);
    extern void gtk_icon_view_unset_model_drag_source(GtkIconView *
						      icon_view);
    extern void gtk_image_clear(GtkImage * image);
    extern GtkPackDirection
	gtk_menu_bar_get_child_pack_direction(GtkMenuBar * menubar);
    extern GtkPackDirection gtk_menu_bar_get_pack_direction(GtkMenuBar *
							    menubar);
    extern void gtk_menu_bar_set_child_pack_direction(GtkMenuBar * menubar,
						      GtkPackDirection
						      child_pack_dir);
    extern void gtk_menu_bar_set_pack_direction(GtkMenuBar * menubar,
						GtkPackDirection pack_dir);
    extern gboolean gtk_menu_shell_get_take_focus(GtkMenuShell *
						  menu_shell);
    extern void gtk_menu_shell_set_take_focus(GtkMenuShell * menu_shell,
					      gboolean take_focus);
    extern GType gtk_pack_direction_get_type(void);
    extern GtkWidget *gtk_scrolled_window_get_hscrollbar(GtkScrolledWindow
							 *
							 scrolled_window);
    extern GtkWidget *gtk_scrolled_window_get_vscrollbar(GtkScrolledWindow
							 *
							 scrolled_window);
    extern gboolean gtk_size_group_get_ignore_hidden(GtkSizeGroup *
						     size_group);
    extern void gtk_size_group_set_ignore_hidden(GtkSizeGroup * size_group,
						 gboolean ignore_hidden);
    extern void gtk_stock_set_translate_func(const gchar * domain,
					     GtkTranslateFunc func,
					     gpointer data,
					     GtkDestroyNotify notify);
    extern gboolean gtk_text_iter_backward_visible_line(GtkTextIter *
							iter);
    extern gboolean gtk_text_iter_backward_visible_lines(GtkTextIter *
							 iter, gint count);
    extern gboolean gtk_text_iter_forward_visible_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_visible_lines(GtkTextIter * iter,
							gint count);
    extern const gchar *gtk_tool_button_get_icon_name(GtkToolButton *
						      button);
    extern void gtk_tool_button_set_icon_name(GtkToolButton * button,
					      const gchar * icon_name);
    extern GtkTreeModel
	*gtk_tree_row_reference_get_model(GtkTreeRowReference * reference);
    extern void gtk_tree_view_column_queue_resize(GtkTreeViewColumn *
						  tree_column);
    extern gboolean gtk_tree_view_get_visible_range(GtkTreeView *
						    tree_view,
						    GtkTreePath *
						    *start_path,
						    GtkTreePath *
						    *end_path);
    extern gboolean gtk_window_get_urgency_hint(GtkWindow * window);
    extern void gtk_window_present_with_time(GtkWindow * window,
					     guint32 timestamp);
    extern void gtk_window_set_urgency_hint(GtkWindow * window,
					    gboolean setting);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    extern void gtk_assistant_add_action_widget(GtkAssistant * assistant,
						GtkWidget * child);
    extern gint gtk_assistant_append_page(GtkAssistant * assistant,
					  GtkWidget * page);
    extern gint gtk_assistant_get_current_page(GtkAssistant * assistant);
    extern gint gtk_assistant_get_n_pages(GtkAssistant * assistant);
    extern GtkWidget *gtk_assistant_get_nth_page(GtkAssistant * assistant,
						 gint page_num);
    extern gboolean gtk_assistant_get_page_complete(GtkAssistant *
						    assistant,
						    GtkWidget * page);
    extern GdkPixbuf *gtk_assistant_get_page_header_image(GtkAssistant *
							  assistant,
							  GtkWidget *
							  page);
    extern GdkPixbuf *gtk_assistant_get_page_side_image(GtkAssistant *
							assistant,
							GtkWidget * page);
    extern const char *gtk_assistant_get_page_title(GtkAssistant *
						    assistant,
						    GtkWidget * page);
    extern GtkAssistantPageType gtk_assistant_get_page_type(GtkAssistant *
							    assistant,
							    GtkWidget *
							    page);
    extern GType gtk_assistant_get_type(void);
    extern gint gtk_assistant_insert_page(GtkAssistant * assistant,
					  GtkWidget * page, gint position);
    extern GtkWidget *gtk_assistant_new(void);
    extern GType gtk_assistant_page_type_get_type(void);
    extern gint gtk_assistant_prepend_page(GtkAssistant * assistant,
					   GtkWidget * page);
    extern void gtk_assistant_remove_action_widget(GtkAssistant *
						   assistant,
						   GtkWidget * child);
    extern void gtk_assistant_set_current_page(GtkAssistant * assistant,
					       gint page_num);
    extern void gtk_assistant_set_forward_page_func(GtkAssistant *
						    assistant,
						    GtkAssistantPageFunc
						    page_func,
						    gpointer data,
						    GDestroyNotify
						    destroy);
    extern void gtk_assistant_set_page_complete(GtkAssistant * assistant,
						GtkWidget * page,
						gboolean complete);
    extern void gtk_assistant_set_page_header_image(GtkAssistant *
						    assistant,
						    GtkWidget * page,
						    GdkPixbuf * pixbuf);
    extern void gtk_assistant_set_page_side_image(GtkAssistant * assistant,
						  GtkWidget * page,
						  GdkPixbuf * pixbuf);
    extern void gtk_assistant_set_page_title(GtkAssistant * assistant,
					     GtkWidget * page,
					     const char *title);
    extern void gtk_assistant_set_page_type(GtkAssistant * assistant,
					    GtkWidget * page,
					    GtkAssistantPageType type);
    extern void gtk_assistant_update_buttons_state(GtkAssistant *
						   assistant);
    extern GtkPositionType gtk_button_get_image_position(GtkButton *
							 button);
    extern void gtk_button_set_image_position(GtkButton * button,
					      GtkPositionType position);
    extern GType gtk_cell_renderer_accel_get_type(void);
    extern GType gtk_cell_renderer_accel_mode_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_accel_new(void);
    extern GType gtk_cell_renderer_spin_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_spin_new(void);
    extern void gtk_clipboard_request_rich_text(GtkClipboard * clipboard,
						GtkTextBuffer * buffer,
						GtkClipboardRichTextReceivedFunc
						callback,
						gpointer user_data);
    extern guint8 *gtk_clipboard_wait_for_rich_text(GtkClipboard *
						    clipboard,
						    GtkTextBuffer * buffer,
						    GdkAtom * format,
						    gsize * length);
    extern gboolean gtk_clipboard_wait_is_rich_text_available(GtkClipboard
							      * clipboard,
							      GtkTextBuffer
							      * buffer);
    extern const gchar *gtk_combo_box_get_title(GtkComboBox * combo_box);
    extern void gtk_combo_box_set_title(GtkComboBox * combo_box,
					const gchar * title);
    extern gboolean gtk_drag_dest_get_track_motion(GtkWidget * widget);
    extern void gtk_drag_dest_set_track_motion(GtkWidget * widget,
					       gboolean track_motion);
    extern const GtkBorder *gtk_entry_get_inner_border(GtkEntry * entry);
    extern void gtk_entry_set_inner_border(GtkEntry * entry,
					   const GtkBorder * border);
    extern gboolean
	gtk_file_chooser_button_get_focus_on_click(GtkFileChooserButton *
						   button);
    extern void
	gtk_file_chooser_button_set_focus_on_click(GtkFileChooserButton *
						   button,
						   gboolean
						   focus_on_click);
    extern PangoWrapMode gtk_label_get_line_wrap_mode(GtkLabel * label);
    extern void gtk_label_set_line_wrap_mode(GtkLabel * label,
					     PangoWrapMode wrap_mode);
    extern GType gtk_link_button_get_type(void);
    extern const char *gtk_link_button_get_uri(GtkLinkButton *
					       link_button);
    extern GtkWidget *gtk_link_button_new(const char *uri);
    extern GtkWidget *gtk_link_button_new_with_label(const char *uri,
						     const char *label);
    extern void gtk_link_button_set_uri(GtkLinkButton * link_button,
					const char *uri);
    extern GtkLinkButtonUriFunc
	gtk_link_button_set_uri_hook(GtkLinkButtonUriFunc func,
				     gpointer data,
				     GDestroyNotify destroy);
    extern void gtk_message_dialog_set_image(GtkMessageDialog * dialog,
					     GtkWidget * image);
    extern gboolean gtk_notebook_get_tab_detachable(GtkNotebook * notebook,
						    GtkWidget * child);
    extern gboolean gtk_notebook_get_tab_reorderable(GtkNotebook *
						     notebook,
						     GtkWidget * child);
    extern void gtk_notebook_set_tab_detachable(GtkNotebook * notebook,
						GtkWidget * child,
						gboolean detachable);
    extern void gtk_notebook_set_tab_reorderable(GtkNotebook * notebook,
						 GtkWidget * child,
						 gboolean reorderable);
    extern void
	gtk_notebook_set_window_creation_hook(GtkNotebookWindowCreationFunc
					      func, gpointer data,
					      GDestroyNotify destroy);
    extern GType gtk_page_orientation_get_type(void);
    extern GType gtk_page_set_get_type(void);
    extern GtkPageSetup *gtk_page_setup_copy(GtkPageSetup * other);
    extern gdouble gtk_page_setup_get_bottom_margin(GtkPageSetup * setup,
						    GtkUnit unit);
    extern gdouble gtk_page_setup_get_left_margin(GtkPageSetup * setup,
						  GtkUnit unit);
    extern GtkPageOrientation gtk_page_setup_get_orientation(GtkPageSetup *
							     setup);
    extern gdouble gtk_page_setup_get_page_height(GtkPageSetup * setup,
						  GtkUnit unit);
    extern gdouble gtk_page_setup_get_page_width(GtkPageSetup * setup,
						 GtkUnit unit);
    extern gdouble gtk_page_setup_get_paper_height(GtkPageSetup * setup,
						   GtkUnit unit);
    extern GtkPaperSize *gtk_page_setup_get_paper_size(GtkPageSetup *
						       setup);
    extern gdouble gtk_page_setup_get_paper_width(GtkPageSetup * setup,
						  GtkUnit unit);
    extern gdouble gtk_page_setup_get_right_margin(GtkPageSetup * setup,
						   GtkUnit unit);
    extern gdouble gtk_page_setup_get_top_margin(GtkPageSetup * setup,
						 GtkUnit unit);
    extern GType gtk_page_setup_get_type(void);
    extern GtkPageSetup *gtk_page_setup_new(void);
    extern void gtk_page_setup_set_bottom_margin(GtkPageSetup * setup,
						 gdouble margin,
						 GtkUnit unit);
    extern void gtk_page_setup_set_left_margin(GtkPageSetup * setup,
					       gdouble margin,
					       GtkUnit unit);
    extern void gtk_page_setup_set_orientation(GtkPageSetup * setup,
					       GtkPageOrientation
					       orientation);
    extern void gtk_page_setup_set_paper_size(GtkPageSetup * setup,
					      GtkPaperSize * size);
    extern void
	gtk_page_setup_set_paper_size_and_default_margins(GtkPageSetup *
							  setup,
							  GtkPaperSize *
							  size);
    extern void gtk_page_setup_set_right_margin(GtkPageSetup * setup,
						gdouble margin,
						GtkUnit unit);
    extern void gtk_page_setup_set_top_margin(GtkPageSetup * setup,
					      gdouble margin,
					      GtkUnit unit);
    extern GtkPaperSize *gtk_paper_size_copy(GtkPaperSize * other);
    extern void gtk_paper_size_free(GtkPaperSize * size);
    extern const char *gtk_paper_size_get_default(void);
    extern gdouble gtk_paper_size_get_default_bottom_margin(GtkPaperSize *
							    size,
							    GtkUnit unit);
    extern gdouble gtk_paper_size_get_default_left_margin(GtkPaperSize *
							  size,
							  GtkUnit unit);
    extern gdouble gtk_paper_size_get_default_right_margin(GtkPaperSize *
							   size,
							   GtkUnit unit);
    extern gdouble gtk_paper_size_get_default_top_margin(GtkPaperSize *
							 size,
							 GtkUnit unit);
    extern const char *gtk_paper_size_get_display_name(GtkPaperSize *
						       size);
    extern gdouble gtk_paper_size_get_height(GtkPaperSize * size,
					     GtkUnit unit);
    extern const char *gtk_paper_size_get_name(GtkPaperSize * size);
    extern const char *gtk_paper_size_get_ppd_name(GtkPaperSize * size);
    extern GType gtk_paper_size_get_type(void);
    extern gdouble gtk_paper_size_get_width(GtkPaperSize * size,
					    GtkUnit unit);
    extern gboolean gtk_paper_size_is_custom(GtkPaperSize * size);
    extern gboolean gtk_paper_size_is_equal(GtkPaperSize * size1,
					    GtkPaperSize * size2);
    extern GtkPaperSize *gtk_paper_size_new(const char *name);
    extern GtkPaperSize *gtk_paper_size_new_custom(const char *name,
						   const char
						   *display_name,
						   gdouble width,
						   gdouble height,
						   GtkUnit unit);
    extern GtkPaperSize *gtk_paper_size_new_from_ppd(const char *ppd_name,
						     const char
						     *ppd_display_name,
						     gdouble width,
						     gdouble height);
    extern void gtk_paper_size_set_size(GtkPaperSize * size, gdouble width,
					gdouble height, GtkUnit unit);
    extern PangoContext
	*gtk_print_context_create_pango_context(GtkPrintContext * context);
    extern PangoLayout
	*gtk_print_context_create_pango_layout(GtkPrintContext * context);
    extern cairo_t *gtk_print_context_get_cairo_context(GtkPrintContext *
							context);
    extern gdouble gtk_print_context_get_dpi_x(GtkPrintContext * context);
    extern gdouble gtk_print_context_get_dpi_y(GtkPrintContext * context);
    extern gdouble gtk_print_context_get_height(GtkPrintContext * context);
    extern GtkPageSetup *gtk_print_context_get_page_setup(GtkPrintContext *
							  context);
    extern PangoFontMap
	*gtk_print_context_get_pango_fontmap(GtkPrintContext * context);
    extern GType gtk_print_context_get_type(void);
    extern gdouble gtk_print_context_get_width(GtkPrintContext * context);
    extern void gtk_print_context_set_cairo_context(GtkPrintContext *
						    context, cairo_t * cr,
						    double dpi_x,
						    double dpi_y);
    extern GType gtk_print_duplex_get_type(void);
    extern GType gtk_print_error_get_type(void);
    extern GQuark gtk_print_error_quark(void);
    extern GType gtk_print_operation_action_get_type(void);
    extern void gtk_print_operation_cancel(GtkPrintOperation * op);
    extern GtkPageSetup
	*gtk_print_operation_get_default_page_setup(GtkPrintOperation *
						    op);
    extern void gtk_print_operation_get_error(GtkPrintOperation * op,
					      GError * *error);
    extern GtkPrintSettings
	*gtk_print_operation_get_print_settings(GtkPrintOperation * op);
    extern GtkPrintStatus gtk_print_operation_get_status(GtkPrintOperation
							 * op);
    extern const char
	*gtk_print_operation_get_status_string(GtkPrintOperation * op);
    extern GType gtk_print_operation_get_type(void);
    extern gboolean gtk_print_operation_is_finished(GtkPrintOperation *
						    op);
    extern GtkPrintOperation *gtk_print_operation_new(void);
    extern GType gtk_print_operation_result_get_type(void);
    extern GtkPrintOperationResult
	gtk_print_operation_run(GtkPrintOperation * op,
				GtkPrintOperationAction action,
				GtkWindow * parent, GError * *error);
    extern void gtk_print_operation_set_allow_async(GtkPrintOperation * op,
						    gboolean allow_async);
    extern void gtk_print_operation_set_current_page(GtkPrintOperation *
						     op,
						     gint current_page);
    extern void gtk_print_operation_set_custom_tab_label(GtkPrintOperation
							 * op,
							 const char
							 *label);
    extern void
	gtk_print_operation_set_default_page_setup(GtkPrintOperation * op,
						   GtkPageSetup *
						   default_page_setup);
    extern void gtk_print_operation_set_export_filename(GtkPrintOperation *
							op,
							const char
							*filename);
    extern void gtk_print_operation_set_job_name(GtkPrintOperation * op,
						 const char *job_name);
    extern void gtk_print_operation_set_n_pages(GtkPrintOperation * op,
						gint n_pages);
    extern void gtk_print_operation_set_print_settings(GtkPrintOperation *
						       op,
						       GtkPrintSettings *
						       print_settings);
    extern void gtk_print_operation_set_show_progress(GtkPrintOperation *
						      op,
						      gboolean
						      show_progress);
    extern void
	gtk_print_operation_set_track_print_status(GtkPrintOperation * op,
						   gboolean track_status);
    extern void gtk_print_operation_set_unit(GtkPrintOperation * op,
					     GtkUnit unit);
    extern void gtk_print_operation_set_use_full_page(GtkPrintOperation *
						      op,
						      gboolean full_page);
    extern GType gtk_print_pages_get_type(void);
    extern GType gtk_print_quality_get_type(void);
    extern GtkPageSetup *gtk_print_run_page_setup_dialog(GtkWindow *
							 parent,
							 GtkPageSetup *
							 page_setup,
							 GtkPrintSettings *
							 settings);
    extern void gtk_print_run_page_setup_dialog_async(GtkWindow * parent,
						      GtkPageSetup *
						      page_setup,
						      GtkPrintSettings *
						      settings,
						      GtkPageSetupDoneFunc
						      done_cb,
						      gpointer data);
    extern GtkPrintSettings *gtk_print_settings_copy(GtkPrintSettings *
						     other);
    extern void gtk_print_settings_foreach(GtkPrintSettings * settings,
					   GtkPrintSettingsFunc func,
					   gpointer user_data);
    extern const char *gtk_print_settings_get(GtkPrintSettings * settings,
					      const char *key);
    extern gboolean gtk_print_settings_get_bool(GtkPrintSettings *
						settings, const char *key);
    extern gboolean gtk_print_settings_get_collate(GtkPrintSettings *
						   settings);
    extern const char
	*gtk_print_settings_get_default_source(GtkPrintSettings *
					       settings);
    extern const char *gtk_print_settings_get_dither(GtkPrintSettings *
						     settings);
    extern gdouble gtk_print_settings_get_double(GtkPrintSettings *
						 settings,
						 const char *key);
    extern gdouble
	gtk_print_settings_get_double_with_default(GtkPrintSettings *
						   settings,
						   const char *key,
						   gdouble def);
    extern GtkPrintDuplex gtk_print_settings_get_duplex(GtkPrintSettings *
							settings);
    extern const char *gtk_print_settings_get_finishings(GtkPrintSettings *
							 settings);
    extern gint gtk_print_settings_get_int(GtkPrintSettings * settings,
					   const char *key);
    extern gint gtk_print_settings_get_int_with_default(GtkPrintSettings *
							settings,
							const char *key,
							gint def);
    extern gdouble gtk_print_settings_get_length(GtkPrintSettings *
						 settings, const char *key,
						 GtkUnit unit);
    extern const char *gtk_print_settings_get_media_type(GtkPrintSettings *
							 settings);
    extern gint gtk_print_settings_get_n_copies(GtkPrintSettings *
						settings);
    extern gint gtk_print_settings_get_number_up(GtkPrintSettings *
						 settings);
    extern GtkPageOrientation
	gtk_print_settings_get_orientation(GtkPrintSettings * settings);
    extern const char *gtk_print_settings_get_output_bin(GtkPrintSettings *
							 settings);
    extern GtkPageRange
	*gtk_print_settings_get_page_ranges(GtkPrintSettings * settings,
					    gint * num_ranges);
    extern GtkPageSet gtk_print_settings_get_page_set(GtkPrintSettings *
						      settings);
    extern gdouble gtk_print_settings_get_paper_height(GtkPrintSettings *
						       settings,
						       GtkUnit unit);
    extern GtkPaperSize *gtk_print_settings_get_paper_size(GtkPrintSettings
							   * settings);
    extern gdouble gtk_print_settings_get_paper_width(GtkPrintSettings *
						      settings,
						      GtkUnit unit);
    extern GtkPrintPages
	gtk_print_settings_get_print_pages(GtkPrintSettings * settings);
    extern const char *gtk_print_settings_get_printer(GtkPrintSettings *
						      settings);
    extern GtkPrintQuality gtk_print_settings_get_quality(GtkPrintSettings
							  * settings);
    extern gint gtk_print_settings_get_resolution(GtkPrintSettings *
						  settings);
    extern gboolean gtk_print_settings_get_reverse(GtkPrintSettings *
						   settings);
    extern gdouble gtk_print_settings_get_scale(GtkPrintSettings *
						settings);
    extern GType gtk_print_settings_get_type(void);
    extern gboolean gtk_print_settings_get_use_color(GtkPrintSettings *
						     settings);
    extern gboolean gtk_print_settings_has_key(GtkPrintSettings * settings,
					       const char *key);
    extern GtkPrintSettings *gtk_print_settings_new(void);
    extern void gtk_print_settings_set(GtkPrintSettings * settings,
				       const char *key, const char *value);
    extern void gtk_print_settings_set_bool(GtkPrintSettings * settings,
					    const char *key,
					    gboolean value);
    extern void gtk_print_settings_set_collate(GtkPrintSettings * settings,
					       gboolean collate);
    extern void gtk_print_settings_set_default_source(GtkPrintSettings *
						      settings,
						      const char
						      *default_source);
    extern void gtk_print_settings_set_dither(GtkPrintSettings * settings,
					      const char *dither);
    extern void gtk_print_settings_set_double(GtkPrintSettings * settings,
					      const char *key,
					      gdouble value);
    extern void gtk_print_settings_set_duplex(GtkPrintSettings * settings,
					      GtkPrintDuplex duplex);
    extern void gtk_print_settings_set_finishings(GtkPrintSettings *
						  settings,
						  const char *finishings);
    extern void gtk_print_settings_set_int(GtkPrintSettings * settings,
					   const char *key, gint value);
    extern void gtk_print_settings_set_length(GtkPrintSettings * settings,
					      const char *key,
					      gdouble value, GtkUnit unit);
    extern void gtk_print_settings_set_media_type(GtkPrintSettings *
						  settings,
						  const char *media_type);
    extern void gtk_print_settings_set_n_copies(GtkPrintSettings *
						settings, gint num_copies);
    extern void gtk_print_settings_set_number_up(GtkPrintSettings *
						 settings, gint number_up);
    extern void gtk_print_settings_set_orientation(GtkPrintSettings *
						   settings,
						   GtkPageOrientation
						   orientation);
    extern void gtk_print_settings_set_output_bin(GtkPrintSettings *
						  settings,
						  const char *output_bin);
    extern void gtk_print_settings_set_page_ranges(GtkPrintSettings *
						   settings,
						   GtkPageRange *
						   page_ranges,
						   gint num_ranges);
    extern void gtk_print_settings_set_page_set(GtkPrintSettings *
						settings,
						GtkPageSet page_set);
    extern void gtk_print_settings_set_paper_height(GtkPrintSettings *
						    settings,
						    gdouble height,
						    GtkUnit unit);
    extern void gtk_print_settings_set_paper_size(GtkPrintSettings *
						  settings,
						  GtkPaperSize *
						  paper_size);
    extern void gtk_print_settings_set_paper_width(GtkPrintSettings *
						   settings, gdouble width,
						   GtkUnit unit);
    extern void gtk_print_settings_set_print_pages(GtkPrintSettings *
						   settings,
						   GtkPrintPages pages);
    extern void gtk_print_settings_set_printer(GtkPrintSettings * settings,
					       const char *printer);
    extern void gtk_print_settings_set_quality(GtkPrintSettings * settings,
					       GtkPrintQuality quality);
    extern void gtk_print_settings_set_resolution(GtkPrintSettings *
						  settings,
						  gint resolution);
    extern void gtk_print_settings_set_reverse(GtkPrintSettings * settings,
					       gboolean reverse);
    extern void gtk_print_settings_set_scale(GtkPrintSettings * settings,
					     gdouble scale);
    extern void gtk_print_settings_set_use_color(GtkPrintSettings *
						 settings,
						 gboolean use_color);
    extern void gtk_print_settings_unset(GtkPrintSettings * settings,
					 const char *key);
    extern GType gtk_print_status_get_type(void);
    extern void gtk_radio_action_set_current_value(GtkRadioAction * action,
						   gint current_value);
    extern GtkSensitivityType
	gtk_range_get_lower_stepper_sensitivity(GtkRange * range);
    extern GtkSensitivityType
	gtk_range_get_upper_stepper_sensitivity(GtkRange * range);
    extern void gtk_range_set_lower_stepper_sensitivity(GtkRange * range,
							GtkSensitivityType
							sensitivity);
    extern void gtk_range_set_upper_stepper_sensitivity(GtkRange * range,
							GtkSensitivityType
							sensitivity);
    extern void gtk_recent_chooser_add_filter(GtkRecentChooser * chooser,
					      GtkRecentFilter * filter);
    extern GType gtk_recent_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_recent_chooser_dialog_new(const char *title,
						    GtkWindow * parent,
						    const char
						    *first_button_text,
						    ...);
    extern GtkWidget *gtk_recent_chooser_dialog_new_for_manager(const char
								*title,
								GtkWindow *
								parent,
								GtkRecentManager
								* manager,
								const char
								*first_button_text,
								...);
    extern GType gtk_recent_chooser_error_get_type(void);
    extern GQuark gtk_recent_chooser_error_quark(void);
    extern GtkRecentInfo
	*gtk_recent_chooser_get_current_item(GtkRecentChooser * chooser);
    extern gchar *gtk_recent_chooser_get_current_uri(GtkRecentChooser *
						     chooser);
    extern GtkRecentFilter *gtk_recent_chooser_get_filter(GtkRecentChooser
							  * chooser);
    extern GList *gtk_recent_chooser_get_items(GtkRecentChooser * chooser);
    extern gint gtk_recent_chooser_get_limit(GtkRecentChooser * chooser);
    extern gboolean gtk_recent_chooser_get_local_only(GtkRecentChooser *
						      chooser);
    extern gboolean gtk_recent_chooser_get_select_multiple(GtkRecentChooser
							   * chooser);
    extern gboolean gtk_recent_chooser_get_show_icons(GtkRecentChooser *
						      chooser);
    extern gboolean gtk_recent_chooser_get_show_not_found(GtkRecentChooser
							  * chooser);
    extern gboolean gtk_recent_chooser_get_show_private(GtkRecentChooser *
							chooser);
    extern gboolean gtk_recent_chooser_get_show_tips(GtkRecentChooser *
						     chooser);
    extern GtkRecentSortType
	gtk_recent_chooser_get_sort_type(GtkRecentChooser * chooser);
    extern GType gtk_recent_chooser_get_type(void);
    extern gchar **gtk_recent_chooser_get_uris(GtkRecentChooser * chooser,
					       gsize * length);
    extern GSList *gtk_recent_chooser_list_filters(GtkRecentChooser *
						   chooser);
    extern gboolean
	gtk_recent_chooser_menu_get_show_numbers(GtkRecentChooserMenu *
						 menu);
    extern GType gtk_recent_chooser_menu_get_type(void);
    extern GtkWidget *gtk_recent_chooser_menu_new(void);
    extern GtkWidget
	*gtk_recent_chooser_menu_new_for_manager(GtkRecentManager *
						 manager);
    extern void
	gtk_recent_chooser_menu_set_show_numbers(GtkRecentChooserMenu *
						 menu,
						 gboolean show_numbers);
    extern void gtk_recent_chooser_remove_filter(GtkRecentChooser *
						 chooser,
						 GtkRecentFilter * filter);
    extern void gtk_recent_chooser_select_all(GtkRecentChooser * chooser);
    extern gboolean gtk_recent_chooser_select_uri(GtkRecentChooser *
						  chooser, const char *uri,
						  GError * *error);
    extern gboolean gtk_recent_chooser_set_current_uri(GtkRecentChooser *
						       chooser,
						       const char *uri,
						       GError * *error);
    extern void gtk_recent_chooser_set_filter(GtkRecentChooser * chooser,
					      GtkRecentFilter * filter);
    extern void gtk_recent_chooser_set_limit(GtkRecentChooser * chooser,
					     gint limit);
    extern void gtk_recent_chooser_set_local_only(GtkRecentChooser *
						  chooser,
						  gboolean local_only);
    extern void gtk_recent_chooser_set_select_multiple(GtkRecentChooser *
						       chooser,
						       gboolean
						       select_multiple);
    extern void gtk_recent_chooser_set_show_icons(GtkRecentChooser *
						  chooser,
						  gboolean show_icons);
    extern void gtk_recent_chooser_set_show_not_found(GtkRecentChooser *
						      chooser,
						      gboolean
						      show_not_found);
    extern void gtk_recent_chooser_set_show_private(GtkRecentChooser *
						    chooser,
						    gboolean show_private);
    extern void gtk_recent_chooser_set_show_tips(GtkRecentChooser *
						 chooser,
						 gboolean show_tips);
    extern void gtk_recent_chooser_set_sort_func(GtkRecentChooser *
						 chooser,
						 GtkRecentSortFunc
						 sort_func,
						 gpointer sort_data,
						 GDestroyNotify
						 data_destroy);
    extern void gtk_recent_chooser_set_sort_type(GtkRecentChooser *
						 chooser,
						 GtkRecentSortType
						 sort_type);
    extern void gtk_recent_chooser_unselect_all(GtkRecentChooser *
						chooser);
    extern void gtk_recent_chooser_unselect_uri(GtkRecentChooser * chooser,
						const char *uri);
    extern GType gtk_recent_chooser_widget_get_type(void);
    extern GtkWidget *gtk_recent_chooser_widget_new(void);
    extern GtkWidget
	*gtk_recent_chooser_widget_new_for_manager(GtkRecentManager *
						   manager);
    extern GType gtk_recent_filter_flags_get_type(void);
    extern GType gtk_recent_manager_error_get_type(void);
    extern GType gtk_recent_sort_type_get_type(void);
    extern void gtk_scrolled_window_unset_placement(GtkScrolledWindow *
						    scrolled_window);
    extern gboolean
	gtk_selection_data_targets_include_rich_text(GtkSelectionData *
						     selection_data,
						     GtkTextBuffer *
						     buffer);
    extern gboolean gtk_selection_data_targets_include_uri(GtkSelectionData
							   *
							   selection_data);
    extern GType gtk_sensitivity_type_get_type(void);
    extern GSList *gtk_size_group_get_widgets(GtkSizeGroup * size_group);
    extern gboolean gtk_style_lookup_color(GtkStyle * style,
					   const gchar * color_name,
					   GdkColor * color);
    extern void gtk_target_list_add_rich_text_targets(GtkTargetList * list,
						      guint info,
						      gboolean
						      deserializable,
						      GtkTextBuffer *
						      buffer);
    extern GType gtk_target_list_get_type(void);
    extern void gtk_target_table_free(GtkTargetEntry * targets,
				      gint n_targets);
    extern GtkTargetEntry *gtk_target_table_new_from_list(GtkTargetList *
							  list,
							  gint *
							  n_targets);
    extern gboolean gtk_targets_include_image(GdkAtom * targets,
					      gint n_targets,
					      gboolean writable);
    extern gboolean gtk_targets_include_rich_text(GdkAtom * targets,
						  gint n_targets,
						  GtkTextBuffer * buffer);
    extern gboolean gtk_targets_include_text(GdkAtom * targets,
					     gint n_targets);
    extern gboolean gtk_targets_include_uri(GdkAtom * targets,
					    gint n_targets);
    extern GtkTargetList
	*gtk_text_buffer_get_copy_target_list(GtkTextBuffer * buffer);
    extern gboolean gtk_text_buffer_get_has_selection(GtkTextBuffer *
						      buffer);
    extern GtkTargetList
	*gtk_text_buffer_get_paste_target_list(GtkTextBuffer * buffer);
    extern GType gtk_text_buffer_target_info_get_type(void);
    extern void gtk_tree_store_insert_with_values(GtkTreeStore *
						  tree_store,
						  GtkTreeIter * iter,
						  GtkTreeIter * parent,
						  gint position, ...);
    extern void gtk_tree_store_insert_with_valuesv(GtkTreeStore *
						   tree_store,
						   GtkTreeIter * iter,
						   GtkTreeIter * parent,
						   gint position,
						   gint * columns,
						   GValue * values,
						   gint n_values);
    extern gboolean gtk_tree_view_get_enable_tree_lines(GtkTreeView *
							tree_view);
    extern GtkTreeViewGridLines gtk_tree_view_get_grid_lines(GtkTreeView *
							     tree_view);
    extern gboolean gtk_tree_view_get_headers_clickable(GtkTreeView *
							tree_view);
    extern gboolean gtk_tree_view_get_rubber_banding(GtkTreeView *
						     tree_view);
    extern GtkEntry *gtk_tree_view_get_search_entry(GtkTreeView *
						    tree_view);
    extern GtkTreeViewSearchPositionFunc
	gtk_tree_view_get_search_position_func(GtkTreeView * tree_view);
    extern GType gtk_tree_view_grid_lines_get_type(void);
    extern void gtk_tree_view_set_enable_tree_lines(GtkTreeView *
						    tree_view,
						    gboolean enabled);
    extern void gtk_tree_view_set_grid_lines(GtkTreeView * tree_view,
					     GtkTreeViewGridLines
					     grid_lines);
    extern void gtk_tree_view_set_rubber_banding(GtkTreeView * tree_view,
						 gboolean enable);
    extern void gtk_tree_view_set_search_entry(GtkTreeView * tree_view,
					       GtkEntry * entry);
    extern void gtk_tree_view_set_search_position_func(GtkTreeView *
						       tree_view,
						       GtkTreeViewSearchPositionFunc
						       func, gpointer data,
						       GDestroyNotify
						       destroy);
    extern GType gtk_unit_get_type(void);
    extern GtkAction *gtk_widget_get_action(GtkWidget * widget);
    extern void gtk_widget_input_shape_combine_mask(GtkWidget * widget,
						    GdkBitmap * shape_mask,
						    gint offset_x,
						    gint offset_y);
    extern gboolean gtk_widget_is_composited(GtkWidget * widget);
    extern gboolean gtk_window_get_deletable(GtkWindow * window);
    extern GtkWindowGroup *gtk_window_get_group(GtkWindow * window);
    extern void gtk_window_set_deletable(GtkWindow * window,
					 gboolean setting);
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    extern GtkTargetList gtk_target_list_ref(GtkTargetList * list);
    extern gboolean
	gtk_tree_model_filter_convert_child_iter_to_iter(GtkTreeModelFilter
							 * filter,
							 GtkTreeIter *
							 filter_iter,
							 GtkTreeIter *
							 child_iter);
    extern gboolean
	gtk_tree_model_sort_convert_child_iter_to_iter(GtkTreeModelSort *
						       tree_model_sort,
						       GtkTreeIter *
						       sort_iter,
						       GtkTreeIter *
						       child_iter);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
