#ifndef _GTK_2_0_GTK_GTK_H_
#define _GTK_2_0_GTK_GTK_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>
#include <pango-1.0/pango/pango.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>

#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

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
#define GTK_SIGNAL_FUNC(f)	((GtkSignalFunc) (f))
#define GTK_INTERFACE_AGE	(10)
#define GTK_MICRO_VERSION	(10)
#define GTK_MAJOR_VERSION	(2)
#define GTK_MINOR_VERSION	(6)
#define GTK_BINARY_AGE	(610)
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
#define GTK_ARG_READWRITE	(GTK_ARG_READABLE | GTK_ARG_WRITABLE)
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
#define GTK_CHECK_CLASS_CAST	G_TYPE_CHECK_CLASS_CAST
#define GTK_CHECK_CLASS_TYPE	G_TYPE_CHECK_CLASS_TYPE
#define GTK_CHECK_CAST	G_TYPE_CHECK_INSTANCE_CAST
#define GTK_CHECK_TYPE	G_TYPE_CHECK_INSTANCE_TYPE
#define GTK_CHECK_GET_CLASS	G_TYPE_INSTANCE_GET_CLASS


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

    typedef enum {
	GTK_STATE_NORMAL = 0,
	GTK_STATE_ACTIVE = 1,
	GTK_STATE_PRELIGHT = 2,
	GTK_STATE_SELECTED = 3,
	GTK_STATE_INSENSITIVE = 4
    } GtkStateType;

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

    typedef enum {
	GTK_SORT_ASCENDING = 0,
	GTK_SORT_DESCENDING = 1
    } GtkSortType;

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

    typedef enum {
	GTK_UPDATE_CONTINUOUS = 0,
	GTK_UPDATE_DISCONTINUOUS = 1,
	GTK_UPDATE_DELAYED = 2
    } GtkUpdateType;

    typedef enum {
	GTK_ORIENTATION_HORIZONTAL = 0,
	GTK_ORIENTATION_VERTICAL = 1
    } GtkOrientation;

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

    typedef enum {
	GTK_BUTTONBOX_DEFAULT_STYLE = 0,
	GTK_BUTTONBOX_SPREAD = 1,
	GTK_BUTTONBOX_EDGE = 2,
	GTK_BUTTONBOX_START = 3,
	GTK_BUTTONBOX_END = 4
    } GtkButtonBoxStyle;

    typedef struct _GtkButtonBox GtkButtonBox;

    typedef struct _GtkActionPrivate GtkActionPrivate;

    typedef struct _GtkAction GtkAction;

    typedef struct _GtkToggleActionPrivate GtkToggleActionPrivate;

    typedef struct _GtkToggleAction GtkToggleAction;

    typedef struct _GtkTextAppearance GtkTextAppearance;

    typedef enum {
	GTK_JUSTIFY_LEFT = 0,
	GTK_JUSTIFY_RIGHT = 1,
	GTK_JUSTIFY_CENTER = 2,
	GTK_JUSTIFY_FILL = 3
    } GtkJustification;

    typedef enum {
	GTK_TEXT_DIR_NONE = 0,
	GTK_TEXT_DIR_LTR = 1,
	GTK_TEXT_DIR_RTL = 2
    } GtkTextDirection;

    typedef enum {
	GTK_WRAP_NONE = 0,
	GTK_WRAP_CHAR = 1,
	GTK_WRAP_WORD = 2,
	GTK_WRAP_WORD_CHAR = 3
    } GtkWrapMode;

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

    typedef enum {
	GTK_CURVE_TYPE_LINEAR = 0,
	GTK_CURVE_TYPE_SPLINE = 1,
	GTK_CURVE_TYPE_FREE = 2
    } GtkCurveType;

    typedef struct _GtkCurve GtkCurve;

    typedef struct _GtkNotebookPage GtkNotebookPage;

    typedef struct _GtkNotebook GtkNotebook;

    typedef struct _GtkIconFactory GtkIconFactory;

    typedef struct _GtkRadioActionPrivate GtkRadioActionPrivate;

    typedef struct _GtkRadioAction GtkRadioAction;

    typedef struct _GtkTextMark GtkTextMark;

    typedef enum {
	GTK_PACK_START = 0,
	GTK_PACK_END = 1
    } GtkPackType;

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

    typedef enum {
	GTK_ARROW_UP = 0,
	GTK_ARROW_DOWN = 1,
	GTK_ARROW_LEFT = 2,
	GTK_ARROW_RIGHT = 3
    } GtkArrowType;

    typedef enum {
	GTK_SHADOW_NONE = 0,
	GTK_SHADOW_IN = 1,
	GTK_SHADOW_OUT = 2,
	GTK_SHADOW_ETCHED_IN = 3,
	GTK_SHADOW_ETCHED_OUT = 4
    } GtkShadowType;

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
	GTK_DIR_TAB_FORWARD = 0,
	GTK_DIR_TAB_BACKWARD = 1,
	GTK_DIR_UP = 2,
	GTK_DIR_DOWN = 3,
	GTK_DIR_LEFT = 4,
	GTK_DIR_RIGHT = 5
    } GtkDirectionType;

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

    typedef struct _GtkImagePixmapData GtkImagePixmapData;

    typedef struct _GtkImageImageData GtkImageImageData;

    typedef struct _GtkImagePixbufData GtkImagePixbufData;

    typedef struct _GtkImageStockData GtkImageStockData;

    typedef struct _GtkImageIconSetData GtkImageIconSetData;

    typedef struct _GtkImageAnimationData GtkImageAnimationData;

    typedef struct _GtkImageIconNameData GtkImageIconNameData;

    typedef enum {
	GTK_ICON_SIZE_INVALID = 0,
	GTK_ICON_SIZE_MENU = 1,
	GTK_ICON_SIZE_SMALL_TOOLBAR = 2,
	GTK_ICON_SIZE_LARGE_TOOLBAR = 3,
	GTK_ICON_SIZE_BUTTON = 4,
	GTK_ICON_SIZE_DND = 5,
	GTK_ICON_SIZE_DIALOG = 6
    } GtkIconSize;

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

    typedef enum {
	GTK_SELECTION_NONE = 0,
	GTK_SELECTION_SINGLE = 1,
	GTK_SELECTION_BROWSE = 2,
	GTK_SELECTION_MULTIPLE = 3,
	GTK_SELECTION_EXTENDED = 3
    } GtkSelectionMode;

    typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;

    typedef struct _GtkActionGroup GtkActionGroup;

    typedef struct _GtkBindingSet GtkBindingSet;

    typedef struct _GtkBindingEntry GtkBindingEntry;

    typedef struct _GtkBindingSignal GtkBindingSignal;

    typedef struct _GtkBindingArg GtkBindingArg;

    typedef struct _GtkScrolledWindow GtkScrolledWindow;

    typedef enum {
	GTK_CORNER_TOP_LEFT = 0,
	GTK_CORNER_BOTTOM_LEFT = 1,
	GTK_CORNER_TOP_RIGHT = 2,
	GTK_CORNER_BOTTOM_RIGHT = 3
    } GtkCornerType;

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
	GTK_POS_LEFT = 0,
	GTK_POS_RIGHT = 1,
	GTK_POS_TOP = 2,
	GTK_POS_BOTTOM = 3
    } GtkPositionType;

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

    typedef enum {
	GTK_TOOLBAR_ICONS = 0,
	GTK_TOOLBAR_TEXT = 1,
	GTK_TOOLBAR_BOTH = 2,
	GTK_TOOLBAR_BOTH_HORIZ = 3
    } GtkToolbarStyle;

    typedef struct _GtkToolbar GtkToolbar;

    typedef void (*GtkCellLayoutDataFunc) (GtkCellLayout *,
					   GtkCellRenderer *,
					   GtkTreeModel *, GtkTreeIter *,
					   gpointer);

    typedef struct _GtkCellRendererToggle GtkCellRendererToggle;

    typedef enum {
	GTK_RELIEF_NORMAL = 0,
	GTK_RELIEF_HALF = 1,
	GTK_RELIEF_NONE = 2
    } GtkReliefStyle;

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

    typedef enum {
	GTK_PIXELS = 0,
	GTK_INCHES = 1,
	GTK_CENTIMETERS = 2
    } GtkMetricType;

    typedef struct _GtkIMContextSimple GtkIMContextSimple;

    typedef void (*GtkClipboardTargetsReceivedFunc) (GtkClipboard *,
						     GdkAtom *, gint,
						     gpointer);

    typedef enum {
	GTK_EXPAND = 1,
	GTK_SHRINK = 2,
	GTK_FILL = 4
    } GtkAttachOptions;

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

    typedef gboolean(*GtkFileFilterFunc) (const GtkFileFilterInfo *,
					  gpointer);

    typedef struct _GtkIMMulticontextPrivate GtkIMMulticontextPrivate;

    typedef struct _GtkIMMulticontext GtkIMMulticontext;

    typedef enum {
	GTK_MESSAGE_INFO = 0,
	GTK_MESSAGE_WARNING = 1,
	GTK_MESSAGE_QUESTION = 2,
	GTK_MESSAGE_ERROR = 3
    } GtkMessageType;

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

    typedef enum {
	GTK_POLICY_ALWAYS = 0,
	GTK_POLICY_AUTOMATIC = 1,
	GTK_POLICY_NEVER = 2
    } GtkPolicyType;

    typedef enum {
	GTK_RESIZE_PARENT = 0,
	GTK_RESIZE_QUEUE = 1,
	GTK_RESIZE_IMMEDIATE = 2
    } GtkResizeMode;

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

    typedef enum {
	GTK_WINDOW_TOPLEVEL = 0,
	GTK_WINDOW_POPUP = 1
    } GtkWindowType;

    typedef void (*GtkMenuDetachFunc) (GtkWidget *, GtkMenu *);

    typedef struct _GtkInvisible GtkInvisible;

    typedef enum {
	GTK_WIN_POS_NONE = 0,
	GTK_WIN_POS_CENTER = 1,
	GTK_WIN_POS_MOUSE = 2,
	GTK_WIN_POS_CENTER_ALWAYS = 3,
	GTK_WIN_POS_CENTER_ON_PARENT = 4
    } GtkWindowPosition;

    typedef void (*GtkTextTagTableForeach) (GtkTextTag *, gpointer);

    typedef gboolean(*GtkEntryCompletionMatchFunc) (GtkEntryCompletion *,
						    const gchar *,
						    GtkTreeIter *,
						    gpointer);

    typedef struct _GtkAccessible GtkAccessible;

    typedef enum {
	GTK_EXPANDER_COLLAPSED = 0,
	GTK_EXPANDER_SEMI_COLLAPSED = 1,
	GTK_EXPANDER_SEMI_EXPANDED = 2,
	GTK_EXPANDER_EXPANDED = 3
    } GtkExpanderStyle;

    typedef enum {
	GTK_PATH_PRIO_LOWEST = 0,
	GTK_PATH_PRIO_GTK = 4,
	GTK_PATH_PRIO_APPLICATION = 8,
	GTK_PATH_PRIO_THEME = 10,
	GTK_PATH_PRIO_RC = 12,
	GTK_PATH_PRIO_HIGHEST = 15
    } GtkPathPriorityType;

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

    typedef enum {
	GTK_PATH_WIDGET = 0,
	GTK_PATH_WIDGET_CLASS = 1,
	GTK_PATH_CLASS = 2
    } GtkPathType;

    typedef struct _GtkAccelMap GtkAccelMap;

    typedef struct _GtkBinClass GtkBinClass;

    typedef struct _GtkWindowClass GtkWindowClass;

    typedef enum {
	GTK_SCROLL_NONE = 0,
	GTK_SCROLL_JUMP = 1,
	GTK_SCROLL_STEP_BACKWARD = 2,
	GTK_SCROLL_STEP_FORWARD = 3,
	GTK_SCROLL_PAGE_BACKWARD = 4,
	GTK_SCROLL_PAGE_FORWARD = 5,
	GTK_SCROLL_STEP_UP = 6,
	GTK_SCROLL_STEP_DOWN = 7,
	GTK_SCROLL_PAGE_UP = 8,
	GTK_SCROLL_PAGE_DOWN = 9,
	GTK_SCROLL_STEP_LEFT = 10,
	GTK_SCROLL_STEP_RIGHT = 11,
	GTK_SCROLL_PAGE_LEFT = 12,
	GTK_SCROLL_PAGE_RIGHT = 13,
	GTK_SCROLL_START = 14,
	GTK_SCROLL_END = 15
    } GtkScrollType;

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

    typedef enum {
	GTK_MOVEMENT_LOGICAL_POSITIONS = 0,
	GTK_MOVEMENT_VISUAL_POSITIONS = 1,
	GTK_MOVEMENT_WORDS = 2,
	GTK_MOVEMENT_DISPLAY_LINES = 3,
	GTK_MOVEMENT_DISPLAY_LINE_ENDS = 4,
	GTK_MOVEMENT_PARAGRAPHS = 5,
	GTK_MOVEMENT_PARAGRAPH_ENDS = 6,
	GTK_MOVEMENT_PAGES = 7,
	GTK_MOVEMENT_BUFFER_ENDS = 8,
	GTK_MOVEMENT_HORIZONTAL_PAGES = 9
    } GtkMovementStep;

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

    typedef enum {
	GTK_MENU_DIR_PARENT = 0,
	GTK_MENU_DIR_CHILD = 1,
	GTK_MENU_DIR_NEXT = 2,
	GTK_MENU_DIR_PREV = 3
    } GtkMenuDirectionType;

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

    typedef enum {
	GTK_SCROLL_STEPS = 0,
	GTK_SCROLL_PAGES = 1,
	GTK_SCROLL_ENDS = 2,
	GTK_SCROLL_HORIZONTAL_STEPS = 3,
	GTK_SCROLL_HORIZONTAL_PAGES = 4,
	GTK_SCROLL_HORIZONTAL_ENDS = 5
    } GtkScrollStep;

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

    typedef enum {
	GTK_DELETE_CHARS = 0,
	GTK_DELETE_WORD_ENDS = 1,
	GTK_DELETE_WORDS = 2,
	GTK_DELETE_DISPLAY_LINES = 3,
	GTK_DELETE_DISPLAY_LINE_ENDS = 4,
	GTK_DELETE_PARAGRAPH_ENDS = 5,
	GTK_DELETE_PARAGRAPHS = 6,
	GTK_DELETE_WHITESPACE = 7
    } GtkDeleteType;

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

    typedef enum {
	GTK_VISIBILITY_NONE = 0,
	GTK_VISIBILITY_PARTIAL = 1,
	GTK_VISIBILITY_FULL = 2
    } GtkVisibility;

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
	GTK_IM_PREEDIT_NOTHING,
	GTK_IM_PREEDIT_CALLBACK,
	GTK_IM_PREEDIT_NONE
    } GtkIMPreeditStyle;

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
	GTK_ANCHOR_CENTER,
	GTK_ANCHOR_NORTH,
	GTK_ANCHOR_NORTH_WEST,
	GTK_ANCHOR_NORTH_EAST,
	GTK_ANCHOR_SOUTH,
	GTK_ANCHOR_SOUTH_WEST,
	GTK_ANCHOR_SOUTH_EAST,
	GTK_ANCHOR_WEST,
	GTK_ANCHOR_EAST,
	GTK_ANCHOR_N = GTK_ANCHOR_NORTH,
	GTK_ANCHOR_NW = GTK_ANCHOR_NORTH_WEST,
	GTK_ANCHOR_NE = GTK_ANCHOR_NORTH_EAST,
	GTK_ANCHOR_S = GTK_ANCHOR_SOUTH,
	GTK_ANCHOR_SW = GTK_ANCHOR_SOUTH_WEST,
	GTK_ANCHOR_SE = GTK_ANCHOR_SOUTH_EAST,
	GTK_ANCHOR_W = GTK_ANCHOR_WEST,
	GTK_ANCHOR_E = GTK_ANCHOR_EAST
    } GtkAnchorType;

    typedef enum {
	GTK_IM_STATUS_NOTHING,
	GTK_IM_STATUS_CALLBACK,
	GTK_IM_STATUS_NONE
    } GtkIMStatusStyle;

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
	gpointer padding1;
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
	gfloat *ctlpoint;
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
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
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
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
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
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };


    struct _GtkSpinButtonClass {
	GtkEntryClass parent_class;
	 gint(*input) (GtkSpinButton *, gdouble *);
	 gint(*output) (GtkSpinButton *);
	void (*value_changed) (GtkSpinButton *);
	void (*change_value) (GtkSpinButton *, GtkScrollType);
	void (*_gtk_reserved1) (void);
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
	void (*_gtk_reserved0) (void);
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
	GMemChunk *messages_mem_chunk;
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
	void (*_gtk_reserved1) (void);
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
	void *__gtk_reserved1;
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
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
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


    extern GtkIconSet *gtk_icon_set_new(void);
    extern GType gtk_cell_editable_get_type(void);
    extern void gtk_widget_get_pointer(GtkWidget *, gint *, gint *);
    extern void gtk_progress_bar_set_fraction(GtkProgressBar *, gdouble);
    extern GType gtk_file_chooser_action_get_type(void);
    extern void gtk_text_buffer_get_start_iter(GtkTextBuffer *,
					       GtkTextIter *);
    extern gint gtk_combo_box_get_column_span_column(GtkComboBox *);
    extern void gtk_misc_set_padding(GtkMisc *, gint, gint);
    extern guint gtk_statusbar_push(GtkStatusbar *, guint, const gchar *);
    extern GdkAtom gtk_drag_dest_find_target(GtkWidget *, GdkDragContext *,
					     GtkTargetList *);
    extern void gtk_window_get_default_size(GtkWindow *, gint *, gint *);
    extern void gtk_widget_modify_base(GtkWidget *, GtkStateType,
				       const GdkColor *);
    extern void gtk_tree_row_reference_free(GtkTreeRowReference *);
    extern GtkTreeModelFlags gtk_tree_model_get_flags(GtkTreeModel *);
    extern void gtk_drag_source_set(GtkWidget *, GdkModifierType,
				    const GtkTargetEntry *, gint,
				    GdkDragAction);
    extern void gtk_entry_get_layout_offsets(GtkEntry *, gint *, gint *);
    extern GdkColormap *gtk_widget_get_default_colormap(void);
    extern GType gtk_submenu_placement_get_type(void);
    extern const guint gtk_binary_age;
    extern GtkRequisition *gtk_requisition_copy(const GtkRequisition *);
    extern void gtk_combo_box_entry_set_text_column(GtkComboBoxEntry *,
						    gint);
    extern GtkAdjustment *gtk_layout_get_vadjustment(GtkLayout *);
    extern void gtk_tree_store_append(GtkTreeStore *, GtkTreeIter *,
				      GtkTreeIter *);
    extern GtkAboutDialogActivateLinkFunc
	gtk_about_dialog_set_email_hook(GtkAboutDialogActivateLinkFunc,
					gpointer, GDestroyNotify);
    extern GType gtk_adjustment_get_type(void);
    extern gboolean gtk_tree_sortable_get_sort_column_id(GtkTreeSortable *,
							 gint *,
							 GtkSortType *);
    extern void gtk_range_set_range(GtkRange *, gdouble, gdouble);
    extern gboolean gtk_text_iter_backward_sentence_starts(GtkTextIter *,
							   gint);
    extern gboolean gtk_window_propagate_key_event(GtkWindow *,
						   GdkEventKey *);
    extern void gtk_dialog_add_action_widget(GtkDialog *, GtkWidget *,
					     gint);
    extern GdkNativeWindow gtk_socket_get_id(GtkSocket *);
    extern const gchar *gtk_window_get_role(GtkWindow *);
    extern void gtk_tree_view_column_clear_attributes(GtkTreeViewColumn *,
						      GtkCellRenderer *);
    extern guint gtk_binding_parse_binding(GScanner *);
    extern GtkWidget *gtk_input_dialog_new(void);
    extern gint gtk_text_buffer_get_char_count(GtkTextBuffer *);
    extern GtkButtonBoxStyle gtk_button_box_get_layout(GtkButtonBox *);
    extern void gtk_toggle_action_toggled(GtkToggleAction *);
    extern gboolean gtk_text_iter_begins_tag(const GtkTextIter *,
					     GtkTextTag *);
    extern void gtk_widget_reparent(GtkWidget *, GtkWidget *);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_position(GtkTextIter *);
    extern GType gtk_spin_button_get_type(void);
    extern void gtk_text_buffer_get_iter_at_line(GtkTextBuffer *,
						 GtkTextIter *, gint);
    extern gboolean gtk_file_filter_filter(GtkFileFilter *,
					   const GtkFileFilterInfo *);
    extern void gtk_text_iter_set_visible_line_index(GtkTextIter *, gint);
    extern GtkTextDirection gtk_icon_source_get_direction(const
							  GtkIconSource *);
    extern void gtk_layout_get_size(GtkLayout *, guint *, guint *);
    extern void gtk_widget_set_direction(GtkWidget *, GtkTextDirection);
    extern gint gtk_text_iter_compare(const GtkTextIter *,
				      const GtkTextIter *);
    extern void gtk_drag_source_add_text_targets(GtkWidget *);
    extern GType gtk_file_chooser_widget_get_type(void);
    extern void gtk_tool_button_set_label_widget(GtkToolButton *,
						 GtkWidget *);
    extern gint gtk_icon_view_get_text_column(GtkIconView *);
    extern gboolean gtk_label_get_use_markup(GtkLabel *);
    extern GtkAdjustment *gtk_container_get_focus_hadjustment(GtkContainer
							      *);
    extern void gtk_text_buffer_set_modified(GtkTextBuffer *, gboolean);
    extern void gtk_drag_source_unset(GtkWidget *);
    extern void gtk_combo_box_set_add_tearoffs(GtkComboBox *, gboolean);
    extern GtkWidget *gtk_text_view_new_with_buffer(GtkTextBuffer *);
    extern void gtk_settings_set_string_property(GtkSettings *,
						 const gchar *,
						 const gchar *,
						 const gchar *);
    extern guint gtk_ui_manager_add_ui_from_file(GtkUIManager *,
						 const gchar *,
						 GError * *);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_label_from_widget(GtkRadioMenuItem *,
							const gchar *);
    extern void gtk_widget_push_colormap(GdkColormap *);
    extern GtkWidget *gtk_vbox_new(gboolean, gint);
    extern void gtk_cell_view_set_background_color(GtkCellView *,
						   const GdkColor *);
    extern gboolean
	gtk_selection_data_targets_include_text(GtkSelectionData *);
    extern GType gtk_cell_renderer_get_type(void);
    extern void gtk_container_check_resize(GtkContainer *);
    extern guint gtk_label_get_mnemonic_keyval(GtkLabel *);
    extern void gtk_file_chooser_unselect_filename(GtkFileChooser *,
						   const char *);
    extern void gtk_curve_reset(GtkCurve *);
    extern const gchar *gtk_notebook_get_menu_label_text(GtkNotebook *,
							 GtkWidget *);
    extern GtkIconSet *gtk_icon_factory_lookup(GtkIconFactory *,
					       const gchar *);
    extern GtkWidget *gtk_accel_label_new(const gchar *);
    extern void gtk_widget_size_allocate(GtkWidget *, GtkAllocation *);
    extern void gtk_icon_view_unselect_all(GtkIconView *);
    extern void gtk_drag_set_icon_default(GdkDragContext *);
    extern void gtk_layout_move(GtkLayout *, GtkWidget *, gint, gint);
    extern void gtk_drag_set_icon_widget(GdkDragContext *, GtkWidget *,
					 gint, gint);
    extern GType gtk_shadow_type_get_type(void);
    extern GtkWidget *gtk_tool_item_get_proxy_menu_item(GtkToolItem *,
							const gchar *);
    extern GdkPixbuf *gtk_about_dialog_get_logo(GtkAboutDialog *);
    extern void gtk_widget_set_colormap(GtkWidget *, GdkColormap *);
    extern GdkExtensionMode gtk_widget_get_extension_events(GtkWidget *);
    extern GtkRadioAction *gtk_radio_action_new(const gchar *,
						const gchar *,
						const gchar *,
						const gchar *, gint);
    extern GtkTextMark *gtk_text_buffer_get_selection_bound(GtkTextBuffer
							    *);
    extern void gtk_box_set_child_packing(GtkBox *, GtkWidget *, gboolean,
					  gboolean, guint, GtkPackType);
    extern guint16 gtk_color_selection_get_current_alpha(GtkColorSelection
							 *);
    extern void gtk_calendar_get_date(GtkCalendar *, guint *, guint *,
				      guint *);
    extern GType gtk_selection_data_get_type(void);
    extern GType gtk_submenu_direction_get_type(void);
    extern GType gtk_icon_set_get_type(void);
    extern GType gtk_cell_renderer_text_get_type(void);
    extern void gtk_icon_info_free(GtkIconInfo *);
    extern void gtk_window_set_focus_on_map(GtkWindow *, gboolean);
    extern void gtk_window_set_transient_for(GtkWindow *, GtkWindow *);
    extern void gtk_widget_class_path(GtkWidget *, guint *, gchar * *,
				      gchar * *);
    extern void gtk_tree_model_row_changed(GtkTreeModel *, GtkTreePath *,
					   GtkTreeIter *);
    extern gboolean gtk_tree_drag_source_drag_data_delete(GtkTreeDragSource
							  *,
							  GtkTreePath *);
    extern GType gtk_tree_model_get_column_type(GtkTreeModel *, gint);
    extern void gtk_icon_view_set_columns(GtkIconView *, gint);
    extern void gtk_container_child_get_valist(GtkContainer *, GtkWidget *,
					       const gchar *, va_list);
    extern guchar *gtk_selection_data_get_text(GtkSelectionData *);
    extern void gtk_window_resize(GtkWindow *, gint, gint);
    extern void gtk_table_set_homogeneous(GtkTable *, gboolean);
    extern guint gtk_quit_add_full(guint, GtkFunction, GtkCallbackMarshal,
				   gpointer, GtkDestroyNotify);
    extern gboolean gtk_action_is_visible(GtkAction *);
    extern GtkTextBuffer *gtk_text_iter_get_buffer(const GtkTextIter *);
    extern void gtk_menu_set_screen(GtkMenu *, GdkScreen *);
    extern void gtk_color_selection_set_previous_alpha(GtkColorSelection *,
						       guint16);
    extern void gtk_toggle_button_set_active(GtkToggleButton *, gboolean);
    extern void gtk_target_list_add_text_targets(GtkTargetList *, guint);
    extern GdkEvent *gtk_get_current_event(void);
    extern GType gtk_update_type_get_type(void);
    extern const gchar *gtk_icon_source_get_filename(const GtkIconSource
						     *);
    extern GtkIconTheme *gtk_icon_theme_get_for_screen(GdkScreen *);
    extern GtkWidget *gtk_arrow_new(GtkArrowType, GtkShadowType);
    extern void gtk_text_view_buffer_to_window_coords(GtkTextView *,
						      GtkTextWindowType,
						      gint, gint, gint *,
						      gint *);
    extern GType gtk_style_get_type(void);
    extern void
	gtk_widget_class_install_style_property_parser(GtkWidgetClass *,
						       GParamSpec *,
						       GtkRcPropertyParser);
    extern GType gtk_toolbar_child_type_get_type(void);
    extern GtkToolItem *gtk_toggle_tool_button_new(void);
    extern GdkPixbufAnimation *gtk_image_get_animation(GtkImage *);
    extern gint gtk_tree_view_column_get_spacing(GtkTreeViewColumn *);
    extern GdkPixmap *gtk_tree_view_create_row_drag_icon(GtkTreeView *,
							 GtkTreePath *);
    extern void gtk_file_chooser_unselect_all(GtkFileChooser *);
    extern gint gtk_icon_view_get_column_spacing(GtkIconView *);
    extern GtkTreeViewColumn *gtk_tree_view_get_expander_column(GtkTreeView
								*);
    extern guint gtk_main_level(void);
    extern void gtk_icon_set_add_source(GtkIconSet *,
					const GtkIconSource *);
    extern void gtk_window_set_title(GtkWindow *, const gchar *);
    extern gchar *gtk_rc_find_module_in_path(const gchar *);
    extern gint gtk_text_view_get_pixels_above_lines(GtkTextView *);
    extern gboolean gtk_widget_remove_accelerator(GtkWidget *,
						  GtkAccelGroup *, guint,
						  GdkModifierType);
    extern PangoLayout *gtk_widget_create_pango_layout(GtkWidget *,
						       const gchar *);
    extern GtkIconSet *gtk_style_lookup_icon_set(GtkStyle *, const char *);
    extern GType gtk_scrollbar_get_type(void);
    extern gint gtk_box_get_spacing(GtkBox *);
    extern void gtk_window_get_position(GtkWindow *, gint *, gint *);
    extern GdkPixbuf *gtk_style_render_icon(GtkStyle *,
					    const GtkIconSource *,
					    GtkTextDirection, GtkStateType,
					    GtkIconSize, GtkWidget *,
					    const gchar *);
    extern void gtk_icon_view_set_row_spacing(GtkIconView *, gint);
    extern void gtk_quit_add_destroy(guint, GtkObject *);
    extern GType gtk_color_selection_get_type(void);
    extern gint gtk_spin_button_get_value_as_int(GtkSpinButton *);
    extern gboolean gtk_label_get_single_line_mode(GtkLabel *);
    extern void gtk_tool_item_set_homogeneous(GtkToolItem *, gboolean);
    extern void gtk_cell_layout_pack_end(GtkCellLayout *,
					 GtkCellRenderer *, gboolean);
    extern GtkWidget *gtk_file_chooser_get_preview_widget(GtkFileChooser
							  *);
    extern void gtk_window_set_resizable(GtkWindow *, gboolean);
    extern void gtk_text_buffer_insert_with_tags(GtkTextBuffer *,
						 GtkTextIter *,
						 const gchar *, gint,
						 GtkTextTag *, ...);
    extern void gtk_tree_path_down(GtkTreePath *);
    extern void gtk_file_selection_complete(GtkFileSelection *,
					    const gchar *);
    extern void gtk_tool_item_set_tooltip(GtkToolItem *, GtkTooltips *,
					  const gchar *, const gchar *);
    extern void gtk_text_buffer_insert_range(GtkTextBuffer *,
					     GtkTextIter *,
					     const GtkTextIter *,
					     const GtkTextIter *);
    extern GType gtk_menu_get_type(void);
    extern GtkTreeViewRowSeparatorFunc
	gtk_tree_view_get_row_separator_func(GtkTreeView *);
    extern gboolean gtk_text_view_get_overwrite(GtkTextView *);
    extern void gtk_icon_theme_set_custom_theme(GtkIconTheme *,
						const gchar *);
    extern GdkGC *gtk_gc_get(gint, GdkColormap *, GdkGCValues *,
			     GdkGCValuesMask);
    extern void gtk_cell_editable_editing_done(GtkCellEditable *);
    extern void gtk_combo_box_append_text(GtkComboBox *, const gchar *);
    extern gboolean gtk_tree_view_get_headers_visible(GtkTreeView *);
    extern gboolean gtk_window_set_default_icon_from_file(const gchar *,
							  GError * *);
    extern GtkWidget *gtk_widget_ref(GtkWidget *);
    extern void gtk_text_buffer_delete(GtkTextBuffer *, GtkTextIter *,
				       GtkTextIter *);
    extern void gtk_tree_view_set_rules_hint(GtkTreeView *, gboolean);
    extern gint gtk_text_iter_get_bytes_in_line(const GtkTextIter *);
    extern void gtk_icon_theme_get_search_path(GtkIconTheme *, gchar * **,
					       gint *);
    extern gchar *gtk_file_chooser_get_current_folder_uri(GtkFileChooser
							  *);
    extern void gtk_entry_completion_set_text_column(GtkEntryCompletion *,
						     gint);
    extern GSList *gtk_action_get_proxies(GtkAction *);
    extern GType gtk_tree_view_column_sizing_get_type(void);
    extern void gtk_label_get_layout_offsets(GtkLabel *, gint *, gint *);
    extern gboolean gtk_box_get_homogeneous(GtkBox *);
    extern void gtk_text_view_set_left_margin(GtkTextView *, gint);
    extern GType gtk_item_get_type(void);
    extern gint gtk_entry_text_index_to_layout_index(GtkEntry *, gint);
    extern void gtk_tree_view_get_visible_rect(GtkTreeView *,
					       GdkRectangle *);
    extern gboolean gtk_tree_model_iter_next(GtkTreeModel *,
					     GtkTreeIter *);
    extern void gtk_tree_store_move_before(GtkTreeStore *, GtkTreeIter *,
					   GtkTreeIter *);
    extern void gtk_clipboard_set_text(GtkClipboard *, const gchar *,
				       gint);
    extern GList *gtk_window_list_toplevels(void);
    extern void gtk_tree_model_filter_clear_cache(GtkTreeModelFilter *);
    extern void gtk_notebook_prev_page(GtkNotebook *);
    extern GType gtk_widget_get_type(void);
    extern GType gtk_vpaned_get_type(void);
    extern gint gtk_tree_view_column_get_sort_column_id(GtkTreeViewColumn
							*);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_child_path_to_path(GtkTreeModelSort *,
							GtkTreePath *);
    extern void gtk_tool_item_set_is_important(GtkToolItem *, gboolean);
    extern GType gtk_menu_bar_get_type(void);
    extern GtkTreeViewColumnSizing
	gtk_tree_view_column_get_sizing(GtkTreeViewColumn *);
    extern void gtk_text_attributes_copy_values(GtkTextAttributes *,
						GtkTextAttributes *);
    extern GType gtk_calendar_display_options_get_type(void);
    extern void gtk_tree_view_column_set_cell_data_func(GtkTreeViewColumn
							*,
							GtkCellRenderer *,
							GtkTreeCellDataFunc,
							gpointer,
							GtkDestroyNotify);
    extern void gtk_color_button_get_color(GtkColorButton *, GdkColor *);
    extern GType gtk_notebook_get_type(void);
    extern GtkWidget *gtk_file_chooser_dialog_new_with_backend(const gchar
							       *,
							       GtkWindow *,
							       GtkFileChooserAction,
							       const gchar
							       *,
							       const gchar
							       *, ...);
    extern void gtk_container_forall(GtkContainer *, GtkCallback,
				     gpointer);
    extern void gtk_text_buffer_add_selection_clipboard(GtkTextBuffer *,
							GtkClipboard *);
    extern GSList *gtk_accel_groups_from_object(GObject *);
    extern GtkSortType
	gtk_tree_view_column_get_sort_order(GtkTreeViewColumn *);
    extern gint gtk_notebook_insert_page(GtkNotebook *, GtkWidget *,
					 GtkWidget *, gint);
    extern GType gtk_table_get_type(void);
    extern GtkWidget *gtk_menu_item_get_submenu(GtkMenuItem *);
    extern gboolean gtk_text_view_scroll_to_iter(GtkTextView *,
						 GtkTextIter *, gdouble,
						 gboolean, gdouble,
						 gdouble);
    extern void gtk_window_set_icon_list(GtkWindow *, GList *);
    extern gboolean gtk_window_get_destroy_with_parent(GtkWindow *);
    extern void gtk_container_add(GtkContainer *, GtkWidget *);
    extern GtkShadowType gtk_handle_box_get_shadow_type(GtkHandleBox *);
    extern GtkWidget *gtk_text_view_new(void);
    extern void gtk_window_add_embedded_xid(GtkWindow *, guint);
    extern gboolean gtk_label_get_use_underline(GtkLabel *);
    extern gboolean gtk_text_view_starts_display_line(GtkTextView *,
						      const GtkTextIter *);
    extern gdouble gtk_spin_button_get_value(GtkSpinButton *);
    extern void gtk_tree_view_get_background_area(GtkTreeView *,
						  GtkTreePath *,
						  GtkTreeViewColumn *,
						  GdkRectangle *);
    extern void gtk_color_selection_get_previous_color(GtkColorSelection *,
						       GdkColor *);
    extern void gtk_file_chooser_set_action(GtkFileChooser *,
					    GtkFileChooserAction);
    extern GtkWidget *gtk_dialog_add_button(GtkDialog *, const gchar *,
					    gint);
    extern GType gtk_label_get_type(void);
    extern GType gtk_accel_group_get_type(void);
    extern GtkSelectionMode gtk_icon_view_get_selection_mode(GtkIconView
							     *);
    extern GtkStyle *gtk_style_attach(GtkStyle *, GdkWindow *);
    extern void gtk_item_select(GtkItem *);
    extern void gtk_combo_box_set_column_span_column(GtkComboBox *, gint);
    extern GtkWidget *gtk_file_selection_new(const gchar *);
    extern GtkWidget *gtk_plug_new_for_display(GdkDisplay *,
					       GdkNativeWindow);
    extern GtkAccelGroup *gtk_accel_group_new(void);
    extern void gtk_grab_add(GtkWidget *);
    extern const gchar *gtk_about_dialog_get_logo_icon_name(GtkAboutDialog
							    *);
    extern GtkWidget *gtk_radio_menu_item_new_with_mnemonic(GSList *,
							    const gchar *);
    extern gboolean gtk_window_get_focus_on_map(GtkWindow *);
    extern GType gtk_radio_menu_item_get_type(void);
    extern const gchar *gtk_entry_get_text(GtkEntry *);
    extern GtkUIManager *gtk_ui_manager_new(void);
    extern gboolean gtk_action_group_get_visible(GtkActionGroup *);
    extern gboolean gtk_tree_store_iter_is_valid(GtkTreeStore *,
						 GtkTreeIter *);
    extern void gtk_container_child_set(GtkContainer *, GtkWidget *,
					const gchar *, ...);
    extern gboolean gtk_rc_property_parse_border(const GParamSpec *,
						 const GString *,
						 GValue *);
    extern void gtk_binding_entry_clear(GtkBindingSet *, guint,
					GdkModifierType);
    extern void gtk_menu_shell_select_first(GtkMenuShell *, gboolean);
    extern void gtk_scrolled_window_set_placement(GtkScrolledWindow *,
						  GtkCornerType);
    extern void gtk_frame_set_label_align(GtkFrame *, gfloat, gfloat);
    extern GtkWidget *gtk_combo_box_new_text(void);
    extern void gtk_text_view_add_child_at_anchor(GtkTextView *,
						  GtkWidget *,
						  GtkTextChildAnchor *);
    extern GtkWidget *gtk_vscrollbar_new(GtkAdjustment *);
    extern void gtk_separator_tool_item_set_draw(GtkSeparatorToolItem *,
						 gboolean);
    extern gboolean gtk_toggle_button_get_active(GtkToggleButton *);
    extern void gtk_clipboard_store(GtkClipboard *);
    extern const gchar *const *gtk_about_dialog_get_authors(GtkAboutDialog
							    *);
    extern GType gtk_vbutton_box_get_type(void);
    extern void gtk_tree_view_column_cell_set_cell_data(GtkTreeViewColumn
							*, GtkTreeModel *,
							GtkTreeIter *,
							gboolean,
							gboolean);
    extern GType gtk_im_context_get_type(void);
    extern gboolean gtk_icon_size_lookup(GtkIconSize, gint *, gint *);
    extern GtkTreeView *gtk_tree_selection_get_tree_view(GtkTreeSelection
							 *);
    extern void gtk_expander_set_use_underline(GtkExpander *, gboolean);
    extern GtkBindingSet *gtk_binding_set_new(const gchar *);
    extern gchar *gtk_accelerator_name(guint, GdkModifierType);
    extern gboolean gtk_expander_get_use_underline(GtkExpander *);
    extern GtkPositionType gtk_handle_box_get_handle_position(GtkHandleBox
							      *);
    extern GSList *gtk_ui_manager_get_toplevels(GtkUIManager *,
						GtkUIManagerItemType);
    extern gboolean gtk_im_context_filter_keypress(GtkIMContext *,
						   GdkEventKey *);
    extern void gtk_range_set_value(GtkRange *, gdouble);
    extern gboolean
	gtk_font_selection_dialog_set_font_name(GtkFontSelectionDialog *,
						const gchar *);
    extern GtkStateType gtk_icon_source_get_state(const GtkIconSource *);
    extern GType gtk_spin_button_update_policy_get_type(void);
    extern void gtk_drag_dest_add_image_targets(GtkWidget *);
    extern GtkAdjustment *gtk_layout_get_hadjustment(GtkLayout *);
    extern gint gtk_notebook_page_num(GtkNotebook *, GtkWidget *);
    extern void gtk_window_add_mnemonic(GtkWindow *, guint, GtkWidget *);
    extern gboolean
	gtk_tree_view_column_get_sort_indicator(GtkTreeViewColumn *);
    extern void gtk_tree_model_filter_set_visible_column(GtkTreeModelFilter
							 *, gint);
    extern void gtk_menu_shell_append(GtkMenuShell *, GtkWidget *);
    extern GType gtk_image_menu_item_get_type(void);
    extern void gtk_text_tag_table_add(GtkTextTagTable *, GtkTextTag *);
    extern guint16 gtk_color_button_get_alpha(GtkColorButton *);
    extern void gtk_action_set_accel_path(GtkAction *, const gchar *);
    extern GtkTextChildAnchor *gtk_text_child_anchor_new(void);
    extern void gtk_file_chooser_set_select_multiple(GtkFileChooser *,
						     gboolean);
    extern GType gtk_action_group_get_type(void);
    extern void gtk_tree_view_column_pack_end(GtkTreeViewColumn *,
					      GtkCellRenderer *, gboolean);
    extern const gchar *gtk_menu_get_title(GtkMenu *);
    extern GtkWidget *gtk_icon_view_new(void);
    extern gboolean gtk_color_selection_is_adjusting(GtkColorSelection *);
    extern void gtk_tree_view_set_row_separator_func(GtkTreeView *,
						     GtkTreeViewRowSeparatorFunc,
						     gpointer,
						     GtkDestroyNotify);
    extern void gtk_adjustment_set_value(GtkAdjustment *, gdouble);
    extern gboolean gtk_file_chooser_get_local_only(GtkFileChooser *);
    extern gboolean gtk_tree_view_get_hover_expand(GtkTreeView *);
    extern gboolean gtk_combo_box_get_focus_on_click(GtkComboBox *);
    extern void gtk_paned_add2(GtkPaned *, GtkWidget *);
    extern GdkVisual *gtk_widget_get_visual(GtkWidget *);
    extern GType gtk_tree_store_get_type(void);
    extern GtkIconInfo *gtk_icon_info_copy(GtkIconInfo *);
    extern void gtk_icon_set_get_sizes(GtkIconSet *, GtkIconSize * *,
				       gint *);
    extern GtkAdjustment *gtk_viewport_get_hadjustment(GtkViewport *);
    extern void gtk_combo_box_insert_text(GtkComboBox *, gint,
					  const gchar *);
    extern void
	gtk_tree_model_sort_convert_iter_to_child_iter(GtkTreeModelSort *,
						       GtkTreeIter *,
						       GtkTreeIter *);
    extern gboolean gtk_scale_get_draw_value(GtkScale *);
    extern gint gtk_combo_box_entry_get_text_column(GtkComboBoxEntry *);
    extern GType gtk_about_dialog_get_type(void);
    extern void gtk_im_context_set_use_preedit(GtkIMContext *, gboolean);
    extern void gtk_list_store_insert_with_valuesv(GtkListStore *,
						   GtkTreeIter *, gint,
						   gint *, GValue *, gint);
    extern void gtk_notebook_set_scrollable(GtkNotebook *, gboolean);
    extern void gtk_frame_set_shadow_type(GtkFrame *, GtkShadowType);
    extern gchar *gtk_editable_get_chars(GtkEditable *, gint, gint);
    extern gboolean gtk_text_view_backward_display_line(GtkTextView *,
							GtkTextIter *);
    extern GType gtk_icon_theme_error_get_type(void);
    extern gint gtk_paned_get_position(GtkPaned *);
    extern void gtk_widget_set_extension_events(GtkWidget *,
						GdkExtensionMode);
    extern GtkTargetList *gtk_drag_dest_get_target_list(GtkWidget *);
    extern void gtk_main(void);
    extern gboolean gtk_toggle_button_get_inconsistent(GtkToggleButton *);
    extern gboolean gtk_alternative_dialog_button_order(GdkScreen *);
    extern void gtk_window_set_mnemonic_modifier(GtkWindow *,
						 GdkModifierType);
    extern void gtk_widget_set_default_colormap(GdkColormap *);
    extern gboolean gtk_accel_map_lookup_entry(const gchar *,
					       GtkAccelKey *);
    extern GtkWidget *gtk_about_dialog_new(void);
    extern gboolean gtk_clipboard_set_with_data(GtkClipboard *,
						const GtkTargetEntry *,
						guint, GtkClipboardGetFunc,
						GtkClipboardClearFunc,
						gpointer);
    extern GtkWidget *gtk_button_new(void);
    extern GList *gtk_tree_selection_get_selected_rows(GtkTreeSelection *,
						       GtkTreeModel * *);
    extern void gtk_tree_selection_select_all(GtkTreeSelection *);
    extern GType gtk_menu_direction_type_get_type(void);
    extern void gtk_action_set_visible(GtkAction *, gboolean);
    extern GtkTooltipsData *gtk_tooltips_data_get(GtkWidget *);
    extern void gtk_tree_store_move_after(GtkTreeStore *, GtkTreeIter *,
					  GtkTreeIter *);
    extern void gtk_text_buffer_insert_with_tags_by_name(GtkTextBuffer *,
							 GtkTextIter *,
							 const gchar *,
							 gint,
							 const gchar *,
							 ...);
    extern gboolean gtk_statusbar_get_has_resize_grip(GtkStatusbar *);
    extern GdkGravity gtk_window_get_gravity(GtkWindow *);
    extern GtkWidget *gtk_image_menu_item_new(void);
    extern void gtk_button_leave(GtkButton *);
    extern void gtk_text_buffer_insert_pixbuf(GtkTextBuffer *,
					      GtkTextIter *, GdkPixbuf *);
    extern void gtk_action_group_add_radio_actions(GtkActionGroup *,
						   const
						   GtkRadioActionEntry *,
						   guint, gint, GCallback,
						   gpointer);
    extern GtkWidget *gtk_vscale_new_with_range(gdouble, gdouble, gdouble);
    extern void gtk_text_buffer_delete_mark(GtkTextBuffer *,
					    GtkTextMark *);
    extern GType gtk_viewport_get_type(void);
    extern void gtk_notebook_set_current_page(GtkNotebook *, gint);
    extern void gtk_text_view_get_line_yrange(GtkTextView *,
					      const GtkTextIter *, gint *,
					      gint *);
    extern gint gtk_combo_box_get_wrap_width(GtkComboBox *);
    extern void gtk_image_get_pixmap(GtkImage *, GdkPixmap * *,
				     GdkBitmap * *);
    extern void gtk_show_about_dialog(GtkWindow *, const gchar *, ...);
    extern gint gtk_tree_view_column_get_min_width(GtkTreeViewColumn *);
    extern GtkWidget *gtk_toggle_button_new(void);
    extern void gtk_drag_dest_add_uri_targets(GtkWidget *);
    extern void gtk_scrolled_window_set_shadow_type(GtkScrolledWindow *,
						    GtkShadowType);
    extern GtkTextAttributes *gtk_text_attributes_copy(GtkTextAttributes
						       *);
    extern void gtk_combo_box_set_active_iter(GtkComboBox *,
					      GtkTreeIter *);
    extern void gtk_table_resize(GtkTable *, guint, guint);
    extern GtkWidget *gtk_aspect_frame_new(const gchar *, gfloat, gfloat,
					   gfloat, gboolean);
    extern gint gtk_tree_view_insert_column(GtkTreeView *,
					    GtkTreeViewColumn *, gint);
    extern void gtk_image_get_stock(GtkImage *, gchar * *, GtkIconSize *);
    extern void gtk_label_select_region(GtkLabel *, gint, gint);
    extern void gtk_tree_selection_unselect_all(GtkTreeSelection *);
    extern void gtk_curve_set_gamma(GtkCurve *, gfloat);
    extern void gtk_window_unfullscreen(GtkWindow *);
    extern GtkWidget *gtk_button_new_with_label(const gchar *);
    extern const gchar *gtk_label_get_text(GtkLabel *);
    extern GtkWidget *gtk_frame_get_label_widget(GtkFrame *);
    extern GtkStyle *gtk_widget_get_style(GtkWidget *);
    extern GtkToolItem *gtk_tool_button_new(GtkWidget *, const gchar *);
    extern void gtk_menu_item_select(GtkMenuItem *);
    extern void gtk_tree_view_set_column_drag_function(GtkTreeView *,
						       GtkTreeViewColumnDropFunc,
						       gpointer,
						       GtkDestroyNotify);
    extern void gtk_paint_vline(GtkStyle *, GdkWindow *, GtkStateType,
				GdkRectangle *, GtkWidget *, const gchar *,
				gint, gint, gint);
    extern gboolean gtk_event_box_get_visible_window(GtkEventBox *);
    extern gboolean gtk_tree_drag_dest_row_drop_possible(GtkTreeDragDest *,
							 GtkTreePath *,
							 GtkSelectionData
							 *);
    extern gboolean gtk_tool_item_get_is_important(GtkToolItem *);
    extern void gtk_key_snooper_remove(guint);
    extern void gtk_settings_set_long_property(GtkSettings *,
					       const gchar *, glong,
					       const gchar *);
    extern void gtk_action_group_add_toggle_actions(GtkActionGroup *,
						    const
						    GtkToggleActionEntry *,
						    guint, gpointer);
    extern void gtk_frame_set_label(GtkFrame *, const gchar *);
    extern guint gtk_accel_label_get_accel_width(GtkAccelLabel *);
    extern GtkTreeModel *gtk_tree_model_sort_get_model(GtkTreeModelSort *);
    extern void gtk_image_menu_item_set_image(GtkImageMenuItem *,
					      GtkWidget *);
    extern GtkWidget *gtk_image_menu_item_new_with_mnemonic(const gchar *);
    extern void gtk_label_set_markup_with_mnemonic(GtkLabel *,
						   const gchar *);
    extern void gtk_tooltips_disable(GtkTooltips *);
    extern GType gtk_cell_renderer_pixbuf_get_type(void);
    extern GtkWidget *gtk_widget_get_ancestor(GtkWidget *, GType);
    extern gboolean gtk_widget_intersect(GtkWidget *, GdkRectangle *,
					 GdkRectangle *);
    extern GtkWidget *gtk_toolbar_new(void);
    extern void gtk_text_view_set_pixels_inside_wrap(GtkTextView *, gint);
    extern void gtk_container_child_get_property(GtkContainer *,
						 GtkWidget *,
						 const gchar *, GValue *);
    extern void gtk_text_view_get_visible_rect(GtkTextView *,
					       GdkRectangle *);
    extern void gtk_cell_layout_reorder(GtkCellLayout *, GtkCellRenderer *,
					gint);
    extern GtkWidget *gtk_menu_bar_new(void);
    extern GType gtk_separator_tool_item_get_type(void);
    extern void gtk_button_pressed(GtkButton *);
    extern gint gtk_combo_box_get_row_span_column(GtkComboBox *);
    extern gboolean gtk_text_tag_event(GtkTextTag *, GObject *, GdkEvent *,
				       const GtkTextIter *);
    extern GtkWidget *gtk_gamma_curve_new(void);
    extern gboolean gtk_calendar_select_month(GtkCalendar *, guint, guint);
    extern void gtk_window_deiconify(GtkWindow *);
    extern void gtk_plug_construct(GtkPlug *, GdkNativeWindow);
    extern gboolean gtk_text_iter_backward_word_starts(GtkTextIter *,
						       gint);
    extern const gchar
	*gtk_file_chooser_button_get_title(GtkFileChooserButton *);
    extern gchar *gtk_text_iter_get_slice(const GtkTextIter *,
					  const GtkTextIter *);
    extern guint gtk_spin_button_get_digits(GtkSpinButton *);
    extern void gtk_image_set_from_icon_set(GtkImage *, GtkIconSet *,
					    GtkIconSize);
    extern gboolean gtk_file_chooser_select_uri(GtkFileChooser *,
						const char *);
    extern void gtk_container_set_focus_chain(GtkContainer *, GList *);
    extern void gtk_stock_item_free(GtkStockItem *);
    extern void gtk_menu_popup(GtkMenu *, GtkWidget *, GtkWidget *,
			       GtkMenuPositionFunc, gpointer, guint,
			       guint32);
    extern GtkProgressBarOrientation
	gtk_progress_bar_get_orientation(GtkProgressBar *);
    extern void gtk_list_store_set(GtkListStore *, GtkTreeIter *, ...);
    extern void gtk_action_group_set_translate_func(GtkActionGroup *,
						    GtkTranslateFunc,
						    gpointer,
						    GtkDestroyNotify);
    extern GtkWidget *gtk_image_new_from_stock(const gchar *, GtkIconSize);
    extern void gtk_box_pack_end_defaults(GtkBox *, GtkWidget *);
    extern void gtk_toolbar_set_style(GtkToolbar *, GtkToolbarStyle);
    extern GtkAccelGroup *gtk_accel_group_from_accel_closure(GClosure *);
    extern GType gtk_container_get_type(void);
    extern void gtk_about_dialog_set_version(GtkAboutDialog *,
					     const gchar *);
    extern gboolean gtk_file_chooser_set_uri(GtkFileChooser *,
					     const char *);
    extern void gtk_tree_model_filter_refilter(GtkTreeModelFilter *);
    extern void gtk_tooltips_force_window(GtkTooltips *);
    extern GtkWidget *gtk_tree_view_new_with_model(GtkTreeModel *);
    extern void gtk_tree_model_row_inserted(GtkTreeModel *, GtkTreePath *,
					    GtkTreeIter *);
    extern GdkModifierType gtk_window_get_mnemonic_modifier(GtkWindow *);
    extern void gtk_tooltips_set_tip(GtkTooltips *, GtkWidget *,
				     const gchar *, const gchar *);
    extern void gtk_cell_layout_set_cell_data_func(GtkCellLayout *,
						   GtkCellRenderer *,
						   GtkCellLayoutDataFunc,
						   gpointer,
						   GDestroyNotify);
    extern gboolean gtk_selection_data_set_text(GtkSelectionData *,
						const gchar *, gint);
    extern GtkTreeRowReference *gtk_tree_row_reference_new(GtkTreeModel *,
							   GtkTreePath *);
    extern void gtk_widget_set_double_buffered(GtkWidget *, gboolean);
    extern gint gtk_combo_box_get_active(GtkComboBox *);
    extern void gtk_tool_button_set_label(GtkToolButton *, const gchar *);
    extern gboolean gtk_text_iter_forward_to_line_end(GtkTextIter *);
    extern gboolean gtk_clipboard_wait_for_targets(GtkClipboard *,
						   GdkAtom * *, gint *);
    extern gboolean gtk_text_buffer_delete_selection(GtkTextBuffer *,
						     gboolean, gboolean);
    extern void gtk_spin_button_set_wrap(GtkSpinButton *, gboolean);
    extern GType gtk_input_dialog_get_type(void);
    extern const gchar *gtk_file_selection_get_filename(GtkFileSelection
							*);
    extern gboolean gtk_tree_set_row_drag_data(GtkSelectionData *,
					       GtkTreeModel *,
					       GtkTreePath *);
    extern GtkWidget *gtk_widget_get_toplevel(GtkWidget *);
    extern void gtk_menu_set_accel_group(GtkMenu *, GtkAccelGroup *);
    extern GType gtk_socket_get_type(void);
    extern gboolean gtk_widget_set_scroll_adjustments(GtkWidget *,
						      GtkAdjustment *,
						      GtkAdjustment *);
    extern void gtk_selection_data_free(GtkSelectionData *);
    extern gboolean gtk_selection_data_set_uris(GtkSelectionData *,
						gchar * *);
    extern GType gtk_text_tag_table_get_type(void);
    extern void gtk_entry_completion_insert_prefix(GtkEntryCompletion *);
    extern GType gtk_window_group_get_type(void);
    extern void gtk_action_set_sensitive(GtkAction *, gboolean);
    extern GtkTextBuffer *gtk_text_view_get_buffer(GtkTextView *);
    extern gboolean gtk_icon_theme_has_icon(GtkIconTheme *, const char *);
    extern void gtk_label_set_selectable(GtkLabel *, gboolean);
    extern gboolean gtk_file_chooser_set_current_folder_uri(GtkFileChooser
							    *,
							    const gchar *);
    extern gdouble gtk_label_get_angle(GtkLabel *);
    extern GtkSettings *gtk_widget_get_settings(GtkWidget *);
    extern GSList *gtk_text_iter_get_tags(const GtkTextIter *);
    extern void gtk_tree_view_column_add_attribute(GtkTreeViewColumn *,
						   GtkCellRenderer *,
						   const gchar *, gint);
    extern void gtk_menu_popdown(GtkMenu *);
    extern void
	gtk_tree_model_sort_reset_default_sort_func(GtkTreeModelSort *);
    extern void gtk_tooltips_enable(GtkTooltips *);
    extern void gtk_expander_set_spacing(GtkExpander *, gint);
    extern gint gtk_entry_layout_index_to_text_index(GtkEntry *, gint);
    extern gdouble gtk_progress_bar_get_pulse_step(GtkProgressBar *);
    extern gboolean gtk_text_iter_backward_visible_word_start(GtkTextIter
							      *);
    extern void gtk_expander_set_label(GtkExpander *, const gchar *);
    extern void gtk_text_buffer_get_iter_at_line_index(GtkTextBuffer *,
						       GtkTextIter *, gint,
						       gint);
    extern guint gtk_ui_manager_add_ui_from_string(GtkUIManager *,
						   const gchar *, gssize,
						   GError * *);
    extern gboolean gtk_icon_info_get_embedded_rect(GtkIconInfo *,
						    GdkRectangle *);
    extern void gtk_widget_queue_resize(GtkWidget *);
    extern GType gtk_tree_path_get_type(void);
    extern void gtk_notebook_set_tab_label_text(GtkNotebook *, GtkWidget *,
						const gchar *);
    extern GtkWidget *gtk_dialog_new(void);
    extern GtkIconSize gtk_toolbar_get_icon_size(GtkToolbar *);
    extern void gtk_widget_hide(GtkWidget *);
    extern GtkIconSet *gtk_icon_factory_lookup_default(const gchar *);
    extern GtkWidget *gtk_tree_view_new(void);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_position(GtkTextIter *);
    extern void gtk_paint_layout(GtkStyle *, GdkWindow *, GtkStateType,
				 gboolean, GdkRectangle *, GtkWidget *,
				 const gchar *, gint, gint, PangoLayout *);
    extern gboolean gtk_button_get_use_stock(GtkButton *);
    extern void gtk_list_store_clear(GtkListStore *);
    extern void gtk_widget_set_app_paintable(GtkWidget *, gboolean);
    extern void gtk_gc_release(GdkGC *);
    extern void gtk_text_view_get_iter_at_location(GtkTextView *,
						   GtkTextIter *, gint,
						   gint);
    extern gboolean gtk_text_view_backward_display_line_start(GtkTextView
							      *,
							      GtkTextIter
							      *);
    extern void gtk_text_mark_set_visible(GtkTextMark *, gboolean);
    extern gint
	gtk_file_chooser_button_get_width_chars(GtkFileChooserButton *);
    extern GType gtk_anchor_type_get_type(void);
    extern gboolean gtk_tree_view_get_reorderable(GtkTreeView *);
    extern GType gtk_hruler_get_type(void);
    extern void gtk_icon_source_set_icon_name(GtkIconSource *,
					      const gchar *);
    extern gboolean gtk_init_with_args(int *, char ***, char *,
				       GOptionEntry *, char *, GError * *);
    extern void gtk_cell_renderer_toggle_set_radio(GtkCellRendererToggle *,
						   gboolean);
    extern void gtk_window_set_destroy_with_parent(GtkWindow *, gboolean);
    extern gboolean gtk_entry_get_visibility(GtkEntry *);
    extern GtkTreePath *gtk_tree_path_new_from_indices(gint, ...);
    extern PangoEllipsizeMode gtk_progress_bar_get_ellipsize(GtkProgressBar
							     *);
    extern void gtk_list_store_insert_with_values(GtkListStore *,
						  GtkTreeIter *, gint,
						  ...);
    extern void gtk_color_button_set_color(GtkColorButton *,
					   const GdkColor *);
    extern gboolean gtk_tree_path_is_ancestor(GtkTreePath *,
					      GtkTreePath *);
    extern guint gtk_table_get_default_row_spacing(GtkTable *);
    extern GtkWidget *gtk_entry_completion_get_entry(GtkEntryCompletion *);
    extern GType gtk_progress_bar_get_type(void);
    extern gunichar gtk_text_iter_get_char(const GtkTextIter *);
    extern const gchar *gtk_color_button_get_title(GtkColorButton *);
    extern GtkTargetList *gtk_drag_source_get_target_list(GtkWidget *);
    extern gboolean gtk_text_iter_ends_tag(const GtkTextIter *,
					   GtkTextTag *);
    extern void gtk_cell_layout_clear(GtkCellLayout *);
    extern gboolean gtk_binding_set_activate(GtkBindingSet *, guint,
					     GdkModifierType, GtkObject *);
    extern void gtk_toolbar_set_drop_highlight_item(GtkToolbar *,
						    GtkToolItem *, gint);
    extern void gtk_curve_set_range(GtkCurve *, gfloat, gfloat, gfloat,
				    gfloat);
    extern void gtk_accel_group_unlock(GtkAccelGroup *);
    extern void gtk_combo_box_remove_text(GtkComboBox *, gint);
    extern GType gtk_message_dialog_get_type(void);
    extern void gtk_button_set_relief(GtkButton *, GtkReliefStyle);
    extern void gtk_file_filter_add_pattern(GtkFileFilter *,
					    const gchar *);
    extern void gtk_widget_map(GtkWidget *);
    extern void gtk_container_child_get(GtkContainer *, GtkWidget *,
					const gchar *, ...);
    extern GType gtk_policy_type_get_type(void);
    extern void gtk_ui_manager_ensure_update(GtkUIManager *);
    extern gint gtk_notebook_insert_page_menu(GtkNotebook *, GtkWidget *,
					      GtkWidget *, GtkWidget *,
					      gint);
    extern gboolean
	gtk_tree_view_column_cell_get_position(GtkTreeViewColumn *,
					       GtkCellRenderer *, gint *,
					       gint *);
    extern gboolean gtk_toolbar_get_show_arrow(GtkToolbar *);
    extern gboolean gtk_cell_view_get_size_of_row(GtkCellView *,
						  GtkTreePath *,
						  GtkRequisition *);
    extern void gtk_curve_get_vector(GtkCurve *, int, gfloat *);
    extern void gtk_drag_source_set_icon_pixbuf(GtkWidget *, GdkPixbuf *);
    extern GType gtk_file_filter_get_type(void);
    extern void gtk_clipboard_set_can_store(GtkClipboard *,
					    const GtkTargetEntry *, gint);
    extern void gtk_tree_view_tree_to_widget_coords(GtkTreeView *, gint,
						    gint, gint *, gint *);
    extern void gtk_tree_view_enable_model_drag_dest(GtkTreeView *,
						     const GtkTargetEntry
						     *, gint,
						     GdkDragAction);
    extern void gtk_clipboard_request_image(GtkClipboard *,
					    GtkClipboardImageReceivedFunc,
					    gpointer);
    extern const gchar *gtk_about_dialog_get_version(GtkAboutDialog *);
    extern GtkTreeModel *gtk_combo_box_get_model(GtkComboBox *);
    extern GtkWidget *gtk_tool_item_retrieve_proxy_menu_item(GtkToolItem
							     *);
    extern void gtk_action_activate(GtkAction *);
    extern GtkWidget *gtk_vpaned_new(void);
    extern GType gtk_curve_get_type(void);
    extern const gchar *gtk_label_get_label(GtkLabel *);
    extern GType gtk_toggle_button_get_type(void);
    extern void gtk_cell_layout_set_attributes(GtkCellLayout *,
					       GtkCellRenderer *, ...);
    extern void gtk_tree_view_set_cursor_on_cell(GtkTreeView *,
						 GtkTreePath *,
						 GtkTreeViewColumn *,
						 GtkCellRenderer *,
						 gboolean);
    extern GType gtk_file_filter_flags_get_type(void);
    extern void gtk_tree_model_ref_node(GtkTreeModel *, GtkTreeIter *);
    extern gchar *gtk_tree_path_to_string(GtkTreePath *);
    extern gboolean gtk_rc_property_parse_enum(const GParamSpec *,
					       const GString *, GValue *);
    extern void gtk_file_chooser_set_use_preview_label(GtkFileChooser *,
						       gboolean);
    extern GType gtk_icon_size_get_type(void);
    extern void gtk_statusbar_set_has_resize_grip(GtkStatusbar *,
						  gboolean);
    extern GtkTreeModel *gtk_entry_completion_get_model(GtkEntryCompletion
							*);
    extern GtkPositionType gtk_notebook_get_tab_pos(GtkNotebook *);
    extern GtkTreeViewRowSeparatorFunc
	gtk_combo_box_get_row_separator_func(GtkComboBox *);
    extern void gtk_accel_map_save(const gchar *);
    extern GtkCellRenderer *gtk_cell_renderer_text_new(void);
    extern void gtk_menu_set_title(GtkMenu *, const gchar *);
    extern GType gtk_tool_item_get_type(void);
    extern GdkWindow *gtk_text_view_get_window(GtkTextView *,
					       GtkTextWindowType);
    extern void gtk_spin_button_set_update_policy(GtkSpinButton *,
						  GtkSpinButtonUpdatePolicy);
    extern guint gtk_rc_parse_color(GScanner *, GdkColor *);
    extern void
	gtk_font_selection_dialog_set_preview_text(GtkFontSelectionDialog
						   *, const gchar *);
    extern GtkAdjustment
	*gtk_scrolled_window_get_vadjustment(GtkScrolledWindow *);
    extern void gtk_menu_shell_deactivate(GtkMenuShell *);
    extern char *gtk_icon_theme_get_example_icon_name(GtkIconTheme *);
    extern const guint gtk_micro_version;
    extern gint gtk_text_view_get_pixels_below_lines(GtkTextView *);
    extern GType gtk_path_priority_type_get_type(void);
    extern void gtk_window_set_accept_focus(GtkWindow *, gboolean);
    extern void gtk_text_buffer_get_iter_at_offset(GtkTextBuffer *,
						   GtkTextIter *, gint);
    extern void gtk_statusbar_remove(GtkStatusbar *, guint, guint);
    extern gboolean gtk_menu_item_get_right_justified(GtkMenuItem *);
    extern gboolean gtk_separator_tool_item_get_draw(GtkSeparatorToolItem
						     *);
    extern GtkWidget *gtk_calendar_new(void);
    extern void gtk_entry_completion_set_model(GtkEntryCompletion *,
					       GtkTreeModel *);
    extern void gtk_text_buffer_place_cursor(GtkTextBuffer *,
					     const GtkTextIter *);
    extern void gtk_list_store_insert(GtkListStore *, GtkTreeIter *, gint);
    extern gboolean gtk_events_pending(void);
    extern GtkCellEditable *gtk_cell_renderer_start_editing(GtkCellRenderer
							    *, GdkEvent *,
							    GtkWidget *,
							    const gchar *,
							    GdkRectangle *,
							    GdkRectangle *,
							    GtkCellRendererState);
    extern void gtk_cell_editable_remove_widget(GtkCellEditable *);
    extern GList *gtk_widget_list_accel_closures(GtkWidget *);
    extern gint *gtk_icon_theme_get_icon_sizes(GtkIconTheme *,
					       const char *);
    extern void gtk_action_group_add_actions_full(GtkActionGroup *,
						  const GtkActionEntry *,
						  guint, gpointer,
						  GDestroyNotify);
    extern void gtk_spin_button_set_adjustment(GtkSpinButton *,
					       GtkAdjustment *);
    extern void
	gtk_tree_model_sort_convert_child_iter_to_iter(GtkTreeModelSort *,
						       GtkTreeIter *,
						       GtkTreeIter *);
    extern GtkWidget *gtk_image_menu_item_get_image(GtkImageMenuItem *);
    extern void gtk_main_quit(void);
    extern void gtk_widget_size_request(GtkWidget *, GtkRequisition *);
    extern void gtk_window_set_default_icon_list(GList *);
    extern void gtk_widget_push_composite_child(void);
    extern void gtk_paned_add1(GtkPaned *, GtkWidget *);
    extern gboolean gtk_selection_data_get_targets(GtkSelectionData *,
						   GdkAtom * *, gint *);
    extern GtkTextAttributes
	*gtk_text_view_get_default_attributes(GtkTextView *);
    extern GtkTreeModel *gtk_tree_model_sort_new_with_model(GtkTreeModel
							    *);
    extern GSList *gtk_radio_button_get_group(GtkRadioButton *);
    extern GType gtk_sort_type_get_type(void);
    extern gboolean gtk_tool_item_get_use_drag_window(GtkToolItem *);
    extern gint gtk_notebook_prepend_page_menu(GtkNotebook *, GtkWidget *,
					       GtkWidget *, GtkWidget *);
    extern GType gtk_tree_model_get_type(void);
    extern void gtk_check_menu_item_set_inconsistent(GtkCheckMenuItem *,
						     gboolean);
    extern GType gtk_tree_drag_dest_get_type(void);
    extern GtkWidget *gtk_hscale_new(GtkAdjustment *);
    extern void gtk_tree_view_column_set_min_width(GtkTreeViewColumn *,
						   gint);
    extern GtkAdjustment
	*gtk_scrolled_window_get_hadjustment(GtkScrolledWindow *);
    extern gboolean gtk_text_buffer_backspace(GtkTextBuffer *,
					      GtkTextIter *, gboolean,
					      gboolean);
    extern void gtk_tool_item_set_expand(GtkToolItem *, gboolean);
    extern GType gtk_icon_info_get_type(void);
    extern gint gtk_tree_model_iter_n_children(GtkTreeModel *,
					       GtkTreeIter *);
    extern GtkReliefStyle gtk_toolbar_get_relief_style(GtkToolbar *);
    extern void gtk_button_set_image(GtkButton *, GtkWidget *);
    extern void gtk_paint_shadow_gap(GtkStyle *, GdkWindow *, GtkStateType,
				     GtkShadowType, GdkRectangle *,
				     GtkWidget *, gchar *, gint, gint,
				     gint, gint, GtkPositionType, gint,
				     gint);
    extern void gtk_window_set_modal(GtkWindow *, gboolean);
    extern void gtk_spin_button_get_range(GtkSpinButton *, gdouble *,
					  gdouble *);
    extern gint gtk_image_get_pixel_size(GtkImage *);
    extern void gtk_text_view_get_iter_location(GtkTextView *,
						const GtkTextIter *,
						GdkRectangle *);
    extern void gtk_tree_view_row_activated(GtkTreeView *, GtkTreePath *,
					    GtkTreeViewColumn *);
    extern void gtk_container_set_focus_child(GtkContainer *, GtkWidget *);
    extern gboolean gtk_accel_groups_activate(GObject *, guint,
					      GdkModifierType);
    extern GtkTextIter *gtk_text_iter_copy(const GtkTextIter *);
    extern gboolean gtk_action_is_sensitive(GtkAction *);
    extern void gtk_tree_store_set_valist(GtkTreeStore *, GtkTreeIter *,
					  va_list);
    extern void gtk_radio_button_set_group(GtkRadioButton *, GSList *);
    extern void gtk_alignment_get_padding(GtkAlignment *, guint *, guint *,
					  guint *, guint *);
    extern gboolean gtk_text_iter_starts_word(const GtkTextIter *);
    extern void gtk_calendar_clear_marks(GtkCalendar *);
    extern GType gtk_box_get_type(void);
    extern void gtk_widget_path(GtkWidget *, guint *, gchar * *,
				gchar * *);
    extern gboolean gtk_menu_get_tearoff_state(GtkMenu *);
    extern void gtk_window_stick(GtkWindow *);
    extern gint gtk_widget_get_events(GtkWidget *);
    extern GType gtk_cell_renderer_state_get_type(void);
    extern void gtk_text_attributes_unref(GtkTextAttributes *);
    extern gboolean gtk_tree_view_column_get_resizable(GtkTreeViewColumn
						       *);
    extern void
	gtk_entry_completion_insert_action_markup(GtkEntryCompletion *,
						  gint, const gchar *);
    extern GType gtk_ruler_get_type(void);
    extern GType gtk_wrap_mode_get_type(void);
    extern GType gtk_paned_get_type(void);
    extern void gtk_text_view_set_cursor_visible(GtkTextView *, gboolean);
    extern gboolean gtk_target_list_find(GtkTargetList *, GdkAtom,
					 guint *);
    extern GtkWidget *gtk_cell_view_new_with_text(const gchar *);
    extern void gtk_editable_select_region(GtkEditable *, gint, gint);
    extern gchar *gtk_clipboard_wait_for_text(GtkClipboard *);
    extern gboolean gtk_color_selection_get_has_palette(GtkColorSelection
							*);
    extern GType gtk_text_search_flags_get_type(void);
    extern gint gtk_tree_view_insert_column_with_data_func(GtkTreeView *,
							   gint,
							   const gchar *,
							   GtkCellRenderer
							   *,
							   GtkTreeCellDataFunc,
							   gpointer,
							   GDestroyNotify);
    extern GtkTextTagTable *gtk_text_tag_table_new(void);
    extern gboolean gtk_notebook_get_show_border(GtkNotebook *);
    extern void
	gtk_container_class_install_child_property(GtkContainerClass *,
						   guint, GParamSpec *);
    extern void gtk_font_button_set_show_style(GtkFontButton *, gboolean);
    extern void gtk_cell_layout_pack_start(GtkCellLayout *,
					   GtkCellRenderer *, gboolean);
    extern GtkAction *gtk_action_group_get_action(GtkActionGroup *,
						  const gchar *);
    extern GtkWidget *gtk_color_selection_dialog_new(const gchar *);
    extern GtkEntryCompletion *gtk_entry_get_completion(GtkEntry *);
    extern GtkToggleAction *gtk_toggle_action_new(const gchar *,
						  const gchar *,
						  const gchar *,
						  const gchar *);
    extern void gtk_file_chooser_set_filter(GtkFileChooser *,
					    GtkFileFilter *);
    extern gint gtk_text_iter_get_line_offset(const GtkTextIter *);
    extern void gtk_text_view_set_indent(GtkTextView *, gint);
    extern void gtk_widget_set_style(GtkWidget *, GtkStyle *);
    extern void gtk_toolbar_unset_style(GtkToolbar *);
    extern GType gtk_hbutton_box_get_type(void);
    extern GtkWidget *gtk_file_chooser_button_new(const gchar *,
						  GtkFileChooserAction);
    extern void gtk_combo_box_popup(GtkComboBox *);
    extern void gtk_border_free(GtkBorder *);
    extern void gtk_message_dialog_format_secondary_text(GtkMessageDialog
							 *, const gchar *,
							 ...);
    extern GtkListStore *gtk_list_store_new(gint, ...);
    extern void gtk_rc_style_ref(GtkRcStyle *);
    extern guint32 gtk_get_current_event_time(void);
    extern void gtk_container_unset_focus_chain(GtkContainer *);
    extern void gtk_text_iter_set_offset(GtkTextIter *, gint);
    extern void gtk_container_set_border_width(GtkContainer *, guint);
    extern void gtk_selection_remove_all(GtkWidget *);
    extern GtkReliefStyle gtk_tool_item_get_relief_style(GtkToolItem *);
    extern void gtk_toggle_button_toggled(GtkToggleButton *);
    extern void gtk_adjustment_value_changed(GtkAdjustment *);
    extern gboolean gtk_widget_hide_on_delete(GtkWidget *);
    extern GType gtk_container_child_type(GtkContainer *);
    extern void gtk_ruler_set_range(GtkRuler *, gdouble, gdouble, gdouble,
				    gdouble);
    extern PangoLayout *gtk_entry_get_layout(GtkEntry *);
    extern void gtk_tree_sortable_sort_column_changed(GtkTreeSortable *);
    extern void gtk_menu_shell_cancel(GtkMenuShell *);
    extern guint gtk_table_get_col_spacing(GtkTable *, guint);
    extern const gchar *gtk_button_get_label(GtkButton *);
    extern GList *gtk_ui_manager_get_action_groups(GtkUIManager *);
    extern void gtk_action_group_set_sensitive(GtkActionGroup *, gboolean);
    extern GtkWidget *gtk_check_button_new_with_mnemonic(const gchar *);
    extern void gtk_widget_unparent(GtkWidget *);
    extern void gtk_widget_add_accelerator(GtkWidget *, const gchar *,
					   GtkAccelGroup *, guint,
					   GdkModifierType, GtkAccelFlags);
    extern guint gtk_ui_manager_new_merge_id(GtkUIManager *);
    extern gboolean gtk_text_iter_backward_find_char(GtkTextIter *,
						     GtkTextCharPredicate,
						     gpointer,
						     const GtkTextIter *);
    extern gboolean gtk_file_chooser_get_select_multiple(GtkFileChooser *);
    extern gboolean gtk_event_box_get_above_child(GtkEventBox *);
    extern void gtk_widget_queue_draw(GtkWidget *);
    extern gboolean
	gtk_text_buffer_insert_interactive_at_cursor(GtkTextBuffer *,
						     const gchar *, gint,
						     gboolean);
    extern gboolean
	gtk_selection_data_targets_include_image(GtkSelectionData *,
						 gboolean);
    extern GtkWidget *gtk_separator_menu_item_new(void);
    extern gboolean gtk_widget_mnemonic_activate(GtkWidget *, gboolean);
    extern void gtk_tree_selection_select_range(GtkTreeSelection *,
						GtkTreePath *,
						GtkTreePath *);
    extern void gtk_file_chooser_unselect_uri(GtkFileChooser *,
					      const char *);
    extern void gtk_style_detach(GtkStyle *);
    extern gboolean gtk_accel_group_disconnect_key(GtkAccelGroup *, guint,
						   GdkModifierType);
    extern gboolean gtk_notebook_get_show_tabs(GtkNotebook *);
    extern void gtk_file_chooser_set_preview_widget_active(GtkFileChooser
							   *, gboolean);
    extern GList *gtk_window_get_default_icon_list(void);
    extern gboolean gtk_text_iter_backward_lines(GtkTextIter *, gint);
    extern void gtk_notebook_popup_disable(GtkNotebook *);
    extern GtkTreeModel *gtk_tree_model_filter_get_model(GtkTreeModelFilter
							 *);
    extern gdouble gtk_adjustment_get_value(GtkAdjustment *);
    extern GtkWidget *gtk_curve_new(void);
    extern void gtk_widget_get_child_requisition(GtkWidget *,
						 GtkRequisition *);
    extern gchar *gtk_rc_get_im_module_path(void);
    extern void gtk_window_set_default(GtkWindow *, GtkWidget *);
    extern void gtk_entry_set_text(GtkEntry *, const gchar *);
    extern gboolean gtk_true(void);
    extern void gtk_box_set_homogeneous(GtkBox *, gboolean);
    extern void gtk_text_buffer_apply_tag(GtkTextBuffer *, GtkTextTag *,
					  const GtkTextIter *,
					  const GtkTextIter *);
    extern void gtk_expander_set_use_markup(GtkExpander *, gboolean);
    extern GtkWidget *gtk_tearoff_menu_item_new(void);
    extern GtkImageType gtk_image_get_storage_type(GtkImage *);
    extern GType gtk_text_window_type_get_type(void);
    extern void gtk_text_buffer_remove_selection_clipboard(GtkTextBuffer *,
							   GtkClipboard *);
    extern gboolean gtk_ui_manager_get_add_tearoffs(GtkUIManager *);
    extern GtkPositionType gtk_handle_box_get_snap_edge(GtkHandleBox *);
    extern void gtk_widget_get_size_request(GtkWidget *, gint *, gint *);
    extern GType gtk_action_get_type(void);
    extern gboolean gtk_window_get_accept_focus(GtkWindow *);
    extern void gtk_spin_button_set_digits(GtkSpinButton *, guint);
    extern void gtk_window_group_remove_window(GtkWindowGroup *,
					       GtkWindow *);
    extern gpointer gtk_type_class(GtkType);
    extern void gtk_color_selection_set_current_color(GtkColorSelection *,
						      const GdkColor *);
    extern GtkSpinButtonUpdatePolicy
	gtk_spin_button_get_update_policy(GtkSpinButton *);
    extern void gtk_dialog_set_default_response(GtkDialog *, gint);
    extern gboolean gtk_font_button_set_font_name(GtkFontButton *,
						  const gchar *);
    extern void gtk_tree_row_reference_inserted(GObject *, GtkTreePath *);
    extern const gchar *gtk_tool_button_get_label(GtkToolButton *);
    extern GtkWidget *gtk_menu_tool_button_get_menu(GtkMenuToolButton *);
    extern void gtk_tree_view_set_headers_visible(GtkTreeView *, gboolean);
    extern GList *gtk_text_child_anchor_get_widgets(GtkTextChildAnchor *);
    extern gint gtk_toolbar_get_drop_index(GtkToolbar *, gint, gint);
    extern void gtk_progress_bar_set_orientation(GtkProgressBar *,
						 GtkProgressBarOrientation);
    extern void gtk_window_set_geometry_hints(GtkWindow *, GtkWidget *,
					      GdkGeometry *,
					      GdkWindowHints);
    extern GType gtk_progress_bar_orientation_get_type(void);
    extern GtkReliefStyle gtk_button_get_relief(GtkButton *);
    extern gboolean gtk_bindings_activate(GtkObject *, guint,
					  GdkModifierType);
    extern GType gtk_toolbar_style_get_type(void);
    extern void gtk_menu_set_accel_path(GtkMenu *, const gchar *);
    extern void gtk_alignment_set_padding(GtkAlignment *, guint, guint,
					  guint, guint);
    extern GtkTreeRowReference
	*gtk_tree_row_reference_copy(GtkTreeRowReference *);
    extern GtkToolItem
	*gtk_radio_tool_button_new_from_widget(GtkRadioToolButton *);
    extern GType gtk_tree_model_sort_get_type(void);
    extern GdkWindow *gtk_tree_view_get_bin_window(GtkTreeView *);
    extern GtkToolbarStyle gtk_toolbar_get_style(GtkToolbar *);
    extern void gtk_size_group_set_mode(GtkSizeGroup *, GtkSizeGroupMode);
    extern GtkWidget *gtk_dialog_new_with_buttons(const gchar *,
						  GtkWindow *,
						  GtkDialogFlags,
						  const gchar *, ...);
    extern void gtk_about_dialog_set_name(GtkAboutDialog *, const gchar *);
    extern void gtk_drag_source_add_image_targets(GtkWidget *);
    extern void gtk_notebook_set_menu_label(GtkNotebook *, GtkWidget *,
					    GtkWidget *);
    extern const gchar *gtk_action_group_get_name(GtkActionGroup *);
    extern gboolean gtk_text_buffer_insert_interactive(GtkTextBuffer *,
						       GtkTextIter *,
						       const gchar *, gint,
						       gboolean);
    extern void gtk_table_attach_defaults(GtkTable *, GtkWidget *, guint,
					  guint, guint, guint);
    extern void gtk_notebook_reorder_child(GtkNotebook *, GtkWidget *,
					   gint);
    extern void gtk_icon_source_set_state(GtkIconSource *, GtkStateType);
    extern GType gtk_tree_model_filter_get_type(void);
    extern void gtk_window_add_accel_group(GtkWindow *, GtkAccelGroup *);
    extern void gtk_ruler_draw_ticks(GtkRuler *);
    extern GtkIconSize gtk_icon_size_from_name(const gchar *);
    extern void gtk_combo_box_set_model(GtkComboBox *, GtkTreeModel *);
    extern GdkPixbuf *gtk_icon_set_render_icon(GtkIconSet *, GtkStyle *,
					       GtkTextDirection,
					       GtkStateType, GtkIconSize,
					       GtkWidget *, const char *);
    extern void gtk_tree_selection_selected_foreach(GtkTreeSelection *,
						    GtkTreeSelectionForeachFunc,
						    gpointer);
    extern GType gtk_cell_layout_get_type(void);
    extern void gtk_text_iter_set_visible_line_offset(GtkTextIter *, gint);
    extern gboolean gtk_rc_property_parse_requisition(const GParamSpec *,
						      const GString *,
						      GValue *);
    extern GType gtk_combo_box_get_type(void);
    extern GtkFileFilter *gtk_file_filter_new(void);
    extern gdouble gtk_range_get_value(GtkRange *);
    extern GtkWidget *gtk_event_box_new(void);
    extern gboolean gtk_list_store_iter_is_valid(GtkListStore *,
						 GtkTreeIter *);
    extern GtkIconInfo *gtk_icon_theme_lookup_icon(GtkIconTheme *,
						   const gchar *, gint,
						   GtkIconLookupFlags);
    extern GType gtk_tree_model_flags_get_type(void);
    extern void gtk_draw_insertion_cursor(GtkWidget *, GdkDrawable *,
					  GdkRectangle *, GdkRectangle *,
					  gboolean, GtkTextDirection,
					  gboolean);
    extern GtkWindowGroup *gtk_window_group_new(void);
    extern GtkFileFilter *gtk_file_chooser_get_filter(GtkFileChooser *);
    extern void gtk_label_set_use_underline(GtkLabel *, gboolean);
    extern gboolean gtk_tree_view_column_cell_is_visible(GtkTreeViewColumn
							 *);
    extern gint gtk_tree_model_get_n_columns(GtkTreeModel *);
    extern GtkTreeStore *gtk_tree_store_new(gint, ...);
    extern GType gtk_frame_get_type(void);
    extern gboolean
	gtk_file_chooser_remove_shortcut_folder_uri(GtkFileChooser *,
						    const char *,
						    GError * *);
    extern gboolean gtk_text_iter_backward_sentence_start(GtkTextIter *);
    extern void gtk_text_view_set_wrap_mode(GtkTextView *, GtkWrapMode);
    extern gboolean gtk_accelerator_valid(guint, GdkModifierType);
    extern void gtk_text_buffer_end_user_action(GtkTextBuffer *);
    extern GtkToolItem *gtk_toolbar_get_nth_item(GtkToolbar *, gint);
    extern gboolean gtk_file_chooser_select_filename(GtkFileChooser *,
						     const gchar *);
    extern void gtk_combo_box_set_row_span_column(GtkComboBox *, gint);
    extern GType gtk_relief_style_get_type(void);
    extern gboolean gtk_tree_path_is_descendant(GtkTreePath *,
						GtkTreePath *);
    extern void gtk_drag_highlight(GtkWidget *);
    extern gboolean gtk_file_selection_get_select_multiple(GtkFileSelection
							   *);
    extern gboolean gtk_toggle_action_get_draw_as_radio(GtkToggleAction *);
    extern void gtk_icon_view_select_all(GtkIconView *);
    extern void gtk_button_get_alignment(GtkButton *, gfloat *, gfloat *);
    extern void gtk_spin_button_set_range(GtkSpinButton *, gdouble,
					  gdouble);
    extern gint gtk_tree_view_append_column(GtkTreeView *,
					    GtkTreeViewColumn *);
    extern void gtk_quit_remove_by_data(gpointer);
    extern const gchar *gtk_about_dialog_get_website_label(GtkAboutDialog
							   *);
    extern void gtk_list_store_insert_before(GtkListStore *, GtkTreeIter *,
					     GtkTreeIter *);
    extern const guint gtk_minor_version;
    extern void gtk_statusbar_pop(GtkStatusbar *, guint);
    extern gboolean gtk_tree_selection_get_selected(GtkTreeSelection *,
						    GtkTreeModel * *,
						    GtkTreeIter *);
    extern void gtk_drag_get_data(GtkWidget *, GdkDragContext *, GdkAtom,
				  guint32);
    extern const gchar *gtk_frame_get_label(GtkFrame *);
    extern GtkWidget
	*gtk_radio_button_new_with_label_from_widget(GtkRadioButton *,
						     const gchar *);
    extern void gtk_text_view_get_iter_at_position(GtkTextView *,
						   GtkTextIter *, gint *,
						   gint, gint);
    extern GtkTreeViewSearchEqualFunc
	gtk_tree_view_get_search_equal_func(GtkTreeView *);
    extern gboolean gtk_selection_data_set_pixbuf(GtkSelectionData *,
						  GdkPixbuf *);
    extern GtkMetricType gtk_ruler_get_metric(GtkRuler *);
    extern void gtk_window_set_keep_above(GtkWindow *, gboolean);
    extern void gtk_im_context_simple_add_table(GtkIMContextSimple *,
						guint16 *, gint, gint);
    extern PangoLayout *gtk_scale_get_layout(GtkScale *);
    extern AtkObject *gtk_combo_box_get_popup_accessible(GtkComboBox *);
    extern GType gtk_radio_button_get_type(void);
    extern gint gtk_notebook_prepend_page(GtkNotebook *, GtkWidget *,
					  GtkWidget *);
    extern gint gtk_text_view_get_indent(GtkTextView *);
    extern gint gtk_text_view_get_border_window_size(GtkTextView *,
						     GtkTextWindowType);
    extern GdkPixbuf *gtk_text_iter_get_pixbuf(const GtkTextIter *);
    extern const gchar *gtk_notebook_get_tab_label_text(GtkNotebook *,
							GtkWidget *);
    extern GtkFileChooserAction gtk_file_chooser_get_action(GtkFileChooser
							    *);
    extern void gtk_frame_get_label_align(GtkFrame *, gfloat *, gfloat *);
    extern GtkIconSet *gtk_icon_set_ref(GtkIconSet *);
    extern GType gtk_hpaned_get_type(void);
    extern void gtk_about_dialog_set_website_label(GtkAboutDialog *,
						   const gchar *);
    extern GtkIconFactory *gtk_icon_factory_new(void);
    extern GtkCellRenderer *gtk_cell_renderer_combo_new(void);
    extern GtkTreeModel *gtk_tree_model_filter_new(GtkTreeModel *,
						   GtkTreePath *);
    extern GtkTargetList *gtk_target_list_new(const GtkTargetEntry *,
					      guint);
    extern gboolean gtk_text_view_move_visually(GtkTextView *,
						GtkTextIter *, gint);
    extern GList *gtk_container_get_children(GtkContainer *);
    extern GType gtk_tree_iter_get_type(void);
    extern GType gtk_toggle_action_get_type(void);
    extern void gtk_check_menu_item_set_draw_as_radio(GtkCheckMenuItem *,
						      gboolean);
    extern void gtk_clipboard_request_targets(GtkClipboard *,
					      GtkClipboardTargetsReceivedFunc,
					      gpointer);
    extern void gtk_icon_view_set_item_width(GtkIconView *, gint);
    extern void gtk_tree_view_set_headers_clickable(GtkTreeView *,
						    gboolean);
    extern GtkCornerType
	gtk_scrolled_window_get_placement(GtkScrolledWindow *);
    extern void gtk_text_view_set_tabs(GtkTextView *, PangoTabArray *);
    extern void gtk_menu_tool_button_set_menu(GtkMenuToolButton *,
					      GtkWidget *);
    extern void gtk_window_unmaximize(GtkWindow *);
    extern void gtk_widget_modify_font(GtkWidget *,
				       PangoFontDescription *);
    extern void gtk_toggle_tool_button_set_active(GtkToggleToolButton *,
						  gboolean);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_path_to_child_path
	(GtkTreeModelFilter *, GtkTreePath *);
    extern GObject *gtk_clipboard_get_owner(GtkClipboard *);
    extern void gtk_text_view_set_pixels_below_lines(GtkTextView *, gint);
    extern void gtk_text_view_set_pixels_above_lines(GtkTextView *, gint);
    extern void gtk_font_button_set_show_size(GtkFontButton *, gboolean);
    extern void gtk_paint_resize_grip(GtkStyle *, GdkWindow *,
				      GtkStateType, GdkRectangle *,
				      GtkWidget *, const gchar *,
				      GdkWindowEdge, gint, gint, gint,
				      gint);
    extern void gtk_widget_show_all(GtkWidget *);
    extern void gtk_widget_set_name(GtkWidget *, const gchar *);
    extern void gtk_action_disconnect_proxy(GtkAction *, GtkWidget *);
    extern void gtk_image_set_pixel_size(GtkImage *, gint);
    extern GList *gtk_tree_view_column_get_cell_renderers(GtkTreeViewColumn
							  *);
    extern GType gtk_arrow_type_get_type(void);
    extern void gtk_accel_group_connect_by_path(GtkAccelGroup *,
						const gchar *, GClosure *);
    extern void gtk_tree_view_scroll_to_point(GtkTreeView *, gint, gint);
    extern GtkTreePath *gtk_tree_model_get_path(GtkTreeModel *,
						GtkTreeIter *);
    extern void gtk_menu_shell_prepend(GtkMenuShell *, GtkWidget *);
    extern void gtk_image_set_from_image(GtkImage *, GdkImage *,
					 GdkBitmap *);
    extern GType gtk_widget_help_type_get_type(void);
    extern GType gtk_corner_type_get_type(void);
    extern void gtk_tree_row_reference_deleted(GObject *, GtkTreePath *);
    extern GtkWidget *gtk_combo_box_new(void);
    extern GtkAdjustment *gtk_viewport_get_vadjustment(GtkViewport *);
    extern gboolean gtk_text_iter_inside_sentence(const GtkTextIter *);
    extern void gtk_action_group_add_action_with_accel(GtkActionGroup *,
						       GtkAction *,
						       const gchar *);
    extern GSList *gtk_file_chooser_get_uris(GtkFileChooser *);
    extern gboolean gtk_window_is_active(GtkWindow *);
    extern void gtk_settings_set_double_property(GtkSettings *,
						 const gchar *, gdouble,
						 const gchar *);
    extern GtkTextBuffer *gtk_text_mark_get_buffer(GtkTextMark *);
    extern GType gtk_scrolled_window_get_type(void);
    extern gboolean gtk_text_iter_equal(const GtkTextIter *,
					const GtkTextIter *);
    extern void gtk_window_group_add_window(GtkWindowGroup *, GtkWindow *);
    extern GtkAccelGroup *gtk_menu_get_accel_group(GtkMenu *);
    extern gchar *gtk_rc_get_module_dir(void);
    extern void gtk_color_button_set_alpha(GtkColorButton *, guint16);
    extern void gtk_table_attach(GtkTable *, GtkWidget *, guint, guint,
				 guint, guint, GtkAttachOptions,
				 GtkAttachOptions, guint, guint);
    extern void gtk_menu_reorder_child(GtkMenu *, GtkWidget *, gint);
    extern gboolean gtk_widget_event(GtkWidget *, GdkEvent *);
    extern gchar *gtk_font_selection_get_font_name(GtkFontSelection *);
    extern GdkPixbuf *gtk_icon_info_load_icon(GtkIconInfo *, GError * *);
    extern gboolean gtk_label_get_selection_bounds(GtkLabel *, gint *,
						   gint *);
    extern void gtk_icon_factory_remove_default(GtkIconFactory *);
    extern void gtk_tree_store_swap(GtkTreeStore *, GtkTreeIter *,
				    GtkTreeIter *);
    extern void gtk_color_selection_set_has_palette(GtkColorSelection *,
						    gboolean);
    extern void gtk_tree_path_next(GtkTreePath *);
    extern void gtk_action_unblock_activate_from(GtkAction *, GtkWidget *);
    extern void gtk_notebook_set_tab_pos(GtkNotebook *, GtkPositionType);
    extern void gtk_icon_source_set_filename(GtkIconSource *,
					     const gchar *);
    extern void gtk_progress_bar_set_text(GtkProgressBar *, const gchar *);
    extern GtkWidget *gtk_invisible_new_for_screen(GdkScreen *);
    extern gboolean gtk_tree_view_get_enable_search(GtkTreeView *);
    extern gboolean gtk_tree_store_is_ancestor(GtkTreeStore *,
					       GtkTreeIter *,
					       GtkTreeIter *);
    extern GtkWidget *gtk_button_get_image(GtkButton *);
    extern void gtk_tool_button_set_stock_id(GtkToolButton *,
					     const gchar *);
    extern GtkWidget *gtk_font_selection_dialog_new(const gchar *);
    extern void gtk_drag_source_set_icon(GtkWidget *, GdkColormap *,
					 GdkPixmap *, GdkBitmap *);
    extern void gtk_file_chooser_set_local_only(GtkFileChooser *,
						gboolean);
    extern void gtk_text_buffer_remove_all_tags(GtkTextBuffer *,
						const GtkTextIter *,
						const GtkTextIter *);
    extern gfloat gtk_entry_get_alignment(GtkEntry *);
    extern GSList *gtk_text_iter_get_toggled_tags(const GtkTextIter *,
						  gboolean);
    extern gchar *gtk_text_buffer_get_text(GtkTextBuffer *,
					   const GtkTextIter *,
					   const GtkTextIter *, gboolean);
    extern void gtk_progress_bar_set_pulse_step(GtkProgressBar *, gdouble);
    extern GtkTreePath *gtk_cell_view_get_displayed_row(GtkCellView *);
    extern GtkTreePath *gtk_tree_path_copy(const GtkTreePath *);
    extern GQuark gtk_icon_theme_error_quark(void);
    extern void gtk_disable_setlocale(void);
    extern GSList *gtk_radio_tool_button_get_group(GtkRadioToolButton *);
    extern GType gtk_accel_flags_get_type(void);
    extern gboolean gtk_window_get_skip_taskbar_hint(GtkWindow *);
    extern void gtk_widget_style_get_valist(GtkWidget *, const gchar *,
					    va_list);
    extern GType gtk_message_type_get_type(void);
    extern GType gtk_icon_lookup_flags_get_type(void);
    extern gint gtk_text_iter_get_chars_in_line(const GtkTextIter *);
    extern void gtk_clipboard_request_text(GtkClipboard *,
					   GtkClipboardTextReceivedFunc,
					   gpointer);
    extern GType gtk_tree_selection_get_type(void);
    extern void gtk_text_buffer_cut_clipboard(GtkTextBuffer *,
					      GtkClipboard *, gboolean);
    extern void gtk_tree_view_widget_to_tree_coords(GtkTreeView *, gint,
						    gint, gint *, gint *);
    extern gboolean gtk_list_store_remove(GtkListStore *, GtkTreeIter *);
    extern void gtk_drag_dest_unset(GtkWidget *);
    extern GType gtk_accel_label_get_type(void);
    extern gboolean gtk_text_iter_ends_line(const GtkTextIter *);
    extern void gtk_spin_button_set_numeric(GtkSpinButton *, gboolean);
    extern gboolean gtk_text_iter_backward_chars(GtkTextIter *, gint);
    extern void gtk_tree_view_column_cell_get_size(GtkTreeViewColumn *,
						   GdkRectangle *, gint *,
						   gint *, gint *, gint *);
    extern GtkTreePath *gtk_tree_path_new_from_string(const gchar *);
    extern GScanner *gtk_rc_scanner_new(void);
    extern GtkWidget *gtk_combo_box_entry_new(void);
    extern GtkWidget
	*gtk_radio_button_new_with_mnemonic_from_widget(GtkRadioButton *,
							const gchar *);
    extern GType gtk_tree_sortable_get_type(void);
    extern GtkTextTag *gtk_text_tag_new(const gchar *);
    extern GtkWidget *gtk_hbutton_box_new(void);
    extern GType gtk_alignment_get_type(void);
    extern GtkTreeRowReference *gtk_tree_row_reference_new_proxy(GObject *,
								 GtkTreeModel
								 *,
								 GtkTreePath
								 *);
    extern const gchar *gtk_about_dialog_get_license(GtkAboutDialog *);
    extern GtkWidget *gtk_check_menu_item_new(void);
    extern GType gtk_size_group_mode_get_type(void);
    extern gboolean gtk_calendar_unmark_day(GtkCalendar *, guint);
    extern GtkWidget *gtk_label_get_mnemonic_widget(GtkLabel *);
    extern void gtk_button_set_focus_on_click(GtkButton *, gboolean);
    extern void gtk_combo_box_prepend_text(GtkComboBox *, const gchar *);
    extern void gtk_tree_store_set(GtkTreeStore *, GtkTreeIter *, ...);
    extern GType gtk_im_preedit_style_get_type(void);
    extern gboolean gtk_get_current_event_state(GdkModifierType *);
    extern GType gtk_handle_box_get_type(void);
    extern void gtk_tree_model_sort_clear_cache(GtkTreeModelSort *);
    extern void gtk_selection_clear_targets(GtkWidget *, GdkAtom);
    extern void gtk_about_dialog_set_comments(GtkAboutDialog *,
					      const gchar *);
    extern void gtk_list_store_append(GtkListStore *, GtkTreeIter *);
    extern gboolean gtk_tool_item_get_visible_horizontal(GtkToolItem *);
    extern void gtk_window_set_default_size(GtkWindow *, gint, gint);
    extern void gtk_drag_set_icon_stock(GdkDragContext *, const gchar *,
					gint, gint);
    extern void gtk_paned_set_position(GtkPaned *, gint);
    extern void gtk_tree_view_column_set_sort_order(GtkTreeViewColumn *,
						    GtkSortType);
    extern GtkWidget *gtk_image_new_from_icon_set(GtkIconSet *,
						  GtkIconSize);
    extern GType gtk_image_get_type(void);
    extern GtkTextDirection gtk_widget_get_default_direction(void);
    extern GtkWidget *gtk_color_button_new(void);
    extern void gtk_paint_hline(GtkStyle *, GdkWindow *, GtkStateType,
				GdkRectangle *, GtkWidget *, const gchar *,
				gint, gint, gint);
    extern void gtk_menu_item_toggle_size_request(GtkMenuItem *, gint *);
    extern void gtk_size_group_remove_widget(GtkSizeGroup *, GtkWidget *);
    extern GtkClipboard *gtk_widget_get_clipboard(GtkWidget *, GdkAtom);
    extern void gtk_scale_set_draw_value(GtkScale *, gboolean);
    extern void gtk_frame_set_label_widget(GtkFrame *, GtkWidget *);
    extern GType gtk_check_button_get_type(void);
    extern void gtk_widget_show(GtkWidget *);
    extern void gtk_adjustment_changed(GtkAdjustment *);
    extern gboolean gtk_text_iter_forward_visible_word_ends(GtkTextIter *,
							    gint);
    extern void gtk_entry_set_has_frame(GtkEntry *, gboolean);
    extern GtkWidget *gtk_hbox_new(gboolean, gint);
    extern PangoContext *gtk_widget_get_pango_context(GtkWidget *);
    extern GtkAccelKey *gtk_accel_group_find(GtkAccelGroup *,
					     GtkAccelGroupFindFunc,
					     gpointer);
    extern const gchar *gtk_font_button_get_font_name(GtkFontButton *);
    extern void
	gtk_entry_completion_set_inline_completion(GtkEntryCompletion *,
						   gboolean);
    extern gboolean gtk_toggle_tool_button_get_active(GtkToggleToolButton
						      *);
    extern gchar *gtk_widget_get_composite_name(GtkWidget *);
    extern GType gtk_ui_manager_item_type_get_type(void);
    extern void gtk_tree_sortable_set_sort_column_id(GtkTreeSortable *,
						     gint, GtkSortType);
    extern void gtk_tree_path_append_index(GtkTreePath *, gint);
    extern GtkToolItem *gtk_radio_tool_button_new_from_stock(GSList *,
							     const gchar
							     *);
    extern void gtk_image_get_icon_name(GtkImage *, const gchar * *,
					GtkIconSize *);
    extern GtkIconSource *gtk_icon_source_copy(const GtkIconSource *);
    extern void gtk_icon_view_set_text_column(GtkIconView *, gint);
    extern void gtk_label_set_justify(GtkLabel *, GtkJustification);
    extern void gtk_tree_view_column_set_attributes(GtkTreeViewColumn *,
						    GtkCellRenderer *,
						    ...);
    extern void gtk_box_pack_start(GtkBox *, GtkWidget *, gboolean,
				   gboolean, guint);
    extern const gchar *const *gtk_about_dialog_get_artists(GtkAboutDialog
							    *);
    extern void gtk_label_set_markup(GtkLabel *, const gchar *);
    extern GdkPixbuf *gtk_icon_info_get_builtin_pixbuf(GtkIconInfo *);
    extern gboolean gtk_text_iter_starts_sentence(const GtkTextIter *);
    extern void gtk_tree_view_set_destroy_count_func(GtkTreeView *,
						     GtkTreeDestroyCountFunc,
						     gpointer,
						     GtkDestroyNotify);
    extern GType gtk_expander_get_type(void);
    extern void gtk_list_store_move_before(GtkListStore *, GtkTreeIter *,
					   GtkTreeIter *);
    extern gboolean gtk_tree_view_column_get_visible(GtkTreeViewColumn *);
    extern GType gtk_text_buffer_get_type(void);
    extern void gtk_file_chooser_add_filter(GtkFileChooser *,
					    GtkFileFilter *);
    extern gint gtk_text_tag_table_get_size(GtkTextTagTable *);
    extern GType gtk_attach_options_get_type(void);
    extern gboolean gtk_rc_reparse_all_for_settings(GtkSettings *,
						    gboolean);
    extern gunichar gtk_entry_get_invisible_char(GtkEntry *);
    extern GType gtk_text_view_get_type(void);
    extern gboolean gtk_text_iter_is_end(const GtkTextIter *);
    extern GdkPixbuf *gtk_icon_source_get_pixbuf(const GtkIconSource *);
    extern gboolean gtk_text_iter_forward_word_end(GtkTextIter *);
    extern GType gtk_menu_shell_get_type(void);
    extern const gchar *gtk_tool_button_get_stock_id(GtkToolButton *);
    extern GtkTextMark *gtk_text_buffer_get_mark(GtkTextBuffer *,
						 const gchar *);
    extern gboolean gtk_icon_view_path_is_selected(GtkIconView *,
						   GtkTreePath *);
    extern GtkCellRenderer *gtk_cell_renderer_pixbuf_new(void);
    extern gchar *gtk_file_chooser_get_current_folder(GtkFileChooser *);
    extern gboolean gtk_selection_owner_set(GtkWidget *, GdkAtom, guint32);
    extern void gtk_window_get_size(GtkWindow *, gint *, gint *);
    extern void gtk_binding_entry_add_signall(GtkBindingSet *, guint,
					      GdkModifierType,
					      const gchar *, GSList *);
    extern PangoLanguage *gtk_text_iter_get_language(const GtkTextIter *);
    extern void gtk_dialog_add_buttons(GtkDialog *, const gchar *, ...);
    extern void gtk_action_disconnect_accelerator(GtkAction *);
    extern char *gtk_file_chooser_get_preview_uri(GtkFileChooser *);
    extern void gtk_requisition_free(GtkRequisition *);
    extern GSList *gtk_text_iter_get_marks(const GtkTextIter *);
    extern GType gtk_delete_type_get_type(void);
    extern void gtk_box_reorder_child(GtkBox *, GtkWidget *, gint);
    extern GtkWidget *gtk_menu_item_new_with_mnemonic(const gchar *);
    extern void gtk_item_deselect(GtkItem *);
    extern gboolean gtk_file_chooser_get_show_hidden(GtkFileChooser *);
    extern GType gtk_hscrollbar_get_type(void);
    extern GtkStyle *gtk_widget_get_default_style(void);
    extern GtkToolItem
	*gtk_radio_tool_button_new_with_stock_from_widget
	(GtkRadioToolButton *, const gchar *);
    extern void gtk_tree_view_get_drag_dest_row(GtkTreeView *,
						GtkTreePath * *,
						GtkTreeViewDropPosition *);
    extern GSList *gtk_radio_action_get_group(GtkRadioAction *);
    extern void gtk_drag_finish(GdkDragContext *, gboolean, gboolean,
				guint32);
    extern GType gtk_button_box_get_type(void);
    extern void gtk_binding_entry_remove(GtkBindingSet *, guint,
					 GdkModifierType);
    extern GtkWidget *gtk_accel_label_get_accel_widget(GtkAccelLabel *);
    extern gboolean gtk_accel_map_change_entry(const gchar *, guint,
					       GdkModifierType, gboolean);
    extern gboolean
	gtk_cell_renderer_toggle_get_active(GtkCellRendererToggle *);
    extern void gtk_cell_renderer_get_size(GtkCellRenderer *, GtkWidget *,
					   GdkRectangle *, gint *, gint *,
					   gint *, gint *);
    extern void gtk_layout_put(GtkLayout *, GtkWidget *, gint, gint);
    extern void gtk_widget_set_parent(GtkWidget *, GtkWidget *);
    extern gboolean gtk_text_iter_forward_lines(GtkTextIter *, gint);
    extern gboolean gtk_expander_get_use_markup(GtkExpander *);
    extern gboolean gtk_main_iteration(void);
    extern void gtk_tree_view_column_set_sort_column_id(GtkTreeViewColumn
							*, gint);
    extern gboolean gtk_text_mark_get_deleted(GtkTextMark *);
    extern GtkWidget *gtk_combo_box_new_with_model(GtkTreeModel *);
    extern GtkWidget *gtk_icon_view_new_with_model(GtkTreeModel *);
    extern GType gtk_side_type_get_type(void);
    extern void gtk_settings_install_property(GParamSpec *);
    extern void gtk_image_get_image(GtkImage *, GdkImage * *,
				    GdkBitmap * *);
    extern GType gtk_entry_get_type(void);
    extern GType gtk_file_selection_get_type(void);
    extern void gtk_calendar_set_display_options(GtkCalendar *,
						 GtkCalendarDisplayOptions);
    extern gboolean
	gtk_entry_completion_get_popup_completion(GtkEntryCompletion *);
    extern void gtk_widget_pop_composite_child(void);
    extern gboolean gtk_text_iter_forward_cursor_position(GtkTextIter *);
    extern void gtk_drag_dest_set_target_list(GtkWidget *,
					      GtkTargetList *);
    extern GtkTextAttributes *gtk_text_attributes_new(void);
    extern void gtk_paned_pack2(GtkPaned *, GtkWidget *, gboolean,
				gboolean);
    extern void gtk_aspect_frame_set(GtkAspectFrame *, gfloat, gfloat,
				     gfloat, gboolean);
    extern void gtk_propagate_event(GtkWidget *, GdkEvent *);
    extern void gtk_rc_style_unref(GtkRcStyle *);
    extern void gtk_tree_path_prepend_index(GtkTreePath *, gint);
    extern void gtk_text_buffer_delete_mark_by_name(GtkTextBuffer *,
						    const gchar *);
    extern GtkToolItem *gtk_separator_tool_item_new(void);
    extern void gtk_ruler_draw_pos(GtkRuler *);
    extern void gtk_im_context_focus_in(GtkIMContext *);
    extern void gtk_widget_shape_combine_mask(GtkWidget *, GdkBitmap *,
					      gint, gint);
    extern gint gtk_dialog_run(GtkDialog *);
    extern gboolean
	gtk_cell_renderer_toggle_get_radio(GtkCellRendererToggle *);
    extern GType gtk_entry_completion_get_type(void);
    extern void gtk_tree_model_get_value(GtkTreeModel *, GtkTreeIter *,
					 gint, GValue *);
    extern GType gtk_pack_type_get_type(void);
    extern GtkTreePath *gtk_tree_row_reference_get_path(GtkTreeRowReference
							*);
    extern void gtk_file_filter_add_custom(GtkFileFilter *,
					   GtkFileFilterFlags,
					   GtkFileFilterFunc, gpointer,
					   GDestroyNotify);
    extern void gtk_window_move(GtkWindow *, gint, gint);
    extern void gtk_tree_store_set_column_types(GtkTreeStore *, gint,
						GType *);
    extern gboolean gtk_text_buffer_insert_range_interactive(GtkTextBuffer
							     *,
							     GtkTextIter *,
							     const
							     GtkTextIter *,
							     const
							     GtkTextIter *,
							     gboolean);
    extern gboolean gtk_color_selection_palette_from_string(const gchar *,
							    GdkColor * *,
							    gint *);
    extern void gtk_text_buffer_get_iter_at_mark(GtkTextBuffer *,
						 GtkTextIter *,
						 GtkTextMark *);
    extern GType gtk_target_flags_get_type(void);
    extern void gtk_text_view_move_child(GtkTextView *, GtkWidget *, gint,
					 gint);
    extern void gtk_binding_entry_add_signal(GtkBindingSet *, guint,
					     GdkModifierType,
					     const gchar *, guint, ...);
    extern void gtk_text_iter_set_line(GtkTextIter *, gint);
    extern void gtk_text_buffer_set_text(GtkTextBuffer *, const gchar *,
					 gint);
    extern void gtk_window_set_default_icon_name(const gchar *);
    extern const char *gtk_expander_get_label(GtkExpander *);
    extern gpointer gtk_tree_selection_get_user_data(GtkTreeSelection *);
    extern GtkWidget *gtk_button_new_from_stock(const gchar *);
    extern void gtk_text_iter_set_line_index(GtkTextIter *, gint);
    extern GType gtk_radio_action_get_type(void);
    extern GtkAdjustment *gtk_tree_view_get_vadjustment(GtkTreeView *);
    extern void gtk_label_set_line_wrap(GtkLabel *, gboolean);
    extern gchar *gtk_accelerator_get_label(guint, GdkModifierType);
    extern void gtk_socket_add_id(GtkSocket *, GdkNativeWindow);
    extern GtkWidget *gtk_font_selection_new(void);
    extern void gtk_text_iter_order(GtkTextIter *, GtkTextIter *);
    extern GtkWidget *gtk_radio_menu_item_new_from_widget(GtkRadioMenuItem
							  *);
    extern gint gtk_text_iter_get_visible_line_index(const GtkTextIter *);
    extern gboolean gtk_widget_get_child_visible(GtkWidget *);
    extern void gtk_about_dialog_set_documenters(GtkAboutDialog *,
						 const gchar * *);
    extern GtkToolItem *gtk_menu_tool_button_new_from_stock(const gchar *);
    extern void gtk_accel_map_save_fd(gint);
    extern void gtk_tree_sortable_set_default_sort_func(GtkTreeSortable *,
							GtkTreeIterCompareFunc,
							gpointer,
							GtkDestroyNotify);
    extern GType gtk_text_tag_get_type(void);
    extern gboolean gtk_widget_child_focus(GtkWidget *, GtkDirectionType);
    extern void gtk_tree_view_set_drag_dest_row(GtkTreeView *,
						GtkTreePath *,
						GtkTreeViewDropPosition);
    extern void gtk_layout_set_vadjustment(GtkLayout *, GtkAdjustment *);
    extern void gtk_text_view_scroll_to_mark(GtkTextView *, GtkTextMark *,
					     gdouble, gboolean, gdouble,
					     gdouble);
    extern const gchar
	*gtk_about_dialog_get_translator_credits(GtkAboutDialog *);
    extern gboolean gtk_notebook_get_scrollable(GtkNotebook *);
    extern gboolean gtk_text_iter_forward_word_ends(GtkTextIter *, gint);
    extern void gtk_tree_view_column_set_clickable(GtkTreeViewColumn *,
						   gboolean);
    extern void gtk_ui_manager_insert_action_group(GtkUIManager *,
						   GtkActionGroup *, gint);
    extern void gtk_text_iter_free(GtkTextIter *);
    extern GdkPixbuf *gtk_clipboard_wait_for_image(GtkClipboard *);
    extern void gtk_im_multicontext_append_menuitems(GtkIMMulticontext *,
						     GtkMenuShell *);
    extern gint gtk_tree_view_column_get_max_width(GtkTreeViewColumn *);
    extern GdkDisplay *gtk_widget_get_display(GtkWidget *);
    extern void gtk_scrolled_window_add_with_viewport(GtkScrolledWindow *,
						      GtkWidget *);
    extern GType gtk_justification_get_type(void);
    extern void gtk_file_selection_show_fileop_buttons(GtkFileSelection *);
    extern void gtk_widget_set_size_request(GtkWidget *, gint, gint);
    extern const gchar *gtk_about_dialog_get_copyright(GtkAboutDialog *);
    extern void gtk_window_begin_move_drag(GtkWindow *, gint, gint, gint,
					   guint32);
    extern void gtk_range_set_adjustment(GtkRange *, GtkAdjustment *);
    extern gboolean gtk_text_iter_is_cursor_position(const GtkTextIter *);
    extern gboolean gtk_text_iter_ends_sentence(const GtkTextIter *);
    extern gboolean gtk_text_view_forward_display_line(GtkTextView *,
						       GtkTextIter *);
    extern void gtk_item_toggle(GtkItem *);
    extern gint gtk_tree_path_compare(const GtkTreePath *,
				      const GtkTreePath *);
    extern GtkWidget *gtk_paned_get_child1(GtkPaned *);
    extern GType gtk_rc_style_get_type(void);
    extern gint gtk_text_view_get_right_margin(GtkTextView *);
    extern void gtk_paint_extension(GtkStyle *, GdkWindow *, GtkStateType,
				    GtkShadowType, GdkRectangle *,
				    GtkWidget *, gchar *, gint, gint, gint,
				    gint, GtkPositionType);
    extern void gtk_icon_source_set_state_wildcarded(GtkIconSource *,
						     gboolean);
    extern guint16 gtk_color_selection_get_previous_alpha(GtkColorSelection
							  *);
    extern gboolean gtk_file_chooser_set_current_folder(GtkFileChooser *,
							const gchar *);
    extern GdkNativeWindow gtk_plug_get_id(GtkPlug *);
    extern GtkAdjustment *gtk_range_get_adjustment(GtkRange *);
    extern GType gtk_ui_manager_get_type(void);
    extern void
	gtk_color_selection_set_has_opacity_control(GtkColorSelection *,
						    gboolean);
    extern gboolean gtk_drag_check_threshold(GtkWidget *, gint, gint, gint,
					     gint);
    extern GtkWidget *gtk_paned_get_child2(GtkPaned *);
    extern void gtk_icon_view_set_orientation(GtkIconView *,
					      GtkOrientation);
    extern void gtk_font_button_set_use_size(GtkFontButton *, gboolean);
    extern gboolean gtk_file_chooser_add_shortcut_folder(GtkFileChooser *,
							 const char *,
							 GError * *);
    extern void gtk_text_buffer_get_iter_at_child_anchor(GtkTextBuffer *,
							 GtkTextIter *,
							 GtkTextChildAnchor
							 *);
    extern void gtk_stock_add_static(const GtkStockItem *, guint);
    extern GtkStyle *gtk_style_copy(GtkStyle *);
    extern GtkWidget *gtk_file_chooser_button_new_with_dialog(GtkWidget *);
    extern void gtk_tree_store_reorder(GtkTreeStore *, GtkTreeIter *,
				       gint *);
    extern gboolean gtk_window_parse_geometry(GtkWindow *, const gchar *);
    extern void gtk_icon_source_set_direction_wildcarded(GtkIconSource *,
							 gboolean);
    extern void gtk_im_context_reset(GtkIMContext *);
    extern GType gtk_debug_flag_get_type(void);
    extern void gtk_tree_path_free(GtkTreePath *);
    extern GtkRcStyle *gtk_widget_get_modifier_style(GtkWidget *);
    extern void gtk_icon_source_set_direction(GtkIconSource *,
					      GtkTextDirection);
    extern GtkTreeViewColumn *gtk_tree_view_get_column(GtkTreeView *,
						       gint);
    extern GtkWidget *gtk_notebook_new(void);
    extern void gtk_window_unstick(GtkWindow *);
    extern GParamSpec *gtk_widget_class_find_style_property(GtkWidgetClass
							    *,
							    const gchar *);
    extern void gtk_combo_box_set_wrap_width(GtkComboBox *, gint);
    extern void gtk_spin_button_set_increments(GtkSpinButton *, gdouble,
					       gdouble);
    extern GtkAdjustment *gtk_tree_view_get_hadjustment(GtkTreeView *);
    extern void gtk_window_set_icon(GtkWindow *, GdkPixbuf *);
    extern gint gtk_text_view_get_pixels_inside_wrap(GtkTextView *);
    extern void gtk_icon_factory_add(GtkIconFactory *, const gchar *,
				     GtkIconSet *);
    extern void gtk_container_propagate_expose(GtkContainer *, GtkWidget *,
					       GdkEventExpose *);
    extern void gtk_list_store_move_after(GtkListStore *, GtkTreeIter *,
					  GtkTreeIter *);
    extern GtkWidget *gtk_color_selection_new(void);
    extern GtkOrientation gtk_tool_item_get_orientation(GtkToolItem *);
    extern void gtk_text_attributes_ref(GtkTextAttributes *);
    extern void gtk_label_set_use_markup(GtkLabel *, gboolean);
    extern GtkWidget *gtk_message_dialog_new(GtkWindow *, GtkDialogFlags,
					     GtkMessageType,
					     GtkButtonsType, const gchar *,
					     ...);
    extern GType gtk_hseparator_get_type(void);
    extern void gtk_menu_set_active(GtkMenu *, guint);
    extern gboolean gtk_text_buffer_get_modified(GtkTextBuffer *);
    extern void gtk_icon_view_select_path(GtkIconView *, GtkTreePath *);
    extern gboolean gtk_widget_can_activate_accel(GtkWidget *, guint);
    extern void gtk_box_pack_end(GtkBox *, GtkWidget *, gboolean, gboolean,
				 guint);
    extern gboolean gtk_dialog_get_has_separator(GtkDialog *);
    extern void gtk_tree_store_insert(GtkTreeStore *, GtkTreeIter *,
				      GtkTreeIter *, gint);
    extern GType gtk_position_type_get_type(void);
    extern gboolean gtk_file_chooser_remove_shortcut_folder(GtkFileChooser
							    *,
							    const char *,
							    GError * *);
    extern gboolean gtk_text_iter_forward_visible_word_end(GtkTextIter *);
    extern gboolean gtk_tool_item_get_homogeneous(GtkToolItem *);
    extern gboolean gtk_parse_args(int *, char ***);
    extern void gtk_window_set_screen(GtkWindow *, GdkScreen *);
    extern GtkJustification gtk_text_view_get_justification(GtkTextView *);
    extern void gtk_container_remove(GtkContainer *, GtkWidget *);
    extern void gtk_range_set_increments(GtkRange *, gdouble, gdouble);
    extern void gtk_action_group_add_action(GtkActionGroup *, GtkAction *);
    extern void gtk_icon_theme_append_search_path(GtkIconTheme *,
						  const gchar *);
    extern void gtk_widget_destroyed(GtkWidget *, GtkWidget * *);
    extern void gtk_image_set_from_file(GtkImage *, const gchar *);
    extern gint gtk_icon_view_get_pixbuf_column(GtkIconView *);
    extern void gtk_size_group_add_widget(GtkSizeGroup *, GtkWidget *);
    extern gboolean gtk_tree_view_column_get_expand(GtkTreeViewColumn *);
    extern GtkWidget *gtk_menu_new(void);
    extern GType gtk_window_get_type(void);
    extern GType gtk_range_get_type(void);
    extern void gtk_rc_parse_string(const gchar *);
    extern GType gtk_progress_bar_style_get_type(void);
    extern void gtk_container_set_focus_hadjustment(GtkContainer *,
						    GtkAdjustment *);
    extern void gtk_accel_map_foreach(gpointer, GtkAccelMapForeach);
    extern gchar **gtk_file_selection_get_selections(GtkFileSelection *);
    extern gboolean gtk_spin_button_get_wrap(GtkSpinButton *);
    extern GType gtk_dialog_get_type(void);
    extern GType gtk_misc_get_type(void);
    extern void gtk_selection_add_target(GtkWidget *, GdkAtom, GdkAtom,
					 guint);
    extern GtkWidget *gtk_file_chooser_dialog_new(const gchar *,
						  GtkWindow *,
						  GtkFileChooserAction,
						  const gchar *, ...);
    extern void gtk_quit_remove(guint);
    extern GtkSizeGroupMode gtk_size_group_get_mode(GtkSizeGroup *);
    extern void gtk_action_group_set_translation_domain(GtkActionGroup *,
							const gchar *);
    extern void gtk_notebook_remove_page(GtkNotebook *, gint);
    extern const gchar *gtk_font_button_get_title(GtkFontButton *);
    extern void gtk_file_filter_add_pixbuf_formats(GtkFileFilter *);
    extern void gtk_editable_cut_clipboard(GtkEditable *);
    extern void gtk_tree_view_column_set_expand(GtkTreeViewColumn *,
						gboolean);
    extern void gtk_widget_thaw_child_notify(GtkWidget *);
    extern void gtk_label_set_attributes(GtkLabel *, PangoAttrList *);
    extern void gtk_ui_manager_remove_ui(GtkUIManager *, guint);
    extern gboolean gtk_text_iter_forward_chars(GtkTextIter *, gint);
    extern void gtk_entry_set_invisible_char(GtkEntry *, gunichar);
    extern void gtk_text_view_set_border_window_size(GtkTextView *,
						     GtkTextWindowType,
						     gint);
    extern void gtk_notebook_query_tab_label_packing(GtkNotebook *,
						     GtkWidget *,
						     gboolean *,
						     gboolean *,
						     GtkPackType *);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_mnemonic_from_widget(GtkRadioMenuItem
							   *,
							   const gchar *);
    extern GtkWidget *gtk_toggle_button_new_with_label(const gchar *);
    extern GType gtk_buttons_type_get_type(void);
    extern void gtk_text_buffer_apply_tag_by_name(GtkTextBuffer *,
						  const gchar *,
						  const GtkTextIter *,
						  const GtkTextIter *);
    extern void gtk_accel_group_connect(GtkAccelGroup *, guint,
					GdkModifierType, GtkAccelFlags,
					GClosure *);
    extern gchar *gtk_text_iter_get_visible_text(const GtkTextIter *,
						 const GtkTextIter *);
    extern gboolean gtk_stock_lookup(const gchar *, GtkStockItem *);
    extern void gtk_label_set_mnemonic_widget(GtkLabel *, GtkWidget *);
    extern void gtk_tree_view_collapse_all(GtkTreeView *);
    extern void gtk_action_set_accel_group(GtkAction *, GtkAccelGroup *);
    extern void gtk_ui_manager_add_ui(GtkUIManager *, guint, const gchar *,
				      const gchar *, const gchar *,
				      GtkUIManagerItemType, gboolean);
    extern GtkWidget *gtk_check_menu_item_new_with_label(const gchar *);
    extern void gtk_window_set_default_icon(GdkPixbuf *);
    extern gboolean gtk_tree_selection_iter_is_selected(GtkTreeSelection *,
							GtkTreeIter *);
    extern void gtk_scrolled_window_get_policy(GtkScrolledWindow *,
					       GtkPolicyType *,
					       GtkPolicyType *);
    extern void gtk_adjustment_clamp_page(GtkAdjustment *, gdouble,
					  gdouble);
    extern void gtk_about_dialog_set_translator_credits(GtkAboutDialog *,
							const gchar *);
    extern void gtk_menu_item_remove_submenu(GtkMenuItem *);
    extern GtkResizeMode gtk_container_get_resize_mode(GtkContainer *);
    extern GtkWidget *gtk_menu_item_new_with_label(const gchar *);
    extern gboolean gtk_tree_sortable_has_default_sort_func(GtkTreeSortable
							    *);
    extern void gtk_accel_map_foreach_unfiltered(gpointer,
						 GtkAccelMapForeach);
    extern GType gtk_editable_get_type(void);
    extern void gtk_widget_show_now(GtkWidget *);
    extern GtkColorSelectionChangePaletteWithScreenFunc
	gtk_color_selection_set_change_palette_with_screen_hook
	(GtkColorSelectionChangePaletteWithScreenFunc);
    extern void gtk_entry_completion_complete(GtkEntryCompletion *);
    extern gboolean gtk_tree_get_row_drag_data(GtkSelectionData *,
					       GtkTreeModel * *,
					       GtkTreePath * *);
    extern gchar *gtk_rc_get_im_module_file(void);
    extern void gtk_text_view_get_line_at_y(GtkTextView *, GtkTextIter *,
					    gint, gint *);
    extern GtkToolbarStyle gtk_tool_item_get_toolbar_style(GtkToolItem *);
    extern gint gtk_tree_view_column_get_fixed_width(GtkTreeViewColumn *);
    extern const gchar *gtk_icon_source_get_icon_name(const GtkIconSource
						      *);
    extern GtkStyle *gtk_rc_get_style_by_paths(GtkSettings *, const char *,
					       const char *, GType);
    extern gint gtk_text_view_get_left_margin(GtkTextView *);
    extern void gtk_target_list_remove(GtkTargetList *, GdkAtom);
    extern void gtk_stock_add(const GtkStockItem *, guint);
    extern void gtk_progress_bar_pulse(GtkProgressBar *);
    extern void gtk_scale_set_value_pos(GtkScale *, GtkPositionType);
    extern void gtk_label_set_max_width_chars(GtkLabel *, gint);
    extern gint gtk_label_get_width_chars(GtkLabel *);
    extern GtkWidget *gtk_viewport_new(GtkAdjustment *, GtkAdjustment *);
    extern void gtk_tree_store_insert_after(GtkTreeStore *, GtkTreeIter *,
					    GtkTreeIter *, GtkTreeIter *);
    extern GType gtk_font_selection_dialog_get_type(void);
    extern void gtk_accel_map_load_fd(gint);
    extern void gtk_editable_delete_selection(GtkEditable *);
    extern GtkShadowType gtk_viewport_get_shadow_type(GtkViewport *);
    extern GType gtk_color_button_get_type(void);
    extern void gtk_container_set_reallocate_redraws(GtkContainer *,
						     gboolean);
    extern void gtk_menu_shell_select_item(GtkMenuShell *, GtkWidget *);
    extern void gtk_toggle_button_set_mode(GtkToggleButton *, gboolean);
    extern gint *gtk_tree_path_get_indices(GtkTreePath *);
    extern void gtk_target_list_add_image_targets(GtkTargetList *, guint,
						  gboolean);
    extern GtkSelectionMode gtk_tree_selection_get_mode(GtkTreeSelection
							*);
    extern GType gtk_arrow_get_type(void);
    extern gboolean gtk_clipboard_wait_is_image_available(GtkClipboard *);
    extern void gtk_icon_view_set_pixbuf_column(GtkIconView *, gint);
    extern gint gtk_notebook_get_n_pages(GtkNotebook *);
    extern gboolean gtk_text_iter_forward_find_char(GtkTextIter *,
						    GtkTextCharPredicate,
						    gpointer,
						    const GtkTextIter *);
    extern GList *gtk_window_get_icon_list(GtkWindow *);
    extern void gtk_entry_set_width_chars(GtkEntry *, gint);
    extern GtkTreePath *gtk_tree_path_new_first(void);
    extern void gtk_im_context_set_cursor_location(GtkIMContext *,
						   GdkRectangle *);
    extern void gtk_text_view_add_child_in_window(GtkTextView *,
						  GtkWidget *,
						  GtkTextWindowType, gint,
						  gint);
    extern void gtk_tree_view_scroll_to_cell(GtkTreeView *, GtkTreePath *,
					     GtkTreeViewColumn *, gboolean,
					     gfloat, gfloat);
    extern void gtk_editable_set_position(GtkEditable *, gint);
    extern gint gtk_expander_get_spacing(GtkExpander *);
    extern void gtk_widget_add_events(GtkWidget *, gint);
    extern void gtk_tool_item_set_use_drag_window(GtkToolItem *, gboolean);
    extern gint gtk_tree_path_get_depth(GtkTreePath *);
    extern void gtk_spin_button_update(GtkSpinButton *);
    extern gboolean gtk_accel_group_disconnect(GtkAccelGroup *,
					       GClosure *);
    extern void gtk_clipboard_request_contents(GtkClipboard *, GdkAtom,
					       GtkClipboardReceivedFunc,
					       gpointer);
    extern void gtk_tree_view_get_cell_area(GtkTreeView *, GtkTreePath *,
					    GtkTreeViewColumn *,
					    GdkRectangle *);
    extern GType gtk_combo_box_entry_get_type(void);
    extern GtkTextTagTable *gtk_text_buffer_get_tag_table(GtkTextBuffer *);
    extern gboolean gtk_tree_model_get_iter(GtkTreeModel *, GtkTreeIter *,
					    GtkTreePath *);
    extern void gtk_window_remove_accel_group(GtkWindow *,
					      GtkAccelGroup *);
    extern gint gtk_notebook_append_page(GtkNotebook *, GtkWidget *,
					 GtkWidget *);
    extern void gtk_container_set_focus_vadjustment(GtkContainer *,
						    GtkAdjustment *);
    extern void gtk_window_reshow_with_initial_size(GtkWindow *);
    extern void gtk_viewport_set_hadjustment(GtkViewport *,
					     GtkAdjustment *);
    extern gboolean gtk_text_iter_backward_to_tag_toggle(GtkTextIter *,
							 GtkTextTag *);
    extern void gtk_entry_completion_insert_action_text(GtkEntryCompletion
							*, gint,
							const gchar *);
    extern void gtk_editable_copy_clipboard(GtkEditable *);
    extern GtkTextMark *gtk_text_buffer_create_mark(GtkTextBuffer *,
						    const gchar *,
						    const GtkTextIter *,
						    gboolean);
    extern GType gtk_scroll_type_get_type(void);
    extern void gtk_ui_manager_set_add_tearoffs(GtkUIManager *, gboolean);
    extern void gtk_paint_flat_box(GtkStyle *, GdkWindow *, GtkStateType,
				   GtkShadowType, GdkRectangle *,
				   GtkWidget *, const gchar *, gint, gint,
				   gint, gint);
    extern void gtk_tree_view_get_cursor(GtkTreeView *, GtkTreePath * *,
					 GtkTreeViewColumn * *);
    extern GtkWidget *gtk_label_new(const gchar *);
    extern void gtk_widget_remove_mnemonic_label(GtkWidget *, GtkWidget *);
    extern GType gtk_size_group_get_type(void);
    extern void gtk_text_buffer_insert_child_anchor(GtkTextBuffer *,
						    GtkTextIter *,
						    GtkTextChildAnchor *);
    extern void gtk_text_iter_forward_to_end(GtkTextIter *);
    extern void gtk_tree_view_column_set_sort_indicator(GtkTreeViewColumn
							*, gboolean);
    extern void gtk_widget_destroy(GtkWidget *);
    extern void gtk_widget_class_install_style_property(GtkWidgetClass *,
							GParamSpec *);
    extern GType gtk_icon_factory_get_type(void);
    extern gboolean gtk_text_buffer_get_selection_bounds(GtkTextBuffer *,
							 GtkTextIter *,
							 GtkTextIter *);
    extern void gtk_widget_set_composite_name(GtkWidget *, const gchar *);
    extern GtkWidget *gtk_vseparator_new(void);
    extern GtkFileFilterFlags gtk_file_filter_get_needed(GtkFileFilter *);
    extern gint gtk_entry_get_width_chars(GtkEntry *);
    extern GtkWidget *gtk_get_event_widget(GdkEvent *);
    extern void gtk_tree_view_column_set_title(GtkTreeViewColumn *,
					       const gchar *);
    extern gboolean gtk_text_iter_toggles_tag(const GtkTextIter *,
					      GtkTextTag *);
    extern void gtk_icon_factory_add_default(GtkIconFactory *);
    extern void gtk_about_dialog_set_authors(GtkAboutDialog *,
					     const gchar * *);
    extern void gtk_expander_set_expanded(GtkExpander *, gboolean);
    extern void gtk_container_foreach(GtkContainer *, GtkCallback,
				      gpointer);
    extern void gtk_notebook_popup_enable(GtkNotebook *);
    extern void gtk_widget_set_child_visible(GtkWidget *, gboolean);
    extern GtkPositionType gtk_scale_get_value_pos(GtkScale *);
    extern void gtk_target_list_unref(GtkTargetList *);
    extern GType gtk_rc_flags_get_type(void);
    extern void gtk_dialog_set_response_sensitive(GtkDialog *, gint,
						  gboolean);
    extern void gtk_paint_slider(GtkStyle *, GdkWindow *, GtkStateType,
				 GtkShadowType, GdkRectangle *,
				 GtkWidget *, const gchar *, gint, gint,
				 gint, gint, GtkOrientation);
    extern void gtk_notebook_set_tab_label(GtkNotebook *, GtkWidget *,
					   GtkWidget *);
    extern void gtk_list_store_set_valist(GtkListStore *, GtkTreeIter *,
					  va_list);
    extern void gtk_widget_grab_default(GtkWidget *);
    extern gboolean gtk_table_get_homogeneous(GtkTable *);
    extern GtkWidget *gtk_layout_new(GtkAdjustment *, GtkAdjustment *);
    extern void gtk_accel_label_set_accel_closure(GtkAccelLabel *,
						  GClosure *);
    extern void gtk_tree_view_map_expanded_rows(GtkTreeView *,
						GtkTreeViewMappingFunc,
						gpointer);
    extern void gtk_tree_model_filter_set_visible_func(GtkTreeModelFilter
						       *,
						       GtkTreeModelFilterVisibleFunc,
						       gpointer,
						       GtkDestroyNotify);
    extern void gtk_tree_view_set_model(GtkTreeView *, GtkTreeModel *);
    extern gboolean gtk_icon_source_get_state_wildcarded(const
							 GtkIconSource *);
    extern void gtk_icon_theme_add_builtin_icon(const gchar *, gint,
						GdkPixbuf *);
    extern GtkWidget *gtk_socket_new(void);
    extern GtkWidget *gtk_drawing_area_new(void);
    extern void gtk_selection_data_set(GtkSelectionData *, GdkAtom, gint,
				       const guchar *, gint);
    extern gboolean gtk_text_iter_backward_cursor_position(GtkTextIter *);
    extern PangoContext *gtk_widget_create_pango_context(GtkWidget *);
    extern void gtk_cell_view_set_model(GtkCellView *, GtkTreeModel *);
    extern gboolean gtk_clipboard_wait_is_target_available(GtkClipboard *,
							   GdkAtom);
    extern gboolean gtk_window_get_modal(GtkWindow *);
    extern void gtk_tree_view_column_clicked(GtkTreeViewColumn *);
    extern void gtk_menu_set_monitor(GtkMenu *, gint);
    extern gboolean gtk_text_iter_forward_sentence_end(GtkTextIter *);
    extern gboolean gtk_button_box_get_child_secondary(GtkButtonBox *,
						       GtkWidget *);
    extern GtkObject *gtk_adjustment_new(gdouble, gdouble, gdouble,
					 gdouble, gdouble, gdouble);
    extern GtkWidget *gtk_cell_view_new(void);
    extern gboolean gtk_combo_box_get_add_tearoffs(GtkComboBox *);
    extern gboolean gtk_text_iter_forward_cursor_positions(GtkTextIter *,
							   gint);
    extern void gtk_window_set_type_hint(GtkWindow *, GdkWindowTypeHint);
    extern void gtk_dialog_set_has_separator(GtkDialog *, gboolean);
    extern GtkWidget *gtk_fixed_new(void);
    extern void gtk_tree_view_enable_model_drag_source(GtkTreeView *,
						       GdkModifierType,
						       const GtkTargetEntry
						       *, gint,
						       GdkDragAction);
    extern void gtk_button_set_label(GtkButton *, const gchar *);
    extern void gtk_text_view_scroll_mark_onscreen(GtkTextView *,
						   GtkTextMark *);
    extern gchar *gtk_tree_model_get_string_from_iter(GtkTreeModel *,
						      GtkTreeIter *);
    extern void gtk_viewport_set_vadjustment(GtkViewport *,
					     GtkAdjustment *);
    extern GtkIconSize gtk_icon_source_get_size(const GtkIconSource *);
    extern void gtk_init_add(GtkFunction, gpointer);
    extern GtkOrientation gtk_icon_view_get_orientation(GtkIconView *);
    extern gint gtk_icon_view_get_markup_column(GtkIconView *);
    extern void gtk_scrolled_window_set_vadjustment(GtkScrolledWindow *,
						    GtkAdjustment *);
    extern void gtk_icon_view_set_model(GtkIconView *, GtkTreeModel *);
    extern void gtk_widget_set_state(GtkWidget *, GtkStateType);
    extern void gtk_event_box_set_above_child(GtkEventBox *, gboolean);
    extern gboolean gtk_tree_path_prev(GtkTreePath *);
    extern GType gtk_tree_view_get_type(void);
    extern void gtk_action_connect_proxy(GtkAction *, GtkWidget *);
    extern gboolean gtk_tree_view_get_dest_row_at_pos(GtkTreeView *, gint,
						      gint,
						      GtkTreePath * *,
						      GtkTreeViewDropPosition
						      *);
    extern void gtk_tree_view_column_set_max_width(GtkTreeViewColumn *,
						   gint);
    extern GtkTreeViewColumn *gtk_tree_view_column_new(void);
    extern void gtk_tree_view_column_clear(GtkTreeViewColumn *);
    extern void gtk_menu_tool_button_set_arrow_tooltip(GtkMenuToolButton *,
						       GtkTooltips *,
						       const gchar *,
						       const gchar *);
    extern GtkSettings *gtk_settings_get_default(void);
    extern gboolean gtk_text_iter_backward_search(const GtkTextIter *,
						  const gchar *,
						  GtkTextSearchFlags,
						  GtkTextIter *,
						  GtkTextIter *,
						  const GtkTextIter *);
    extern void gtk_object_destroy(GtkObject *);
    extern gchar *gtk_text_buffer_get_slice(GtkTextBuffer *,
					    const GtkTextIter *,
					    const GtkTextIter *, gboolean);
    extern gboolean gtk_text_iter_backward_char(GtkTextIter *);
    extern void gtk_tree_view_column_set_spacing(GtkTreeViewColumn *,
						 gint);
    extern gboolean gtk_action_get_sensitive(GtkAction *);
    extern gboolean gtk_tree_view_collapse_row(GtkTreeView *,
					       GtkTreePath *);
    extern void gtk_color_selection_set_previous_color(GtkColorSelection *,
						       const GdkColor *);
    extern gboolean gtk_label_get_selectable(GtkLabel *);
    extern const gchar *gtk_file_filter_get_name(GtkFileFilter *);
    extern gboolean gtk_font_button_get_show_size(GtkFontButton *);
    extern void gtk_radio_action_set_group(GtkRadioAction *, GSList *);
    extern GtkWidget *gtk_hscale_new_with_range(gdouble, gdouble, gdouble);
    extern GtkWidget *gtk_check_menu_item_new_with_mnemonic(const gchar *);
    extern GType gtk_path_type_get_type(void);
    extern gboolean gtk_accel_label_refetch(GtkAccelLabel *);
    extern gboolean gtk_im_context_get_surrounding(GtkIMContext *,
						   gchar * *, gint *);
    extern void gtk_text_buffer_insert(GtkTextBuffer *, GtkTextIter *,
				       const gchar *, gint);
    extern GtkWidget *gtk_toggle_button_new_with_mnemonic(const gchar *);
    extern void gtk_tree_selection_select_path(GtkTreeSelection *,
					       GtkTreePath *);
    extern guint gtk_accelerator_get_default_mod_mask(void);
    extern GtkWidget *gtk_notebook_get_tab_label(GtkNotebook *,
						 GtkWidget *);
    extern gboolean gtk_text_iter_inside_word(const GtkTextIter *);
    extern void gtk_box_query_child_packing(GtkBox *, GtkWidget *,
					    gboolean *, gboolean *,
					    guint *, GtkPackType *);
    extern void gtk_rc_add_default_file(const gchar *);
    extern void gtk_spin_button_set_value(GtkSpinButton *, gdouble);
    extern gboolean gtk_window_get_has_frame(GtkWindow *);
    extern void gtk_color_button_set_title(GtkColorButton *,
					   const gchar *);
    extern void gtk_text_buffer_copy_clipboard(GtkTextBuffer *,
					       GtkClipboard *);
    extern void gtk_widget_realize(GtkWidget *);
    extern GType gtk_im_status_style_get_type(void);
    extern void gtk_icon_view_item_activated(GtkIconView *, GtkTreePath *);
    extern gint gtk_scale_get_digits(GtkScale *);
    extern GtkTreeModel *gtk_tree_view_get_model(GtkTreeView *);
    extern guint gtk_quit_add(guint, GtkFunction, gpointer);
    extern void gtk_tool_button_set_use_underline(GtkToolButton *,
						  gboolean);
    extern gboolean gtk_window_activate_key(GtkWindow *, GdkEventKey *);
    extern GtkWidget *gtk_drag_get_source_widget(GdkDragContext *);
    extern guint gtk_statusbar_get_context_id(GtkStatusbar *,
					      const gchar *);
    extern gboolean gtk_file_chooser_get_use_preview_label(GtkFileChooser
							   *);
    extern void gtk_icon_set_unref(GtkIconSet *);
    extern void gtk_tree_store_insert_before(GtkTreeStore *, GtkTreeIter *,
					     GtkTreeIter *, GtkTreeIter *);
    extern void gtk_button_box_set_layout(GtkButtonBox *,
					  GtkButtonBoxStyle);
    extern void gtk_label_set_pattern(GtkLabel *, const gchar *);
    extern GType gtk_toggle_tool_button_get_type(void);
    extern GtkWidget *gtk_tree_view_column_get_widget(GtkTreeViewColumn *);
    extern GtkWidget *gtk_radio_button_new_with_mnemonic(GSList *,
							 const gchar *);
    extern void gtk_clipboard_clear(GtkClipboard *);
    extern void gtk_misc_get_alignment(GtkMisc *, gfloat *, gfloat *);
    extern void gtk_tree_store_set_value(GtkTreeStore *, GtkTreeIter *,
					 gint, GValue *);
    extern GType gtk_font_selection_get_type(void);
    extern GParamSpec
	**gtk_container_class_list_child_properties(GObjectClass *,
						    guint *);
    extern void gtk_tree_model_row_has_child_toggled(GtkTreeModel *,
						     GtkTreePath *,
						     GtkTreeIter *);
    extern GType gtk_vbox_get_type(void);
    extern void gtk_drag_set_icon_pixbuf(GdkDragContext *, GdkPixbuf *,
					 gint, gint);
    extern void gtk_text_view_set_overwrite(GtkTextView *, gboolean);
    extern void gtk_combo_box_set_row_separator_func(GtkComboBox *,
						     GtkTreeViewRowSeparatorFunc,
						     gpointer,
						     GtkDestroyNotify);
    extern GType gtk_cell_renderer_progress_get_type(void);
    extern gboolean gtk_fixed_get_has_window(GtkFixed *);
    extern gboolean gtk_editable_get_selection_bounds(GtkEditable *,
						      gint *, gint *);
    extern gboolean gtk_icon_theme_rescan_if_needed(GtkIconTheme *);
    extern void gtk_accel_map_add_entry(const gchar *, guint,
					GdkModifierType);
    extern void gtk_text_iter_set_line_offset(GtkTextIter *, gint);
    extern void gtk_icon_source_set_size(GtkIconSource *, GtkIconSize);
    extern gboolean gtk_window_has_toplevel_focus(GtkWindow *);
    extern void gtk_menu_item_deselect(GtkMenuItem *);
    extern void gtk_accel_label_set_accel_widget(GtkAccelLabel *,
						 GtkWidget *);
    extern gboolean gtk_main_iteration_do(gboolean);
    extern GtkIconTheme *gtk_icon_theme_get_default(void);
    extern void gtk_drag_dest_set(GtkWidget *, GtkDestDefaults,
				  const GtkTargetEntry *, gint,
				  GdkDragAction);
    extern gchar *gtk_rc_find_pixmap_in_path(GtkSettings *, GScanner *,
					     const gchar *);
    extern void gtk_style_apply_default_background(GtkStyle *, GdkWindow *,
						   gboolean, GtkStateType,
						   GdkRectangle *, gint,
						   gint, gint, gint);
    extern GType gtk_file_chooser_dialog_get_type(void);
    extern gboolean gtk_tree_model_iter_parent(GtkTreeModel *,
					       GtkTreeIter *,
					       GtkTreeIter *);
    extern GtkWidget *gtk_vscale_new(GtkAdjustment *);
    extern GtkWidget *gtk_spin_button_new_with_range(gdouble, gdouble,
						     gdouble);
    extern GtkWidget *gtk_image_new(void);
    extern GtkIMContext *gtk_im_multicontext_new(void);
    extern void gtk_tree_view_column_set_sizing(GtkTreeViewColumn *,
						GtkTreeViewColumnSizing);
    extern GtkWidget *gtk_radio_button_new_with_label(GSList *,
						      const gchar *);
    extern GtkTreePath *gtk_icon_view_get_path_at_pos(GtkIconView *, gint,
						      gint);
    extern gboolean gtk_tree_view_column_get_clickable(GtkTreeViewColumn
						       *);
    extern void gtk_editable_insert_text(GtkEditable *, const gchar *,
					 gint, gint *);
    extern guint gtk_key_snooper_install(GtkKeySnoopFunc, gpointer);
    extern void gtk_object_sink(GtkObject *);
    extern void gtk_widget_style_get(GtkWidget *, const gchar *, ...);
    extern GList *gtk_icon_theme_list_icons(GtkIconTheme *, const char *);
    extern void gtk_cell_renderer_get_fixed_size(GtkCellRenderer *, gint *,
						 gint *);
    extern void gtk_button_released(GtkButton *);
    extern void gtk_icon_source_set_size_wildcarded(GtkIconSource *,
						    gboolean);
    extern void gtk_window_begin_resize_drag(GtkWindow *, GdkWindowEdge,
					     gint, gint, gint, guint32);
    extern gboolean gtk_text_iter_forward_to_tag_toggle(GtkTextIter *,
							GtkTextTag *);
    extern gboolean gtk_tree_selection_path_is_selected(GtkTreeSelection *,
							GtkTreePath *);
    extern void gtk_window_set_wmclass(GtkWindow *, const gchar *,
				       const gchar *);
    extern GtkWidget *gtk_action_create_icon(GtkAction *, GtkIconSize);
    extern gboolean gtk_text_iter_backward_line(GtkTextIter *);
    extern gchar
	*gtk_font_selection_dialog_get_font_name(GtkFontSelectionDialog *);
    extern GType gtk_cell_renderer_toggle_get_type(void);
    extern void gtk_tree_model_rows_reordered(GtkTreeModel *,
					      GtkTreePath *, GtkTreeIter *,
					      gint *);
    extern PangoLayout *gtk_label_get_layout(GtkLabel *);
    extern gboolean gtk_tree_view_get_path_at_pos(GtkTreeView *, gint,
						  gint, GtkTreePath * *,
						  GtkTreeViewColumn * *,
						  gint *, gint *);
    extern gboolean gtk_combo_box_get_active_iter(GtkComboBox *,
						  GtkTreeIter *);
    extern gboolean gtk_label_get_line_wrap(GtkLabel *);
    extern gboolean gtk_window_activate_focus(GtkWindow *);
    extern void gtk_table_set_row_spacing(GtkTable *, guint, guint);
    extern void gtk_widget_ensure_style(GtkWidget *);
    extern GType gtk_selection_mode_get_type(void);
    extern gboolean gtk_window_activate_default(GtkWindow *);
    extern GtkAboutDialogActivateLinkFunc
	gtk_about_dialog_set_url_hook(GtkAboutDialogActivateLinkFunc,
				      gpointer, GDestroyNotify);
    extern gboolean gtk_check_menu_item_get_inconsistent(GtkCheckMenuItem
							 *);
    extern gchar *gtk_set_locale(void);
    extern void gtk_icon_theme_set_screen(GtkIconTheme *, GdkScreen *);
    extern gint gtk_editable_get_position(GtkEditable *);
    extern void gtk_icon_theme_set_search_path(GtkIconTheme *,
					       const gchar * *, gint);
    extern void gtk_text_view_set_justification(GtkTextView *,
						GtkJustification);
    extern GdkPixbuf *gtk_selection_data_get_pixbuf(GtkSelectionData *);
    extern void gtk_spin_button_spin(GtkSpinButton *, GtkSpinType,
				     gdouble);
    extern gint gtk_notebook_append_page_menu(GtkNotebook *, GtkWidget *,
					      GtkWidget *, GtkWidget *);
    extern gboolean gtk_text_view_move_mark_onscreen(GtkTextView *,
						     GtkTextMark *);
    extern void gtk_widget_set_sensitive(GtkWidget *, gboolean);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_path_to_child_path(GtkTreeModelSort *,
							GtkTreePath *);
    extern void gtk_drag_set_icon_pixmap(GdkDragContext *, GdkColormap *,
					 GdkPixmap *, GdkBitmap *, gint,
					 gint);
    extern gboolean gtk_text_child_anchor_get_deleted(GtkTextChildAnchor
						      *);
    extern gboolean gtk_tree_view_expand_row(GtkTreeView *, GtkTreePath *,
					     gboolean);
    extern GtkWidget *gtk_expander_get_label_widget(GtkExpander *);
    extern void gtk_range_set_update_policy(GtkRange *, GtkUpdateType);
    extern void gtk_curve_set_curve_type(GtkCurve *, GtkCurveType);
    extern void gtk_handle_box_set_shadow_type(GtkHandleBox *,
					       GtkShadowType);
    extern gboolean gtk_tool_item_get_expand(GtkToolItem *);
    extern GtkWidget *gtk_window_new(GtkWindowType);
    extern GType gtk_list_store_get_type(void);
    extern GtkWidget *gtk_cell_view_new_with_markup(const gchar *);
    extern void gtk_fixed_set_has_window(GtkFixed *, gboolean);
    extern void gtk_cell_view_set_displayed_row(GtkCellView *,
						GtkTreePath *);
    extern void gtk_button_set_use_underline(GtkButton *, gboolean);
    extern GtkWindow *gtk_window_get_transient_for(GtkWindow *);
    extern GtkTreeIter *gtk_tree_iter_copy(GtkTreeIter *);
    extern void gtk_file_chooser_set_current_name(GtkFileChooser *,
						  const gchar *);
    extern void gtk_window_set_decorated(GtkWindow *, gboolean);
    extern const guint gtk_interface_age;
    extern void gtk_menu_shell_deselect(GtkMenuShell *);
    extern gboolean gtk_text_iter_backward_cursor_positions(GtkTextIter *,
							    gint);
    extern gboolean gtk_text_iter_can_insert(const GtkTextIter *,
					     gboolean);
    extern gboolean gtk_widget_is_ancestor(GtkWidget *, GtkWidget *);
    extern GType gtk_check_menu_item_get_type(void);
    extern gboolean gtk_tree_path_up(GtkTreePath *);
    extern void gtk_dialog_response(GtkDialog *, gint);
    extern GdkWindowTypeHint gtk_window_get_type_hint(GtkWindow *);
    extern void gtk_widget_queue_resize_no_redraw(GtkWidget *);
    extern GtkWidget *gtk_frame_new(const gchar *);
    extern void gtk_tree_view_column_set_reorderable(GtkTreeViewColumn *,
						     gboolean);
    extern GtkCellRenderer *gtk_cell_renderer_progress_new(void);
    extern void gtk_widget_grab_focus(GtkWidget *);
    extern void gtk_target_list_ref(GtkTargetList *);
    extern PangoTabArray *gtk_text_view_get_tabs(GtkTextView *);
    extern void gtk_icon_info_set_raw_coordinates(GtkIconInfo *, gboolean);
    extern void gtk_window_present(GtkWindow *);
    extern GType gtk_button_box_style_get_type(void);
    extern void gtk_image_get_icon_set(GtkImage *, GtkIconSet * *,
				       GtkIconSize *);
    extern PangoLanguage *gtk_get_default_language(void);
    extern gchar **gtk_selection_data_get_uris(GtkSelectionData *);
    extern gdouble gtk_progress_bar_get_fraction(GtkProgressBar *);
    extern GType gtk_radio_tool_button_get_type(void);
    extern gboolean gtk_toggle_action_get_active(GtkToggleAction *);
    extern const guint gtk_major_version;
    extern GType gtk_signal_run_type_get_type(void);
    extern void gtk_rc_reset_styles(GtkSettings *);
    extern void gtk_tree_view_set_search_column(GtkTreeView *, gint);
    extern void gtk_widget_modify_fg(GtkWidget *, GtkStateType,
				     const GdkColor *);
    extern void gtk_icon_size_register_alias(const gchar *, GtkIconSize);
    extern void gtk_text_view_window_to_buffer_coords(GtkTextView *,
						      GtkTextWindowType,
						      gint, gint, gint *,
						      gint *);
    extern void gtk_cell_renderer_render(GtkCellRenderer *, GdkWindow *,
					 GtkWidget *, GdkRectangle *,
					 GdkRectangle *, GdkRectangle *,
					 GtkCellRendererState);
    extern gboolean gtk_calendar_mark_day(GtkCalendar *, guint);
    extern const gchar *gtk_window_get_icon_name(GtkWindow *);
    extern void gtk_menu_attach(GtkMenu *, GtkWidget *, guint, guint,
				guint, guint);
    extern const gchar *gtk_about_dialog_get_name(GtkAboutDialog *);
    extern gint gtk_tree_selection_count_selected_rows(GtkTreeSelection *);
    extern GtkAccelGroup *gtk_ui_manager_get_accel_group(GtkUIManager *);
    extern void gtk_tree_view_column_focus_cell(GtkTreeViewColumn *,
						GtkCellRenderer *);
    extern gboolean gtk_window_get_resizable(GtkWindow *);
    extern void gtk_label_set_angle(GtkLabel *, gdouble);
    extern void gtk_tree_view_column_set_alignment(GtkTreeViewColumn *,
						   gfloat);
    extern void gtk_drag_unhighlight(GtkWidget *);
    extern guint gtk_debug_flags;
    extern GType gtk_tree_view_mode_get_type(void);
    extern void gtk_notebook_set_tab_label_packing(GtkNotebook *,
						   GtkWidget *, gboolean,
						   gboolean, GtkPackType);
    extern GType gtk_tree_drag_source_get_type(void);
    extern gchar *gtk_check_version(guint, guint, guint);
    extern gboolean gtk_text_iter_backward_word_start(GtkTextIter *);
    extern void gtk_toggle_action_set_draw_as_radio(GtkToggleAction *,
						    gboolean);
    extern GtkRcStyle *gtk_rc_style_new(void);
    extern gint gtk_toolbar_get_item_index(GtkToolbar *, GtkToolItem *);
    extern GtkWidget *gtk_file_chooser_get_extra_widget(GtkFileChooser *);
    extern gboolean gtk_font_button_get_use_size(GtkFontButton *);
    extern gboolean gtk_false(void);
    extern void gtk_accel_map_unlock_path(const gchar *);
    extern GtkShadowType
	gtk_scrolled_window_get_shadow_type(GtkScrolledWindow *);
    extern void gtk_tree_view_column_set_visible(GtkTreeViewColumn *,
						 gboolean);
    extern GtkAction *gtk_ui_manager_get_action(GtkUIManager *,
						const gchar *);
    extern gboolean gtk_rc_property_parse_flags(const GParamSpec *,
						const GString *, GValue *);
    extern void gtk_icon_theme_prepend_search_path(GtkIconTheme *,
						   const gchar *);
    extern gint gtk_radio_action_get_current_value(GtkRadioAction *);
    extern void gtk_file_selection_set_filename(GtkFileSelection *,
						const gchar *);
    extern void gtk_im_context_set_surrounding(GtkIMContext *,
					       const gchar *, gint, gint);
    extern void gtk_drag_dest_add_text_targets(GtkWidget *);
    extern void gtk_image_set_from_pixmap(GtkImage *, GdkPixmap *,
					  GdkBitmap *);
    extern void gtk_icon_view_unselect_path(GtkIconView *, GtkTreePath *);
    extern GSList *gtk_stock_list_ids(void);
    extern void gtk_file_chooser_remove_filter(GtkFileChooser *,
					       GtkFileFilter *);
    extern GtkListStore *gtk_list_store_newv(gint, GType *);
    extern GtkTextTag *gtk_text_tag_table_lookup(GtkTextTagTable *,
						 const gchar *);
    extern void gtk_window_set_skip_pager_hint(GtkWindow *, gboolean);
    extern gboolean gtk_button_get_focus_on_click(GtkButton *);
    extern void gtk_file_selection_hide_fileop_buttons(GtkFileSelection *);
    extern void gtk_radio_menu_item_set_group(GtkRadioMenuItem *,
					      GSList *);
    extern void gtk_color_button_set_use_alpha(GtkColorButton *, gboolean);
    extern void gtk_widget_pop_colormap(void);
    extern void gtk_widget_set_no_show_all(GtkWidget *, gboolean);
    extern GtkSettings *gtk_settings_get_for_screen(GdkScreen *);
    extern void gtk_font_selection_set_preview_text(GtkFontSelection *,
						    const gchar *);
    extern GtkSelectionData *gtk_clipboard_wait_for_contents(GtkClipboard
							     *, GdkAtom);
    extern GType gtk_spin_type_get_type(void);
    extern GType gtk_movement_step_get_type(void);
    extern GType gtk_icon_source_get_type(void);
    extern void gtk_window_set_skip_taskbar_hint(GtkWindow *, gboolean);
    extern gint gtk_tree_view_column_get_width(GtkTreeViewColumn *);
    extern GType gtk_invisible_get_type(void);
    extern void gtk_cell_renderer_toggle_set_active(GtkCellRendererToggle
						    *, gboolean);
    extern void gtk_menu_item_set_right_justified(GtkMenuItem *, gboolean);
    extern GType gtk_widget_flags_get_type(void);
    extern void gtk_action_connect_accelerator(GtkAction *);
    extern GtkWidget *gtk_image_new_from_pixbuf(GdkPixbuf *);
    extern gint gtk_icon_view_get_columns(GtkIconView *);
    extern void gtk_menu_set_tearoff_state(GtkMenu *, gboolean);
    extern void gtk_progress_bar_set_ellipsize(GtkProgressBar *,
					       PangoEllipsizeMode);
    extern void gtk_image_set_from_pixbuf(GtkImage *, GdkPixbuf *);
    extern gboolean gtk_text_view_get_cursor_visible(GtkTextView *);
    extern void gtk_image_set_from_stock(GtkImage *, const gchar *,
					 GtkIconSize);
    extern GType gtk_event_box_get_type(void);
    extern void gtk_icon_source_free(GtkIconSource *);
    extern void gtk_menu_attach_to_widget(GtkMenu *, GtkWidget *,
					  GtkMenuDetachFunc);
    extern void gtk_menu_reposition(GtkMenu *);
    extern GtkTreeSelection *gtk_tree_view_get_selection(GtkTreeView *);
    extern void gtk_button_clicked(GtkButton *);
    extern GType gtk_file_chooser_error_get_type(void);
    extern void gtk_list_store_swap(GtkListStore *, GtkTreeIter *,
				    GtkTreeIter *);
    extern void gtk_tree_model_get(GtkTreeModel *, GtkTreeIter *, ...);
    extern GtkWidget *gtk_ui_manager_get_widget(GtkUIManager *,
						const gchar *);
    extern GtkIconSize gtk_icon_size_register(const gchar *, gint, gint);
    extern gboolean gtk_text_view_get_accepts_tab(GtkTextView *);
    extern GtkWidget *gtk_radio_button_new_from_widget(GtkRadioButton *);
    extern char *gtk_file_chooser_get_preview_filename(GtkFileChooser *);
    extern void gtk_invisible_set_screen(GtkInvisible *, GdkScreen *);
    extern GdkDisplay *gtk_clipboard_get_display(GtkClipboard *);
    extern GType gtk_statusbar_get_type(void);
    extern GtkWidget *gtk_font_button_new(void);
    extern GType gtk_tearoff_menu_item_get_type(void);
    extern const gchar *gtk_icon_size_get_name(GtkIconSize);
    extern GSList
	*gtk_file_chooser_list_shortcut_folder_uris(GtkFileChooser *);
    extern GType gtk_tree_row_reference_get_type(void);
    extern gfloat gtk_tree_view_column_get_alignment(GtkTreeViewColumn *);
    extern gboolean gtk_file_chooser_add_shortcut_folder_uri(GtkFileChooser
							     *,
							     const char *,
							     GError * *);
    extern GtkWidget *gtk_window_get_focus(GtkWindow *);
    extern GtkWidget *gtk_label_new_with_mnemonic(const gchar *);
    extern gboolean gtk_entry_get_activates_default(GtkEntry *);
    extern void gtk_layout_set_hadjustment(GtkLayout *, GtkAdjustment *);
    extern gint gtk_text_buffer_get_line_count(GtkTextBuffer *);
    extern GType gtk_button_get_type(void);
    extern void gtk_table_set_row_spacings(GtkTable *, guint);
    extern GtkWidget *gtk_statusbar_new(void);
    extern GtkCellRenderer *gtk_cell_renderer_toggle_new(void);
    extern void gtk_widget_modify_style(GtkWidget *, GtkRcStyle *);
    extern GdkPixbuf *gtk_widget_render_icon(GtkWidget *, const gchar *,
					     GtkIconSize, const gchar *);
    extern void gtk_accel_map_add_filter(const gchar *);
    extern void gtk_window_set_position(GtkWindow *, GtkWindowPosition);
    extern void gtk_text_tag_table_foreach(GtkTextTagTable *,
					   GtkTextTagTableForeach,
					   gpointer);
    extern GtkIconSet *gtk_icon_set_new_from_pixbuf(GdkPixbuf *);
    extern GtkWidget *gtk_hruler_new(void);
    extern gboolean gtk_expander_get_expanded(GtkExpander *);
    extern void gtk_editable_delete_text(GtkEditable *, gint, gint);
    extern void gtk_paint_shadow(GtkStyle *, GdkWindow *, GtkStateType,
				 GtkShadowType, GdkRectangle *,
				 GtkWidget *, const gchar *, gint, gint,
				 gint, gint);
    extern GdkPixbuf *gtk_icon_theme_load_icon(GtkIconTheme *,
					       const gchar *, gint,
					       GtkIconLookupFlags,
					       GError * *);
    extern void gtk_window_maximize(GtkWindow *);
    extern GtkWidget *gtk_bin_get_child(GtkBin *);
    extern void gtk_notebook_set_menu_label_text(GtkNotebook *,
						 GtkWidget *,
						 const gchar *);
    extern GtkStockItem *gtk_stock_item_copy(const GtkStockItem *);
    extern void gtk_tool_item_rebuild_menu(GtkToolItem *);
    extern void gtk_style_set_background(GtkStyle *, GdkWindow *,
					 GtkStateType);
    extern gboolean gtk_text_iter_starts_line(const GtkTextIter *);
    extern gboolean gtk_tree_model_sort_iter_is_valid(GtkTreeModelSort *,
						      GtkTreeIter *);
    extern void gtk_clipboard_set_image(GtkClipboard *, GdkPixbuf *);
    extern gboolean gtk_selection_owner_set_for_display(GdkDisplay *,
							GtkWidget *,
							GdkAtom, guint32);
    extern void gtk_tree_view_column_pack_start(GtkTreeViewColumn *,
						GtkCellRenderer *,
						gboolean);
    extern gboolean gtk_text_iter_in_range(const GtkTextIter *,
					   const GtkTextIter *,
					   const GtkTextIter *);
    extern const gchar *gtk_about_dialog_get_comments(GtkAboutDialog *);
    extern GtkWidget *gtk_file_chooser_button_new_with_backend(const gchar
							       *,
							       GtkFileChooserAction,
							       const gchar
							       *);
    extern GtkWidget *gtk_widget_new(GType, const gchar *, ...);
    extern GtkWidget *gtk_combo_box_entry_new_text(void);
    extern GType gtk_resize_mode_get_type(void);
    extern void gtk_entry_completion_set_match_func(GtkEntryCompletion *,
						    GtkEntryCompletionMatchFunc,
						    gpointer,
						    GDestroyNotify);
    extern void gtk_spin_button_get_increments(GtkSpinButton *, gdouble *,
					       gdouble *);
    extern void gtk_font_button_set_use_font(GtkFontButton *, gboolean);
    extern GdkColormap *gtk_widget_get_colormap(GtkWidget *);
    extern GtkToolItem *gtk_radio_tool_button_new(GSList *);
    extern void gtk_color_selection_set_current_alpha(GtkColorSelection *,
						      guint16);
    extern gchar **gtk_rc_get_default_files(void);
    extern void gtk_editable_paste_clipboard(GtkEditable *);
    extern void gtk_accel_map_load(const gchar *);
    extern GtkTooltips *gtk_tooltips_new(void);
    extern GtkWidget *gtk_image_new_from_file(const gchar *);
    extern gint gtk_icon_view_get_spacing(GtkIconView *);
    extern GtkWidget *gtk_vbutton_box_new(void);
    extern void gtk_widget_freeze_child_notify(GtkWidget *);
    extern GtkStyle *gtk_style_new(void);
    extern void gtk_editable_set_editable(GtkEditable *, gboolean);
    extern GtkWidget *gtk_button_new_with_mnemonic(const gchar *);
    extern GType gtk_separator_menu_item_get_type(void);
    extern void gtk_window_set_frame_dimensions(GtkWindow *, gint, gint,
						gint, gint);
    extern void gtk_text_buffer_select_range(GtkTextBuffer *,
					     const GtkTextIter *,
					     const GtkTextIter *);
    extern gboolean gtk_tree_view_row_expanded(GtkTreeView *,
					       GtkTreePath *);
    extern void gtk_window_set_role(GtkWindow *, const gchar *);
    extern void gtk_plug_construct_for_display(GtkPlug *, GdkDisplay *,
					       GdkNativeWindow);
    extern void gtk_action_group_set_visible(GtkActionGroup *, gboolean);
    extern void gtk_misc_get_padding(GtkMisc *, gint *, gint *);
    extern GType gtk_file_chooser_get_type(void);
    extern void gtk_tree_view_column_set_resizable(GtkTreeViewColumn *,
						   gboolean);
    extern void gtk_tree_view_columns_autosize(GtkTreeView *);
    extern void gtk_layout_set_size(GtkLayout *, guint, guint);
    extern gboolean gtk_toggle_button_get_mode(GtkToggleButton *);
    extern GType gtk_expander_style_get_type(void);
    extern void gtk_accessible_connect_widget_destroyed(GtkAccessible *);
    extern void gtk_tree_view_set_cursor(GtkTreeView *, GtkTreePath *,
					 GtkTreeViewColumn *, gboolean);
    extern void gtk_button_box_set_child_secondary(GtkButtonBox *,
						   GtkWidget *, gboolean);
    extern void gtk_tree_model_row_deleted(GtkTreeModel *, GtkTreePath *);
    extern void gtk_tree_selection_set_select_function(GtkTreeSelection *,
						       GtkTreeSelectionFunc,
						       gpointer,
						       GtkDestroyNotify);
    extern gboolean gtk_tree_drag_source_row_draggable(GtkTreeDragSource *,
						       GtkTreePath *);
    extern GtkAccelGroupEntry *gtk_accel_group_query(GtkAccelGroup *,
						     guint,
						     GdkModifierType,
						     guint *);
    extern void gtk_expander_set_label_widget(GtkExpander *, GtkWidget *);
    extern void gtk_target_list_add_table(GtkTargetList *,
					  const GtkTargetEntry *, guint);
    extern gint gtk_icon_view_get_row_spacing(GtkIconView *);
    extern gboolean gtk_text_view_forward_display_line_end(GtkTextView *,
							   GtkTextIter *);
    extern GtkIconSize gtk_tool_item_get_icon_size(GtkToolItem *);
    extern void gtk_widget_set_default_direction(GtkTextDirection);
    extern void gtk_tree_view_move_column_after(GtkTreeView *,
						GtkTreeViewColumn *,
						GtkTreeViewColumn *);
    extern GType gtk_notebook_tab_get_type(void);
    extern GtkActionGroup *gtk_action_group_new(const gchar *);
    extern void gtk_widget_add_mnemonic_label(GtkWidget *, GtkWidget *);
    extern GType gtk_text_child_anchor_get_type(void);
    extern const gchar *gtk_icon_info_get_filename(GtkIconInfo *);
    extern void gtk_menu_item_set_submenu(GtkMenuItem *, GtkWidget *);
    extern void gtk_menu_detach(GtkMenu *);
    extern void gtk_container_resize_children(GtkContainer *);
    extern GType gtk_text_mark_get_type(void);
    extern gint gtk_entry_get_max_length(GtkEntry *);
    extern GSList *gtk_radio_menu_item_get_group(GtkRadioMenuItem *);
    extern GType gtk_text_attributes_get_type(void);
    extern gboolean gtk_text_mark_get_left_gravity(GtkTextMark *);
    extern GdkRegion *gtk_widget_region_intersect(GtkWidget *,
						  GdkRegion *);
    extern GtkWidget *gtk_handle_box_new(void);
    extern GList *gtk_menu_get_for_attach_widget(GtkWidget *);
    extern void gtk_list_store_set_column_types(GtkListStore *, gint,
						GType *);
    extern void gtk_paint_option(GtkStyle *, GdkWindow *, GtkStateType,
				 GtkShadowType, GdkRectangle *,
				 GtkWidget *, const gchar *, gint, gint,
				 gint, gint);
    extern void gtk_tree_selection_select_iter(GtkTreeSelection *,
					       GtkTreeIter *);
    extern void gtk_tree_view_column_set_fixed_width(GtkTreeViewColumn *,
						     gint);
    extern GtkTextBuffer *gtk_text_buffer_new(GtkTextTagTable *);
    extern void gtk_menu_shell_activate_item(GtkMenuShell *, GtkWidget *,
					     gboolean);
    extern void gtk_tree_view_column_set_widget(GtkTreeViewColumn *,
						GtkWidget *);
    extern gint gtk_notebook_get_current_page(GtkNotebook *);
    extern GtkWidget *gtk_message_dialog_new_with_markup(GtkWindow *,
							 GtkDialogFlags,
							 GtkMessageType,
							 GtkButtonsType,
							 const gchar *,
							 ...);
    extern const gchar *gtk_widget_get_name(GtkWidget *);
    extern gint gtk_entry_completion_get_text_column(GtkEntryCompletion *);
    extern GType gtk_calendar_get_type(void);
    extern void gtk_tree_view_unset_rows_drag_source(GtkTreeView *);
    extern void gtk_tool_button_set_icon_widget(GtkToolButton *,
						GtkWidget *);
    extern GType gtk_cell_renderer_mode_get_type(void);
    extern GtkWidget *gtk_check_button_new_with_label(const gchar *);
    extern void gtk_cell_editable_start_editing(GtkCellEditable *,
						GdkEvent *);
    extern gboolean gtk_widget_has_screen(GtkWidget *);
    extern void gtk_dialog_set_alternative_button_order(GtkDialog *, gint,
							...);
    extern void gtk_radio_tool_button_set_group(GtkRadioToolButton *,
						GSList *);
    extern void gtk_menu_item_activate(GtkMenuItem *);
    extern const gchar *gtk_window_get_title(GtkWindow *);
    extern void gtk_window_set_gravity(GtkWindow *, GdkGravity);
    extern GtkCalendarDisplayOptions
	gtk_calendar_get_display_options(GtkCalendar *);
    extern void gtk_text_tag_table_remove(GtkTextTagTable *, GtkTextTag *);
    extern void gtk_font_button_set_title(GtkFontButton *, const gchar *);
    extern void gtk_tree_row_reference_reordered(GObject *, GtkTreePath *,
						 GtkTreeIter *, gint *);
    extern void gtk_file_filter_add_mime_type(GtkFileFilter *,
					      const gchar *);
    extern GOptionGroup *gtk_get_option_group(gboolean);
    extern gchar *gtk_ui_manager_get_ui(GtkUIManager *);
    extern void gtk_ruler_set_metric(GtkRuler *, GtkMetricType);
    extern GtkToolItem *gtk_tool_item_new(void);
    extern void gtk_about_dialog_set_license(GtkAboutDialog *,
					     const gchar *);
    extern void gtk_paint_box_gap(GtkStyle *, GdkWindow *, GtkStateType,
				  GtkShadowType, GdkRectangle *,
				  GtkWidget *, gchar *, gint, gint, gint,
				  gint, GtkPositionType, gint, gint);
    extern GtkWidget *gtk_plug_new(GdkNativeWindow);
    extern GType gtk_im_multicontext_get_type(void);
    extern void gtk_toggle_action_set_active(GtkToggleAction *, gboolean);
    extern void gtk_label_set_text_with_mnemonic(GtkLabel *,
						 const gchar *);
    extern GtkWidget *gtk_table_new(guint, guint, gboolean);
    extern GtkWidget *gtk_alignment_new(gfloat, gfloat, gfloat, gfloat);
    extern gint gtk_icon_view_get_margin(GtkIconView *);
    extern void gtk_notebook_set_show_border(GtkNotebook *, gboolean);
    extern void gtk_text_buffer_paste_clipboard(GtkTextBuffer *,
						GtkClipboard *,
						GtkTextIter *, gboolean);
    extern GtkWidget *gtk_hscrollbar_new(GtkAdjustment *);
    extern gboolean gtk_tree_view_get_fixed_height_mode(GtkTreeView *);
    extern gboolean gtk_tree_store_remove(GtkTreeStore *, GtkTreeIter *);
    extern GList *gtk_widget_list_mnemonic_labels(GtkWidget *);
    extern void gtk_cell_layout_add_attribute(GtkCellLayout *,
					      GtkCellRenderer *,
					      const gchar *, gint);
    extern GParamSpec
	**gtk_widget_class_list_style_properties(GtkWidgetClass *,
						 guint *);
    extern gint
	gtk_entry_completion_get_minimum_key_length(GtkEntryCompletion *);
    extern void gtk_text_buffer_move_mark(GtkTextBuffer *, GtkTextMark *,
					  const GtkTextIter *);
    extern gboolean gtk_text_mark_get_visible(GtkTextMark *);
    extern void gtk_list_store_set_value(GtkListStore *, GtkTreeIter *,
					 gint, GValue *);
    extern void gtk_widget_style_get_property(GtkWidget *, const gchar *,
					      GValue *);
    extern void gtk_widget_modify_bg(GtkWidget *, GtkStateType,
				     const GdkColor *);
    extern GtkWidget *gtk_image_menu_item_new_with_label(const gchar *);
    extern gboolean gtk_font_button_get_use_font(GtkFontButton *);
    extern gboolean gtk_im_context_delete_surrounding(GtkIMContext *, gint,
						      gint);
    extern void gtk_misc_set_alignment(GtkMisc *, gfloat, gfloat);
    extern GtkWidget *gtk_tool_button_get_label_widget(GtkToolButton *);
    extern gint gtk_toolbar_get_n_items(GtkToolbar *);
    extern GtkWidget *gtk_tool_button_get_icon_widget(GtkToolButton *);
    extern gboolean gtk_tree_row_reference_valid(GtkTreeRowReference *);
    extern gboolean gtk_tree_model_iter_nth_child(GtkTreeModel *,
						  GtkTreeIter *,
						  GtkTreeIter *, gint);
    extern void gtk_tree_view_set_search_equal_func(GtkTreeView *,
						    GtkTreeViewSearchEqualFunc,
						    gpointer,
						    GtkDestroyNotify);
    extern GtkWidget *gtk_image_new_from_animation(GdkPixbufAnimation *);
    extern gint gtk_tree_view_remove_column(GtkTreeView *,
					    GtkTreeViewColumn *);
    extern void gtk_window_remove_mnemonic(GtkWindow *, guint,
					   GtkWidget *);
    extern GType gtk_text_iter_get_type(void);
    extern gboolean gtk_action_get_visible(GtkAction *);
    extern GtkWidget *gtk_radio_button_new(GSList *);
    extern gboolean gtk_text_iter_ends_word(const GtkTextIter *);
    extern GType gtk_visibility_get_type(void);
    extern GType gtk_im_context_simple_get_type(void);
    extern GdkWindow *gtk_widget_get_root_window(GtkWidget *);
    extern GType gtk_vruler_get_type(void);
    extern void gtk_image_set_from_animation(GtkImage *,
					     GdkPixbufAnimation *);
    extern void gtk_tree_view_set_enable_search(GtkTreeView *, gboolean);
    extern void gtk_combo_box_popdown(GtkComboBox *);
    extern void gtk_tree_view_expand_all(GtkTreeView *);
    extern void gtk_drag_source_set_icon_stock(GtkWidget *, const gchar *);
    extern const gchar *gtk_icon_info_get_display_name(GtkIconInfo *);
    extern void gtk_window_iconify(GtkWindow *);
    extern GType gtk_color_selection_dialog_get_type(void);
    extern GtkIconTheme *gtk_icon_theme_new(void);
    extern gint gtk_icon_info_get_base_size(GtkIconInfo *);
    extern void gtk_action_block_activate_from(GtkAction *, GtkWidget *);
    extern void gtk_action_group_add_actions(GtkActionGroup *,
					     const GtkActionEntry *, guint,
					     gpointer);
    extern GType gtk_separator_get_type(void);
    extern void gtk_table_set_col_spacing(GtkTable *, guint, guint);
    extern gboolean gtk_text_view_get_editable(GtkTextView *);
    extern GdkWindow *gtk_widget_get_parent_window(GtkWidget *);
    extern void gtk_color_selection_get_current_color(GtkColorSelection *,
						      GdkColor *);
    extern void gtk_about_dialog_set_website(GtkAboutDialog *,
					     const gchar *);
    extern GType gtk_requisition_get_type(void);
    extern void gtk_accelerator_parse(const gchar *, guint *,
				      GdkModifierType *);
    extern GtkShadowType gtk_frame_get_shadow_type(GtkFrame *);
    extern gboolean gtk_tree_view_get_rules_hint(GtkTreeView *);
    extern void gtk_accelerator_set_default_mod_mask(GdkModifierType);
    extern void gtk_window_set_keep_below(GtkWindow *, gboolean);
    extern gchar *gtk_text_iter_get_visible_slice(const GtkTextIter *,
						  const GtkTextIter *);
    extern void gtk_drag_source_add_uri_targets(GtkWidget *);
    extern gboolean gtk_font_selection_set_font_name(GtkFontSelection *,
						     const gchar *);
    extern void gtk_entry_set_completion(GtkEntry *, GtkEntryCompletion *);
    extern gboolean gtk_action_group_get_sensitive(GtkActionGroup *);
    extern void gtk_label_set_ellipsize(GtkLabel *, PangoEllipsizeMode);
    extern GType gtk_arg_flags_get_type(void);
    extern void gtk_rc_parse(const gchar *);
    extern gboolean gtk_text_iter_has_tag(const GtkTextIter *,
					  GtkTextTag *);
    extern void gtk_file_selection_set_select_multiple(GtkFileSelection *,
						       gboolean);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_child_path_to_path
	(GtkTreeModelFilter *, GtkTreePath *);
    extern void gtk_fixed_put(GtkFixed *, GtkWidget *, gint, gint);
    extern GtkSizeGroup *gtk_size_group_new(GtkSizeGroupMode);
    extern void gtk_entry_completion_delete_action(GtkEntryCompletion *,
						   gint);
    extern void gtk_paint_expander(GtkStyle *, GdkWindow *, GtkStateType,
				   GdkRectangle *, GtkWidget *,
				   const gchar *, gint, gint,
				   GtkExpanderStyle);
    extern GtkTreePath *gtk_tree_path_new(void);
    extern GType gtk_rc_token_type_get_type(void);
    extern void gtk_accel_group_lock(GtkAccelGroup *);
    extern gboolean gtk_tree_model_iter_has_child(GtkTreeModel *,
						  GtkTreeIter *);
    extern gboolean gtk_widget_activate(GtkWidget *);
    extern void gtk_text_buffer_begin_user_action(GtkTextBuffer *);
    extern void gtk_check_menu_item_toggled(GtkCheckMenuItem *);
    extern gboolean gtk_rc_property_parse_color(const GParamSpec *,
						const GString *, GValue *);
    extern void gtk_menu_item_toggle_size_allocate(GtkMenuItem *, gint);
    extern void gtk_file_chooser_button_set_title(GtkFileChooserButton *,
						  const gchar *);
    extern void gtk_cell_renderer_stop_editing(GtkCellRenderer *,
					       gboolean);
    extern void gtk_widget_unrealize(GtkWidget *);
    extern GType gtk_icon_theme_get_type(void);
    extern GSList *gtk_file_chooser_get_filenames(GtkFileChooser *);
    extern void gtk_box_pack_start_defaults(GtkBox *, GtkWidget *);
    extern GParamSpec *gtk_container_class_find_child_property(GObjectClass
							       *,
							       const gchar
							       *);
    extern guint gtk_table_get_default_col_spacing(GtkTable *);
    extern void gtk_menu_shell_insert(GtkMenuShell *, GtkWidget *, gint);
    extern GtkWidget *gtk_notebook_get_nth_page(GtkNotebook *, gint);
    extern void gtk_text_buffer_get_iter_at_line_offset(GtkTextBuffer *,
							GtkTextIter *,
							gint, gint);
    extern GtkWidget *gtk_combo_box_entry_new_with_model(GtkTreeModel *,
							 gint);
    extern void gtk_handle_box_set_snap_edge(GtkHandleBox *,
					     GtkPositionType);
    extern void gtk_combo_box_set_active(GtkComboBox *, gint);
    extern void gtk_message_dialog_format_secondary_markup(GtkMessageDialog
							   *,
							   const gchar *,
							   ...);
    extern GType gtk_toolbar_get_type(void);
    extern GType gtk_border_get_type(void);
    extern gboolean gtk_bindings_activate_event(GtkObject *,
						GdkEventKey *);
    extern const gchar
	*gtk_font_selection_get_preview_text(GtkFontSelection *);
    extern GtkWidget *gtk_progress_bar_new(void);
    extern const gchar
	*gtk_font_selection_dialog_get_preview_text(GtkFontSelectionDialog
						    *);
    extern void gtk_curve_set_vector(GtkCurve *, int, gfloat *);
    extern void gtk_tree_view_set_hadjustment(GtkTreeView *,
					      GtkAdjustment *);
    extern gboolean gtk_toolbar_get_tooltips(GtkToolbar *);
    extern GtkWidget *gtk_image_new_from_pixmap(GdkPixmap *, GdkBitmap *);
    extern void gtk_file_chooser_select_all(GtkFileChooser *);
    extern void gtk_tree_selection_unselect_iter(GtkTreeSelection *,
						 GtkTreeIter *);
    extern GType gtk_scroll_step_get_type(void);
    extern GType gtk_identifier_get_type(void);
    extern GtkWidget *gtk_font_button_new_with_font(const gchar *);
    extern void gtk_combo_box_set_focus_on_click(GtkComboBox *, gboolean);
    extern void gtk_icon_view_set_selection_mode(GtkIconView *,
						 GtkSelectionMode);
    extern void gtk_message_dialog_set_markup(GtkMessageDialog *,
					      const gchar *);
    extern gchar *gtk_file_chooser_get_uri(GtkFileChooser *);
    extern GtkWidget *gtk_action_create_tool_item(GtkAction *);
    extern void gtk_widget_unref(GtkWidget *);
    extern gint gtk_widget_send_expose(GtkWidget *, GdkEvent *);
    extern gchar *gtk_text_iter_get_text(const GtkTextIter *,
					 const GtkTextIter *);
    extern GType gtk_image_type_get_type(void);
    extern GtkWidget *gtk_file_chooser_widget_new(GtkFileChooserAction);
    extern gboolean
	gtk_entry_completion_get_inline_completion(GtkEntryCompletion *);
    extern GType gtk_response_type_get_type(void);
    extern void gtk_widget_modify_text(GtkWidget *, GtkStateType,
				       const GdkColor *);
    extern guint gtk_rc_parse_priority(GScanner *, GtkPathPriorityType *);
    extern GtkWidget *gtk_invisible_new(void);
    extern void gtk_paint_handle(GtkStyle *, GdkWindow *, GtkStateType,
				 GtkShadowType, GdkRectangle *,
				 GtkWidget *, const gchar *, gint, gint,
				 gint, gint, GtkOrientation);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_positions(GtkTextIter *,
							gint);
    extern gboolean gtk_font_button_get_show_style(GtkFontButton *);
    extern guint gtk_container_get_border_width(GtkContainer *);
    extern GtkWidget *gtk_widget_get_parent(GtkWidget *);
    extern void gtk_button_enter(GtkButton *);
    extern void gtk_text_view_set_accepts_tab(GtkTextView *, gboolean);
    extern void gtk_widget_set_redraw_on_allocate(GtkWidget *, gboolean);
    extern GtkWidget *gtk_radio_menu_item_new_with_label(GSList *,
							 const gchar *);
    extern gboolean gtk_tree_view_column_get_reorderable(GtkTreeViewColumn
							 *);
    extern GType gtk_icon_view_get_type(void);
    extern void gtk_entry_set_visibility(GtkEntry *, gboolean);
    extern const gchar *const
	*gtk_about_dialog_get_documenters(GtkAboutDialog *);
    extern GtkWidget *gtk_vruler_new(void);
    extern void gtk_widget_set_parent_window(GtkWidget *, GdkWindow *);
    extern GdkScreen *gtk_window_get_screen(GtkWindow *);
    extern GType gtk_clipboard_get_type(void);
    extern GType gtk_layout_get_type(void);
    extern void gtk_tree_selection_unselect_path(GtkTreeSelection *,
						 GtkTreePath *);
    extern GdkScreen *gtk_invisible_get_screen(GtkInvisible *);
    extern void gtk_paint_tab(GtkStyle *, GdkWindow *, GtkStateType,
			      GtkShadowType, GdkRectangle *, GtkWidget *,
			      const gchar *, gint, gint, gint, gint);
    extern void gtk_button_set_alignment(GtkButton *, gfloat, gfloat);
    extern void
	gtk_file_chooser_button_set_width_chars(GtkFileChooserButton *,
						gint);
    extern void gtk_action_group_add_radio_actions_full(GtkActionGroup *,
							const
							GtkRadioActionEntry
							*, guint, gint,
							GCallback,
							gpointer,
							GDestroyNotify);
    extern void gtk_alignment_set(GtkAlignment *, gfloat, gfloat, gfloat,
				  gfloat);
    extern void gtk_container_set_resize_mode(GtkContainer *,
					      GtkResizeMode);
    extern void gtk_notebook_set_show_tabs(GtkNotebook *, gboolean);
    extern GtkWidget *gtk_grab_get_current(void);
    extern GType gtk_tooltips_get_type(void);
    extern GtkToolItem *gtk_tool_button_new_from_stock(const gchar *);
    extern GtkWidget *gtk_color_button_new_with_color(const GdkColor *);
    extern void gtk_arrow_set(GtkArrow *, GtkArrowType, GtkShadowType);
    extern GtkTextTag *gtk_text_buffer_create_tag(GtkTextBuffer *,
						  const gchar *,
						  const gchar *, ...);
    extern void gtk_icon_view_selected_foreach(GtkIconView *,
					       GtkIconViewForeachFunc,
					       gpointer);
    extern gboolean gtk_icon_source_get_size_wildcarded(const GtkIconSource
							*);
    extern GQuark gtk_file_chooser_error_quark(void);
    extern gboolean gtk_tooltips_get_info_from_tip_window(GtkWindow *,
							  GtkTooltips * *,
							  GtkWidget * *);
    extern gboolean gtk_window_mnemonic_activate(GtkWindow *, guint,
						 GdkModifierType);
    extern GtkWidget *gtk_hseparator_new(void);
    extern const gchar *gtk_progress_bar_get_text(GtkProgressBar *);
    extern void gtk_window_remove_embedded_xid(GtkWindow *, guint);
    extern GtkWidget *gtk_menu_item_new(void);
    extern void gtk_window_set_has_frame(GtkWindow *, gboolean);
    extern void gtk_tree_model_filter_set_modify_func(GtkTreeModelFilter *,
						      gint, GType *,
						      GtkTreeModelFilterModifyFunc,
						      gpointer,
						      GtkDestroyNotify);
    extern gboolean gtk_selection_convert(GtkWidget *, GdkAtom, GdkAtom,
					  guint32);
    extern void gtk_text_buffer_get_end_iter(GtkTextBuffer *,
					     GtkTextIter *);
    extern GType gtk_hbox_get_type(void);
    extern void gtk_widget_set_accel_path(GtkWidget *, const gchar *,
					  GtkAccelGroup *);
    extern void gtk_text_tag_set_priority(GtkTextTag *, gint);
    extern void gtk_text_buffer_move_mark_by_name(GtkTextBuffer *,
						  const gchar *,
						  const GtkTextIter *);
    extern void gtk_handle_box_set_handle_position(GtkHandleBox *,
						   GtkPositionType);
    extern GtkWidget *gtk_cell_view_new_with_pixbuf(GdkPixbuf *);
    extern void gtk_grab_remove(GtkWidget *);
    extern void gtk_window_set_auto_startup_notification(gboolean);
    extern GType gtk_orientation_get_type(void);
    extern gint gtk_text_iter_get_line_index(const GtkTextIter *);
    extern void gtk_text_buffer_get_bounds(GtkTextBuffer *, GtkTextIter *,
					   GtkTextIter *);
    extern gboolean gtk_widget_is_focus(GtkWidget *);
    extern gboolean gtk_check_menu_item_get_active(GtkCheckMenuItem *);
    extern gint gtk_icon_view_get_item_width(GtkIconView *);
    extern gboolean gtk_check_menu_item_get_draw_as_radio(GtkCheckMenuItem
							  *);
    extern GtkClipboard *gtk_clipboard_get_for_display(GdkDisplay *,
						       GdkAtom);
    extern void gtk_tree_iter_free(GtkTreeIter *);
    extern void gtk_widget_unmap(GtkWidget *);
    extern gboolean gtk_cell_renderer_activate(GtkCellRenderer *,
					       GdkEvent *, GtkWidget *,
					       const gchar *,
					       GdkRectangle *,
					       GdkRectangle *,
					       GtkCellRendererState);
    extern GType gtk_settings_get_type(void);
    extern GType gtk_aspect_frame_get_type(void);
    extern GtkBindingSet *gtk_binding_set_by_class(gpointer);
    extern void gtk_icon_source_set_pixbuf(GtkIconSource *, GdkPixbuf *);
    extern void gtk_main_do_event(GdkEvent *);
    extern GtkWidget *gtk_check_button_new(void);
    extern gboolean gtk_rc_reparse_all(void);
    extern GtkTreeStore *gtk_tree_store_newv(gint, GType *);
    extern gboolean gtk_text_view_place_cursor_onscreen(GtkTextView *);
    extern void gtk_box_set_spacing(GtkBox *, gint);
    extern GType gtk_accel_map_get_type(void);
    extern gboolean gtk_color_button_get_use_alpha(GtkColorButton *);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_positions(GtkTextIter *,
						       gint);
    extern void gtk_menu_item_set_accel_path(GtkMenuItem *, const gchar *);
    extern gchar *gtk_combo_box_get_active_text(GtkComboBox *);
    extern gboolean gtk_icon_info_get_attach_points(GtkIconInfo *,
						    GdkPoint * *, gint *);
    extern void
	gtk_entry_completion_set_minimum_key_length(GtkEntryCompletion *,
						    gint);
    extern void gtk_text_view_set_buffer(GtkTextView *, GtkTextBuffer *);
    extern void gtk_cell_layout_clear_attributes(GtkCellLayout *,
						 GtkCellRenderer *);
    extern void gtk_toolbar_set_show_arrow(GtkToolbar *, gboolean);
    extern GtkWidget
	*gtk_file_chooser_widget_new_with_backend(GtkFileChooserAction,
						  const gchar *);
    extern void gtk_text_buffer_insert_at_cursor(GtkTextBuffer *,
						 const gchar *, gint);
    extern void gtk_tool_item_set_visible_vertical(GtkToolItem *,
						   gboolean);
    extern void
	gtk_cell_renderer_text_set_fixed_height_from_font
	(GtkCellRendererText *, gint);
    extern gboolean gtk_window_get_skip_pager_hint(GtkWindow *);
    extern GType gtk_gamma_curve_get_type(void);
    extern void
	gtk_tree_model_filter_convert_child_iter_to_iter(GtkTreeModelFilter
							 *, GtkTreeIter *,
							 GtkTreeIter *);
    extern void gtk_text_buffer_remove_tag_by_name(GtkTextBuffer *,
						   const gchar *,
						   const GtkTextIter *,
						   const GtkTextIter *);
    extern gboolean gtk_file_chooser_set_filename(GtkFileChooser *,
						  const gchar *);
    extern void gtk_about_dialog_set_logo_icon_name(GtkAboutDialog *,
						    const gchar *);
    extern GdkPixbuf *gtk_image_get_pixbuf(GtkImage *);
    extern GtkWidget *gtk_action_create_menu_item(GtkAction *);
    extern GtkJustification gtk_label_get_justify(GtkLabel *);
    extern void gtk_file_filter_set_name(GtkFileFilter *, const gchar *);
    extern gboolean gtk_text_iter_forward_char(GtkTextIter *);
    extern GtkWidget *gtk_radio_menu_item_new(GSList *);
    extern void gtk_action_group_add_toggle_actions_full(GtkActionGroup *,
							 const
							 GtkToggleActionEntry
							 *, guint,
							 gpointer,
							 GDestroyNotify);
    extern gboolean gtk_text_iter_is_start(const GtkTextIter *);
    extern void gtk_cell_renderer_set_fixed_size(GtkCellRenderer *, gint,
						 gint);
    extern void gtk_rc_set_default_files(gchar * *);
    extern void gtk_tool_item_set_proxy_menu_item(GtkToolItem *,
						  const gchar *,
						  GtkWidget *);
    extern void gtk_paint_check(GtkStyle *, GdkWindow *, GtkStateType,
				GtkShadowType, GdkRectangle *, GtkWidget *,
				const gchar *, gint, gint, gint, gint);
    extern void gtk_scrolled_window_set_policy(GtkScrolledWindow *,
					       GtkPolicyType,
					       GtkPolicyType);
    extern GtkEntryCompletion *gtk_entry_completion_new(void);
    extern guint gtk_rc_parse_state(GScanner *, GtkStateType *);
    extern gint gtk_tree_view_get_search_column(GtkTreeView *);
    extern void gtk_ui_manager_remove_action_group(GtkUIManager *,
						   GtkActionGroup *);
    extern PangoEllipsizeMode gtk_label_get_ellipsize(GtkLabel *);
    extern gboolean
	gtk_file_chooser_get_preview_widget_active(GtkFileChooser *);
    extern gboolean gtk_button_get_use_underline(GtkButton *);
    extern void gtk_entry_set_activates_default(GtkEntry *, gboolean);
    extern GtkStyle *gtk_rc_get_style(GtkWidget *);
    extern GtkTreeViewColumn
	*gtk_tree_view_column_new_with_attributes(const gchar *,
						  GtkCellRenderer *, ...);
    extern gchar *gtk_file_chooser_get_filename(GtkFileChooser *);
    extern GType gtk_font_button_get_type(void);
    extern GtkAdjustment *gtk_spin_button_get_adjustment(GtkSpinButton *);
    extern void
	gtk_dialog_set_alternative_button_order_from_array(GtkDialog *,
							   gint, gint *);
    extern void gtk_window_set_icon_name(GtkWindow *, const gchar *);
    extern void gtk_ruler_get_range(GtkRuler *, gdouble *, gdouble *,
				    gdouble *, gdouble *);
    extern void gtk_action_group_remove_action(GtkActionGroup *,
					       GtkAction *);
    extern const char *gtk_text_mark_get_name(GtkTextMark *);
    extern gboolean gtk_tool_button_get_use_underline(GtkToolButton *);
    extern gboolean gtk_clipboard_wait_is_text_available(GtkClipboard *);
    extern void gtk_label_set_single_line_mode(GtkLabel *, gboolean);
    extern void gtk_label_set_width_chars(GtkLabel *, gint);
    extern GType gtk_file_chooser_button_get_type(void);
    extern void gtk_scrolled_window_set_hadjustment(GtkScrolledWindow *,
						    GtkAdjustment *);
    extern void gtk_accel_map_lock_path(const gchar *);
    extern void gtk_tree_sortable_set_sort_func(GtkTreeSortable *, gint,
						GtkTreeIterCompareFunc,
						gpointer,
						GtkDestroyNotify);
    extern gboolean gtk_icon_size_lookup_for_settings(GtkSettings *,
						      GtkIconSize, gint *,
						      gint *);
    extern void gtk_tree_model_unref_node(GtkTreeModel *, GtkTreeIter *);
    extern GtkWidget *gtk_menu_get_active(GtkMenu *);
    extern GtkTextChildAnchor
	*gtk_text_buffer_create_child_anchor(GtkTextBuffer *,
					     GtkTextIter *);
    extern void gtk_file_chooser_set_extra_widget(GtkFileChooser *,
						  GtkWidget *);
    extern GtkWidget *gtk_image_new_from_image(GdkImage *, GdkBitmap *);
    extern GType gtk_fixed_get_type(void);
    extern GtkWidget *gtk_scrolled_window_new(GtkAdjustment *,
					      GtkAdjustment *);
    extern void gtk_about_dialog_set_copyright(GtkAboutDialog *,
					       const gchar *);
    extern void gtk_target_list_add(GtkTargetList *, GdkAtom, guint,
				    guint);
    extern GList *gtk_tree_view_get_columns(GtkTreeView *);
    extern GtkIconSource *gtk_icon_source_new(void);
    extern void gtk_check_menu_item_set_active(GtkCheckMenuItem *,
					       gboolean);
    extern gboolean gtk_text_iter_forward_sentence_ends(GtkTextIter *,
							gint);
    extern GdkScreen *gtk_widget_get_screen(GtkWidget *);
    extern GtkWidget *gtk_expander_new(const gchar *);
    extern GtkWidget *gtk_spin_button_new(GtkAdjustment *, gdouble, guint);
    extern void gtk_window_fullscreen(GtkWindow *);
    extern void gtk_toolbar_set_tooltips(GtkToolbar *, gboolean);
    extern void gtk_file_chooser_set_preview_widget(GtkFileChooser *,
						    GtkWidget *);
    extern gboolean gtk_accel_group_activate(GtkAccelGroup *, GQuark,
					     GObject *, guint,
					     GdkModifierType);
    extern gboolean gtk_tree_drag_source_drag_data_get(GtkTreeDragSource *,
						       GtkTreePath *,
						       GtkSelectionData *);
    extern GtkTextDirection gtk_widget_get_direction(GtkWidget *);
    extern gboolean gtk_text_iter_get_attributes(const GtkTextIter *,
						 GtkTextAttributes *);
    extern gboolean gtk_editable_get_editable(GtkEditable *);
    extern void gtk_widget_set_events(GtkWidget *, gint);
    extern void gtk_paned_pack1(GtkPaned *, GtkWidget *, gboolean,
				gboolean);
    extern GType gtk_state_type_get_type(void);
    extern gboolean gtk_text_iter_editable(const GtkTextIter *, gboolean);
    extern gboolean gtk_tree_model_get_iter_from_string(GtkTreeModel *,
							GtkTreeIter *,
							const gchar *);
    extern gboolean gtk_container_get_focus_chain(GtkContainer *,
						  GList * *);
    extern void gtk_icon_view_set_margin(GtkIconView *, gint);
    extern void gtk_tree_selection_unselect_range(GtkTreeSelection *,
						  GtkTreePath *,
						  GtkTreePath *);
    extern gboolean gtk_widget_get_no_show_all(GtkWidget *);
    extern GList *gtk_cell_view_get_cell_renderers(GtkCellView *);
    extern gboolean gtk_clipboard_set_with_owner(GtkClipboard *,
						 const GtkTargetEntry *,
						 guint,
						 GtkClipboardGetFunc,
						 GtkClipboardClearFunc,
						 GObject *);
    extern void gtk_tree_store_clear(GtkTreeStore *);
    extern GType gtk_vscrollbar_get_type(void);
    extern GType gtk_curve_type_get_type(void);
    extern gboolean gtk_entry_get_has_frame(GtkEntry *);
    extern GType gtk_dest_defaults_get_type(void);
    extern GType gtk_window_position_get_type(void);
    extern void gtk_tree_model_get_valist(GtkTreeModel *, GtkTreeIter *,
					  va_list);
    extern GtkWidget *gtk_expander_new_with_mnemonic(const gchar *);
    extern void gtk_viewport_set_shadow_type(GtkViewport *, GtkShadowType);
    extern gint gtk_tree_view_insert_column_with_attributes(GtkTreeView *,
							    gint,
							    const gchar *,
							    GtkCellRenderer
							    *, ...);
    extern GSList *gtk_file_chooser_list_shortcut_folders(GtkFileChooser
							  *);
    extern GType gtk_drawing_area_get_type(void);
    extern GtkOrientation gtk_toolbar_get_orientation(GtkToolbar *);
    extern void gtk_tree_model_foreach(GtkTreeModel *,
				       GtkTreeModelForeachFunc, gpointer);
    extern gboolean
	gtk_color_selection_get_has_opacity_control(GtkColorSelection *);
    extern gboolean gtk_tree_drag_dest_drag_data_received(GtkTreeDragDest
							  *, GtkTreePath *,
							  GtkSelectionData
							  *);
    extern gboolean gtk_window_set_icon_from_file(GtkWindow *,
						  const gchar *,
						  GError * *);
    extern void gtk_window_set_focus(GtkWindow *, GtkWidget *);
    extern void gtk_button_set_use_stock(GtkButton *, gboolean);
    extern void gtk_paint_arrow(GtkStyle *, GdkWindow *, GtkStateType,
				GtkShadowType, GdkRectangle *, GtkWidget *,
				const gchar *, GtkArrowType, gboolean,
				gint, gint, gint, gint);
    extern GtkWidget *gtk_hpaned_new(void);
    extern void gtk_calendar_select_day(GtkCalendar *, guint);
    extern void gtk_settings_set_property_value(GtkSettings *,
						const gchar *,
						const GtkSettingsValue *);
    extern void gtk_toolbar_insert(GtkToolbar *, GtkToolItem *, gint);
    extern void gtk_im_context_get_preedit_string(GtkIMContext *,
						  gchar * *,
						  PangoAttrList * *,
						  gint *);
    extern void gtk_event_box_set_visible_window(GtkEventBox *, gboolean);
    extern GType gtk_menu_item_get_type(void);
    extern gboolean gtk_text_buffer_delete_interactive(GtkTextBuffer *,
						       GtkTextIter *,
						       GtkTextIter *,
						       gboolean);
    extern void gtk_range_set_inverted(GtkRange *, gboolean);
    extern void gtk_selection_add_targets(GtkWidget *, GdkAtom,
					  const GtkTargetEntry *, guint);
    extern gchar *gtk_rc_get_theme_dir(void);
    extern const gchar *gtk_action_get_name(GtkAction *);
    extern gint gtk_tree_store_iter_depth(GtkTreeStore *, GtkTreeIter *);
    extern void gtk_icon_view_set_markup_column(GtkIconView *, gint);
    extern void gtk_scale_get_layout_offsets(GtkScale *, gint *, gint *);
    extern GType gtk_bin_get_type(void);
    extern long unsigned int gtk_object_get_type(void);
    extern void gtk_tree_store_prepend(GtkTreeStore *, GtkTreeIter *,
				       GtkTreeIter *);
    extern void gtk_list_store_insert_after(GtkListStore *, GtkTreeIter *,
					    GtkTreeIter *);
    extern void gtk_im_context_focus_out(GtkIMContext *);
    extern GtkBindingSet *gtk_binding_set_find(const gchar *);
    extern const gchar *gtk_action_group_translate_string(GtkActionGroup *,
							  const gchar *);
    extern gboolean gtk_window_get_decorated(GtkWindow *);
    extern gboolean gtk_range_get_inverted(GtkRange *);
    extern void gtk_widget_child_notify(GtkWidget *, const gchar *);
    extern void gtk_text_view_set_right_margin(GtkTextView *, gint);
    extern guint gtk_table_get_row_spacing(GtkTable *, guint);
    extern GtkAction *gtk_action_new(const gchar *, const gchar *,
				     const gchar *, const gchar *);
    extern void gtk_container_child_set_property(GtkContainer *,
						 GtkWidget *,
						 const gchar *,
						 const GValue *);
    extern void
	gtk_tree_model_filter_convert_iter_to_child_iter(GtkTreeModelFilter
							 *, GtkTreeIter *,
							 GtkTreeIter *);
    extern void gtk_widget_reset_shapes(GtkWidget *);
    extern GtkTextWindowType gtk_text_view_get_window_type(GtkTextView *,
							   GdkWindow *);
    extern void gtk_text_view_set_editable(GtkTextView *, gboolean);
    extern gint gtk_text_iter_get_offset(const GtkTextIter *);
    extern GType gtk_plug_get_type(void);
    extern void gtk_im_context_set_client_window(GtkIMContext *,
						 GdkWindow *);
    extern void gtk_image_set_from_icon_name(GtkImage *, const gchar *,
					     GtkIconSize);
    extern gboolean gtk_text_iter_forward_search(const GtkTextIter *,
						 const gchar *,
						 GtkTextSearchFlags,
						 GtkTextIter *,
						 GtkTextIter *,
						 const GtkTextIter *);
    extern void gtk_tree_view_set_fixed_height_mode(GtkTreeView *,
						    gboolean);
    extern GList *gtk_icon_view_get_selected_items(GtkIconView *);
    extern void gtk_widget_hide_all(GtkWidget *);
    extern void gtk_about_dialog_set_artists(GtkAboutDialog *,
					     const gchar * *);
    extern void gtk_target_list_add_uri_targets(GtkTargetList *, guint);
    extern GType gtk_scale_get_type(void);
    extern gint gtk_text_tag_get_priority(GtkTextTag *);
    extern void gtk_tree_selection_set_mode(GtkTreeSelection *,
					    GtkSelectionMode);
    extern GType gtk_text_direction_get_type(void);
    extern GType gtk_accessible_get_type(void);
    extern void gtk_window_get_frame_dimensions(GtkWindow *, gint *,
						gint *, gint *, gint *);
    extern GType gtk_tool_button_get_type(void);
    extern gboolean gtk_text_iter_backward_visible_word_starts(GtkTextIter
							       *, gint);
    extern void gtk_container_add_with_properties(GtkContainer *,
						  GtkWidget *,
						  const gchar *, ...);
    extern void gtk_spin_button_set_snap_to_ticks(GtkSpinButton *,
						  gboolean);
    extern GtkClipboard *gtk_clipboard_get(GdkAtom);
    extern GtkWrapMode gtk_text_view_get_wrap_mode(GtkTextView *);
    extern GType gtk_menu_tool_button_get_type(void);
    extern const gchar *gtk_tree_view_column_get_title(GtkTreeViewColumn
						       *);
    extern GType gtk_window_type_get_type(void);
    extern void gtk_widget_reset_rc_styles(GtkWidget *);
    extern GList *gtk_action_group_list_actions(GtkActionGroup *);
    extern void gtk_list_store_prepend(GtkListStore *, GtkTreeIter *);
    extern GType gtk_hscale_get_type(void);
    extern void gtk_binding_set_add_path(GtkBindingSet *, GtkPathType,
					 const gchar *,
					 GtkPathPriorityType);
    extern void gtk_paint_diamond(GtkStyle *, GdkWindow *, GtkStateType,
				  GtkShadowType, GdkRectangle *,
				  GtkWidget *, const gchar *, gint, gint,
				  gint, gint);
    extern void gtk_tool_item_set_visible_horizontal(GtkToolItem *,
						     gboolean);
    extern GType gtk_object_flags_get_type(void);
    extern const gchar *gtk_about_dialog_get_website(GtkAboutDialog *);
    extern GtkBorder *gtk_border_copy(const GtkBorder *);
    extern gboolean gtk_spin_button_get_numeric(GtkSpinButton *);
    extern gint gtk_label_get_max_width_chars(GtkLabel *);
    extern gboolean gtk_tree_view_get_hover_selection(GtkTreeView *);
    extern GType gtk_dialog_flags_get_type(void);
    extern GType gtk_cell_view_get_type(void);
    extern GtkWidget *gtk_image_menu_item_new_from_stock(const gchar *,
							 GtkAccelGroup *);
    extern void gtk_icon_view_set_spacing(GtkIconView *, gint);
    extern void gtk_paint_box(GtkStyle *, GdkWindow *, GtkStateType,
			      GtkShadowType, GdkRectangle *, GtkWidget *,
			      const gchar *, gint, gint, gint, gint);
    extern void
	gtk_entry_completion_set_popup_completion(GtkEntryCompletion *,
						  gboolean);
    extern void gtk_toolbar_set_orientation(GtkToolbar *, GtkOrientation);
    extern void gtk_drag_source_set_target_list(GtkWidget *,
						GtkTargetList *);
    extern void gtk_settings_install_property_parser(GParamSpec *,
						     GtkRcPropertyParser);
    extern void gtk_file_chooser_set_show_hidden(GtkFileChooser *,
						 gboolean);
    extern gboolean gtk_icon_source_get_direction_wildcarded(const
							     GtkIconSource
							     *);
    extern void gtk_spin_button_configure(GtkSpinButton *, GtkAdjustment *,
					  gdouble, guint);
    extern void gtk_notebook_next_page(GtkNotebook *);
    extern void gtk_icon_view_set_column_spacing(GtkIconView *, gint);
    extern GSList *gtk_file_chooser_list_filters(GtkFileChooser *);
    extern void gtk_fixed_move(GtkFixed *, GtkWidget *, gint, gint);
    extern GtkAccelMap *gtk_accel_map_get(void);
    extern GType gtk_vscale_get_type(void);
    extern void gtk_about_dialog_set_logo(GtkAboutDialog *, GdkPixbuf *);
    extern gint gtk_text_iter_get_line(const GtkTextIter *);
    extern GtkToolItem *gtk_toggle_tool_button_new_from_stock(const gchar
							      *);
    extern gboolean gtk_tree_model_get_iter_first(GtkTreeModel *,
						  GtkTreeIter *);
    extern PangoAttrList *gtk_label_get_attributes(GtkLabel *);
    extern GtkWidget *gtk_image_new_from_icon_name(const gchar *,
						   GtkIconSize);
    extern AtkObject *gtk_widget_get_accessible(GtkWidget *);
    extern GType gtk_metric_type_get_type(void);
    extern GtkToolItem *gtk_menu_tool_button_new(GtkWidget *,
						 const gchar *);
    extern void gtk_scale_set_digits(GtkScale *, gint);
    extern void gtk_label_set_text(GtkLabel *, const gchar *);
    extern GtkWidget *gtk_notebook_get_menu_label(GtkNotebook *,
						  GtkWidget *);
    extern GtkIMContext *gtk_im_context_simple_new(void);
    extern GtkIconSet *gtk_icon_set_copy(GtkIconSet *);
    extern GtkRcStyle *gtk_rc_style_copy(GtkRcStyle *);
    extern void gtk_text_buffer_remove_tag(GtkTextBuffer *, GtkTextTag *,
					   const GtkTextIter *,
					   const GtkTextIter *);
    extern GType gtk_tree_view_drop_position_get_type(void);
    extern GType gtk_match_type_get_type(void);
    extern GType gtk_toolbar_space_style_get_type(void);
    extern GtkAdjustment *gtk_container_get_focus_vadjustment(GtkContainer
							      *);
    extern gboolean gtk_widget_translate_coordinates(GtkWidget *,
						     GtkWidget *, gint,
						     gint, gint *, gint *);
    extern void gtk_label_set_label(GtkLabel *, const gchar *);
    extern void gtk_entry_set_alignment(GtkEntry *, gfloat);
    extern GtkTextChildAnchor *gtk_text_iter_get_child_anchor(const
							      GtkTextIter
							      *);
    extern void gtk_tree_view_unset_rows_drag_dest(GtkTreeView *);
    extern GdkVisual *gtk_widget_get_default_visual(void);
    extern void gtk_drag_dest_set_proxy(GtkWidget *, GdkWindow *,
					GdkDragProtocol, gboolean);
    extern void gtk_entry_set_max_length(GtkEntry *, gint);
    extern GType gtk_vseparator_get_type(void);
    extern void gtk_tree_view_set_vadjustment(GtkTreeView *,
					      GtkAdjustment *);
    extern GtkSelectionData *gtk_selection_data_copy(GtkSelectionData *);
    extern void gtk_list_store_reorder(GtkListStore *, gint *);
    extern void gtk_accel_map_load_scanner(GScanner *);
    extern void gtk_tree_view_set_hover_expand(GtkTreeView *, gboolean);
    extern void gtk_table_set_col_spacings(GtkTable *, guint);
    extern void gtk_widget_queue_draw_area(GtkWidget *, gint, gint, gint,
					   gint);
    extern GtkTreeModel *gtk_icon_view_get_model(GtkIconView *);
    extern void gtk_tree_view_set_reorderable(GtkTreeView *, gboolean);
    extern GtkTextMark *gtk_text_buffer_get_insert(GtkTextBuffer *);
    extern const gchar *gtk_action_get_accel_path(GtkAction *);
    extern GtkWidget *gtk_entry_new(void);
    extern void gtk_tree_view_expand_to_path(GtkTreeView *, GtkTreePath *);
    extern void gtk_paint_polygon(GtkStyle *, GdkWindow *, GtkStateType,
				  GtkShadowType, GdkRectangle *,
				  GtkWidget *, const gchar *, GdkPoint *,
				  gint, gboolean);
    extern gboolean gtk_init_check(int *, char ***);
    extern gboolean gtk_tool_item_get_visible_vertical(GtkToolItem *);
    extern gint gtk_text_iter_get_visible_line_offset(const GtkTextIter *);
    extern gboolean gtk_spin_button_get_snap_to_ticks(GtkSpinButton *);
    extern gboolean gtk_text_iter_forward_line(GtkTextIter *);
    extern GType gtk_tree_view_column_get_type(void);
    extern GType gtk_direction_type_get_type(void);
    extern void gtk_tree_view_set_hover_selection(GtkTreeView *, gboolean);
    extern void gtk_tree_view_set_expander_column(GtkTreeView *,
						  GtkTreeViewColumn *);
    extern GType gtk_cell_renderer_combo_get_type(void);
    extern void gtk_toggle_button_set_inconsistent(GtkToggleButton *,
						   gboolean);
    extern GtkWidget *gtk_menu_get_attach_widget(GtkMenu *);
    extern gboolean gtk_tree_model_iter_children(GtkTreeModel *,
						 GtkTreeIter *,
						 GtkTreeIter *);
    extern GdkPixbuf *gtk_window_get_icon(GtkWindow *);
    extern GdkDragContext *gtk_drag_begin(GtkWidget *, GtkTargetList *,
					  GdkDragAction, gint, GdkEvent *);
    extern void gtk_init(int *, char ***);
    extern gchar *gtk_color_selection_palette_to_string(const GdkColor *,
							gint);
    extern void gtk_container_child_set_valist(GtkContainer *, GtkWidget *,
					       const gchar *, va_list);
    extern void gtk_paint_focus(GtkStyle *, GdkWindow *, GtkStateType,
				GdkRectangle *, GtkWidget *, const gchar *,
				gint, gint, gint, gint);
    extern GtkUpdateType gtk_range_get_update_policy(GtkRange *);
    extern void gtk_toolbar_set_icon_size(GtkToolbar *, GtkIconSize);
#ifdef __cplusplus
}
#endif
#endif
