#if (__LSB_VERSION__ >= 50 )
#ifndef _GTK_3_0_GTK_GTK_H_
#define _GTK_3_0_GTK_GTK_H_

#include <sys/types.h>
#include <X11/X.h>
#include <stdarg.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>
#include <pango-1.0/pango/pango.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <cairo/cairo.h>
#include <glib-2.0/gio/gapplication.h>
#include <glib-2.0/gio/gmountoperation.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gemblemedicon.h>
#include <glib-2.0/gio/giotypes.h>
#include <gtk-3.0/gdk/gdk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GTKX_H_INSIDE__
#define __GTK_ABOUT_DIALOG_H__
#define __GTK_ACCEL_GROUP_H__
#define __GTK_ACCEL_LABEL_H__
#define __GTK_ACCEL_MAP_H__
#define __GTK_ACCESSIBLE_H__
#define __GTK_ACTIONABLE_H__
#define __GTK_ACTION_GROUP_H__
#define __GTK_ACTION_H__
#define __GTK_ACTIVATABLE_H__
#define __GTK_ADJUSTMENT_H__
#define __GTK_ALIGNMENT_H__
#define __GTK_APPLICATION_H__
#define __GTK_APPLICATION_WINDOW_H__
#define __GTK_APP_CHOOSER_BUTTON_H__
#define __GTK_APP_CHOOSER_DIALOG_H__
#define __GTK_APP_CHOOSER_H__
#define __GTK_APP_CHOOSER_WIDGET_H__
#define __GTK_ARROW_H__
#define __GTK_ASPECT_FRAME_H__
#define __GTK_BINDINGS_H__
#define __GTK_BIN_H__
#define __GTK_BORDER_H__
#define __GTK_BOX_H__
#define __GTK_BUILDABLE_H__
#define __GTK_BUILDER_H__
#define __GTK_BUTTON_BOX_H__
#define __GTK_BUTTON_H__
#define __GTK_CALENDAR_H__
#define __GTK_CELL_AREA_BOX_H__
#define __GTK_CELL_AREA_CONTEXT_H__
#define __GTK_CELL_AREA_H__
#define __GTK_CELL_EDITABLE_H__
#define __GTK_CELL_LAYOUT_H__
#define __GTK_CELL_RENDERER_ACCEL_H__
#define __GTK_CELL_RENDERER_COMBO_H__
#define __GTK_CELL_RENDERER_H__
#define __GTK_CELL_RENDERER_PIXBUF_H__
#define __GTK_CELL_RENDERER_PROGRESS_H__
#define __GTK_CELL_RENDERER_SPINNER_H__
#define __GTK_CELL_RENDERER_TEXT_H__
#define __GTK_CELL_RENDERER_TOGGLE_H__
#define __GTK_CELL_VIEW_H__
#define __GTK_CHECK_BUTTON_H__
#define __GTK_CHECK_MENU_ITEM_H__
#define __GTK_CLIPBOARD_H__
#define __GTK_COLOR_BUTTON_H__
#define __GTK_COLOR_CHOOSER_DIALOG_H__
#define __GTK_COLOR_CHOOSER_H__
#define __GTK_COLOR_CHOOSER_WIDGET_H__
#define __GTK_COLOR_UTILS_H__
#define __GTK_COMBO_BOX_H__
#define __GTK_COMBO_BOX_TEXT_H__
#define __GTK_CONTAINER_H__
#define __GTK_CSS_PROVIDER_H__
#define __GTK_CSS_SECTION_H__
#define __GTK_DEBUG_H__
#define __GTK_DIALOG_H__
#define __GTK_DND_H__
#define __GTK_DRAWING_AREA_H__
#define __GTK_EDITABLE_H__
#define __GTK_ENTRY_BUFFER_H__
#define __GTK_ENTRY_COMPLETION_H__
#define __GTK_ENTRY_H__
#define __GTK_ENUMS_H__
#define __GTK_EVENT_BOX_H__
#define __GTK_EXPANDER_H__
#define __GTK_FILE_CHOOSER_BUTTON_H__
#define __GTK_FILE_CHOOSER_DIALOG_H__
#define __GTK_FILE_CHOOSER_H__
#define __GTK_FILE_CHOOSER_WIDGET_H__
#define __GTK_FILE_FILTER_H__
#define __GTK_FIXED_H__
#define __GTK_FONT_BUTTON_H__
#define __GTK_FONT_CHOOSER_DIALOG_H__
#define __GTK_FONT_CHOOSER_H__
#define __GTK_FONT_CHOOSER_WIDGET_H__
#define __GTK_FRAME_H__
#define __GTK_GRADIENT_H__
#define __GTK_GRID_H__
#define __GTK_H_INSIDE__
#define __GTK_H__
#define __GTK_ICON_FACTORY_H__
#define __GTK_ICON_THEME_H__
#define __GTK_ICON_VIEW_H__
#define __GTK_IMAGE_H__
#define __GTK_IMAGE_MENU_ITEM_H__
#define __GTK_IM_CONTEXT_H__
#define __GTK_IM_CONTEXT_INFO_H__
#define __GTK_IM_CONTEXT_SIMPLE_H__
#define __GTK_IM_MODULE_H__
#define __GTK_IM_MULTICONTEXT_H__
#define __GTK_INFO_BAR_H__
#define __GTK_INVISIBLE_H__
#define __GTK_LABEL_H__
#define __GTK_LAYOUT_H__
#define __GTK_LEVEL_BAR_H__
#define __GTK_LIST_STORE_H__
#define __GTK_LOCK_BUTTON_H__
#define __GTK_MAIN_H__
#define __GTK_MENU_BAR_H__
#define __GTK_MENU_BUTTON_H__
#define __GTK_MENU_H__
#define __GTK_MENU_ITEM_H__
#define __GTK_MENU_SHELL_H__
#define __GTK_MENU_TOOL_BUTTON_H__
#define __GTK_MESSAGE_DIALOG_H__
#define __GTK_MISC_H__
#define __GTK_MODULES_H__
#define __GTK_MOUNT_OPERATION_H__
#define __GTK_NOTEBOOK_H__
#define __GTK_NUMERABLE_ICON_H__
#define __GTK_OFFSCREEN_WINDOW_H__
#define __GTK_ORIENTABLE_H__
#define __GTK_OVERLAY_H__
#define __GTK_PANED_H__
#define __GTK_PLUG_H__
#define __GTK_PROGRESS_BAR_H__
#define __GTK_RADIO_ACTION_H__
#define __GTK_RADIO_BUTTON_H__
#define __GTK_RADIO_MENU_ITEM_H__
#define __GTK_RADIO_TOOL_BUTTON_H__
#define __GTK_RANGE_H__
#define __GTK_RECENT_ACTION_H__
#define __GTK_SCALE_BUTTON_H__
#define __GTK_SCALE_H__
#define __GTK_SCROLLABLE_H__
#define __GTK_SCROLLBAR_H__
#define __GTK_SCROLLED_WINDOW_H__
#define __GTK_SEARCH_ENTRY_H__
#define __GTK_SELECTION_H__
#define __GTK_SEPARATOR_H__
#define __GTK_SEPARATOR_MENU_ITEM_H__
#define __GTK_SEPARATOR_TOOL_ITEM_H__
#define __GTK_SETTINGS_H__
#define __GTK_SHOW_H__
#define __GTK_SIZE_GROUP_H__
#define __GTK_SIZE_REQUEST_H__
#define __GTK_SOCKET_H__
#define __GTK_SPINNER_H__
#define __GTK_SPIN_BUTTON_H__
#define __GTK_STATUSBAR_H__
#define __GTK_STOCK_H__
#define __GTK_STYLE_CONTEXT_H__
#define __GTK_STYLE_PROPERTIES_H__
#define __GTK_STYLE_PROVIDER_H__
#define __GTK_SWITCH_H__
#define __GTK_SYMBOLIC_COLOR_H__
#define __GTK_TEST_UTILS_H__
#define __GTK_TEXT_ATTRIBUTES_H__
#define __GTK_TEXT_BUFFER_H__
#define __GTK_TEXT_CHILD_H__
#define __GTK_TEXT_ITER_H__
#define __GTK_TEXT_MARK_H__
#define __GTK_TEXT_TAG_H__
#define __GTK_TEXT_TAG_TABLE_H__
#define __GTK_TEXT_VIEW_H__
#define __GTK_THEMING_ENGINE_H__
#define __GTK_TOGGLE_ACTION_H__
#define __GTK_TOGGLE_BUTTON_H__
#define __GTK_TOGGLE_TOOL_BUTTON_H__
#define __GTK_TOOLBAR_H__
#define __GTK_TOOLTIP_H__
#define __GTK_TOOL_BUTTON_H__
#define __GTK_TOOL_ITEM_GROUP_H__
#define __GTK_TOOL_ITEM_H__
#define __GTK_TOOL_PALETTE_H__
#define __GTK_TOOL_SHELL_H__
#define __GTK_TREE_DND_H__
#define __GTK_TREE_MODEL_FILTER_H__
#define __GTK_TREE_MODEL_H__
#define __GTK_TREE_MODEL_SORT_H__
#define __GTK_TREE_SELECTION_H__
#define __GTK_TREE_SORTABLE_H__
#define __GTK_TREE_STORE_H__
#define __GTK_TREE_VIEW_COLUMN_H__
#define __GTK_TREE_VIEW_H__
#define __GTK_TYPES_H__
#define __GTK_TYPE_BUILTINS_H__
#define __GTK_UI_MANAGER_H__
#define __GTK_VERSION_H__
#define __GTK_VIEWPORT_H__
#define __GTK_VOLUME_BUTTON_H__
#define __GTK_WIDGET_H__
#define __GTK_WIDGET_PATH_H__
#define __GTK_WINDOW_H__
#define __GTK_X_H__
#define GTK_TYPE_ACTIONABLE	(gtk_actionable_get_type ())
#define GTK_TYPE_ACTIVATABLE	(gtk_activatable_get_type ())
#define GTK_TYPE_ALIGN	(gtk_align_get_type ())
#define GTK_TYPE_APPLICATION	(gtk_application_get_type ())
#define GTK_TYPE_APPLICATION_INHIBIT_FLAGS	(gtk_application_inhibit_flags_get_type ())
#define GTK_TYPE_APPLICATION_WINDOW	(gtk_application_window_get_type ())
#define GTK_TYPE_APP_CHOOSER_BUTTON	(gtk_app_chooser_button_get_type ())
#define GTK_TYPE_APP_CHOOSER_DIALOG	(gtk_app_chooser_dialog_get_type ())
#define GTK_TYPE_APP_CHOOSER	(gtk_app_chooser_get_type ())
#define GTK_TYPE_APP_CHOOSER_WIDGET	(gtk_app_chooser_widget_get_type ())
#define GTK_TYPE_ARROW_PLACEMENT	(gtk_arrow_placement_get_type ())
#define GTK_TYPE_ASSISTANT_PAGE_TYPE	(gtk_assistant_page_type_get_type ())
#define GTK_TYPE_BORDER_STYLE	(gtk_border_style_get_type ())
#define GTK_TYPE_BUILDABLE	(gtk_buildable_get_type ())
#define GTK_TYPE_BUILDER_ERROR	(gtk_builder_error_get_type ())
#define GTK_BUILDER_ERROR	(gtk_builder_error_quark ())
#define GTK_TYPE_BUILDER	(gtk_builder_get_type ())
#define GTK_TYPE_CELL_AREA_BOX	(gtk_cell_area_box_get_type ())
#define GTK_TYPE_CELL_AREA_CONTEXT	(gtk_cell_area_context_get_type ())
#define GTK_TYPE_CELL_AREA	(gtk_cell_area_get_type ())
#define GTK_TYPE_CELL_RENDERER_SPINNER	(gtk_cell_renderer_spinner_get_type ())
#define GTK_TYPE_COLOR_CHOOSER_DIALOG	(gtk_color_chooser_dialog_get_type ())
#define GTK_TYPE_COLOR_CHOOSER	(gtk_color_chooser_get_type ())
#define GTK_TYPE_COLOR_CHOOSER_WIDGET	(gtk_color_chooser_widget_get_type ())
#define GTK_TYPE_COMBO_BOX_TEXT	(gtk_combo_box_text_get_type ())
#define GTK_TYPE_CSS_PROVIDER_ERROR	(gtk_css_provider_error_get_type ())
#define GTK_CSS_PROVIDER_ERROR	(gtk_css_provider_error_quark ())
#define GTK_TYPE_CSS_PROVIDER	(gtk_css_provider_get_type ())
#define GTK_TYPE_CSS_SECTION	(gtk_css_section_get_type ())
#define GTK_TYPE_CSS_SECTION_TYPE	(gtk_css_section_type_get_type ())
#define GTK_TYPE_DRAG_RESULT	(gtk_drag_result_get_type ())
#define GTK_TYPE_ENTRY_BUFFER	(gtk_entry_buffer_get_type ())
#define GTK_TYPE_ENTRY_ICON_POSITION	(gtk_entry_icon_position_get_type ())
#define GTK_TYPE_FILE_CHOOSER_CONFIRMATION	(gtk_file_chooser_confirmation_get_type ())
#define GTK_TYPE_FONT_CHOOSER_DIALOG	(gtk_font_chooser_dialog_get_type ())
#define GTK_TYPE_FONT_CHOOSER	(gtk_font_chooser_get_type ())
#define GTK_TYPE_FONT_CHOOSER_WIDGET	(gtk_font_chooser_widget_get_type ())
#define GTK_TYPE_GRADIENT	(gtk_gradient_get_type ())
#define GTK_TYPE_GRID	(gtk_grid_get_type ())
#define GTK_TYPE_ICON_VIEW_DROP_POSITION	(gtk_icon_view_drop_position_get_type ())
#define GTK_TYPE_INFO_BAR	(gtk_info_bar_get_type())
#define GTK_TYPE_INPUT_HINTS	(gtk_input_hints_get_type ())
#define GTK_TYPE_INPUT_PURPOSE	(gtk_input_purpose_get_type ())
#define GTK_TYPE_JUNCTION_SIDES	(gtk_junction_sides_get_type ())
#define GTK_TYPE_LEVEL_BAR	(gtk_level_bar_get_type ())
#define GTK_TYPE_LEVEL_BAR_MODE	(gtk_level_bar_mode_get_type ())
#define GTK_TYPE_LICENSE	(gtk_license_get_type ())
#define GTK_TYPE_LOCK_BUTTON	(gtk_lock_button_get_type ())
#define GTK_TYPE_MENU_BUTTON	(gtk_menu_button_get_type ())
#define GTK_TYPE_MOUNT_OPERATION	(gtk_mount_operation_get_type ())
#define GTK_TYPE_NUMBER_UP_LAYOUT	(gtk_number_up_layout_get_type ())
#define GTK_TYPE_NUMERABLE_ICON	(gtk_numerable_icon_get_type ())
#define GTK_TYPE_OFFSCREEN_WINDOW	(gtk_offscreen_window_get_type ())
#define GTK_TYPE_ORIENTABLE	(gtk_orientable_get_type ())
#define GTK_TYPE_OVERLAY	(gtk_overlay_get_type ())
#define GTK_TYPE_PACK_DIRECTION	(gtk_pack_direction_get_type ())
#define GTK_TYPE_RECENT_ACTION	(gtk_recent_action_get_type ())
#define GTK_TYPE_REGION_FLAGS	(gtk_region_flags_get_type ())
#define GTK_TYPE_SCALE_BUTTON	(gtk_scale_button_get_type ())
#define GTK_TYPE_SCROLLABLE	(gtk_scrollable_get_type ())
#define GTK_TYPE_SCROLLABLE_POLICY	(gtk_scrollable_policy_get_type ())
#define GTK_TYPE_SEARCH_ENTRY	(gtk_search_entry_get_type ())
#define GTK_TYPE_SIZE_REQUEST_MODE	(gtk_size_request_mode_get_type ())
#define GTK_TYPE_SPINNER	(gtk_spinner_get_type ())
#define GTK_TYPE_STATE_FLAGS	(gtk_state_flags_get_type ())
#define GTK_TYPE_STYLE_CONTEXT	(gtk_style_context_get_type ())
#define GTK_TYPE_STYLE_PROPERTIES	(gtk_style_properties_get_type ())
#define GTK_TYPE_STYLE_PROVIDER	(gtk_style_provider_get_type ())
#define GTK_TYPE_SWITCH	(gtk_switch_get_type ())
#define GTK_TYPE_SYMBOLIC_COLOR	(gtk_symbolic_color_get_type ())
#define GTK_TYPE_THEMING_ENGINE	(gtk_theming_engine_get_type ())
#define GTK_TYPE_TOOLTIP	(gtk_tooltip_get_type ())
#define GTK_TYPE_TOOL_ITEM_GROUP	(gtk_tool_item_group_get_type ())
#define GTK_TYPE_TOOL_PALETTE_DRAG_TARGETS	(gtk_tool_palette_drag_targets_get_type ())
#define GTK_TYPE_TOOL_PALETTE	(gtk_tool_palette_get_type ())
#define GTK_TYPE_TOOL_SHELL	(gtk_tool_shell_get_type ())
#define GTK_TYPE_VOLUME_BUTTON	(gtk_volume_button_get_type ())
#define GTK_TYPE_WIDGET_PATH	(gtk_widget_path_get_type ())
#define GTK_CSS_PROVIDER_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_CSS_PROVIDER, GtkCssProviderClass))
#define GTK_STYLE_CONTEXT_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_STYLE_CONTEXT, GtkStyleContextClass))
#define GTK_STYLE_PROPERTIES_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_STYLE_PROPERTIES, GtkStylePropertiesClass))
#define GTK_THEMING_ENGINE_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_THEMING_ENGINE, GtkThemingEngineClass))
#define GTK_APPLICATION_WINDOW_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), GTK_TYPE_APPLICATION_WINDOW, GtkApplicationWindowClass))
#define GTK_LOCK_BUTTON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST ((k), GTK_LOCK_BUTTON, GtkLockButtonClass))
#define GTK_OFFSCREEN_WINDOW_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST ((k), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindowClass))
#define GTK_APPLICATION_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_APPLICATION, GtkApplicationClass))
#define GTK_APP_CHOOSER_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_APP_CHOOSER_BUTTON, GtkAppChooserButtonClass))
#define GTK_APP_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_APP_CHOOSER_DIALOG, GtkAppChooserDialogClass))
#define GTK_APP_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_APP_CHOOSER_WIDGET, GtkAppChooserWidgetClass))
#define GTK_BUILDER_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUILDER, GtkBuilderClass))
#define GTK_CELL_AREA_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_AREA, GtkCellAreaClass))
#define GTK_CELL_AREA_BOX_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_AREA_BOX, GtkCellAreaBoxClass))
#define GTK_CELL_AREA_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_AREA_CONTEXT, GtkCellAreaContextClass))
#define GTK_CELL_RENDERER_SPINNER_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinnerClass))
#define GTK_COLOR_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_CHOOSER_DIALOG, GtkColorChooserDialogClass))
#define GTK_COLOR_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_CHOOSER_WIDGET, GtkColorChooserWidgetClass))
#define GTK_COMBO_BOX_TEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxTextClass))
#define GTK_ENTRY_BUFFER_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY_BUFFER, GtkEntryBufferClass))
#define GTK_FONT_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialogClass))
#define GTK_FONT_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_CHOOSER_WIDGET, GtkFontChooserWidgetClass))
#define GTK_GRID_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_GRID, GtkGridClass))
#define GTK_LEVEL_BAR_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LEVEL_BAR, GtkLevelBarClass))
#define GTK_MENU_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_BUTTON, GtkMenuButtonClass))
#define GTK_NUMERABLE_ICON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_NUMERABLE_ICON, GtkNumerableIconClass))
#define GTK_OVERLAY_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_OVERLAY, GtkOverlayClass))
#define GTK_RECENT_ACTION_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_ACTION, GtkRecentActionClass))
#define GTK_SCALE_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCALE_BUTTON, GtkScaleButtonClass))
#define GTK_SEARCH_ENTRY_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEARCH_ENTRY, GtkSearchEntryClass))
#define GTK_SWITCH_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SWITCH, GtkSwitchClass))
#define GTK_VOLUME_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButtonClass))
#define GTK_ACTIVATABLE_CLASS(obj)	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatableIface))
#define GTK_BUILDABLE_CLASS(obj)	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_BUILDABLE, GtkBuildableIface))
#define GTK_SPINNER_CLASS(obj)	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_SPINNER, GtkSpinnerClass))
#define GTK_ORIENTABLE_CLASS(vtable)	(G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_ORIENTABLE, GtkOrientableIface))
#define GTK_TOOL_ITEM_GROUP_CLASS(cls)	(G_TYPE_CHECK_CLASS_CAST (cls, GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroupClass))
#define GTK_TOOL_PALETTE_CLASS(cls)	(G_TYPE_CHECK_CLASS_CAST (cls, GTK_TYPE_TOOL_PALETTE, GtkToolPaletteClass))
#define GTK_MOUNT_OPERATION_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), GTK_TYPE_MOUNT_OPERATION, GtkMountOperationClass))
#define GTK_INFO_BAR_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST((klass), GTK_TYPE_INFO_BAR, GtkInfoBarClass))
#define GTK_IS_CSS_PROVIDER_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_CSS_PROVIDER))
#define GTK_IS_STYLE_CONTEXT_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_STYLE_CONTEXT))
#define GTK_IS_STYLE_PROPERTIES_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_STYLE_PROPERTIES))
#define GTK_IS_THEMING_ENGINE_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_THEMING_ENGINE))
#define GTK_IS_APPLICATION_WINDOW_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), GTK_TYPE_APPLICATION_WINDOW))
#define GTK_IS_LOCK_BUTTON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_LOCK_BUTTON))
#define GTK_IS_MOUNT_OPERATION_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_MOUNT_OPERATION))
#define GTK_IS_OFFSCREEN_WINDOW_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_OFFSCREEN_WINDOW))
#define GTK_IS_APPLICATION_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_APPLICATION))
#define GTK_IS_APP_CHOOSER_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_APP_CHOOSER_BUTTON))
#define GTK_IS_APP_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_APP_CHOOSER_DIALOG))
#define GTK_IS_APP_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_APP_CHOOSER_WIDGET))
#define GTK_IS_BUILDER_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUILDER))
#define GTK_IS_CELL_AREA_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_AREA))
#define GTK_IS_CELL_AREA_BOX_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_AREA_BOX))
#define GTK_IS_CELL_AREA_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_AREA_CONTEXT))
#define GTK_IS_CELL_RENDERER_SPINNER_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_SPINNER))
#define GTK_IS_COLOR_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_CHOOSER_DIALOG))
#define GTK_IS_COLOR_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_CHOOSER_WIDGET))
#define GTK_IS_COMBO_BOX_TEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COMBO_BOX_TEXT))
#define GTK_IS_ENTRY_BUFFER_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY_BUFFER))
#define GTK_IS_FONT_CHOOSER_DIALOG_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_CHOOSER_DIALOG))
#define GTK_IS_FONT_CHOOSER_WIDGET_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_CHOOSER_WIDGET))
#define GTK_IS_GRID_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_GRID))
#define GTK_IS_INFO_BAR_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_INFO_BAR))
#define GTK_IS_LEVEL_BAR_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LEVEL_BAR))
#define GTK_IS_MENU_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_BUTTON))
#define GTK_IS_NUMERABLE_ICON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_NUMERABLE_ICON))
#define GTK_IS_OVERLAY_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_OVERLAY))
#define GTK_IS_RECENT_ACTION_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_ACTION))
#define GTK_IS_SCALE_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCALE_BUTTON))
#define GTK_IS_SEARCH_ENTRY_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEARCH_ENTRY))
#define GTK_IS_SWITCH_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SWITCH))
#define GTK_IS_VOLUME_BUTTON_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VOLUME_BUTTON))
#define GTK_IS_SPINNER_CLASS(obj)	(G_TYPE_CHECK_CLASS_TYPE ((obj), GTK_TYPE_SPINNER))
#define GTK_IS_ORIENTABLE_CLASS(vtable)	(G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_ORIENTABLE))
#define GTK_IS_TOOL_ITEM_GROUP_CLASS(obj)	(G_TYPE_CHECK_CLASS_TYPE (obj, GTK_TYPE_TOOL_ITEM_GROUP))
#define GTK_IS_TOOL_PALETTE_CLASS(obj)	(G_TYPE_CHECK_CLASS_TYPE (obj, GTK_TYPE_TOOL_PALETTE))
#define GTK_ACTIONABLE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), GTK_TYPE_ACTIONABLE, GtkActionable))
#define GTK_APPLICATION_WINDOW(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), GTK_TYPE_APPLICATION_WINDOW, GtkApplicationWindow))
#define GTK_CSS_PROVIDER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_CSS_PROVIDER, GtkCssProvider))
#define GTK_LOCK_BUTTON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_LOCK_BUTTON, GtkLockButton))
#define GTK_MOUNT_OPERATION(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_MOUNT_OPERATION, GtkMountOperation))
#define GTK_OFFSCREEN_WINDOW(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindow))
#define GTK_STYLE_CONTEXT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_STYLE_CONTEXT, GtkStyleContext))
#define GTK_STYLE_PROPERTIES(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_STYLE_PROPERTIES, GtkStyleProperties))
#define GTK_STYLE_PROVIDER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_STYLE_PROVIDER, GtkStyleProvider))
#define GTK_THEMING_ENGINE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_THEMING_ENGINE, GtkThemingEngine))
#define GTK_ACTIVATABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatable))
#define GTK_APPLICATION(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_APPLICATION, GtkApplication))
#define GTK_APP_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_APP_CHOOSER, GtkAppChooser))
#define GTK_APP_CHOOSER_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_APP_CHOOSER_BUTTON, GtkAppChooserButton))
#define GTK_APP_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_APP_CHOOSER_DIALOG, GtkAppChooserDialog))
#define GTK_APP_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_APP_CHOOSER_WIDGET, GtkAppChooserWidget))
#define GTK_BUILDABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUILDABLE, GtkBuildable))
#define GTK_BUILDER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUILDER, GtkBuilder))
#define GTK_CELL_AREA(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_AREA, GtkCellArea))
#define GTK_CELL_AREA_BOX(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_AREA_BOX, GtkCellAreaBox))
#define GTK_CELL_AREA_CONTEXT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_AREA_CONTEXT, GtkCellAreaContext))
#define GTK_CELL_RENDERER_SPINNER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinner))
#define GTK_COLOR_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_CHOOSER, GtkColorChooser))
#define GTK_COLOR_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_CHOOSER_DIALOG, GtkColorChooserDialog))
#define GTK_COLOR_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_CHOOSER_WIDGET, GtkColorChooserWidget))
#define GTK_COMBO_BOX_TEXT(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxText))
#define GTK_ENTRY_BUFFER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY_BUFFER, GtkEntryBuffer))
#define GTK_FILE_CHOOSER_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON, GtkFileChooserButton))
#define GTK_FONT_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_CHOOSER, GtkFontChooser))
#define GTK_FONT_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialog))
#define GTK_FONT_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_CHOOSER_WIDGET, GtkFontChooserWidget))
#define GTK_GRID(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_GRID, GtkGrid))
#define GTK_LEVEL_BAR(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LEVEL_BAR, GtkLevelBar))
#define GTK_MENU_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_BUTTON, GtkMenuButton))
#define GTK_NUMERABLE_ICON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_NUMERABLE_ICON, GtkNumerableIcon))
#define GTK_ORIENTABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ORIENTABLE, GtkOrientable))
#define GTK_OVERLAY(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_OVERLAY, GtkOverlay))
#define GTK_RECENT_ACTION(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_ACTION, GtkRecentAction))
#define GTK_SCALE_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCALE_BUTTON, GtkScaleButton))
#define GTK_SCROLLABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCROLLABLE, GtkScrollable))
#define GTK_SEARCH_ENTRY(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEARCH_ENTRY, GtkSearchEntry))
#define GTK_SPINNER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SPINNER, GtkSpinner))
#define GTK_SWITCH(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SWITCH, GtkSwitch))
#define GTK_TOOLTIP(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLTIP, GtkTooltip))
#define GTK_TOOL_SHELL(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOL_SHELL, GtkToolShell))
#define GTK_VOLUME_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButton))
#define GTK_TOOL_ITEM_GROUP(obj)	(G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroup))
#define GTK_TOOL_PALETTE(obj)	(G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_TYPE_TOOL_PALETTE, GtkToolPalette))
#define GTK_INFO_BAR(obj)	(G_TYPE_CHECK_INSTANCE_CAST((obj), GTK_TYPE_INFO_BAR, GtkInfoBar))
#define GTK_IS_ACTIONABLE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), GTK_TYPE_ACTIONABLE))
#define GTK_IS_APPLICATION_WINDOW(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), GTK_TYPE_APPLICATION_WINDOW))
#define GTK_IS_CSS_PROVIDER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_CSS_PROVIDER))
#define GTK_IS_LOCK_BUTTON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_LOCK_BUTTON))
#define GTK_IS_MOUNT_OPERATION(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_MOUNT_OPERATION))
#define GTK_IS_OFFSCREEN_WINDOW(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_OFFSCREEN_WINDOW))
#define GTK_IS_STYLE_CONTEXT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_STYLE_CONTEXT))
#define GTK_IS_STYLE_PROPERTIES(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_STYLE_PROPERTIES))
#define GTK_IS_STYLE_PROVIDER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_STYLE_PROVIDER))
#define GTK_IS_THEMING_ENGINE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_THEMING_ENGINE))
#define GTK_IS_ACTIVATABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACTIVATABLE))
#define GTK_IS_APPLICATION(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_APPLICATION))
#define GTK_IS_APP_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_APP_CHOOSER))
#define GTK_IS_APP_CHOOSER_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_APP_CHOOSER_BUTTON))
#define GTK_IS_APP_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_APP_CHOOSER_DIALOG))
#define GTK_IS_APP_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_APP_CHOOSER_WIDGET))
#define GTK_IS_BUILDABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUILDABLE))
#define GTK_IS_BUILDER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUILDER))
#define GTK_IS_CELL_AREA(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_AREA))
#define GTK_IS_CELL_AREA_BOX(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_AREA_BOX))
#define GTK_IS_CELL_AREA_CONTEXT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_AREA_CONTEXT))
#define GTK_IS_CELL_RENDERER_SPINNER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_SPINNER))
#define GTK_IS_COLOR_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_CHOOSER))
#define GTK_IS_COLOR_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_CHOOSER_DIALOG))
#define GTK_IS_COLOR_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_CHOOSER_WIDGET))
#define GTK_IS_COMBO_BOX_TEXT(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COMBO_BOX_TEXT))
#define GTK_IS_ENTRY_BUFFER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY_BUFFER))
#define GTK_IS_FILE_CHOOSER_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON))
#define GTK_IS_FONT_CHOOSER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_CHOOSER))
#define GTK_IS_FONT_CHOOSER_DIALOG(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG))
#define GTK_IS_FONT_CHOOSER_WIDGET(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_CHOOSER_WIDGET))
#define GTK_IS_GRID(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_GRID))
#define GTK_IS_LEVEL_BAR(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LEVEL_BAR))
#define GTK_IS_MENU_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_BUTTON))
#define GTK_IS_NUMERABLE_ICON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_NUMERABLE_ICON))
#define GTK_IS_ORIENTABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ORIENTABLE))
#define GTK_IS_OVERLAY(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_OVERLAY))
#define GTK_IS_RECENT_ACTION(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_ACTION))
#define GTK_IS_SCALE_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCALE_BUTTON))
#define GTK_IS_SCROLLABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCROLLABLE))
#define GTK_IS_SEARCH_ENTRY(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEARCH_ENTRY))
#define GTK_IS_SPINNER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SPINNER))
#define GTK_IS_SWITCH(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SWITCH))
#define GTK_IS_TOOLTIP(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLTIP))
#define GTK_IS_TOOL_SHELL(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOL_SHELL))
#define GTK_IS_VOLUME_BUTTON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VOLUME_BUTTON))
#define GTK_IS_TOOL_ITEM_GROUP(obj)	(G_TYPE_CHECK_INSTANCE_TYPE (obj, GTK_TYPE_TOOL_ITEM_GROUP))
#define GTK_IS_TOOL_PALETTE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE (obj, GTK_TYPE_TOOL_PALETTE))
#define GTK_IS_INFO_BAR(obj)	(G_TYPE_CHECK_INSTANCE_TYPE((obj), GTK_TYPE_INFO_BAR))
#define GTK_APPLICATION_WINDOW_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_APPLICATION_WINDOW, GtkApplicationWindowClass))
#define GTK_CSS_PROVIDER_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_CSS_PROVIDER, GtkCssProviderClass))
#define GTK_LOCK_BUTTON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_LOCK_BUTTON, GtkLockButtonClass))
#define GTK_MOUNT_OPERATION_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_MOUNT_OPERATION, GtkMountOperationClass))
#define GTK_OFFSCREEN_WINDOW_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_OFFSCREEN_WINDOW, GtkOffscreenWindowClass))
#define GTK_STYLE_CONTEXT_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_STYLE_CONTEXT, GtkStyleContextClass))
#define GTK_STYLE_PROPERTIES_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_STYLE_PROPERTIES, GtkStylePropertiesClass))
#define GTK_THEMING_ENGINE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_THEMING_ENGINE, GtkThemingEngineClass))
#define GTK_APPLICATION_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_APPLICATION, GtkApplicationClass))
#define GTK_APP_CHOOSER_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_APP_CHOOSER_BUTTON, GtkAppChooserButtonClass))
#define GTK_APP_CHOOSER_DIALOG_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_APP_CHOOSER_DIALOG, GtkAppChooserDialogClass))
#define GTK_APP_CHOOSER_WIDGET_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_APP_CHOOSER_WIDGET, GtkAppChooserWidgetClass))
#define GTK_BUILDER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUILDER, GtkBuilderClass))
#define GTK_CELL_AREA_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_AREA, GtkCellAreaClass))
#define GTK_CELL_AREA_BOX_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_AREA_BOX, GtkCellAreaBoxClass))
#define GTK_CELL_AREA_CONTEXT_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_AREA_CONTEXT, GtkCellAreaContextClass))
#define GTK_CELL_RENDERER_SPINNER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinnerClass))
#define GTK_COLOR_CHOOSER_DIALOG_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_CHOOSER_DIALOG, GtkColorChooserDialogClass))
#define GTK_COLOR_CHOOSER_WIDGET_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_CHOOSER_WIDGET, GtkColorChooserWidgetClass))
#define GTK_COMBO_BOX_TEXT_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COMBO_BOX_TEXT, GtkComboBoxTextClass))
#define GTK_ENTRY_BUFFER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY_BUFFER, GtkEntryBufferClass))
#define GTK_FILE_CHOOSER_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON, GtkFileChooserButtonClass))
#define GTK_FONT_CHOOSER_DIALOG_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialogClass))
#define GTK_FONT_CHOOSER_WIDGET_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_CHOOSER_WIDGET, GtkFontChooserWidgetClass))
#define GTK_GRID_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_GRID, GtkGridClass))
#define GTK_LEVEL_BAR_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LEVEL_BAR, GtkLevelBarClass))
#define GTK_MENU_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_BUTTON, GtkMenuButtonClass))
#define GTK_NUMERABLE_ICON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_NUMERABLE_ICON, GtkNumerableIconClass))
#define GTK_OVERLAY_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_OVERLAY, GtkOverlayClass))
#define GTK_RECENT_ACTION_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_ACTION, GtkRecentActionClass))
#define GTK_SCALE_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCALE_BUTTON, GtkScaleButtonClass))
#define GTK_SEARCH_ENTRY_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SEARCH_ENTRY, GtkSearchEntryClass))
#define GTK_SPINNER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SPINNER, GtkSpinnerClass))
#define GTK_SWITCH_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SWITCH, GtkSwitchClass))
#define GTK_TOOL_ITEM_GROUP_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroupClass))
#define GTK_TOOL_PALETTE_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOL_PALETTE, GtkToolPaletteClass))
#define GTK_TREE_MODEL_FILTER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_MODEL_FILTER, GtkTreeModelFilterClass))
#define GTK_VOLUME_BUTTON_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButtonClass))
#define GTK_INFO_BAR_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_INFO_BAR, GtkInfoBarClass))
#define GTK_ACTIONABLE_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_ACTIONABLE, GtkActionableInterface))
#define GTK_COLOR_CHOOSER_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_COLOR_CHOOSER, GtkColorChooserInterface))
#define GTK_EDITABLE_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_EDITABLE, GtkEditableInterface))
#define GTK_FONT_CHOOSER_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_FONT_CHOOSER, GtkFontChooserIface))
#define GTK_ORIENTABLE_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_ORIENTABLE, GtkOrientableIface))
#define GTK_SCROLLABLE_GET_IFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_SCROLLABLE, GtkScrollableInterface))
#define GTK_STYLE_PROVIDER_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE ((o), GTK_TYPE_STYLE_PROVIDER, GtkStyleProviderIface))
#define GTK_ACTIVATABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatableIface))
#define GTK_BUILDABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_BUILDABLE, GtkBuildableIface))
#define GTK_TOOL_SHELL_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TOOL_SHELL, GtkToolShellIface))
#define GTK_PATH_PRIO_MASK	0x0f
#define GTK_STYLE_PROVIDER_PRIORITY_FALLBACK	1
#define GTK_STYLE_PROVIDER_PRIORITY_THEME	200
#define GTK_STYLE_PROVIDER_PRIORITY_SETTINGS	400
#define GTK_STYLE_PROVIDER_PRIORITY_APPLICATION	600
#define GTK_STYLE_PROVIDER_PRIORITY_USER	800
#define GTK_STYLE_CLASS_ACCELERATOR	"accelerator"
#define GTK_STYLE_CLASS_ARROW	"arrow"
#define GTK_STYLE_CLASS_BACKGROUND	"background"
#define GTK_STYLE_PROPERTY_BACKGROUND_COLOR	"background-color"
#define GTK_STYLE_PROPERTY_BACKGROUND_IMAGE	"background-image"
#define GTK_STYLE_PROPERTY_BORDER_COLOR	"border-color"
#define GTK_STYLE_PROPERTY_BORDER_RADIUS	"border-radius"
#define GTK_STYLE_PROPERTY_BORDER_STYLE	"border-style"
#define GTK_STYLE_PROPERTY_BORDER_WIDTH	"border-width"
#define GTK_STYLE_CLASS_BOTTOM	"bottom"
#define GTK_STYLE_CLASS_BUTTON	"button"
#define GTK_STYLE_CLASS_CALENDAR	"calendar"
#define GTK_STYLE_CLASS_CELL	"cell"
#define GTK_STYLE_CLASS_CHECK	"check"
#define GTK_STYLE_PROPERTY_COLOR	"color"
#define GTK_STYLE_REGION_COLUMN	"column"
#define GTK_STYLE_REGION_COLUMN_HEADER	"column-header"
#define GTK_STYLE_CLASS_COMBOBOX_ENTRY	"combobox-entry"
#define GTK_STYLE_CLASS_CURSOR_HANDLE	"cursor-handle"
#define GTK_STYLE_CLASS_DEFAULT	"default"
#define GTK_STYLE_CLASS_DIM_LABEL	"dim-label"
#define GTK_STYLE_CLASS_DND	"dnd"
#define GTK_STYLE_CLASS_DOCK	"dock"
#define GTK_STYLE_CLASS_ENTRY	"entry"
#define GTK_STYLE_CLASS_ERROR	"error"
#define GTK_STYLE_CLASS_EXPANDER	"expander"
#define GTK_STYLE_PROPERTY_FONT	"font"
#define GTK_STYLE_CLASS_FRAME	"frame"
#define GTK_STYLE_CLASS_GRIP	"grip"
#define GTK_STOCK_CAPS_LOCK_WARNING	"gtk-caps-lock-warning"
#define GTK_STOCK_DISCARD	"gtk-discard"
#define GTK_STOCK_ORIENTATION_LANDSCAPE	"gtk-orientation-landscape"
#define GTK_STOCK_ORIENTATION_PORTRAIT	"gtk-orientation-portrait"
#define GTK_STOCK_ORIENTATION_REVERSE_LANDSCAPE	"gtk-orientation-reverse-landscape"
#define GTK_STOCK_ORIENTATION_REVERSE_PORTRAIT	"gtk-orientation-reverse-portrait"
#define GTK_STOCK_PAGE_SETUP	"gtk-page-setup"
#define GTK_STOCK_PRINT_ERROR	"gtk-print-error"
#define GTK_STOCK_PRINT_PAUSED	"gtk-print-paused"
#define GTK_STOCK_PRINT_REPORT	"gtk-print-report"
#define GTK_STOCK_PRINT_WARNING	"gtk-print-warning"
#define gtk_binary_age	gtk_get_binary_age ()
#define gtk_interface_age	gtk_get_interface_age ()
#define gtk_major_version	gtk_get_major_version ()
#define gtk_micro_version	gtk_get_micro_version ()
#define gtk_minor_version	gtk_get_minor_version ()
#define GTK_UNIT_PIXEL	GTK_UNIT_NONE
#define GTK_ENTRY_BUFFER_MAX_SIZE	G_MAXUSHORT
#define GTK_CELL_AREA_WARN_INVALID_CELL_PROPERTY_ID(object,property_id,pspec)	G_OBJECT_WARN_INVALID_PSPEC ((object), "cell property id", (property_id), (pspec))
#define GTK_BUILDER_WARN_INVALID_CHILD_TYPE(object,type)	g_warning ("'%s' is not a valid child type of '%s'", type, g_type_name (G_OBJECT_TYPE (object)))
#define GTK_STYLE_CLASS_HEADER	"header"
#define GTK_LEVEL_BAR_OFFSET_HIGH	"high"
#define GTK_STYLE_CLASS_HIGHLIGHT	"highlight"
#define GTK_STYLE_CLASS_HORIZONTAL	"horizontal"
#define GTK_STYLE_CLASS_IMAGE	"image"
#define GTK_STYLE_CLASS_INFO	"info"
#define GTK_STYLE_CLASS_INLINE_TOOLBAR	"inline-toolbar"
#define GTK_STYLE_CLASS_LEFT	"left"
#define GTK_STYLE_CLASS_LEVEL_BAR	"level-bar"
#define GTK_STYLE_CLASS_LINKED	"linked"
#define GTK_LEVEL_BAR_OFFSET_LOW	"low"
#define GTK_STYLE_PROPERTY_MARGIN	"margin"
#define GTK_STYLE_CLASS_MARK	"mark"
#define GTK_STYLE_CLASS_MENU	"menu"
#define GTK_STYLE_CLASS_MENUBAR	"menubar"
#define GTK_STYLE_CLASS_MENUITEM	"menuitem"
#define GTK_STYLE_CLASS_NOTEBOOK	"notebook"
#define GTK_STYLE_CLASS_OSD	"osd"
#define GTK_PRINT_SETTINGS_OUTPUT_BASENAME	"output-basename"
#define GTK_PRINT_SETTINGS_OUTPUT_DIR	"output-dir"
#define GTK_STYLE_PROPERTY_PADDING	"padding"
#define GTK_STYLE_CLASS_PANE_SEPARATOR	"pane-separator"
#define GTK_STYLE_CLASS_PRIMARY_TOOLBAR	"primary-toolbar"
#define GTK_STYLE_CLASS_PROGRESSBAR	"progressbar"
#define GTK_STYLE_CLASS_PULSE	"pulse"
#define GTK_STYLE_CLASS_QUESTION	"question"
#define GTK_STYLE_CLASS_RADIO	"radio"
#define GTK_STYLE_CLASS_RAISED	"raised"
#define GTK_STYLE_CLASS_RIGHT	"right"
#define GTK_STYLE_REGION_ROW	"row"
#define GTK_STYLE_CLASS_RUBBERBAND	"rubberband"
#define GTK_STYLE_CLASS_SCALE	"scale"
#define GTK_STYLE_CLASS_SCALE_HAS_MARKS_ABOVE	"scale-has-marks-above"
#define GTK_STYLE_CLASS_SCALE_HAS_MARKS_BELOW	"scale-has-marks-below"
#define GTK_STYLE_CLASS_SCROLLBAR	"scrollbar"
#define GTK_STYLE_CLASS_SCROLLBARS_JUNCTION	"scrollbars-junction"
#define GTK_STYLE_CLASS_SEPARATOR	"separator"
#define GTK_STYLE_CLASS_SIDEBAR	"sidebar"
#define GTK_STYLE_CLASS_SLIDER	"slider"
#define GTK_STYLE_CLASS_SPINBUTTON	"spinbutton"
#define GTK_STYLE_CLASS_SPINNER	"spinner"
#define GTK_STYLE_REGION_TAB	"tab"
#define GTK_STYLE_CLASS_TOOLBAR	"toolbar"
#define GTK_STYLE_CLASS_TOOLTIP	"tooltip"
#define GTK_STYLE_CLASS_TOP	"top"
#define GTK_STYLE_CLASS_TROUGH	"trough"
#define GTK_STYLE_CLASS_VERTICAL	"vertical"
#define GTK_STYLE_CLASS_VIEW	"view"
#define GTK_STYLE_CLASS_WARNING	"warning"


    typedef struct _GtkSettingsPrivate GtkSettingsPrivate;

    typedef struct _GtkSettingsClass GtkSettingsClass;

    typedef struct _GtkSettingsValue GtkSettingsValue;

    typedef struct _GtkScaleButton GtkScaleButton;

    typedef struct _GtkScaleButtonClass GtkScaleButtonClass;

    typedef struct _GtkScaleButtonPrivate GtkScaleButtonPrivate;

    typedef struct _GtkComboBoxText GtkComboBoxText;

    typedef struct _GtkComboBoxTextPrivate GtkComboBoxTextPrivate;

    typedef struct _GtkComboBoxTextClass GtkComboBoxTextClass;

    typedef struct _GtkToolItemGroup GtkToolItemGroup;

    typedef struct _GtkToolItemGroupClass GtkToolItemGroupClass;

    typedef struct _GtkToolItemGroupPrivate GtkToolItemGroupPrivate;

    typedef struct _GtkAdjustmentPrivate GtkAdjustmentPrivate;

    typedef struct _GtkAdjustmentClass GtkAdjustmentClass;

    typedef struct _GtkTextChildAnchor GtkTextChildAnchor;

    typedef struct _GtkTextChildAnchorClass GtkTextChildAnchorClass;

    typedef enum {
	GTK_TEXT_SEARCH_VISIBLE_ONLY,
	GTK_TEXT_SEARCH_TEXT_ONLY,
	GTK_TEXT_SEARCH_CASE_INSENSITIVE
    } GtkTextSearchFlags;

    typedef struct _GtkTextBuffer GtkTextBuffer;

    typedef gboolean(*GtkTextCharPredicate) (void);

    typedef struct _GtkSearchEntry GtkSearchEntry;

    typedef struct _GtkSearchEntryClass GtkSearchEntryClass;

    typedef struct _GtkPrintSettings GtkPrintSettings;

    typedef void (*GtkPrintSettingsFunc) (const gchar * key,
					  const gchar * value,
					  gpointer user_data);

    typedef struct _GtkPageRange GtkPageRange;

    typedef struct _GtkEventBox GtkEventBox;

    typedef struct _GtkEventBoxClass GtkEventBoxClass;

    typedef struct _GtkEventBoxPrivate GtkEventBoxPrivate;

    typedef struct _GtkActivatable GtkActivatable;

    typedef struct _GtkActivatableIface GtkActivatableIface;

    typedef struct _GtkMisc GtkMisc;

    typedef struct _GtkMiscPrivate GtkMiscPrivate;

    typedef struct _GtkMiscClass GtkMiscClass;

    typedef struct _GtkColorChooserDialog GtkColorChooserDialog;

    typedef struct _GtkColorChooserDialogPrivate
	GtkColorChooserDialogPrivate;

    typedef struct _GtkColorChooserDialogClass GtkColorChooserDialogClass;

    typedef struct _GtkBin GtkBin;

    typedef struct _GtkBinPrivate GtkBinPrivate;

    typedef struct _GtkBinClass GtkBinClass;

    typedef struct _GtkPrintContext GtkPrintContext;

    typedef enum {
	GTK_UPDATE_ALWAYS,
	GTK_UPDATE_IF_VALID
    } GtkSpinButtonUpdatePolicy;

    typedef enum {
	GTK_SPIN_STEP_FORWARD,
	GTK_SPIN_STEP_BACKWARD,
	GTK_SPIN_PAGE_FORWARD,
	GTK_SPIN_PAGE_BACKWARD,
	GTK_SPIN_HOME,
	GTK_SPIN_END,
	GTK_SPIN_USER_DEFINED
    } GtkSpinType;

    typedef struct _GtkSpinButton GtkSpinButton;

    typedef struct _GtkSpinButtonPrivate GtkSpinButtonPrivate;

    typedef struct _GtkSpinButtonClass GtkSpinButtonClass;

    typedef struct _GtkToolButton GtkToolButton;

    typedef struct _GtkToolButtonClass GtkToolButtonClass;

    typedef struct _GtkToolButtonPrivate GtkToolButtonPrivate;

    typedef struct _GtkIMContext GtkIMContext;

    typedef struct _GtkIMContextClass GtkIMContextClass;

    typedef struct _GtkToolShell GtkToolShell;

    typedef struct _GtkToolShellIface GtkToolShellIface;

    typedef struct _GtkToggleButton GtkToggleButton;

    typedef struct _GtkToggleButtonPrivate GtkToggleButtonPrivate;

    typedef struct _GtkToggleButtonClass GtkToggleButtonClass;

    typedef struct _GtkMenuShell GtkMenuShell;

    typedef struct _GtkMenuShellClass GtkMenuShellClass;

    typedef struct _GtkMenuShellPrivate GtkMenuShellPrivate;

    typedef struct _GtkFileChooserDialog GtkFileChooserDialog;

    typedef struct _GtkFileChooserDialogPrivate
	GtkFileChooserDialogPrivate;

    typedef struct _GtkFileChooserDialogClass GtkFileChooserDialogClass;

    typedef struct _GtkRecentInfo GtkRecentInfo;

    typedef struct _GtkRecentData GtkRecentData;

    typedef struct _GtkRecentManager GtkRecentManager;

    typedef struct _GtkRecentManagerClass GtkRecentManagerClass;

    typedef struct _GtkRecentManagerPrivate GtkRecentManagerPrivate;

    typedef struct _GtkFileChooserWidget GtkFileChooserWidget;

    typedef struct _GtkFileChooserWidgetPrivate
	GtkFileChooserWidgetPrivate;

    typedef struct _GtkFileChooserWidgetClass GtkFileChooserWidgetClass;

    typedef struct _GtkIMContextSimple GtkIMContextSimple;

    typedef struct _GtkIMContextSimplePrivate GtkIMContextSimplePrivate;

    typedef struct _GtkIMContextSimpleClass GtkIMContextSimpleClass;

    typedef struct _GtkRadioButton GtkRadioButton;

    typedef struct _GtkRadioButtonPrivate GtkRadioButtonPrivate;

    typedef struct _GtkRadioButtonClass GtkRadioButtonClass;

    typedef struct _GtkSeparatorMenuItem GtkSeparatorMenuItem;

    typedef struct _GtkSeparatorMenuItemClass GtkSeparatorMenuItemClass;

    typedef struct _GtkPageSetup GtkPageSetup;

    typedef struct _GtkWidget GtkWidget;	   /* XXX move from below */

    typedef gint(*GtkKeySnoopFunc) (GtkWidget * grab_widget,
				    GdkEventKey * event,
				    gpointer func_data);

    typedef struct _GtkLinkButton GtkLinkButton;

    typedef struct _GtkLinkButtonClass GtkLinkButtonClass;

    typedef struct _GtkLinkButtonPrivate GtkLinkButtonPrivate;

    typedef struct _GtkAdjustment GtkAdjustment;

    typedef struct _GtkClipboard GtkClipboard;

    typedef struct _GtkIconSet GtkIconSet;

    typedef struct _GtkIconSource GtkIconSource;

    typedef struct _GtkRcStyle GtkRcStyle;

    typedef struct _GtkRequisition GtkRequisition;

    typedef struct _GtkSelectionData GtkSelectionData;

    typedef struct _GtkSettings GtkSettings;

    typedef struct _GtkStyle GtkStyle;

    typedef struct _GtkStyleContext GtkStyleContext;

    typedef struct _GtkTooltip GtkTooltip;

    /* typedef struct _GtkWidget GtkWidget;		XXX move up */

    typedef struct _GtkWidgetPath GtkWidgetPath;

    typedef struct _GtkWindow GtkWindow;

    typedef gboolean(*GtkRcPropertyParser) (const GParamSpec * pspec,
					    const GString * rc_string,
					    GValue * property_value);

    typedef struct _GtkRange GtkRange;

    typedef struct _GtkRangePrivate GtkRangePrivate;

    typedef struct _GtkRangeClass GtkRangeClass;

    typedef struct _GtkTextMark GtkTextMark;

    typedef struct _GtkTextMarkClass GtkTextMarkClass;

    typedef struct _GtkTreeSelectionPrivate GtkTreeSelectionPrivate;

    typedef struct _GtkCellRenderer GtkCellRenderer;  /* XXX move from below */

    typedef struct _GtkTreeIter GtkTreeIter;	      /* XXX move from below */

    typedef struct _GtkTreePath GtkTreePath;	      /* XXX move from below */

    typedef struct _GtkTreeModel GtkTreeModel;	      /* XXX move from below */

    typedef struct _GtkTreeSelection GtkTreeSelection;/* XXX move from below */

    typedef gboolean(*GtkTreeSelectionFunc) (GtkTreeSelection * selection,
					     GtkTreeModel * model,
					     GtkTreePath * path,
					     gboolean
					     path_currently_selected,
					     gpointer data);

    typedef void (*GtkTreeSelectionForeachFunc) (GtkTreeModel * model,
						 GtkTreePath * path,
						 GtkTreeIter * iter,
						 gpointer data);

    typedef struct _GtkSeparator GtkSeparator;

    typedef struct _GtkSeparatorPrivate GtkSeparatorPrivate;

    typedef struct _GtkSeparatorClass GtkSeparatorClass;

    typedef struct _GtkTreeViewColumn GtkTreeViewColumn;

    typedef struct _GtkTreeViewColumnClass GtkTreeViewColumnClass;

    typedef struct _GtkTreeViewColumnPrivate GtkTreeViewColumnPrivate;

    typedef enum {
	GTK_TREE_VIEW_COLUMN_GROW_ONLY,
	GTK_TREE_VIEW_COLUMN_AUTOSIZE,
	GTK_TREE_VIEW_COLUMN_FIXED
    } GtkTreeViewColumnSizing;

    typedef void (*GtkTreeCellDataFunc) (GtkTreeViewColumn * tree_column,
					 GtkCellRenderer * cell,
					 GtkTreeModel * tree_model,
					 GtkTreeIter * iter,
					 gpointer data);

    typedef struct _GtkTreeModelSort GtkTreeModelSort;

    typedef struct _GtkTreeModelSortClass GtkTreeModelSortClass;

    typedef struct _GtkTreeModelSortPrivate GtkTreeModelSortPrivate;

    typedef struct _GtkViewport GtkViewport;

    typedef struct _GtkViewportPrivate GtkViewportPrivate;

    typedef struct _GtkViewportClass GtkViewportClass;

    typedef struct _GtkStatusIcon GtkStatusIcon;

    typedef struct _GtkStatusIconClass GtkStatusIconClass;

    typedef struct _GtkStatusIconPrivate GtkStatusIconPrivate;

    typedef struct _GtkBox GtkBox;

    typedef struct _GtkBoxPrivate GtkBoxPrivate;

    typedef struct _GtkBoxClass GtkBoxClass;

    typedef struct _GtkCalendar GtkCalendar;

    typedef struct _GtkCalendarClass GtkCalendarClass;

    typedef struct _GtkCalendarPrivate GtkCalendarPrivate;

    typedef enum {
	GTK_CALENDAR_SHOW_HEADING,
	GTK_CALENDAR_SHOW_DAY_NAMES,
	GTK_CALENDAR_NO_MONTH_CHANGE,
	GTK_CALENDAR_SHOW_WEEK_NUMBERS,
	GTK_CALENDAR_SHOW_DETAILS
    } GtkCalendarDisplayOptions;

    typedef gchar *(*GtkCalendarDetailFunc) (GtkCalendar * calendar,
					     guint year, guint month,
					     guint day,
					     gpointer user_data);

    typedef struct _GtkCellRendererProgress GtkCellRendererProgress;

    typedef struct _GtkCellRendererProgressClass
	GtkCellRendererProgressClass;

    typedef struct _GtkCellRendererProgressPrivate
	GtkCellRendererProgressPrivate;

    typedef enum {
	GTK_DIALOG_MODAL = 1 << 0,
	GTK_DIALOG_DESTROY_WITH_PARENT = 1 << 1
    } GtkDialogFlags;

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

    typedef struct _GtkDialog GtkDialog;

    typedef struct _GtkDialogPrivate GtkDialogPrivate;

    typedef struct _GtkDialogClass GtkDialogClass;

    typedef struct _GtkActionableInterface GtkActionableInterface;

    typedef struct _GtkActionable GtkActionable;

    typedef struct _GtkListStore GtkListStore;

    typedef struct _GtkListStorePrivate GtkListStorePrivate;

    typedef struct _GtkListStoreClass GtkListStoreClass;

    typedef enum {
	GTK_RECENT_SORT_NONE = 0,
	GTK_RECENT_SORT_MRU = 1,
	GTK_RECENT_SORT_LRU = 2,
	GTK_RECENT_SORT_CUSTOM = 3
    } GtkRecentSortType;

    typedef gint(*GtkRecentSortFunc) (GtkRecentInfo * a, GtkRecentInfo * b,
				      gpointer user_data);

    typedef struct _GtkRecentChooser GtkRecentChooser;

    typedef struct _GtkRecentChooserIface GtkRecentChooserIface;

    typedef enum {
	GTK_RECENT_CHOOSER_ERROR_NOT_FOUND,
	GTK_RECENT_CHOOSER_ERROR_INVALID_URI
    } GtkRecentChooserError;

    typedef struct _GtkScrollable GtkScrollable;

    typedef struct _GtkScrollableInterface GtkScrollableInterface;

    typedef struct _GtkRadioAction GtkRadioAction;

    typedef struct _GtkRadioActionPrivate GtkRadioActionPrivate;

    typedef struct _GtkRadioActionClass GtkRadioActionClass;

    typedef struct _GtkRecentChooserWidget GtkRecentChooserWidget;

    typedef struct _GtkRecentChooserWidgetClass
	GtkRecentChooserWidgetClass;

    typedef struct _GtkRecentChooserWidgetPrivate
	GtkRecentChooserWidgetPrivate;

    typedef struct _GtkPlug GtkPlug;

    typedef struct _GtkPlugPrivate GtkPlugPrivate;

    typedef struct _GtkPlugClass GtkPlugClass;

    typedef void (*GtkClipboardReceivedFunc) (GtkClipboard * clipboard,
					      GtkSelectionData *
					      selection_data,
					      gpointer data);

    typedef void (*GtkClipboardTextReceivedFunc) (GtkClipboard * clipboard,
						  const gchar * text,
						  gpointer data);

    typedef void (*GtkClipboardRichTextReceivedFunc) (GtkClipboard *
						      clipboard,
						      GdkAtom format,
						      const guint8 * text,
						      gsize length,
						      gpointer data);

    typedef void (*GtkClipboardImageReceivedFunc) (GtkClipboard *
						   clipboard,
						   GdkPixbuf * pixbuf,
						   gpointer data);

    typedef void (*GtkClipboardURIReceivedFunc) (GtkClipboard * clipboard,
						 gchar * *uris,
						 gpointer data);

    typedef void (*GtkClipboardTargetsReceivedFunc) (GtkClipboard *
						     clipboard,
						     GdkAtom * atoms,
						     gint n_atoms,
						     gpointer data);

    typedef void (*GtkClipboardGetFunc) (GtkClipboard * clipboard,
					 GtkSelectionData * selection_data,
					 guint info,
					 gpointer user_data_or_owner);

    typedef void (*GtkClipboardClearFunc) (GtkClipboard * clipboard,
					   gpointer user_data_or_owner);

    typedef enum {
	GTK_NOTEBOOK_TAB_FIRST,
	GTK_NOTEBOOK_TAB_LAST
    } GtkNotebookTab;

    typedef struct _GtkNotebook GtkNotebook;

    typedef struct _GtkNotebookPrivate GtkNotebookPrivate;

    typedef struct _GtkNotebookClass GtkNotebookClass;

    typedef struct _GtkLockButton GtkLockButton;

    typedef struct _GtkLockButtonClass GtkLockButtonClass;

    typedef struct _GtkLockButtonPrivate GtkLockButtonPrivate;

    typedef struct _GtkTreeDragSource GtkTreeDragSource;

    typedef struct _GtkTreeDragSourceIface GtkTreeDragSourceIface;

    typedef struct _GtkTreeDragDest GtkTreeDragDest;

    typedef struct _GtkTreeDragDestIface GtkTreeDragDestIface;

    typedef struct _GtkLayout GtkLayout;

    typedef struct _GtkLayoutPrivate GtkLayoutPrivate;

    typedef struct _GtkLayoutClass GtkLayoutClass;

    typedef struct _GtkGrid GtkGrid;

    typedef struct _GtkGridPrivate GtkGridPrivate;

    typedef struct _GtkGridClass GtkGridClass;

    typedef struct _GtkEntryBuffer GtkEntryBuffer;

    typedef struct _GtkEntryBufferClass GtkEntryBufferClass;

    typedef struct _GtkEntryBufferPrivate GtkEntryBufferPrivate;

    typedef struct _GtkRequestedSize GtkRequestedSize;

    typedef struct _GtkFileFilter GtkFileFilter;

    typedef struct _GtkFileFilterInfo GtkFileFilterInfo;

    typedef enum {
	GTK_FILE_FILTER_FILENAME,
	GTK_FILE_FILTER_URI,
	GTK_FILE_FILTER_DISPLAY_NAME,
	GTK_FILE_FILTER_MIME_TYPE
    } GtkFileFilterFlags;

    typedef gboolean(*GtkFileFilterFunc) (const GtkFileFilterInfo *
					  filter_info, gpointer data);

    typedef struct _GtkThemingEngine GtkThemingEngine;

    typedef struct GtkThemingEnginePrivate GtkThemingEnginePrivate;

    typedef struct _GtkThemingEngineClass GtkThemingEngineClass;

    typedef gboolean(*GtkFontFilterFunc) (const PangoFontFamily * family,
					  const PangoFontFace * face,
					  gpointer data);

    typedef struct _GtkFontChooser GtkFontChooser;

    typedef struct _GtkFontChooserIface GtkFontChooserIface;

    typedef struct _GtkAppChooserButton GtkAppChooserButton;

    typedef struct _GtkAppChooserButtonClass GtkAppChooserButtonClass;

    typedef struct _GtkAppChooserButtonPrivate GtkAppChooserButtonPrivate;

    typedef struct _GtkCellRendererSpinner GtkCellRendererSpinner;

    typedef struct _GtkCellRendererSpinnerClass
	GtkCellRendererSpinnerClass;

    typedef struct _GtkCellRendererSpinnerPrivate
	GtkCellRendererSpinnerPrivate;

    typedef struct _GtkMountOperation GtkMountOperation;

    typedef struct _GtkMountOperationClass GtkMountOperationClass;

    typedef struct _GtkMountOperationPrivate GtkMountOperationPrivate;

    typedef enum {
	GTK_WIDGET_HELP_TOOLTIP,
	GTK_WIDGET_HELP_WHATS_THIS
    } GtkWidgetHelpType;

    typedef struct _GtkWidgetPrivate GtkWidgetPrivate;

    typedef struct _GtkWidgetClass GtkWidgetClass;

    typedef struct _GtkWidgetClassPrivate GtkWidgetClassPrivate;

    typedef struct _GtkWidgetAuxInfo GtkWidgetAuxInfo;

    typedef struct _cairo_rectangle_int GtkAllocation;

    typedef void (*GtkCallback) (void);

    typedef struct _GtkTreeStore GtkTreeStore;

    typedef struct _GtkTreeStoreClass GtkTreeStoreClass;

    typedef struct _GtkTreeStorePrivate GtkTreeStorePrivate;

    typedef gchar *(*GtkTranslateFunc) (const char *path,
					gpointer func_data);

    typedef struct _GtkStockItem GtkStockItem;

    typedef enum {
	GTK_ENTRY_ICON_PRIMARY,
	GTK_ENTRY_ICON_SECONDARY
    } GtkEntryIconPosition;

    typedef struct _GtkEntry GtkEntry;

    typedef struct _GtkEntryPrivate GtkEntryPrivate;

    typedef struct _GtkEntryClass GtkEntryClass;

    typedef struct _GtkColorChooser GtkColorChooser;

    typedef struct _GtkColorChooserInterface GtkColorChooserInterface;

    typedef struct _GtkAccelLabel GtkAccelLabel;

    typedef struct _GtkAccelLabelClass GtkAccelLabelClass;

    typedef struct _GtkAccelLabelPrivate GtkAccelLabelPrivate;

    typedef struct _GtkMenuButton GtkMenuButton;

    typedef struct _GtkMenuButtonClass GtkMenuButtonClass;

    typedef struct _GtkMenuButtonPrivate GtkMenuButtonPrivate;

    typedef struct _GtkAppChooserDialog GtkAppChooserDialog;

    typedef struct _GtkAppChooserDialogClass GtkAppChooserDialogClass;

    typedef struct _GtkAppChooserDialogPrivate GtkAppChooserDialogPrivate;

    typedef struct _GtkColorButton GtkColorButton;

    typedef struct _GtkColorButtonClass GtkColorButtonClass;

    typedef struct _GtkColorButtonPrivate GtkColorButtonPrivate;

    typedef struct _GtkUIManager GtkUIManager;

    typedef struct _GtkUIManagerClass GtkUIManagerClass;

    typedef struct _GtkUIManagerPrivate GtkUIManagerPrivate;

    typedef enum {
	GTK_UI_MANAGER_AUTO,
	GTK_UI_MANAGER_MENUBAR,
	GTK_UI_MANAGER_MENU,
	GTK_UI_MANAGER_TOOLBAR,
	GTK_UI_MANAGER_PLACEHOLDER,
	GTK_UI_MANAGER_POPUP,
	GTK_UI_MANAGER_MENUITEM,
	GTK_UI_MANAGER_TOOLITEM,
	GTK_UI_MANAGER_SEPARATOR,
	GTK_UI_MANAGER_ACCELERATOR,
	GTK_UI_MANAGER_POPUP_WITH_ACCELS
    } GtkUIManagerItemType;

    typedef struct _GtkToggleToolButton GtkToggleToolButton;

    typedef struct _GtkToggleToolButtonClass GtkToggleToolButtonClass;

    typedef struct _GtkToggleToolButtonPrivate GtkToggleToolButtonPrivate;

    typedef struct _GtkCellRendererAccel GtkCellRendererAccel;

    typedef struct _GtkCellRendererAccelPrivate
	GtkCellRendererAccelPrivate;

    typedef struct _GtkCellRendererAccelClass GtkCellRendererAccelClass;

    typedef enum {
	GTK_CELL_RENDERER_ACCEL_MODE_GTK,
	GTK_CELL_RENDERER_ACCEL_MODE_OTHER
    } GtkCellRendererAccelMode;

    typedef struct _GtkOverlay GtkOverlay;

    typedef struct _GtkOverlayClass GtkOverlayClass;

    typedef struct _GtkOverlayPrivate GtkOverlayPrivate;

    typedef enum {
	GTK_TEXT_WINDOW_PRIVATE,
	GTK_TEXT_WINDOW_WIDGET,
	GTK_TEXT_WINDOW_TEXT,
	GTK_TEXT_WINDOW_LEFT,
	GTK_TEXT_WINDOW_RIGHT,
	GTK_TEXT_WINDOW_TOP,
	GTK_TEXT_WINDOW_BOTTOM
    } GtkTextWindowType;

    typedef struct _GtkTextView GtkTextView;

    typedef struct _GtkTextViewPrivate GtkTextViewPrivate;

    typedef struct _GtkTextViewClass GtkTextViewClass;

    typedef struct _GtkInfoBarPrivate GtkInfoBarPrivate;

    typedef struct _GtkInfoBarClass GtkInfoBarClass;

    typedef struct _GtkInfoBar GtkInfoBar;

    typedef struct _GtkRecentAction GtkRecentAction;

    typedef struct _GtkRecentActionPrivate GtkRecentActionPrivate;

    typedef struct _GtkRecentActionClass GtkRecentActionClass;

    typedef struct _GtkNumerableIcon GtkNumerableIcon;

    typedef struct _GtkNumerableIconClass GtkNumerableIconClass;

    typedef struct _GtkNumerableIconPrivate GtkNumerableIconPrivate;

    typedef void (*GtkTextTagTableForeach) (void);

    typedef struct _GtkTextTagTablePrivate GtkTextTagTablePrivate;

    typedef struct _GtkTextTagTableClass GtkTextTagTableClass;

    typedef struct _GtkRecentFilter GtkRecentFilter;

    typedef struct _GtkRecentFilterInfo GtkRecentFilterInfo;

    typedef enum {
	GTK_RECENT_FILTER_URI = 1 << 0,
	GTK_RECENT_FILTER_DISPLAY_NAME = 1 << 1,
	GTK_RECENT_FILTER_MIME_TYPE = 1 << 2,
	GTK_RECENT_FILTER_APPLICATION = 1 << 3,
	GTK_RECENT_FILTER_GROUP = 1 << 4,
	GTK_RECENT_FILTER_AGE = 1 << 5
    } GtkRecentFilterFlags;

    typedef gboolean(*GtkRecentFilterFunc) (const GtkRecentFilterInfo *
					    filter_info,
					    gpointer user_data);

    typedef struct _GtkSwitch GtkSwitch;

    typedef struct _GtkSwitchPrivate GtkSwitchPrivate;

    typedef struct _GtkSwitchClass GtkSwitchClass;

    typedef enum {
	GTK_CELL_RENDERER_SELECTED = 1 << 0,
	GTK_CELL_RENDERER_PRELIT = 1 << 1,
	GTK_CELL_RENDERER_INSENSITIVE = 1 << 2,
	GTK_CELL_RENDERER_SORTED = 1 << 3,
	GTK_CELL_RENDERER_FOCUSED = 1 << 4,
	GTK_CELL_RENDERER_EXPANDABLE = 1 << 5,
	GTK_CELL_RENDERER_EXPANDED = 1 << 6
    } GtkCellRendererState;

    typedef enum {
	GTK_CELL_RENDERER_MODE_INERT,
	GTK_CELL_RENDERER_MODE_ACTIVATABLE,
	GTK_CELL_RENDERER_MODE_EDITABLE
    } GtkCellRendererMode;

    /* typedef struct _GtkCellRenderer GtkCellRenderer;  XXX move up */

    typedef struct _GtkCellRendererPrivate GtkCellRendererPrivate;

    typedef struct _GtkCellRendererClass GtkCellRendererClass;

    typedef struct _GtkCellRendererClassPrivate
	GtkCellRendererClassPrivate;

    typedef struct _GtkTargetList GtkTargetList;

    typedef struct _GtkTargetEntry GtkTargetEntry;

    typedef struct _GtkMenuBar GtkMenuBar;

    typedef struct _GtkMenuBarPrivate GtkMenuBarPrivate;

    typedef struct _GtkMenuBarClass GtkMenuBarClass;

    typedef struct _GtkFrame GtkFrame;

    typedef struct _GtkFramePrivate GtkFramePrivate;

    typedef struct _GtkFrameClass GtkFrameClass;

    typedef enum {
	GTK_ASSISTANT_PAGE_CONTENT = 0,
	GTK_ASSISTANT_PAGE_INTRO = 1,
	GTK_ASSISTANT_PAGE_CONFIRM = 2,
	GTK_ASSISTANT_PAGE_SUMMARY = 3,
	GTK_ASSISTANT_PAGE_PROGRESS = 4,
	GTK_ASSISTANT_PAGE_CUSTOM = 5
    } GtkAssistantPageType;

    typedef struct _GtkAssistant GtkAssistant;

    typedef struct _GtkAssistantPrivate GtkAssistantPrivate;

    typedef struct _GtkAssistantClass GtkAssistantClass;

    typedef gint(*GtkAssistantPageFunc) (gint current_page, gpointer data);

    typedef struct _GtkBorder GtkBorder;

    typedef struct _GtkToolItem GtkToolItem;

    typedef struct _GtkToolItemClass GtkToolItemClass;

    typedef struct _GtkToolItemPrivate GtkToolItemPrivate;

    typedef struct _GtkTextAttributes GtkTextAttributes;

    typedef struct _GtkTextAppearance GtkTextAppearance;

    typedef struct _GtkCellRendererSpin GtkCellRendererSpin;

    typedef struct _GtkCellRendererSpinClass GtkCellRendererSpinClass;

    typedef struct _GtkCellRendererSpinPrivate GtkCellRendererSpinPrivate;

    typedef struct _GtkIMMulticontext GtkIMMulticontext;

    typedef struct _GtkIMMulticontextClass GtkIMMulticontextClass;

    typedef struct _GtkIMMulticontextPrivate GtkIMMulticontextPrivate;

    typedef struct _GtkCellAreaBox GtkCellAreaBox;

    typedef struct _GtkCellAreaBoxClass GtkCellAreaBoxClass;

    typedef struct _GtkCellAreaBoxPrivate GtkCellAreaBoxPrivate;

    typedef struct _GtkFontChooserDialog GtkFontChooserDialog;

    typedef struct _GtkFontChooserDialogPrivate
	GtkFontChooserDialogPrivate;

    typedef struct _GtkFontChooserDialogClass GtkFontChooserDialogClass;

    typedef struct _GtkPrintOperationPreview GtkPrintOperationPreview;

    typedef struct _GtkPrintOperationPreviewIface
	GtkPrintOperationPreviewIface;

    typedef struct _GtkToggleAction GtkToggleAction;

    typedef struct _GtkToggleActionPrivate GtkToggleActionPrivate;

    typedef struct _GtkToggleActionClass GtkToggleActionClass;

    typedef enum {
	GTK_CSS_PROVIDER_ERROR_FAILED,
	GTK_CSS_PROVIDER_ERROR_SYNTAX,
	GTK_CSS_PROVIDER_ERROR_IMPORT,
	GTK_CSS_PROVIDER_ERROR_NAME,
	GTK_CSS_PROVIDER_ERROR_DEPRECATED,
	GTK_CSS_PROVIDER_ERROR_UNKNOWN_VALUE
    } GtkCssProviderError;

    typedef struct _GtkCssProvider GtkCssProvider;

    typedef struct _GtkCssProviderClass GtkCssProviderClass;

    typedef struct _GtkCssProviderPrivate GtkCssProviderPrivate;

    typedef gboolean(*GtkTreeModelFilterVisibleFunc) (GtkTreeModel * model,
						      GtkTreeIter * iter,
						      gpointer data);

    typedef void (*GtkTreeModelFilterModifyFunc) (GtkTreeModel * model,
						  GtkTreeIter * iter,
						  GValue * value,
						  gint column,
						  gpointer data);

    typedef struct _GtkTreeModelFilter GtkTreeModelFilter;

    typedef struct _GtkTreeModelFilterClass GtkTreeModelFilterClass;

    typedef struct _GtkTreeModelFilterPrivate GtkTreeModelFilterPrivate;

    typedef struct _GtkSizeGroup GtkSizeGroup;

    typedef struct _GtkSizeGroupPrivate GtkSizeGroupPrivate;

    typedef struct _GtkSizeGroupClass GtkSizeGroupClass;

    typedef enum {
	GTK_SIZE_GROUP_NONE,
	GTK_SIZE_GROUP_HORIZONTAL,
	GTK_SIZE_GROUP_VERTICAL,
	GTK_SIZE_GROUP_BOTH
    } GtkSizeGroupMode;

    typedef struct _GtkScrollbar GtkScrollbar;

    typedef struct _GtkScrollbarClass GtkScrollbarClass;

    typedef struct _GtkSocket GtkSocket;

    typedef struct _GtkSocketClass GtkSocketClass;

    typedef struct _GtkSocketPrivate GtkSocketPrivate;

    typedef struct _GtkOffscreenWindow GtkOffscreenWindow;

    typedef struct _GtkOffscreenWindowClass GtkOffscreenWindowClass;

    typedef enum {
	GTK_CSS_SECTION_DOCUMENT,
	GTK_CSS_SECTION_IMPORT,
	GTK_CSS_SECTION_COLOR_DEFINITION,
	GTK_CSS_SECTION_BINDING_SET,
	GTK_CSS_SECTION_RULESET,
	GTK_CSS_SECTION_SELECTOR,
	GTK_CSS_SECTION_DECLARATION,
	GTK_CSS_SECTION_VALUE,
	GTK_CSS_SECTION_KEYFRAMES
    } GtkCssSectionType;

    typedef struct _GtkCssSection GtkCssSection;

    typedef struct _GtkCellView GtkCellView;

    typedef struct _GtkCellViewClass GtkCellViewClass;

    typedef struct _GtkCellViewPrivate GtkCellViewPrivate;

    typedef enum {
	GTK_DEST_DEFAULT_MOTION,
	GTK_DEST_DEFAULT_HIGHLIGHT,
	GTK_DEST_DEFAULT_DROP,
	GTK_DEST_DEFAULT_ALL
    } GtkDestDefaults;

    typedef struct _GtkMenuItem GtkMenuItem;

    typedef struct _GtkMenuItemClass GtkMenuItemClass;

    typedef struct _GtkMenuItemPrivate GtkMenuItemPrivate;

    typedef struct _GtkIMContextInfo GtkIMContextInfo;

    typedef struct _GtkActionGroup GtkActionGroup;

    typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;

    typedef struct _GtkActionGroupClass GtkActionGroupClass;

    typedef struct _GtkActionEntry GtkActionEntry;

    typedef struct _GtkToggleActionEntry GtkToggleActionEntry;

    typedef struct _GtkRadioActionEntry GtkRadioActionEntry;

    typedef struct _GtkFileChooser GtkFileChooser;

    typedef enum {
	GTK_FILE_CHOOSER_ACTION_OPEN,
	GTK_FILE_CHOOSER_ACTION_SAVE,
	GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
	GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER
    } GtkFileChooserAction;

    typedef enum {
	GTK_FILE_CHOOSER_CONFIRMATION_CONFIRM,
	GTK_FILE_CHOOSER_CONFIRMATION_ACCEPT_FILENAME,
	GTK_FILE_CHOOSER_CONFIRMATION_SELECT_AGAIN
    } GtkFileChooserConfirmation;

    typedef enum {
	GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
	GTK_FILE_CHOOSER_ERROR_BAD_FILENAME,
	GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS,
	GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME
    } GtkFileChooserError;

    typedef struct _GtkPaned GtkPaned;

    typedef struct _GtkPanedClass GtkPanedClass;

    typedef struct _GtkPanedPrivate GtkPanedPrivate;

    typedef struct _GtkEditable GtkEditable;

    typedef struct _GtkEditableInterface GtkEditableInterface;

    typedef struct _GtkAction GtkAction;

    typedef struct _GtkActionClass GtkActionClass;

    typedef struct _GtkActionPrivate GtkActionPrivate;

    typedef struct _GtkScrolledWindow GtkScrolledWindow;

    typedef struct _GtkScrolledWindowPrivate GtkScrolledWindowPrivate;

    typedef struct _GtkScrolledWindowClass GtkScrolledWindowClass;

    typedef struct _GtkScale GtkScale;

    typedef struct _GtkScalePrivate GtkScalePrivate;

    typedef struct _GtkScaleClass GtkScaleClass;

    typedef struct _GtkImage GtkImage;

    typedef struct _GtkImagePrivate GtkImagePrivate;

    typedef struct _GtkImageClass GtkImageClass;

    typedef enum {
	GTK_IMAGE_EMPTY,
	GTK_IMAGE_PIXBUF,
	GTK_IMAGE_STOCK,
	GTK_IMAGE_ICON_SET,
	GTK_IMAGE_ANIMATION,
	GTK_IMAGE_ICON_NAME,
	GTK_IMAGE_GICON
    } GtkImageType;

    typedef struct _GtkCellRendererText GtkCellRendererText;

    typedef struct _GtkCellRendererTextPrivate GtkCellRendererTextPrivate;

    typedef struct _GtkCellRendererTextClass GtkCellRendererTextClass;

    typedef struct _GtkRadioToolButton GtkRadioToolButton;

    typedef struct _GtkRadioToolButtonClass GtkRadioToolButtonClass;

    typedef struct _GtkTextIter GtkTextIter;

    typedef struct _GtkTextTagTable GtkTextTagTable;

    typedef struct _GtkTextTag GtkTextTag;

    typedef struct _GtkTextTagPrivate GtkTextTagPrivate;

    typedef struct _GtkTextTagClass GtkTextTagClass;

    typedef struct _GtkApplication GtkApplication;

    typedef struct _GtkApplicationClass GtkApplicationClass;

    typedef struct _GtkApplicationPrivate GtkApplicationPrivate;

    typedef enum {
	GTK_APPLICATION_INHIBIT_LOGOUT,
	GTK_APPLICATION_INHIBIT_SWITCH,
	GTK_APPLICATION_INHIBIT_SUSPEND,
	GTK_APPLICATION_INHIBIT_IDLE
    } GtkApplicationInhibitFlags;

    typedef struct _GtkAccessible GtkAccessible;

    typedef struct _GtkAccessiblePrivate GtkAccessiblePrivate;

    typedef struct _GtkAccessibleClass GtkAccessibleClass;

    typedef struct _GtkMessageDialog GtkMessageDialog;

    typedef struct _GtkMessageDialogPrivate GtkMessageDialogPrivate;

    typedef struct _GtkMessageDialogClass GtkMessageDialogClass;

    typedef enum {
	GTK_BUTTONS_NONE,
	GTK_BUTTONS_OK,
	GTK_BUTTONS_CLOSE,
	GTK_BUTTONS_CANCEL,
	GTK_BUTTONS_YES_NO,
	GTK_BUTTONS_OK_CANCEL
    } GtkButtonsType;

    typedef struct _GtkRadioMenuItem GtkRadioMenuItem;

    typedef struct _GtkRadioMenuItemPrivate GtkRadioMenuItemPrivate;

    typedef struct _GtkRadioMenuItemClass GtkRadioMenuItemClass;

    typedef struct _GtkStyleProperties GtkStyleProperties;

    typedef struct _GtkStylePropertiesClass GtkStylePropertiesClass;

    typedef struct _GtkStylePropertiesPrivate GtkStylePropertiesPrivate;

    typedef struct _GtkSymbolicColor GtkSymbolicColor;

    typedef struct _GtkGradient GtkGradient;

    typedef gboolean(*GtkStylePropertyParser) (void);

    typedef struct _GtkArrow GtkArrow;

    typedef struct _GtkArrowPrivate GtkArrowPrivate;

    typedef struct _GtkArrowClass GtkArrowClass;

    typedef struct _GtkVolumeButton GtkVolumeButton;

    typedef struct _GtkVolumeButtonClass GtkVolumeButtonClass;

    typedef struct _GtkStyleProviderIface GtkStyleProviderIface;

    typedef struct _GtkStyleProvider GtkStyleProvider;

    typedef struct _GtkApplicationWindowPrivate
	GtkApplicationWindowPrivate;

    typedef struct _GtkApplicationWindowClass GtkApplicationWindowClass;

    typedef struct _GtkApplicationWindow GtkApplicationWindow;

    typedef struct _GtkEntryCompletion GtkEntryCompletion;

    typedef struct _GtkEntryCompletionClass GtkEntryCompletionClass;

    typedef struct _GtkEntryCompletionPrivate GtkEntryCompletionPrivate;

    typedef gboolean(*GtkEntryCompletionMatchFunc) (GtkEntryCompletion *
						    completion,
						    const gchar * key,
						    GtkTreeIter * iter,
						    gpointer user_data);

    typedef struct _GtkCellEditable GtkCellEditable;

    typedef struct _GtkCellEditableIface GtkCellEditableIface;

    typedef struct _GtkCheckMenuItem GtkCheckMenuItem;

    typedef struct _GtkCheckMenuItemPrivate GtkCheckMenuItemPrivate;

    typedef struct _GtkCheckMenuItemClass GtkCheckMenuItemClass;

    typedef struct _GtkFontChooserWidget GtkFontChooserWidget;

    typedef struct _GtkFontChooserWidgetPrivate
	GtkFontChooserWidgetPrivate;

    typedef struct _GtkFontChooserWidgetClass GtkFontChooserWidgetClass;

    typedef struct _GtkFontButton GtkFontButton;

    typedef struct _GtkFontButtonClass GtkFontButtonClass;

    typedef struct _GtkFontButtonPrivate GtkFontButtonPrivate;

    typedef struct _GtkImageMenuItem GtkImageMenuItem;

    typedef struct _GtkImageMenuItemPrivate GtkImageMenuItemPrivate;

    typedef struct _GtkImageMenuItemClass GtkImageMenuItemClass;

    typedef struct _GtkAppChooser GtkAppChooser;

    typedef struct _GtkDrawingArea GtkDrawingArea;

    typedef struct _GtkDrawingAreaClass GtkDrawingAreaClass;

    typedef struct _GtkFixed GtkFixed;

    typedef struct _GtkFixedPrivate GtkFixedPrivate;

    typedef struct _GtkFixedClass GtkFixedClass;

    typedef struct _GtkFixedChild GtkFixedChild;

    typedef struct _GtkBuildable GtkBuildable;

    typedef struct _GtkBuildableIface GtkBuildableIface;

    typedef struct _GtkButton GtkButton;

    typedef struct _GtkButtonPrivate GtkButtonPrivate;

    typedef struct _GtkButtonClass GtkButtonClass;

    typedef enum {
	GTK_ALIGN_FILL = 0,
	GTK_ALIGN_START = 1,
	GTK_ALIGN_END = 2,
	GTK_ALIGN_CENTER = 3
    } GtkAlign;

    typedef enum {
	GTK_ARROWS_BOTH,
	GTK_ARROWS_START,
	GTK_ARROWS_END
    } GtkArrowPlacement;

    typedef enum {
	GTK_ARROW_UP = 0,
	GTK_ARROW_DOWN = 1,
	GTK_ARROW_LEFT = 2,
	GTK_ARROW_RIGHT = 3
    } GtkArrowType;

    typedef enum {
	GTK_EXPAND = 1 << 0,
	GTK_SHRINK = 1 << 1,
	GTK_FILL = 1 << 2
    } GtkAttachOptions;

    typedef enum {
	GTK_BUTTONBOX_DEFAULT_STYLE = 0,
	GTK_BUTTONBOX_SPREAD = 1,
	GTK_BUTTONBOX_EDGE = 2,
	GTK_BUTTONBOX_START = 3,
	GTK_BUTTONBOX_END = 4
    } GtkButtonBoxStyle;

    typedef enum {
	GTK_DELETE_CHARS,
	GTK_DELETE_WORD_ENDS,
	GTK_DELETE_WORDS,
	GTK_DELETE_DISPLAY_LINES,
	GTK_DELETE_DISPLAY_LINE_ENDS,
	GTK_DELETE_PARAGRAPH_ENDS,
	GTK_DELETE_PARAGRAPHS,
	GTK_DELETE_WHITESPACE
    } GtkDeleteType;

    typedef enum {
	GTK_DIR_TAB_FORWARD = 0,
	GTK_DIR_TAB_BACKWARD = 1,
	GTK_DIR_UP = 2,
	GTK_DIR_DOWN = 3,
	GTK_DIR_LEFT = 4,
	GTK_DIR_RIGHT = 5
    } GtkDirectionType;

    typedef enum {
	GTK_EXPANDER_COLLAPSED,
	GTK_EXPANDER_SEMI_COLLAPSED,
	GTK_EXPANDER_SEMI_EXPANDED,
	GTK_EXPANDER_EXPANDED
    } GtkExpanderStyle;

    typedef enum {
	GTK_ICON_SIZE_INVALID = 0,
	GTK_ICON_SIZE_MENU = 1,
	GTK_ICON_SIZE_SMALL_TOOLBAR = 2,
	GTK_ICON_SIZE_LARGE_TOOLBAR = 3,
	GTK_ICON_SIZE_BUTTON = 4,
	GTK_ICON_SIZE_DND = 5,
	GTK_ICON_SIZE_DIALOG = 6
    } GtkIconSize;

    typedef enum {
	GTK_SENSITIVITY_AUTO,
	GTK_SENSITIVITY_ON,
	GTK_SENSITIVITY_OFF
    } GtkSensitivityType;

    typedef enum {
	GTK_TEXT_DIR_NONE,
	GTK_TEXT_DIR_LTR,
	GTK_TEXT_DIR_RTL
    } GtkTextDirection;

    typedef enum {
	GTK_JUSTIFY_LEFT,
	GTK_JUSTIFY_RIGHT,
	GTK_JUSTIFY_CENTER,
	GTK_JUSTIFY_FILL
    } GtkJustification;

    typedef enum {
	GTK_MENU_DIR_PARENT,
	GTK_MENU_DIR_CHILD,
	GTK_MENU_DIR_NEXT,
	GTK_MENU_DIR_PREV
    } GtkMenuDirectionType;

    typedef enum {
	GTK_MESSAGE_INFO,
	GTK_MESSAGE_WARNING,
	GTK_MESSAGE_QUESTION,
	GTK_MESSAGE_ERROR,
	GTK_MESSAGE_OTHER
    } GtkMessageType;

    typedef enum {
	GTK_MOVEMENT_LOGICAL_POSITIONS,
	GTK_MOVEMENT_VISUAL_POSITIONS,
	GTK_MOVEMENT_WORDS,
	GTK_MOVEMENT_DISPLAY_LINES,
	GTK_MOVEMENT_DISPLAY_LINE_ENDS,
	GTK_MOVEMENT_PARAGRAPHS,
	GTK_MOVEMENT_PARAGRAPH_ENDS,
	GTK_MOVEMENT_PAGES,
	GTK_MOVEMENT_BUFFER_ENDS,
	GTK_MOVEMENT_HORIZONTAL_PAGES
    } GtkMovementStep;

    typedef enum {
	GTK_SCROLL_STEPS,
	GTK_SCROLL_PAGES,
	GTK_SCROLL_ENDS,
	GTK_SCROLL_HORIZONTAL_STEPS,
	GTK_SCROLL_HORIZONTAL_PAGES,
	GTK_SCROLL_HORIZONTAL_ENDS
    } GtkScrollStep;

    typedef enum {
	GTK_ORIENTATION_HORIZONTAL,
	GTK_ORIENTATION_VERTICAL
    } GtkOrientation;

    typedef enum {
	GTK_CORNER_TOP_LEFT,
	GTK_CORNER_BOTTOM_LEFT,
	GTK_CORNER_TOP_RIGHT,
	GTK_CORNER_BOTTOM_RIGHT
    } GtkCornerType;

    typedef enum {
	GTK_PACK_START,
	GTK_PACK_END
    } GtkPackType;

    typedef enum {
	GTK_PATH_PRIO_LOWEST = 0,
	GTK_PATH_PRIO_GTK = 4,
	GTK_PATH_PRIO_APPLICATION = 8,
	GTK_PATH_PRIO_THEME = 10,
	GTK_PATH_PRIO_RC = 12,
	GTK_PATH_PRIO_HIGHEST = 15
    } GtkPathPriorityType;

    typedef enum {
	GTK_PATH_WIDGET,
	GTK_PATH_WIDGET_CLASS,
	GTK_PATH_CLASS
    } GtkPathType;

    typedef enum {
	GTK_POLICY_ALWAYS,
	GTK_POLICY_AUTOMATIC,
	GTK_POLICY_NEVER
    } GtkPolicyType;

    typedef enum {
	GTK_POS_LEFT,
	GTK_POS_RIGHT,
	GTK_POS_TOP,
	GTK_POS_BOTTOM
    } GtkPositionType;

    typedef enum {
	GTK_RELIEF_NORMAL,
	GTK_RELIEF_HALF,
	GTK_RELIEF_NONE
    } GtkReliefStyle;

    typedef enum {
	GTK_RESIZE_PARENT,
	GTK_RESIZE_QUEUE,
	GTK_RESIZE_IMMEDIATE
    } GtkResizeMode;

    typedef enum {
	GTK_SCROLL_NONE,
	GTK_SCROLL_JUMP,
	GTK_SCROLL_STEP_BACKWARD,
	GTK_SCROLL_STEP_FORWARD,
	GTK_SCROLL_PAGE_BACKWARD,
	GTK_SCROLL_PAGE_FORWARD,
	GTK_SCROLL_STEP_UP,
	GTK_SCROLL_STEP_DOWN,
	GTK_SCROLL_PAGE_UP,
	GTK_SCROLL_PAGE_DOWN,
	GTK_SCROLL_STEP_LEFT,
	GTK_SCROLL_STEP_RIGHT,
	GTK_SCROLL_PAGE_LEFT,
	GTK_SCROLL_PAGE_RIGHT,
	GTK_SCROLL_START,
	GTK_SCROLL_END
    } GtkScrollType;

    typedef enum {
	GTK_SELECTION_NONE,
	GTK_SELECTION_SINGLE,
	GTK_SELECTION_BROWSE,
	GTK_SELECTION_MULTIPLE
    } GtkSelectionMode;

    typedef enum {
	GTK_SHADOW_NONE,
	GTK_SHADOW_IN,
	GTK_SHADOW_OUT,
	GTK_SHADOW_ETCHED_IN,
	GTK_SHADOW_ETCHED_OUT
    } GtkShadowType;

    typedef enum {
	GTK_STATE_NORMAL,
	GTK_STATE_ACTIVE,
	GTK_STATE_PRELIGHT,
	GTK_STATE_SELECTED,
	GTK_STATE_INSENSITIVE,
	GTK_STATE_INCONSISTENT,
	GTK_STATE_FOCUSED
    } GtkStateType;

    typedef enum {
	GTK_TOOLBAR_ICONS,
	GTK_TOOLBAR_TEXT,
	GTK_TOOLBAR_BOTH,
	GTK_TOOLBAR_BOTH_HORIZ
    } GtkToolbarStyle;

    typedef enum {
	GTK_WIN_POS_NONE,
	GTK_WIN_POS_CENTER,
	GTK_WIN_POS_MOUSE,
	GTK_WIN_POS_CENTER_ALWAYS,
	GTK_WIN_POS_CENTER_ON_PARENT
    } GtkWindowPosition;

    typedef enum {
	GTK_WINDOW_TOPLEVEL,
	GTK_WINDOW_POPUP
    } GtkWindowType;

    typedef enum {
	GTK_WRAP_NONE,
	GTK_WRAP_CHAR,
	GTK_WRAP_WORD,
	GTK_WRAP_WORD_CHAR
    } GtkWrapMode;

    typedef enum {
	GTK_SORT_ASCENDING,
	GTK_SORT_DESCENDING
    } GtkSortType;

    typedef enum {
	GTK_IM_PREEDIT_NOTHING,
	GTK_IM_PREEDIT_CALLBACK,
	GTK_IM_PREEDIT_NONE
    } GtkIMPreeditStyle;

    typedef enum {
	GTK_IM_STATUS_NOTHING,
	GTK_IM_STATUS_CALLBACK,
	GTK_IM_STATUS_NONE
    } GtkIMStatusStyle;

    typedef enum {
	GTK_PACK_DIRECTION_LTR,
	GTK_PACK_DIRECTION_RTL,
	GTK_PACK_DIRECTION_TTB,
	GTK_PACK_DIRECTION_BTT
    } GtkPackDirection;

    typedef enum {
	GTK_PRINT_PAGES_ALL,
	GTK_PRINT_PAGES_CURRENT,
	GTK_PRINT_PAGES_RANGES,
	GTK_PRINT_PAGES_SELECTION
    } GtkPrintPages;

    typedef enum {
	GTK_PAGE_SET_ALL,
	GTK_PAGE_SET_EVEN,
	GTK_PAGE_SET_ODD
    } GtkPageSet;

    typedef enum {
	GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
	GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
	GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
	GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
	GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
	GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
	GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
	GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT
    } GtkNumberUpLayout;

    typedef enum {
	GTK_PAGE_ORIENTATION_PORTRAIT,
	GTK_PAGE_ORIENTATION_LANDSCAPE,
	GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT,
	GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE
    } GtkPageOrientation;

    typedef enum {
	GTK_PRINT_QUALITY_LOW,
	GTK_PRINT_QUALITY_NORMAL,
	GTK_PRINT_QUALITY_HIGH,
	GTK_PRINT_QUALITY_DRAFT
    } GtkPrintQuality;

    typedef enum {
	GTK_PRINT_DUPLEX_SIMPLEX,
	GTK_PRINT_DUPLEX_HORIZONTAL,
	GTK_PRINT_DUPLEX_VERTICAL
    } GtkPrintDuplex;

    typedef enum {
	GTK_UNIT_NONE,
	GTK_UNIT_POINTS,
	GTK_UNIT_INCH,
	GTK_UNIT_MM
    } GtkUnit;

    typedef enum {
	GTK_TREE_VIEW_GRID_LINES_NONE,
	GTK_TREE_VIEW_GRID_LINES_HORIZONTAL,
	GTK_TREE_VIEW_GRID_LINES_VERTICAL,
	GTK_TREE_VIEW_GRID_LINES_BOTH
    } GtkTreeViewGridLines;

    typedef enum {
	GTK_DRAG_RESULT_SUCCESS,
	GTK_DRAG_RESULT_NO_TARGET,
	GTK_DRAG_RESULT_USER_CANCELLED,
	GTK_DRAG_RESULT_TIMEOUT_EXPIRED,
	GTK_DRAG_RESULT_GRAB_BROKEN,
	GTK_DRAG_RESULT_ERROR
    } GtkDragResult;

    typedef enum {
	GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH,
	GTK_SIZE_REQUEST_WIDTH_FOR_HEIGHT,
	GTK_SIZE_REQUEST_CONSTANT_SIZE
    } GtkSizeRequestMode;

    typedef enum {
	GTK_SCROLL_MINIMUM,
	GTK_SCROLL_NATURAL
    } GtkScrollablePolicy;

    typedef enum {
	GTK_STATE_FLAG_NORMAL = 0,
	GTK_STATE_FLAG_ACTIVE = 1 << 0,
	GTK_STATE_FLAG_PRELIGHT = 1 << 1,
	GTK_STATE_FLAG_SELECTED = 1 << 2,
	GTK_STATE_FLAG_INSENSITIVE = 1 << 3,
	GTK_STATE_FLAG_INCONSISTENT = 1 << 4,
	GTK_STATE_FLAG_FOCUSED = 1 << 5,
	GTK_STATE_FLAG_BACKDROP = 1 << 6
    } GtkStateFlags;

    typedef enum {
	GTK_REGION_EVEN = 1 << 0,
	GTK_REGION_ODD = 1 << 1,
	GTK_REGION_FIRST = 1 << 2,
	GTK_REGION_LAST = 1 << 3,
	GTK_REGION_ONLY = 1 << 4,
	GTK_REGION_SORTED = 1 << 5
    } GtkRegionFlags;

    typedef enum {
	GTK_JUNCTION_NONE = 0,
	GTK_JUNCTION_CORNER_TOPLEFT = 1 << 0,
	GTK_JUNCTION_CORNER_TOPRIGHT = 1 << 1,
	GTK_JUNCTION_CORNER_BOTTOMLEFT = 1 << 2,
	GTK_JUNCTION_CORNER_BOTTOMRIGHT = 1 << 3,
	GTK_JUNCTION_TOP =
	    (GTK_JUNCTION_CORNER_TOPLEFT | GTK_JUNCTION_CORNER_TOPRIGHT),
	GTK_JUNCTION_BOTTOM =
	    (GTK_JUNCTION_CORNER_BOTTOMLEFT |
	     GTK_JUNCTION_CORNER_BOTTOMRIGHT),
	GTK_JUNCTION_LEFT =
	    (GTK_JUNCTION_CORNER_TOPLEFT | GTK_JUNCTION_CORNER_BOTTOMLEFT),
	GTK_JUNCTION_RIGHT =
	    (GTK_JUNCTION_CORNER_TOPRIGHT |
	     GTK_JUNCTION_CORNER_BOTTOMRIGHT)
    } GtkJunctionSides;

    typedef enum {
	GTK_BORDER_STYLE_NONE,
	GTK_BORDER_STYLE_SOLID,
	GTK_BORDER_STYLE_INSET,
	GTK_BORDER_STYLE_OUTSET,
	GTK_BORDER_STYLE_HIDDEN,
	GTK_BORDER_STYLE_DOTTED,
	GTK_BORDER_STYLE_DASHED,
	GTK_BORDER_STYLE_DOUBLE,
	GTK_BORDER_STYLE_GROOVE,
	GTK_BORDER_STYLE_RIDGE
    } GtkBorderStyle;

    typedef enum {
	GTK_LEVEL_BAR_MODE_CONTINUOUS,
	GTK_LEVEL_BAR_MODE_DISCRETE
    } GtkLevelBarMode;

    typedef enum {
	GTK_INPUT_PURPOSE_FREE_FORM,
	GTK_INPUT_PURPOSE_ALPHA,
	GTK_INPUT_PURPOSE_DIGITS,
	GTK_INPUT_PURPOSE_NUMBER,
	GTK_INPUT_PURPOSE_PHONE,
	GTK_INPUT_PURPOSE_URL,
	GTK_INPUT_PURPOSE_EMAIL,
	GTK_INPUT_PURPOSE_NAME,
	GTK_INPUT_PURPOSE_PASSWORD,
	GTK_INPUT_PURPOSE_PIN
    } GtkInputPurpose;

    typedef enum {
	GTK_INPUT_HINT_NONE = 0,
	GTK_INPUT_HINT_SPELLCHECK = 1 << 0,
	GTK_INPUT_HINT_NO_SPELLCHECK = 1 << 1,
	GTK_INPUT_HINT_WORD_COMPLETION = 1 << 2,
	GTK_INPUT_HINT_LOWERCASE = 1 << 3,
	GTK_INPUT_HINT_UPPERCASE_CHARS = 1 << 4,
	GTK_INPUT_HINT_UPPERCASE_WORDS = 1 << 4,
	GTK_INPUT_HINT_UPPERCASE_SENTENCES = 1 << 6,
	GTK_INPUT_HINT_INHIBIT_OSK = 1 << 7
    } GtkInputHints;

    typedef enum {
	GTK_ACCEL_VISIBLE,
	GTK_ACCEL_LOCKED,
	GTK_ACCEL_MASK
    } GtkAccelFlags;

    typedef struct _GtkAccelGroup GtkAccelGroup;

    typedef struct _GtkAccelGroupClass GtkAccelGroupClass;

    typedef struct _GtkAccelGroupPrivate GtkAccelGroupPrivate;

    typedef struct _GtkAccelKey GtkAccelKey;

    typedef struct _GtkAccelGroupEntry GtkAccelGroupEntry;

    typedef gboolean(*GtkAccelGroupFindFunc) (GtkAccelKey * key,
					      GClosure * closure,
					      gpointer data);

    typedef struct _GtkIconFactory GtkIconFactory;

    typedef struct _GtkIconFactoryPrivate GtkIconFactoryPrivate;

    typedef struct _GtkIconFactoryClass GtkIconFactoryClass;

    typedef struct _GtkAppChooserWidget GtkAppChooserWidget;

    typedef struct _GtkAppChooserWidgetClass GtkAppChooserWidgetClass;

    typedef struct _GtkAppChooserWidgetPrivate GtkAppChooserWidgetPrivate;

    typedef struct _GtkButtonBox GtkButtonBox;

    typedef struct _GtkButtonBoxPrivate GtkButtonBoxPrivate;

    typedef struct _GtkButtonBoxClass GtkButtonBoxClass;

    typedef struct _GtkCellArea GtkCellArea;

    typedef struct _GtkCellAreaClass GtkCellAreaClass;

    typedef struct _GtkCellAreaPrivate GtkCellAreaPrivate;

    typedef struct _GtkCellAreaContext GtkCellAreaContext;

    typedef gboolean(*GtkCellCallback) (void);

    typedef gboolean(*GtkCellAllocCallback) (GtkCellRenderer * renderer,
					     const GdkRectangle *
					     cell_area,
					     const GdkRectangle *
					     cell_background,
					     gpointer data);

    typedef struct _GtkCellAreaContextPrivate GtkCellAreaContextPrivate;

    typedef struct _GtkCellAreaContextClass GtkCellAreaContextClass;

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

    typedef void (*GtkPageSetupDoneFunc) (GtkPageSetup * page_setup,
					  gpointer data);

    typedef guint8 *(*GtkTextBufferSerializeFunc) (GtkTextBuffer *
						   register_buffer,
						   GtkTextBuffer *
						   content_buffer,
						   GtkTextIter * start,
						   GtkTextIter * end,
						   gsize * length,
						   gpointer user_data);

    typedef gboolean(*GtkTextBufferDeserializeFunc) (GtkTextBuffer *
						     register_buffer,
						     GtkTextBuffer *
						     content_buffer,
						     GtkTextIter * iter,
						     const guint8 * data,
						     gsize length,
						     gboolean create_tags,
						     gpointer user_data,
						     GError * *error);

    typedef struct _GtkCellRendererPixbuf GtkCellRendererPixbuf;

    typedef struct _GtkCellRendererPixbufPrivate
	GtkCellRendererPixbufPrivate;

    typedef struct _GtkCellRendererPixbufClass GtkCellRendererPixbufClass;

    typedef struct _GtkAlignment GtkAlignment;

    typedef struct _GtkAlignmentPrivate GtkAlignmentPrivate;

    typedef struct _GtkAlignmentClass GtkAlignmentClass;

    typedef enum {
	GTK_TREE_VIEW_DROP_BEFORE,
	GTK_TREE_VIEW_DROP_AFTER,
	GTK_TREE_VIEW_DROP_INTO_OR_BEFORE,
	GTK_TREE_VIEW_DROP_INTO_OR_AFTER
    } GtkTreeViewDropPosition;

    typedef struct _GtkTreeView GtkTreeView;

    typedef struct _GtkTreeViewClass GtkTreeViewClass;

    typedef struct _GtkTreeViewPrivate GtkTreeViewPrivate;

    /* typedef struct _GtkTreeSelection GtkTreeSelection;   XXX move up */

    typedef struct _GtkTreeSelectionClass GtkTreeSelectionClass;

    typedef gboolean(*GtkTreeViewColumnDropFunc) (GtkTreeView * tree_view,
						  GtkTreeViewColumn *
						  column,
						  GtkTreeViewColumn *
						  prev_column,
						  GtkTreeViewColumn *
						  next_column,
						  gpointer data);

    typedef void (*GtkTreeViewMappingFunc) (GtkTreeView * tree_view,
					    GtkTreePath * path,
					    gpointer user_data);

    typedef gboolean(*GtkTreeViewSearchEqualFunc) (GtkTreeModel * model,
						   gint column,
						   const gchar * key,
						   GtkTreeIter * iter,
						   gpointer search_data);

    typedef gboolean(*GtkTreeViewRowSeparatorFunc) (GtkTreeModel * model,
						    GtkTreeIter * iter,
						    gpointer data);

    typedef void (*GtkTreeViewSearchPositionFunc) (GtkTreeView * tree_view,
						   GtkWidget *
						   search_dialog,
						   gpointer user_data);

    typedef void (*GtkTreeDestroyCountFunc) (GtkTreeView * tree_view,
					     GtkTreePath * path,
					     gint children,
					     gpointer user_data);

    typedef struct _GtkPaperSize GtkPaperSize;

    typedef struct _GtkOrientable GtkOrientable;

    typedef struct _GtkOrientableIface GtkOrientableIface;

    typedef struct _GtkCellRendererToggle GtkCellRendererToggle;

    typedef struct _GtkCellRendererTogglePrivate
	GtkCellRendererTogglePrivate;

    typedef struct _GtkCellRendererToggleClass GtkCellRendererToggleClass;

    typedef struct _GtkAboutDialog GtkAboutDialog;

    typedef struct _GtkAboutDialogClass GtkAboutDialogClass;

    typedef struct _GtkAboutDialogPrivate GtkAboutDialogPrivate;

    typedef enum {
	GTK_LICENSE_UNKNOWN,
	GTK_LICENSE_CUSTOM,
	GTK_LICENSE_GPL_2_0,
	GTK_LICENSE_GPL_3_0,
	GTK_LICENSE_LGPL_2_1,
	GTK_LICENSE_LGPL_3_0,
	GTK_LICENSE_BSD,
	GTK_LICENSE_MIT_X11,
	GTK_LICENSE_ARTISTIC
    } GtkLicense;

    /* typedef struct _GtkTreeIter GtkTreeIter;		XXX move up */

    /* typedef struct _GtkTreePath GtkTreePath;		XXX move up */

    typedef struct _GtkTreeRowReference GtkTreeRowReference;

    /* typedef struct _GtkTreeModel GtkTreeModel;	XXX move up */

    typedef struct _GtkTreeModelIface GtkTreeModelIface;

    typedef gboolean(*GtkTreeModelForeachFunc) (GtkTreeModel * model,
						GtkTreePath * path,
						GtkTreeIter * iter,
						gpointer data);

    typedef enum {
	GTK_TREE_MODEL_ITERS_PERSIST,
	GTK_TREE_MODEL_LIST_ONLY
    } GtkTreeModelFlags;

    typedef struct _GtkCheckButton GtkCheckButton;

    typedef struct _GtkCheckButtonClass GtkCheckButtonClass;

    typedef struct _GtkWindowPrivate GtkWindowPrivate;

    typedef struct _GtkWindowClass GtkWindowClass;

    typedef struct _GtkWindowGeometryInfo GtkWindowGeometryInfo;

    typedef struct _GtkWindowGroup GtkWindowGroup;

    typedef struct _GtkWindowGroupClass GtkWindowGroupClass;

    typedef struct _GtkWindowGroupPrivate GtkWindowGroupPrivate;

    typedef struct _GtkMenu GtkMenu;

    typedef struct _GtkMenuClass GtkMenuClass;

    typedef struct _GtkMenuPrivate GtkMenuPrivate;

    typedef void (*GtkMenuPositionFunc) (GtkMenu * menu, gint * x,
					 gint * y, gboolean * push_in,
					 gpointer user_data);

    typedef void (*GtkMenuDetachFunc) (GtkWidget * attach_widget,
				       GtkMenu * menu);

    typedef struct _GtkLevelBarClass GtkLevelBarClass;

    typedef struct _GtkLevelBar GtkLevelBar;

    typedef struct _GtkLevelBarPrivate GtkLevelBarPrivate;

    typedef struct _GtkComboBox GtkComboBox;

    typedef struct _GtkComboBoxClass GtkComboBoxClass;

    typedef struct _GtkComboBoxPrivate GtkComboBoxPrivate;

    typedef struct _GtkSpinner GtkSpinner;

    typedef struct _GtkSpinnerClass GtkSpinnerClass;

    typedef struct _GtkSpinnerPrivate GtkSpinnerPrivate;

    typedef struct _GtkToolPalette GtkToolPalette;

    typedef struct _GtkToolPaletteClass GtkToolPaletteClass;

    typedef struct _GtkToolPalettePrivate GtkToolPalettePrivate;

    typedef enum {
	GTK_TOOL_PALETTE_DRAG_ITEMS = (1 << 0),
	GTK_TOOL_PALETTE_DRAG_GROUPS = (1 << 1)
    } GtkToolPaletteDragTargets;

    typedef struct _GtkRecentChooserDialog GtkRecentChooserDialog;

    typedef struct _GtkRecentChooserDialogClass
	GtkRecentChooserDialogClass;

    typedef struct _GtkRecentChooserDialogPrivate
	GtkRecentChooserDialogPrivate;

    typedef struct _GtkCellRendererCombo GtkCellRendererCombo;

    typedef struct _GtkCellRendererComboPrivate
	GtkCellRendererComboPrivate;

    typedef struct _GtkCellRendererComboClass GtkCellRendererComboClass;

    typedef struct _GtkBuilder GtkBuilder;

    typedef struct _GtkBuilderClass GtkBuilderClass;

    typedef struct _GtkBuilderPrivate GtkBuilderPrivate;

    typedef void (*GtkBuilderConnectFunc) (GtkBuilder * builder,
					   GObject * object,
					   const gchar * signal_name,
					   const gchar * handler_name,
					   GObject * connect_object,
					   GConnectFlags flags,
					   gpointer user_data);

    typedef struct _GtkTextBTree GtkTextBTree;

    typedef struct _GtkTextBufferPrivate GtkTextBufferPrivate;

    typedef struct _GtkTextBufferClass GtkTextBufferClass;

    typedef struct _GtkIconInfo GtkIconInfo;

    typedef struct _GtkIconTheme GtkIconTheme;

    typedef struct _GtkIconThemeClass GtkIconThemeClass;

    typedef struct _GtkIconThemePrivate GtkIconThemePrivate;

    typedef enum {
	GTK_ICON_LOOKUP_NO_SVG = 1 << 0,
	GTK_ICON_LOOKUP_FORCE_SVG = 1 << 1,
	GTK_ICON_LOOKUP_USE_BUILTIN = 1 << 2,
	GTK_ICON_LOOKUP_GENERIC_FALLBACK = 1 << 3,
	GTK_ICON_LOOKUP_FORCE_SIZE = 1 << 4
    } GtkIconLookupFlags;

    typedef enum {
	GTK_ICON_THEME_NOT_FOUND,
	GTK_ICON_THEME_FAILED
    } GtkIconThemeError;

    typedef struct _GtkBindingSet GtkBindingSet;

    typedef struct _GtkBindingEntry GtkBindingEntry;

    typedef struct _GtkBindingSignal GtkBindingSignal;

    typedef struct _GtkBindingArg GtkBindingArg;

    typedef struct _GtkCellLayout GtkCellLayout;

    typedef struct _GtkCellLayoutIface GtkCellLayoutIface;

    typedef void (*GtkCellLayoutDataFunc) (GtkClipboard * cell_layout,
					   GtkCellRenderer * cell,
					   GtkTreeModel * tree_model,
					   GtkTreeIter * iter,
					   gpointer data);

    typedef struct _GtkToolbar GtkToolbar;

    typedef struct _GtkToolbarPrivate GtkToolbarPrivate;

    typedef struct _GtkToolbarClass GtkToolbarClass;

    typedef struct _GtkMenuToolButtonClass GtkMenuToolButtonClass;

    typedef struct _GtkMenuToolButton GtkMenuToolButton;

    typedef struct _GtkMenuToolButtonPrivate GtkMenuToolButtonPrivate;

    typedef struct _GtkColorChooserWidget GtkColorChooserWidget;

    typedef struct _GtkColorChooserWidgetPrivate
	GtkColorChooserWidgetPrivate;

    typedef struct _GtkColorChooserWidgetClass GtkColorChooserWidgetClass;

    typedef struct _GtkStatusbar GtkStatusbar;

    typedef struct _GtkStatusbarPrivate GtkStatusbarPrivate;

    typedef struct _GtkStatusbarClass GtkStatusbarClass;

    typedef struct _GtkInvisible GtkInvisible;

    typedef struct _GtkInvisiblePrivate GtkInvisiblePrivate;

    typedef struct _GtkInvisibleClass GtkInvisibleClass;

    typedef struct _GtkExpander GtkExpander;

    typedef struct _GtkExpanderClass GtkExpanderClass;

    typedef struct _GtkExpanderPrivate GtkExpanderPrivate;

    typedef struct _GtkRecentChooserMenu GtkRecentChooserMenu;

    typedef struct _GtkRecentChooserMenuClass GtkRecentChooserMenuClass;

    typedef struct _GtkRecentChooserMenuPrivate
	GtkRecentChooserMenuPrivate;

    typedef struct _GtkStyleContextClass GtkStyleContextClass;

    typedef struct _GtkStyleContextPrivate GtkStyleContextPrivate;

    typedef struct _GtkSeparatorToolItem GtkSeparatorToolItem;

    typedef struct _GtkSeparatorToolItemClass GtkSeparatorToolItemClass;

    typedef struct _GtkSeparatorToolItemPrivate
	GtkSeparatorToolItemPrivate;

    typedef struct _GtkAspectFrame GtkAspectFrame;

    typedef struct _GtkAspectFramePrivate GtkAspectFramePrivate;

    typedef struct _GtkAspectFrameClass GtkAspectFrameClass;

    typedef struct _GtkLabel GtkLabel;

    typedef struct _GtkLabelPrivate GtkLabelPrivate;

    typedef struct _GtkLabelClass GtkLabelClass;

    typedef struct _GtkLabelSelectionInfo GtkLabelSelectionInfo;

    typedef struct _GtkTreeSortable GtkTreeSortable;

    typedef struct _GtkTreeSortableIface GtkTreeSortableIface;

    typedef gint(*GtkTreeIterCompareFunc) (GtkTreeModel * model,
					   GtkTreeIter * a,
					   GtkTreeIter * b,
					   gpointer user_data);

    typedef struct _GtkFileChooserButton GtkFileChooserButton;

    typedef struct _GtkFileChooserButtonPrivate
	GtkFileChooserButtonPrivate;

    typedef struct _GtkFileChooserButtonClass GtkFileChooserButtonClass;

    typedef struct _GtkAccelMap GtkAccelMap;

    typedef struct _GtkAccelMapClass GtkAccelMapClass;

    typedef void (*GtkAccelMapForeach) (void);

    typedef struct _GtkProgressBar GtkProgressBar;

    typedef struct _GtkProgressBarPrivate GtkProgressBarPrivate;

    typedef struct _GtkProgressBarClass GtkProgressBarClass;

    typedef struct _GtkContainer GtkContainer;

    typedef struct _GtkContainerPrivate GtkContainerPrivate;

    typedef struct _GtkContainerClass GtkContainerClass;

    typedef struct _GtkIconView GtkIconView;

    typedef struct _GtkIconViewClass GtkIconViewClass;

    typedef struct _GtkIconViewPrivate GtkIconViewPrivate;

    typedef void (*GtkIconViewForeachFunc) (GtkIconView * icon_view,
					    GtkTreePath * path,
					    gpointer data);

    typedef enum {
	GTK_ICON_VIEW_NO_DROP,
	GTK_ICON_VIEW_DROP_INTO,
	GTK_ICON_VIEW_DROP_LEFT,
	GTK_ICON_VIEW_DROP_RIGHT,
	GTK_ICON_VIEW_DROP_ABOVE,
	GTK_ICON_VIEW_DROP_BELOW
    } GtkIconViewDropPosition;

    typedef enum {
	GTK_RC_FG = 1 << 0,
	GTK_RC_BG = 1 << 1,
	GTK_RC_TEXT = 1 << 2,
	GTK_RC_BASE = 1 << 3
    } GtkRcFlags;

    struct _GtkSettings {
	GObject parent_instance;
	GtkSettingsPrivate *priv;
    };

    struct _GtkSettingsClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSettingsValue {
	gchar *origin;
	GValue value;
    };

    struct _GtkScaleButton {
	GtkButton parent;
	GtkScaleButtonPrivate *priv;
    };

    struct _GtkScaleButtonClass {
	GtkButtonClass parent_class;
	void (*value_changed) (GtkScaleButton * button, gdouble value);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkComboBoxText {
	GtkComboBox parent_instance;
	GtkComboBoxTextPrivate *priv;
    };

    struct _GtkComboBoxTextClass {
	GtkComboBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToolItemGroup {
	GtkContainer parent_instance;
	GtkToolItemGroupPrivate *priv;
    };

    struct _GtkToolItemGroupClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAdjustment {
	GInitiallyUnowned parent_instance;
	GtkAdjustmentPrivate *priv;
    };

    struct _GtkAdjustmentClass {
	GInitiallyUnownedClass parent_class;
	void (*changed) (GtkAdjustment * adjustment);
	void (*value_changed) (GtkAdjustment * adjustment);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextChildAnchor {
	GObject parent_instance;
	gpointer segment;
    };

    struct _GtkTextChildAnchorClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextBuffer {
	GObject parent_instance;
	GtkTextBufferPrivate *priv;
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

    struct _GtkSearchEntry {
	GtkEntry parent;
    };

    struct _GtkSearchEntryClass {
	GtkEntryClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkPageRange {
	gint start;
	gint end;
    };

    struct _GtkEventBox {
	GtkBin bin;
	GtkEventBoxPrivate *priv;
    };

    struct _GtkEventBoxClass {
	GtkBinClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkActivatableIface {
	GTypeInterface g_iface;
	void (*update) (GtkActivatable * activatable, GtkAction * action,
			const gchar * property_name);
	void (*sync_action_properties) (GtkActivatable * activatable,
					GtkAction * action);
    };

    struct _GtkMisc {
	GtkWidget widget;
	GtkMiscPrivate *priv;
    };

    struct _GtkMiscClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkColorChooserDialog {
	GtkDialog parent_instance;
	GtkColorChooserDialogPrivate *priv;
    };

    struct _GtkColorChooserDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkBin {
	GtkContainer container;
	GtkBinPrivate *priv;
    };

    struct _GtkBinClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSpinButton {
	GtkEntry entry;
	GtkSpinButtonPrivate *priv;
    };

    struct _GtkSpinButtonClass {
	GtkEntryClass parent_class;
	 gint(*input) (GtkSpinButton * spin_button, gdouble * new_value);
	 gint(*output) (GtkSpinButton * spin_button);
	void (*value_changed) (GtkSpinButton * spin_button);
	void (*change_value) (GtkSpinButton * spin_button,
			      GtkScrollType scroll);
	void (*wrapped) (GtkSpinButton * spin_button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToolButton {
	GtkToolItem parent;
	GtkToolButtonPrivate *priv;
    };

    struct _GtkToolButtonClass {
	GtkToolItemClass parent_class;
	GType button_type;
	void (*clicked) (GtkToolButton * tool_item);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIMContext {
	GObject parent_instance;
    };

    struct _GtkIMContextClass {
	GObjectClass parent_class;
	void (*preedit_start) (GtkIMContext * context);
	void (*preedit_end) (GtkIMContext * context);
	void (*preedit_changed) (GtkIMContext * context);
	void (*commit) (GtkIMContext * context, const gchar * str);
	 gboolean(*retrieve_surrounding) (GtkIMContext * context);
	 gboolean(*delete_surrounding) (GtkIMContext * context,
					gint offset, gint n_chars);
	void (*set_client_window) (GtkIMContext * context,
				   GdkWindow * window);
	void (*get_preedit_string) (GtkIMContext * context, gchar * *str,
				    PangoAttrList * *attrs,
				    gint * cursor_pos);
	 gboolean(*filter_keypress) (GtkIMContext * context,
				     GdkEventKey * event);
	void (*focus_in) (GtkIMContext * context);
	void (*focus_out) (GtkIMContext * context);
	void (*reset) (GtkIMContext * context);
	void (*set_cursor_location) (GtkIMContext * context,
				     GdkRectangle * area);
	void (*set_use_preedit) (GtkIMContext * context,
				 gboolean use_preedit);
	void (*set_surrounding) (GtkIMContext * context,
				 const gchar * text, gint len,
				 gint cursor_index);
	 gboolean(*get_surrounding) (GtkIMContext * context, gchar * *text,
				     gint * cursor_index);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
    };

    struct _GtkToolShellIface {
	GTypeInterface g_iface;
	 GtkIconSize(*get_icon_size) (GtkToolShell * shell);
	 GtkOrientation(*get_orientation) (GtkToolShell * shell);
	 GtkToolbarStyle(*get_style) (GtkToolShell * shell);
	 GtkReliefStyle(*get_relief_style) (GtkToolShell * shell);
	void (*rebuild_menu) (GtkToolShell * shell);
	 GtkOrientation(*get_text_orientation) (GtkToolShell * shell);
	 gfloat(*get_text_alignment) (GtkToolShell * shell);
	 PangoEllipsizeMode(*get_ellipsize_mode) (GtkToolShell * shell);
	GtkSizeGroup *(*get_text_size_group) (GtkToolShell * shell);
    };

    struct _GtkToggleButton {
	GtkButton button;
	GtkToggleButtonPrivate *priv;
    };

    struct _GtkToggleButtonClass {
	GtkButtonClass parent_class;
	void (*toggled) (GtkToggleButton * toggle_button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuShell {
	GtkContainer container;
	GtkMenuShellPrivate *priv;
    };

    struct _GtkMenuShellClass {
	GtkContainerClass parent_class;
	guint submenu_placement:1;
	void (*deactivate) (GtkMenuShell * menu_shell);
	void (*selection_done) (GtkMenuShell * menu_shell);
	void (*move_current) (GtkMenuShell * menu_shell,
			      GtkMenuDirectionType direction);
	void (*activate_current) (GtkMenuShell * menu_shell,
				  gboolean force_hide);
	void (*cancel) (GtkMenuShell * menu_shell);
	void (*select_item) (GtkMenuShell * menu_shell,
			     GtkWidget * menu_item);
	void (*insert) (GtkMenuShell * menu_shell, GtkWidget * child,
			gint position);
	 gint(*get_popup_delay) (GtkMenuShell * menu_shell);
	 gboolean(*move_selected) (GtkMenuShell * menu_shell,
				   gint distance);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFileChooserDialog {
	GtkDialog parent_instance;
	GtkFileChooserDialogPrivate *priv;
    };

    struct _GtkFileChooserDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentData {
	gchar *display_name;
	gchar *description;
	gchar *mime_type;
	gchar *app_name;
	gchar *app_exec;
	gchar **groups;
	gboolean is_private;
    };

    struct _GtkRecentManager {
	GObject parent;
	GtkRecentManagerPrivate *priv;
    };

    struct _GtkRecentManagerClass {
	GObjectClass parent_class;
	void (*changed) (GtkRecentManager * manager);
	void (*_gtk_recent1) (void);
	void (*_gtk_recent2) (void);
	void (*_gtk_recent3) (void);
	void (*_gtk_recent4) (void);
    };

    struct _GtkFileChooserWidget {
	GtkBox parent_instance;
	GtkFileChooserWidgetPrivate *priv;
    };

    struct _GtkFileChooserWidgetClass {
	GtkBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIMContextSimple {
	GtkIMContext object;
	GtkIMContextSimplePrivate *priv;
    };

    struct _GtkIMContextSimpleClass {
	GtkIMContextClass parent_class;
    };

    struct _GtkRadioButton {
	GtkCheckButton check_button;
	GtkRadioButtonPrivate *priv;
    };

    struct _GtkRadioButtonClass {
	GtkCheckButtonClass parent_class;
	void (*group_changed) (GtkRadioButton * radio_button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparatorMenuItem {
	GtkMenuItem menu_item;
    };

    struct _GtkSeparatorMenuItemClass {
	GtkMenuItemClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkLinkButton {
	GtkButton parent_instance;
	GtkLinkButtonPrivate *priv;
    };

    struct _GtkLinkButtonClass {
	GtkButtonClass parent_class;
	 gboolean(*activate_link) (GtkLinkButton * button);
	void (*_gtk_padding1) (void);
	void (*_gtk_padding2) (void);
	void (*_gtk_padding3) (void);
	void (*_gtk_padding4) (void);
    };

    struct _GtkRcStyle {
	GObject parent_instance;
	gchar *name;
	gchar *bg_pixmap_name;
	PangoFontDescription *font_desc;
	GtkRcFlags color_flags;
	GdkColor fg;
	GdkColor bg;
	GdkColor text;
	GdkColor base;
	gint xthickness;
	gint ythickness;
	GArray *rc_properties;
	GSList *rc_style_lists;
	GSList *icon_factories;
	guint engine_specified:1;
    };

    struct _GtkRequisition {
	gint width;
	gint height;
    };

    struct _GtkStyle {
	GObject parent_instance;
	GdkColor fg;
	GdkColor bg;
	GdkColor light;
	GdkColor dark;
	GdkColor mid;
	GdkColor text;
	GdkColor base;
	GdkColor text_aa;
	GdkColor black;
	GdkColor white;
	PangoFontDescription *font_desc;
	gint xthickness;
	gint ythickness;
	cairo_pattern_t *background;
	gint attach_count;
	GdkVisual *visual;
	PangoFontDescription *private_font_desc;
	GtkRcStyle *rc_style;
	GSList *styles;
	GArray *property_cache;
	GSList *icon_factories;
    };

    struct _GtkStyleContext {
	GObject parent_object;
	GtkStyleContextPrivate *priv;
    };

    struct _GtkWidget {
	GInitiallyUnowned parent_instance;
	GtkWidgetPrivate *priv;
    };

    struct _GtkWindow {
	GtkBin bin;
	GtkWindowPrivate *priv;
    };

    struct _GtkRange {
	GtkWidget widget;
	GtkRangePrivate *priv;
    };

    struct _GtkRangeClass {
	GtkWidgetClass parent_class;
	gchar *slider_detail;
	gchar *stepper_detail;
	void (*value_changed) (GtkRange * range);
	void (*adjust_bounds) (GtkRange * range, gdouble new_value);
	void (*move_slider) (GtkRange * range, GtkScrollType scroll);
	void (*get_range_border) (GtkRange * range, GtkBorder * border_);
	 gboolean(*change_value) (GtkRange * range, GtkScrollType scroll,
				  gdouble new_value);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextMark {
	GObject parent_instance;
	gpointer segment;
    };

    struct _GtkTextMarkClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeSelection {
	GObject parent;
	GtkTreeSelectionPrivate *priv;
    };

    struct _GtkTreeSelectionClass {
	GObjectClass parent_class;
	void (*changed) (GtkTreeSelection * selection);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparator {
	GtkWidget widget;
	GtkSeparatorPrivate *priv;
    };

    struct _GtkSeparatorClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeViewColumn {
	GInitiallyUnowned parent_instance;
	GtkTreeViewColumnPrivate *priv;
    };

    struct _GtkTreeViewColumnClass {
	GInitiallyUnownedClass parent_class;
	void (*clicked) (GtkTreeViewColumn * tree_column);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeModelSort {
	GObject parent;
	GtkTreeModelSortPrivate *priv;
    };

    struct _GtkTreeModelSortClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkViewport {
	GtkBin bin;
	GtkViewportPrivate *priv;
    };

    struct _GtkViewportClass {
	GtkBinClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStatusIcon {
	GtkDialog parent;
	GtkStatusIconPrivate *priv;
    };

    struct _GtkStatusIconClass {
	GObjectClass parent_class;
	void (*activate) (GtkStatusIcon * status_icon);
	void (*popup_menu) (GtkStatusIcon * status_icon, guint button,
			    guint32 activate_time);
	 gboolean(*size_changed) (GtkStatusIcon * status_icon, gint size);
	 gboolean(*button_press_event) (GtkStatusIcon * status_icon,
					GdkEventKey * event);
	 gboolean(*button_release_event) (GtkStatusIcon * status_icon,
					  GdkEventKey * event);
	 gboolean(*scroll_event) (GtkStatusIcon * status_icon,
				  GdkEventScroll * event);
	 gboolean(*query_tooltip) (GtkStatusIcon * status_icon, gint x,
				   gint y, gboolean keyboard_mode,
				   GtkTooltip * tooltip);
	void *__gtk_reserved1;
	void *__gtk_reserved2;
	void *__gtk_reserved3;
	void *__gtk_reserved4;
    };

    struct _GtkBox {
	GtkContainer container;
	GtkBoxPrivate *priv;
    };

    struct _GtkBoxClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCalendar {
	GtkWidget widget;
	GtkCalendarPrivate *priv;
    };

    struct _GtkCalendarClass {
	GtkWidgetClass parent_class;
	void (*month_changed) (GtkCalendar * calendar);
	void (*day_selected) (GtkCalendar * calendar);
	void (*day_selected_double_click) (GtkCalendar * calendar);
	void (*prev_month) (GtkCalendar * calendar);
	void (*next_month) (GtkCalendar * calendar);
	void (*prev_year) (GtkCalendar * calendar);
	void (*next_year) (GtkCalendar * calendar);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererProgress {
	GtkCellRenderer parent_instance;
	GtkCellRendererProgressPrivate *priv;
    };

    struct _GtkCellRendererProgressClass {
	GtkCellRendererClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkDialog {
	GtkWindow window;
	GtkDialogPrivate *priv;
    };

    struct _GtkDialogClass {
	GtkWindowClass parent_class;
	void (*response) (GtkDialog, gint);
	void (*close) (GtkDialog);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkActionableInterface {
	GTypeInterface g_iface;
	const gchar *(*get_action_name) (GtkActionable * actionable);
	void (*set_action_name) (GtkActionable * actionable,
				 const gchar * action_name);
	GVariant *(*get_action_target_value) (GtkActionable * actionable);
	void (*set_action_target_value) (GtkActionable * actionable,
					 GVariant * target_value);
    };

    struct _GtkListStore {
	GObject parent;
	GtkListStorePrivate *priv;
    };

    struct _GtkListStoreClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentChooserIface {
	GTypeInterface base_iface;
	 gboolean(*set_current_uri) (GtkRecentChooser * chooser,
				     const gchar * uri, GError * *error);
	gchar *(*get_current_uri) (GtkRecentChooser * chooser);
	 gboolean(*select_uri) (GtkRecentChooser * chooser,
				const gchar * uri, GError * *error);
	void (*unselect_uri) (GtkRecentChooser * chooser,
			      const gchar * uri);
	void (*select_all) (GtkRecentChooser * chooser);
	void (*unselect_all) (GtkRecentChooser * chooser);
	GList *(*get_items) (GtkRecentChooser * chooser);
	GtkRecentManager *(*get_recent_manager) (GtkRecentChooser *
						 chooser);
	void (*add_filter) (GtkRecentChooser * chooser,
			    GtkRecentFilter * filter);
	void (*remove_filter) (GtkRecentChooser * chooser,
			       GtkRecentFilter * filter);
	GSList *(*list_filters) (GtkRecentChooser * chooser);
	void (*set_sort_func) (GtkRecentChooser * chooser,
			       GtkRecentSortFunc sort_func,
			       gpointer sort_data,
			       GDestroyNotify data_destroy);
	void (*item_activated) (GtkRecentChooser * chooser);
	void (*selection_changed) (GtkRecentChooser * chooser);
    };

    struct _GtkScrollableInterface {
	GTypeInterface base_iface;
    };

    struct _GtkRadioAction {
	GtkToggleAction parent;
	GtkRadioActionPrivate *private_data;
    };

    struct _GtkRadioActionClass {
	GtkToggleActionClass parent_class;
	void (*changed) (GtkRadioAction * action,
			 GtkRadioAction * current);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentChooserWidget {
	GtkBox parent_instance;
	GtkRecentChooserWidgetPrivate *priv;
    };

    struct _GtkRecentChooserWidgetClass {
	GtkBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkPlug {
	GtkWindow window;
	GtkPlugPrivate *priv;
    };

    struct _GtkPlugClass {
	GtkWindowClass parent_class;
	void (*embedded) (GtkPlug * plug);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkNotebook {
	GtkContainer widget;
	GtkNotebookPrivate *priv;
    };

    struct _GtkNotebookClass {
	GtkContainerClass parent_class;
	void (*switch_page) (GtkNotebook * notebook, GtkWidget * page,
			     guint page_num);
	 gboolean(*select_page) (GtkNotebook * notebook,
				 gboolean move_focus);
	 gboolean(*focus_tab) (GtkNotebook * notebook,
			       GtkNotebookTab type);
	 gboolean(*change_current_page) (GtkNotebook * notebook,
					 gint offset);
	void (*move_focus_out) (GtkNotebook * notebook,
				GtkDirectionType direction);
	 gboolean(*reorder_tab) (GtkNotebook * notebook,
				 GtkDirectionType direction,
				 gboolean move_to_last);
	 gint(*insert_page) (GtkNotebook * notebook, GtkWidget * child,
			     GtkWidget * tab_label, GtkWidget * menu_label,
			     gint position);
	GtkNotebook *(*create_window) (GtkNotebook * notebook,
				       GtkWidget * page, gint x, gint y);
	void (*page_reordered) (GtkNotebook * notebook, GtkWidget * page,
				guint page_num);
	void (*page_removed) (GtkNotebook * notebook, GtkWidget * page,
			      guint page_num);
	void (*page_added) (GtkNotebook * notebook, GtkWidget * page,
			    guint page_num);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkLockButton {
	GtkButton parent;
	GtkLockButtonPrivate *priv;
    };

    struct _GtkLockButtonClass {
	GtkButtonClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkTreeDragSourceIface {
	GTypeInterface g_iface;
	 gboolean(*row_draggable) (GtkTreeDragSource * drag_source,
				   GtkTreePath * path);
	 gboolean(*drag_data_get) (GtkTreeDragSource * drag_source,
				   GtkTreePath * path,
				   GtkSelectionData * selection_data);
	 gboolean(*drag_data_delete) (GtkTreeDragSource * drag_source,
				      GtkTreePath * path);
    };

    struct _GtkTreeDragDestIface {
	GTypeInterface g_iface;
	 gboolean(*drag_data_received) (GtkTreeDragDest * drag_dest,
					GtkTreePath * dest,
					GtkSelectionData * selection_data);
	 gboolean(*row_drop_possible) (GtkTreeDragDest * drag_dest,
				       GtkTreePath * dest,
				       GtkSelectionData * selection_data);
    };

    struct _GtkLayout {
	GtkContainer container;
	GtkLayoutPrivate *priv;
    };

    struct _GtkLayoutClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkGrid {
	GtkContainer container;
	GtkGridPrivate *priv;
    };

    struct _GtkGridClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkEntryBuffer {
	GObject parent_instance;
	GtkEntryBufferPrivate *priv;
    };

    struct _GtkEntryBufferClass {
	GObjectClass parent_class;
	void (*inserted_text) (GtkEntryBuffer * buffer, guint position,
			       const gchar * chars, guint n_chars);
	void (*deleted_text) (GtkEntryBuffer * buffer, guint position,
			      guint n_chars);
	const gchar *(*get_text) (GtkEntryBuffer * buffer,
				  gsize * n_bytes);
	 guint(*get_length) (GtkEntryBuffer * buffer);
	 guint(*insert_text) (GtkEntryBuffer * buffer, guint position,
			      const gchar * chars, guint n_chars);
	 guint(*delete_text) (GtkEntryBuffer * buffer, guint position,
			      guint n_chars);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkRequestedSize {
	gint data;
	gpointer minimum_size;
	gpointer natural_size;
    };

    struct _GtkFileFilterInfo {
	GtkFileFilterFlags contains;
	const gchar *filename;
	const gchar *uri;
	const gchar *display_name;
	const gchar *mime_type;
    };

    struct _GtkThemingEngine {
	GObject parent_object;
	GtkThemingEnginePrivate *priv;
    };

    struct _GtkThemingEngineClass {
	GObjectClass parent_class;
	void (*render_line) (GtkThemingEngine * engine, cairo_t * cr,
			     gdouble x0, gdouble y0, gdouble x1,
			     gdouble y1);
	void (*render_background) (GtkThemingEngine * engine, cairo_t * cr,
				   gdouble x0, gdouble y0, gdouble x1,
				   gdouble y1);
	void (*render_frame) (GtkThemingEngine * engine, cairo_t * cr,
			      gdouble x0, gdouble y0, gdouble x1,
			      gdouble y1);
	void (*render_frame_gap) (GtkThemingEngine * engine, cairo_t * cr,
				  gdouble x, gdouble y, gdouble width,
				  gdouble height, GtkPositionType gap_side,
				  gdouble xy0_gap, gdouble xy1_gap);
	void (*render_extension) (GtkThemingEngine * engine, cairo_t * cr,
				  gdouble x, gdouble y, gdouble width,
				  gdouble height,
				  GtkPositionType gap_side);
	void (*render_check) (GtkThemingEngine * engine, cairo_t * cr,
			      gdouble x0, gdouble y0, gdouble x1,
			      gdouble y1);
	void (*render_option) (GtkThemingEngine * engine, cairo_t * cr,
			       gdouble x0, gdouble y0, gdouble x1,
			       gdouble y1);
	void (*render_arrow) (GtkThemingEngine * engine, cairo_t * cr,
			      gdouble x0, gdouble y0, gdouble x1,
			      gdouble y1);
	void (*render_expander) (GtkThemingEngine * engine, cairo_t * cr,
				 gdouble x0, gdouble y0, gdouble x1,
				 gdouble y1);
	void (*render_focus) (GtkThemingEngine * engine, cairo_t * cr,
			      gdouble x0, gdouble y0, gdouble x1,
			      gdouble y1);
	void (*render_layout) (GtkThemingEngine * engine, cairo_t * cr,
			       gdouble x, gdouble y, PangoLayout * layout);
	void (*render_slider) (GtkThemingEngine * engine, cairo_t * cr,
			       gdouble x, gdouble y, gdouble width,
			       gdouble height, GtkOrientation orientation);
	void (*render_handle) (GtkThemingEngine * engine, cairo_t * cr,
			       gdouble x0, gdouble y0, gdouble x1,
			       gdouble y1);
	void (*render_activity) (GtkThemingEngine * engine, cairo_t * cr,
				 gdouble x0, gdouble y0, gdouble x1,
				 gdouble y1);
	GdkPixbuf *(*render_icon_pixbuf) (GtkThemingEngine * engine,
					  const GtkIconSource * source,
					  GtkIconSize size);
	void (*render_icon) (GtkThemingEngine * engine, cairo_t * cr,
			     GdkPixbuf * pixbuf, gdouble x, gdouble y);
	gpointer padding;
    };

    struct _GtkFontChooserIface {
	GTypeInterface base_iface;
	PangoFontFamily *(*get_font_family) (GtkFontChooser * fontchooser);
	PangoFontFace *(*get_font_face) (GtkFontChooser * fontchooser);
	 gint(*get_font_size) (GtkFontChooser * fontchooser);
	void (*set_filter_func) (GtkFontChooser * fontchooser,
				 GtkFontFilterFunc filter,
				 gpointer user_data,
				 GDestroyNotify destroy);
	void (*font_activated) (GtkFontChooser * chooser,
				const gchar * fontname);
	gpointer padding;
    };

    struct _GtkAppChooserButton {
	GtkComboBox parent;
	GtkAppChooserButtonPrivate *priv;
    };

    struct _GtkAppChooserButtonClass {
	GtkComboBoxClass parent_class;
	void (*custom_item_activated) (GtkAppChooserButton * self,
				       const gchar * item_name);
	gpointer padding;
    };

    struct _GtkCellRendererSpinner {
	GtkCellRenderer parent;
	GtkCellRendererSpinnerPrivate *priv;
    };

    struct _GtkCellRendererSpinnerClass {
	GtkCellRendererClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMountOperation {
	GMountOperation parent_instance;
	GtkMountOperationPrivate *priv;
    };

    struct _GtkMountOperationClass {
	GMountOperationClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkWidgetClass {
	GInitiallyUnownedClass parent_class;
	guint activate_signal;
	void (*dispatch_child_properties_changed) (GtkWidget * widget,
						   guint n_pspecs,
						   GParamSpec * *pspecs);
	void (*destroy) (GtkWidget * widget);
	void (*show) (GtkWidget * widget);
	void (*show_all) (GtkWidget * widget);
	void (*hide) (GtkWidget * widget);
	void (*map) (GtkWidget * widget);
	void (*unmap) (GtkWidget * widget);
	void (*realize) (GtkWidget * widget);
	void (*unrealize) (GtkWidget * widget);
	void (*size_allocate) (GtkWidget * widget,
			       GtkAllocation * allocation);
	void (*state_changed) (GtkWidget * widget,
			       GtkStateType previous_state);
	void (*state_flags_changed) (GtkWidget * widget,
				     GtkStateFlags previous_state_flags);
	void (*parent_set) (GtkWidget * widget,
			    GtkWidget * previous_parent);
	void (*hierarchy_changed) (GtkWidget * widget,
				   GtkWidget * previous_parent);
	void (*style_set) (GtkWidget * widget, GtkStyle * previous_style);
	void (*direction_changed) (GtkWidget * widget,
				   GtkTextDirection previous_direction);
	void (*grab_notify) (GtkWidget * widget, gboolean was_grabbed);
	void (*child_notify) (GtkWidget * widget,
			      GParamSpec * child_property);
	 gboolean(*draw) (GtkWidget * widget, cairo_t * cr);
	 GtkSizeRequestMode(*get_request_mode) (GtkWidget * widget);
	void (*get_preferred_height) (GtkWidget * widget,
				      gint * minimum_height,
				      gint * natural_height);
	void (*get_preferred_width_for_height) (GtkWidget * widget,
						gint height,
						gint * minimum_width,
						gint * natural_width);
	void (*get_preferred_width) (GtkWidget * widget,
				     gint * minimum_height,
				     gint * natural_height);
	void (*get_preferred_height_for_width) (GtkWidget * widget,
						gint height,
						gint * minimum_width,
						gint * natural_width);
	 gboolean(*mnemonic_activate) (GtkWidget * widget,
				       gboolean group_cycling);
	void (*grab_focus) (GtkWidget * widget);
	 gboolean(*focus) (GtkWidget * widget, GtkDirectionType direction);
	void (*move_focus) (GtkWidget * widget,
			    GtkDirectionType direction);
	 gboolean(*keynav_failed) (GtkWidget * widget,
				   GtkDirectionType direction);
	 gboolean(*event) (GtkWidget * widget, GdkEvent * event);
	 gboolean(*button_press_event) (GtkWidget * widget,
					GdkEventKey * event);
	 gboolean(*button_release_event) (GtkWidget * widget,
					  GdkEventKey * event);
	 gboolean(*scroll_event) (GtkWidget * widget,
				  GdkEventScroll * event);
	 gboolean(*motion_notify_event) (GtkWidget * widget,
					 GdkEventMotion * event);
	 gboolean(*delete_event) (GtkWidget * widget, GdkEventAny * event);
	 gboolean(*destroy_event) (GtkWidget * widget,
				   GdkEventAny * event);
	 gboolean(*key_press_event) (GtkWidget * widget,
				     GdkEventKey * event);
	 gboolean(*key_release_event) (GtkWidget * widget,
				       GdkEventKey * event);
	 gboolean(*enter_notify_event) (GtkWidget * widget,
					GdkEventCrossing * event);
	 gboolean(*leave_notify_event) (GtkWidget * widget,
					GdkEventCrossing * event);
	 gboolean(*configure_event) (GtkWidget * widget,
				     GdkEventConfigure * event);
	 gboolean(*focus_in_event) (GtkWidget * widget,
				    GdkEventFocus * event);
	 gboolean(*focus_out_event) (GtkWidget * widget,
				     GdkEventFocus * event);
	 gboolean(*map_event) (GtkWidget * widget, GdkEventAny * event);
	 gboolean(*unmap_event) (GtkWidget * widget, GdkEventAny * event);
	 gboolean(*property_notify_event) (GtkWidget * widget,
					   GdkEventProperty * event);
	 gboolean(*selection_clear_event) (GtkWidget * widget,
					   GdkEventSelection * event);
	 gboolean(*selection_request_event) (GtkWidget * widget,
					     GdkEventSelection * event);
	 gboolean(*selection_notify_event) (GtkWidget * widget,
					    GdkEventSelection * event);
	 gboolean(*proximity_in_event) (GtkWidget * widget,
					GdkEventProximity * event);
	 gboolean(*proximity_out_event) (GtkWidget * widget,
					 GdkEventProximity * event);
	 gboolean(*visibility_notify_event) (GtkWidget * widget,
					     GdkEventVisibility * event);
	 gboolean(*window_state_event) (GtkWidget * widget,
					GdkEventWindowState * event);
	 gboolean(*damage_event) (GtkWidget * widget,
				  GdkEventExpose * event);
	 gboolean(*grab_broken_event) (GtkWidget * widget,
				       GdkEventGrabBroken * event);
	void (*selection_get) (GtkWidget * widget,
			       GtkSelectionData * selection_data,
			       guint info, guint time_);
	void (*selection_received) (GtkWidget * widget,
				    GtkSelectionData * selection_data,
				    guint time_);
	void (*drag_begin) (GtkWidget * widget, GdkDragContext * context);
	void (*drag_end) (GtkWidget * widget, GdkDragContext * context);
	void (*drag_data_get) (GtkWidget * widget,
			       GdkDragContext * context,
			       GtkSelectionData * selection_data,
			       guint info, guint time_);
	void (*drag_data_delete) (GtkWidget * widget,
				  GdkDragContext * context);
	void (*drag_leave) (GtkWidget * widget, GdkDragContext * context,
			    guint time_);
	 gboolean(*drag_motion) (GtkWidget * widget,
				 GdkDragContext * context, gint x, gint y,
				 guint time_);
	 gboolean(*drag_drop) (GtkWidget * widget,
			       GdkDragContext * context, gint x, gint y,
			       guint time_);
	void (*drag_data_received) (GtkWidget * widget,
				    GdkDragContext * context, gint x,
				    gint y,
				    GtkSelectionData * selection_data,
				    guint info, guint time_);
	 gboolean(*drag_failed) (GtkWidget * widget,
				 GdkDragContext * context,
				 GtkDragResult result);
	 gboolean(*popup_menu) (GtkWidget * widget);
	 gboolean(*show_help) (GtkWidget * widget,
			       GtkWidgetHelpType help_type);
	AtkObject *(*get_accessible) (GtkWidget * widget);
	void (*screen_changed) (GtkWidget * widget,
				GdkScreen * previous_screen);
	 gboolean(*can_activate_accel) (GtkWidget * widget,
					guint signal_id);
	void (*composited_changed) (GtkWidget * widget);
	 gboolean(*query_tooltip) (GtkWidget * widget, gint x, gint y,
				   gboolean keyboard_tooltip,
				   GtkTooltip * tooltip);
	void (*compute_expand) (GtkWidget * widget, gboolean * hexpand_p,
				gboolean * vexpand_p);
	void (*adjust_size_request) (GtkWidget * widget,
				     GtkOrientation orientation,
				     gint * minimum_size,
				     gint * natural_size);
	void (*adjust_size_allocation) (GtkWidget * widget,
					GtkOrientation orientation,
					gint * minimum_size,
					gint * natural_size,
					gint * allocated_pos,
					gint * allocated_size);
	void (*style_updated) (GtkWidget * widget);
	 gboolean(*touch_event) (GtkWidget * widget,
				 GdkEventTouch * event);
	GtkWidgetClassPrivate *priv;
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };

    struct _GtkWidgetAuxInfo {
	gint width;
	gint height;
	guint halign:4;
	guint valign:4;
	GtkBorder margin;
    };

    struct _GtkTreeStore {
	GObject parent;
	GtkTreeStorePrivate *priv;
    };

    struct _GtkTreeStoreClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStockItem {
	gchar *stock_id;
	gchar *label;
	GdkModifierType modifier;
	guint keyval;
	gchar *translation_domain;
    };

    struct _GtkEntry {
	GtkWidget parent_instance;
	GtkEntryPrivate *priv;
    };

    struct _GtkEntryClass {
	GtkWidgetClass parent_class;
	void (*populate_popup) (GtkEntry * entry, GtkMenu * menu);
	void (*activate) (GtkEntry * entry);
	void (*move_cursor) (GtkEntry * entry, GtkMovementStep step,
			     gint count, gboolean extend_selection);
	void (*insert_at_cursor) (GtkEntry * entry, const gchar * str);
	void (*delete_from_cursor) (GtkEntry * entry, GtkDeleteType type,
				    gint count);
	void (*backspace) (GtkEntry * entry);
	void (*cut_clipboard) (GtkEntry * entry);
	void (*copy_clipboard) (GtkEntry * entry);
	void (*paste_clipboard) (GtkEntry * entry);
	void (*toggle_overwrite) (GtkEntry * entry);
	void (*get_text_area_size) (GtkEntry * entry, gint * x, gint * y,
				    gint * width, gint * height);
	void (*get_frame_size) (GtkEntry * entry, gint * x, gint * y,
				gint * width, gint * height);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
    };

    struct _GtkColorChooserInterface {
	GTypeInterface base_interface;
	void (*get_rgba) (GtkColorChooser * chooser, GdkRGBA * color);
	void (*set_rgba) (GtkColorChooser * chooser,
			  const GdkRGBA * color);
	void (*add_palette) (GtkColorChooser * chooser,
			     GtkOrientation orientation,
			     gint colors_per_line, gint n_colors,
			     GdkRGBA * colors);
	void (*color_activated) (GtkColorChooser * chooser,
				 const GdkRGBA * color);
	gpointer padding;
    };

    struct _GtkAccelLabel {
	GtkDialog label;
	GtkAccelLabelPrivate *priv;
    };

    struct _GtkAccelLabelClass {
	GtkLabelClass parent_class;
	gchar *signal_quote1;
	gchar *signal_quote2;
	gchar *mod_name_shift;
	gchar *mod_name_control;
	gchar *mod_name_alt;
	gchar *mod_separator;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuButton {
	GtkToggleButton parent;
	GtkMenuButtonPrivate *priv;
    };

    struct _GtkMenuButtonClass {
	GtkToggleButtonClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAppChooserDialog {
	GtkDialog parent;
	GtkAppChooserDialogPrivate *priv;
    };

    struct _GtkAppChooserDialogClass {
	GtkDialogClass parent_class;
	gpointer padding[16];
    };

    struct _GtkColorButton {
	GtkButton button;
	GtkColorButtonPrivate *priv;
    };

    struct _GtkColorButtonClass {
	GtkButtonClass parent_class;
	void (*color_set) (GtkColorButton * cp);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkUIManager {
	GObject parent;
	GtkUIManagerPrivate *priv;
    };

    struct _GtkUIManagerClass {
	GObjectClass parent_class;
	void (*add_widget) (GtkUIManager * manager, GtkWidget * widget);
	void (*actions_changed) (GtkUIManager * manager);
	void (*connect_proxy) (GtkUIManager * manager, GtkAction * action,
			       GtkWidget * proxy);
	void (*disconnect_proxy) (GtkUIManager * manager,
				  GtkAction * action, GtkWidget * proxy);
	void (*pre_activate) (GtkUIManager * manager, GtkAction * action);
	void (*post_activate) (GtkUIManager * manager, GtkAction * action);
	GtkWidget *(*get_widget) (GtkUIManager * manager,
				  const gchar * path);
	GtkAction *(*get_action) (GtkUIManager * manager,
				  const gchar * path);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToggleToolButton {
	GtkToolButton parent;
	GtkToggleToolButtonPrivate *priv;
    };

    struct _GtkToggleToolButtonClass {
	GtkToolButtonClass parent_class;
	void (*toggled) (GtkToggleToolButton * button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererAccel {
	GtkCellRendererText parent;
	GtkCellRendererAccelPrivate *priv;
    };

    struct _GtkCellRendererAccelClass {
	GtkCellRendererTextClass parent_class;
	void (*accel_edited) (GtkCellRendererAccel * accel,
			      const gchar * path_string, guint accel_key,
			      GdkModifierType accel_mods,
			      guint hardware_keycode);
	void (*accel_cleared) (GtkCellRendererAccel * accel,
			       const gchar * path_string);
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkOverlay {
	GtkBin parent;
	GtkOverlayPrivate *priv;
    };

    struct _GtkOverlayClass {
	GtkBinClass parent_class;
	 gboolean(*get_child_position) (GtkOverlay * overlay,
					GtkWidget * widget,
					GtkAllocation * allocation);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkTextView {
	GtkContainer parent_instance;
	GtkTextViewPrivate *priv;
    };

    struct _GtkTextViewClass {
	GtkContainerClass parent_class;
	void (*populate_popup) (GtkTextView * text_view, GtkMenu * menu);
	void (*move_cursor) (GtkTextView * text_view, GtkMovementStep step,
			     gint count, gboolean extend_selection);
	void (*set_anchor) (GtkTextView * text_view);
	void (*insert_at_cursor) (GtkTextView * text_view,
				  const gchar * str);
	void (*delete_from_cursor) (GtkTextView * text_view,
				    GtkDeleteType type, gint count);
	void (*backspace) (GtkTextView * text_view);
	void (*cut_clipboard) (GtkTextView * text_view);
	void (*copy_clipboard) (GtkTextView * text_view);
	void (*paste_clipboard) (GtkTextView * text_view);
	void (*toggle_overwrite) (GtkTextView * text_view);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkInfoBar {
	GtkBox parent;
	GtkInfoBarPrivate *priv;
    };

    struct _GtkInfoBarClass {
	GtkBoxClass parent_class;
	void (*response) (GtkInfoBar * info_bar, gint response_id);
	void (*close) (GtkInfoBar * info_bar);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentAction {
	GtkAction parent_instance;
	GtkRecentActionPrivate *priv;
    };

    struct _GtkRecentActionClass {
	GtkActionClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkNumerableIcon {
	GEmblemedIcon parent;
	GtkNumerableIconPrivate *priv;
    };

    struct _GtkNumerableIconClass {
	GEmblemedIconClass parent_class;
	gpointer padding[16];
    };

    struct _GtkTextTagTable {
	GObject parent_instance;
	GtkTextTagTablePrivate *priv;
    };

    struct _GtkTextTagTableClass {
	GObjectClass parent_class;
	void (*tag_changed) (GtkTextTagTable * table, GtkTextTag * tag,
			     gboolean size_changed);
	void (*tag_added) (GtkTextTagTable * table, GtkTextTag * tag);
	void (*tag_removed) (GtkTextTagTable * table, GtkTextTag * tag);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentFilterInfo {
	GtkRecentFilterFlags contains;
	const gchar *uri;
	const gchar *display_name;
	const gchar *mime_type;
	const gchar **applications;
	const gchar **groups;
	gint age;
    };

    struct _GtkSwitch {
	GtkWidget parent_instance;
	GtkSwitchPrivate *priv;
    };

    struct _GtkSwitchClass {
	GtkWidgetClass parent_class;
	void (*activate) (GtkSwitch * sw);
	void (*_switch_padding_1) (void);
	void (*_switch_padding_2) (void);
	void (*_switch_padding_3) (void);
	void (*_switch_padding_4) (void);
	void (*_switch_padding_5) (void);
	void (*_switch_padding_6) (void);
    };

    struct _GtkCellRenderer {
	GInitiallyUnowned parent_instance;
	GtkCellRendererPrivate *priv;
    };

    struct _GtkCellRendererClass {
	GInitiallyUnownedClass parent_class;
	 GtkSizeRequestMode(*get_request_mode) (GtkCellRenderer * cell);
	void (*get_preferred_width) (GtkCellRenderer * cell,
				     GtkWidget * widget,
				     gint * minimum_size,
				     gint * natural_size);
	void (*get_preferred_height_for_width) (GtkCellRenderer * cell,
						GtkWidget * widget,
						gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*get_preferred_height) (GtkCellRenderer * cell,
				      GtkWidget * widget,
				      gint * minimum_size,
				      gint * natural_size);
	void (*get_preferred_width_for_height) (GtkCellRenderer * cell,
						GtkWidget * widget,
						gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*get_aligned_area) (GtkCellRenderer * cell,
				  GtkWidget * widget,
				  GtkCellRendererState flags,
				  const GdkRectangle * cell_area,
				  GdkRectangle * aligned_area);
	void (*get_size) (GtkCellRenderer * cell, GtkWidget * widget,
			  const GdkRectangle * cell_area, gint * x_offset,
			  gint * y_offset, gint * width, gint * height);
	void (*render) (GtkCellRenderer * cell, cairo_t * cr,
			GtkWidget * widget,
			const GdkRectangle * background_area,
			const GdkRectangle * cell_area,
			GtkCellRendererState flags);
	 gboolean(*activate) (GtkCellRenderer * cell, GdkEvent * event,
			      GtkWidget * widget, const gchar * path,
			      const GdkRectangle * background_area,
			      const GdkRectangle * cell_area,
			      GtkCellRendererState flags);
	GtkCellEditable *(*start_editing) (GtkCellRenderer * cell,
					   GdkEvent * event,
					   GtkWidget * widget,
					   const gchar * path,
					   const GdkRectangle *
					   background_area,
					   const GdkRectangle * cell_area,
					   GtkCellRendererState flags);
	void (*editing_canceled) (GtkCellRenderer * cell);
	void (*editing_started) (GtkCellRenderer * cell,
				 GtkCellEditable * editable,
				 const gchar * path);
	GtkCellRendererClassPrivate *priv;
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTargetEntry {
	gchar *target;
	guint flags;
	guint info;
    };

    struct _GtkMenuBar {
	GtkMenuShell menu_shell;
	GtkMenuBarPrivate *priv;
    };

    struct _GtkMenuBarClass {
	GtkMenuShellClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFrame {
	GtkBin bin;
	GtkFramePrivate *priv;
    };

    struct _GtkFrameClass {
	GtkBinClass parent_class;
	void (*compute_child_allocation) (GtkFrame * frame,
					  GtkAllocation * allocation);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAssistant {
	GtkWindow parent;
	GtkAssistantPrivate *priv;
    };

    struct _GtkAssistantClass {
	GtkWindowClass parent_class;
	void (*prepare) (GtkAssistant * assistant, GtkWidget * page);
	void (*apply) (GtkAssistant * assistant);
	void (*close) (GtkAssistant * assistant);
	void (*cancel) (GtkAssistant * assistant);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
    };

    struct _GtkBorder {
	gint16 left;
	gint16 right;
	gint16 top;
	gint16 bottom;
    };

    struct _GtkToolItem {
	GtkBin parent;
	GtkToolItemPrivate *priv;
    };

    struct _GtkToolItemClass {
	GtkBinClass parent_class;
	 gboolean(*create_menu_proxy) (GtkToolItem * tool_item);
	void (*toolbar_reconfigured) (GtkToolItem * tool_item);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextAppearance {
	GdkColor bg_color;
	GdkColor fg_color;
	gint rise;
	guint underline:4;
	guint strikethrough:1;
	guint draw_bg:1;
	guint inside_selection:1;
	guint is_text:1;
	GdkRGBA *rgba[2];
    };

    struct _GtkTextAttributes {
	guint refcount;
	GtkTextAppearance appearance;
	GtkJustification justification;
	GtkTextDirection direction;
	PangoFontDescription *font;
	gdouble font_scale;
	gint left_margin;
	gint right_margin;
	gint indent;
	gint pixels_above_lines;
	gint pixels_below_lines;
	gint pixels_inside_wrap;
	PangoTabArray *tabs;
	GtkWrapMode *wrap_mode;
	PangoLanguage *language;
	GdkColor *pg_bg_color;
	guint invisible:1;
	guint bg_full_height:1;
	guint editable:1;
	GdkRGBA *pg_bg_rgba;
	guint padding[3];
    };

    struct _GtkCellRendererSpin {
	GtkCellRendererText parent;
	GtkCellRendererSpinPrivate *priv;
    };

    struct _GtkCellRendererSpinClass {
	GtkCellRendererTextClass parent;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIMMulticontext {
	GtkIMContext object;
	GtkIMMulticontextPrivate *priv;
    };

    struct _GtkIMMulticontextClass {
	GtkIMContextClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellAreaBox {
	GtkCellArea parent_instance;
	GtkCellAreaBoxPrivate *priv;
    };

    struct _GtkCellAreaBoxClass {
	GtkCellAreaClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFontChooserDialog {
	GtkDialog parent_instance;
	GtkFontChooserDialogPrivate *priv;
    };

    struct _GtkFontChooserDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkPrintOperationPreviewIface {
	GTypeInterface g_iface;
	void (*ready) (GtkPrintOperationPreview * preview,
		       GtkPrintContext * context);
	void (*got_page_size) (GtkPrintOperationPreview * preview,
			       GtkPrintContext * context,
			       GtkPageSetup * page_setup);
	void (*render_page) (GtkPrintOperationPreview * preview,
			     gint page_nr);
	 gboolean(*is_selected) (GtkPrintOperationPreview * preview,
				 gint page_nr);
	void (*end_preview) (GtkPrintOperationPreview * preview);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkToggleAction {
	GtkAction parent;
	GtkToggleActionPrivate *priv;
    };

    struct _GtkToggleActionClass {
	GtkActionClass parent_class;
	void (*toggled) (GtkToggleAction * action);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCssProvider {
	GObject parent_instance;
	GtkCssProviderPrivate *priv;
    };

    struct _GtkCssProviderClass {
	GObjectClass parent_class;
	void (*parsing_error) (GtkCssProvider * provider,
			       GtkCssSection * section,
			       const GError * error);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeModelFilter {
	GObject parent;
	GtkTreeModelFilterPrivate *priv;
    };

    struct _GtkTreeModelFilterClass {
	GObjectClass parent_class;
	 gboolean(*visible) (GtkTreeModelFilter * self,
			     GtkTreeModel * child_model,
			     GtkTreeIter * iter);
	void (*modify) (GtkTreeModelFilter * self,
			GtkTreeModel * child_model, GtkTreeIter * iter,
			GValue * value, gint column);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSizeGroup {
	GObject parent_instance;
	GtkSizeGroupPrivate *priv;
    };

    struct _GtkSizeGroupClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkScrollbar {
	GtkRange range;
    };

    struct _GtkScrollbarClass {
	GtkRangeClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSocket {
	GtkContainer container;
	GtkSocketPrivate *priv;
    };

    struct _GtkSocketClass {
	GtkContainerClass parent_class;
	void (*plug_added) (GtkSocket * socket_);
	 gboolean(*plug_removed) (GtkSocket * socket_);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkOffscreenWindow {
	GtkWindow parent_object;
    };

    struct _GtkOffscreenWindowClass {
	GtkWindowClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellView {
	GtkWidget widget;
	GtkCellViewPrivate *priv;
    };

    struct _GtkCellViewClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuItem {
	GtkBin bin;
	GtkMenuItemPrivate *priv;
    };

    struct _GtkMenuItemClass {
	GtkBinClass parent_class;
	guint hide_on_activate:1;
	void (*activate) (GtkMenuItem * menu_item);
	void (*activate_item) (GtkMenuItem * menu_item);
	void (*toggle_size_request) (GtkMenuItem * menu_item,
				     gint * requisition);
	void (*toggle_size_allocate) (GtkMenuItem * menu_item,
				      gint allocation);
	void (*set_label) (GtkMenuItem * menu_item, const gchar * label);
	const gchar *(*get_label) (GtkMenuItem * menu_item);
	void (*select) (GtkMenuItem * menu_item);
	void (*deselect) (GtkMenuItem * menu_item);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIMContextInfo {
	const gchar *context_id;
	const gchar *context_name;
	const gchar *domain;
	const gchar *domain_dirname;
	const gchar *default_locales;
    };

    struct _GtkActionGroup {
	GObject parent;
	GtkActionGroupPrivate *priv;
    };

    struct _GtkActionGroupClass {
	GObjectClass parent_class;
	GtkAction *(*get_action) (GtkActionGroup * action_group,
				  const gchar * action_name);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkActionEntry {
	const gchar *name;
	const gchar *stock_id;
	const gchar *label;
	const gchar *accelerator;
	const gchar *tooltip;
	GCallback callback;
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

    struct _GtkRadioActionEntry {
	const gchar *name;
	const gchar *stock_id;
	const gchar *label;
	const gchar *accelerator;
	const gchar *tooltip;
	gint value;
    };

    struct _GtkPaned {
	GtkContainer container;
	GtkPanedPrivate *priv;
    };

    struct _GtkPanedClass {
	GtkContainerClass parent_class;
	 gboolean(*cycle_child_focus) (GtkPaned * paned, gboolean reverse);
	 gboolean(*toggle_handle_focus) (GtkPaned * paned);
	 gboolean(*move_handle) (GtkPaned * paned, GtkScrollType scroll);
	 gboolean(*cycle_handle_focus) (GtkPaned * paned,
					gboolean reverse);
	 gboolean(*accept_position) (GtkPaned * paned);
	 gboolean(*cancel_position) (GtkPaned * paned);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkEditableInterface {
	GTypeInterface base_iface;
	void (*insert_text) (GtkEditable * editable,
			     const gchar * new_text, gint new_text_length,
			     gint * position);
	void (*delete_text) (GtkEditable * editable, gint start_pos,
			     gint end_pos);
	void (*changed) (GtkEditable * editable);
	void (*do_insert_text) (GtkEditable * editable,
				const gchar * new_text,
				gint new_text_length, gint * position);
	void (*do_delete_text) (GtkEditable * editable, gint start_pos,
				gint end_pos);
	gchar *(*get_chars) (GtkEditable * editable, gint start_pos,
			     gint end_pos);
	void (*set_selection_bounds) (GtkEditable * editable,
				      gint start_pos, gint end_pos);
	 gboolean(*get_selection_bounds) (GtkEditable * editable,
					  gint * start_pos,
					  gint * end_pos);
	void (*set_position) (GtkEditable * editable, gint position);
	 gint(*get_position) (GtkEditable * editable);
    };

    struct _GtkAction {
	GObject object;
	GtkActionPrivate *private_data;
    };

    struct _GtkActionClass {
	GObjectClass parent_class;
	void (*activate) (GtkAction * action);
	GType menu_item_type;
	GType toolbar_item_type;
	GtkWidget *(*create_menu_item) (GtkAction * action);
	GtkWidget *(*create_tool_item) (GtkAction * action);
	void (*connect_proxy) (GtkAction * action, GtkWidget * proxy);
	void (*disconnect_proxy) (GtkAction * action, GtkWidget * proxy);
	GtkWidget *(*create_menu) (GtkAction * action);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkScrolledWindow {
	GtkBin container;
	GtkScrolledWindowPrivate *priv;
    };

    struct _GtkScrolledWindowClass {
	GtkBinClass parent_class;
	gint scrollbar_spacing;
	 gboolean(*scroll_child) (GtkScrolledWindow * scrolled_window,
				  GtkScrollType scroll,
				  gboolean horizontal);
	void (*move_focus_out) (GtkScrolledWindow * scrolled_window,
				GtkDirectionType direction);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkScale {
	GtkRange parent;
	GtkScalePrivate *priv;
    };

    struct _GtkScaleClass {
	GtkRangeClass parent_class;
	gchar *(*format_value) (GtkScale * scale, gdouble value);
	void (*draw_value) (GtkScale * scale);
	void (*get_layout_offsets) (GtkScale * scale, gint * x, gint * y);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkImage {
	GtkMisc misc;
	GtkImagePrivate *priv;
    };

    struct _GtkImageClass {
	GtkMiscClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererText {
	GtkCellRenderer parent;
	GtkCellRendererTextPrivate *priv;
    };

    struct _GtkCellRendererTextClass {
	GtkCellRendererClass parent_class;
	void (*edited) (GtkCellRendererText * cell_renderer_text,
			const gchar * path, const gchar * new_text);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRadioToolButton {
	GtkToggleToolButton parent;
    };

    struct _GtkRadioToolButtonClass {
	GtkToggleToolButtonClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTextTag {
	GObject parent_instance;
	GtkTextTagPrivate *priv;
    };

    struct _GtkTextTagClass {
	GObjectClass parent_class;
	 gboolean(*event) (GtkTextTag * tag, GObject * event_object,
			   GdkEvent * event, const GtkTextIter * iter);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkApplication {
	GApplication parent;
	GtkApplicationPrivate *priv;
    };

    struct _GtkApplicationClass {
	GApplicationClass parent_class;
	void (*window_added) (GtkApplication * application,
			      GtkWindow * window);
	void (*window_removed) (GtkApplication * application,
				GtkWindow * window);
	gpointer padding;
    };

    struct _GtkAccessible {
	AtkObject parent;
	GtkAccessiblePrivate *priv;
    };

    struct _GtkAccessibleClass {
	AtkObjectClass parent_class;
	void (*connect_widget_destroyed) (GtkAccessible * accessible);
	void (*widget_set) (GtkAccessible * accessible);
	void (*widget_unset) (GtkAccessible * accessible);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMessageDialog {
	GtkDialog parent_instance;
	GtkMessageDialogPrivate *priv;
    };

    struct _GtkMessageDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRadioMenuItem {
	GtkCheckMenuItem check_menu_item;
	GtkRadioMenuItemPrivate *priv;
    };

    struct _GtkRadioMenuItemClass {
	GtkCheckMenuItemClass parent_class;
	void (*group_changed) (GtkRadioMenuItem * radio_menu_item);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStyleProperties {
	GObject parent_object;
	GtkStylePropertiesPrivate *priv;
    };

    struct _GtkStylePropertiesClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkArrow {
	GtkMisc misc;
	GtkArrowPrivate *priv;
    };

    struct _GtkArrowClass {
	GtkMiscClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkVolumeButton {
	GtkScaleButton parent;
    };

    struct _GtkVolumeButtonClass {
	GtkScaleButtonClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStyleProviderIface {
	GTypeInterface g_iface;
	GtkStyleProperties *(*get_style) (GtkStyleProvider * provider,
					  GtkWidgetPath * path);
	 gboolean(*get_style_property) (GtkStyleProvider * provider,
					GtkWidgetPath * path,
					GtkStateFlags state,
					GParamSpec * pspec,
					GValue * value);
	GtkIconFactory *(*get_icon_factory) (GtkStyleProvider * provider,
					     GtkWidgetPath * path);
    };

    struct _GtkApplicationWindow {
	GtkWindow parent_instance;
	GtkApplicationWindowPrivate *priv;
    };

    struct _GtkApplicationWindowClass {
	GtkWindowClass parent_class;
	gpointer padding[14];
    };

    struct _GtkEntryCompletion {
	GObject parent_instance;
	GtkEntryCompletionPrivate *priv;
    };

    struct _GtkEntryCompletionClass {
	GObjectClass parent_class;
	 gboolean(*match_selected) (GtkEntryCompletion * completion,
				    GtkTreeModel * model,
				    GtkTreeIter * iter);
	void (*action_activated) (GtkEntryCompletion * completion,
				  gint index_);
	 gboolean(*insert_prefix) (GtkEntryCompletion * completion,
				   const gchar * prefix);
	 gboolean(*cursor_on_match) (GtkEntryCompletion * completion,
				     GtkTreeModel * model,
				     GtkTreeIter * iter);
	void (*_gtk_reserved0) (void);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkCellEditableIface {
	GTypeInterface g_iface;
	void (*editing_done) (GtkCellEditable * cell_editable);
	void (*remove_widget) (GtkCellEditable * cell_editable);
	void (*start_editing) (GtkCellEditable * cell_editable,
			       GdkEvent * event);
    };

    struct _GtkCheckMenuItem {
	GtkMenuItem menu_item;
	GtkCheckMenuItemPrivate *priv;
    };

    struct _GtkCheckMenuItemClass {
	GtkMenuItemClass parent_class;
	void (*toggled) (GtkCheckMenuItem * check_menu_item);
	void (*draw_indicator) (GtkCheckMenuItem * check_menu_item,
				cairo_t * cr);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFontChooserWidget {
	GtkBox parent_instance;
	GtkFontChooserWidgetPrivate *priv;
    };

    struct _GtkFontChooserWidgetClass {
	GtkBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkFontButton {
	GtkButton button;
	GtkFontButtonPrivate *priv;
    };

    struct _GtkFontButtonClass {
	GtkButtonClass parent_class;
	void (*font_set) (GtkFontButton * gfp);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkImageMenuItem {
	GtkMenuItem menu_item;
	GtkImageMenuItemPrivate *priv;
    };

    struct _GtkImageMenuItemClass {
	GtkMenuItemClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkDrawingArea {
	GtkWidget widget;
	gpointer dummy;
    };

    struct _GtkDrawingAreaClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFixed {
	GtkContainer container;
	GtkFixedPrivate *priv;
    };

    struct _GtkFixedClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkFixedChild {
	GtkWidget *widget;
	gint x;
	gint y;
    };

    struct _GtkBuildableIface {
	GTypeInterface g_iface;
	void (*set_name) (GtkBuildable * buildable, const gchar * name);
	const gchar *(*get_name) (GtkBuildable * buildable);
	void (*add_child) (GtkBuildable * buildable, GtkBuilder * builder,
			   GObject * child, const gchar * type);
	void (*set_buildable_property) (GtkBuildable * buildable,
					GtkBuilder * builder,
					const gchar * name,
					const GValue * value);
	GObject *(*construct_child) (GtkBuildable * buildable,
				     GtkBuilder * builder,
				     const gchar * name);
	 gboolean(*custom_tag_start) (GtkBuildable * buildable,
				      GtkBuilder * builder,
				      GObject * child,
				      const gchar * tagname,
				      GMarkupParser * parser,
				      gpointer * data);
	void (*custom_tag_end) (GtkBuildable * buildable,
				GtkBuilder * builder, GObject * child,
				const gchar * tagname, gpointer * data);
	void (*custom_finished) (GtkBuildable * buildable,
				 GtkBuilder * builder, GObject * child,
				 const gchar * tagname, gpointer data);
	void (*parser_finished) (GtkBuildable * buildable,
				 GtkBuilder * builder);
	GObject *(*get_internal_child) (GtkBuildable * buildable,
					GtkBuilder * builder,
					const gchar * name);
    };

    struct _GtkButton {
	GtkBin bin;
	GtkButtonPrivate *priv;
    };

    struct _GtkButtonClass {
	GtkBinClass parent_class;
	void (*pressed) (GtkButton * button);
	void (*released) (GtkButton * button);
	void (*clicked) (GtkButton * button);
	void (*enter) (GtkButton * button);
	void (*leave) (GtkButton * button);
	void (*activate) (GtkButton * button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAccelGroup {
	GObject parent;
	GtkAccelGroupPrivate *priv;
    };

    struct _GtkAccelGroupClass {
	GObjectClass parent_class;
	void (*accel_changed) (GtkAccelGroup * accel_group, guint keyval,
			       GdkModifierType modifier,
			       GClosure * accel_closure);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
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

    struct _GtkIconFactory {
	GObject parent_instance;
	GtkIconFactoryPrivate *priv;
    };

    struct _GtkIconFactoryClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAppChooserWidget {
	GtkBox parent;
	GtkAppChooserWidgetPrivate *priv;
    };

    struct _GtkAppChooserWidgetClass {
	GtkBoxClass parent_class;
	void (*application_selected) (GtkAppChooserWidget * self,
				      GAppInfo * app_info);
	void (*application_activated) (GtkAppChooserWidget * self,
				       GAppInfo * app_info);
	void (*populate_popup) (GtkAppChooserWidget * self, GtkMenu * menu,
				GAppInfo * app_info);
	gpointer padding;
    };

    struct _GtkButtonBox {
	GtkBox box;
	GtkButtonBoxPrivate *priv;
    };

    struct _GtkButtonBoxClass {
	GtkBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellAreaContext {
	GObject parent_instance;
	GtkCellAreaContextPrivate *priv;
    };

    struct _GtkCellArea {
	GInitiallyUnowned parent_instance;
	GtkCellAreaPrivate *priv;
    };

    struct _GtkCellAreaClass {
	GInitiallyUnownedClass parent_class;
	void (*add) (GtkCellArea * area, GtkCellRenderer * renderer);
	void (*remove) (GtkCellArea * area, GtkCellRenderer * renderer);
	void (*foreach) (GtkCellArea * area, GtkCellCallback callback,
			 gpointer callback_data);
	void (*foreach_alloc) (GtkCellArea * area,
			       GtkCellAreaContext * context,
			       GtkWidget * widget,
			       const GdkRectangle * cell_area,
			       const GdkRectangle * background_area,
			       GtkCellAllocCallback callback,
			       gpointer callback_data);
	 gint(*event) (GtkCellArea * area, GtkCellAreaContext * context,
		       GtkWidget * widget, GdkEvent * event,
		       const GdkRectangle * cell_area,
		       GtkCellRendererState flags);
	void (*render) (GtkCellArea * area, GtkCellAreaContext * context,
			GtkWidget * widget, cairo_t * cr,
			const GdkRectangle * background_area,
			const GdkRectangle * cell_area,
			GtkCellRendererState flags, gboolean paint_focus);
	void (*apply_attributes) (GtkCellArea * area,
				  GtkTreeModel * tree_model,
				  GtkTreeIter * iter, gboolean is_expander,
				  gboolean is_expanded);
	GtkCellAreaContext *(*create_context) (GtkCellArea * area);
	GtkCellAreaContext *(*copy_context) (GtkCellArea * area,
					     GtkCellAreaContext * context);
	 GtkSizeRequestMode(*get_request_mode) (GtkCellArea * area);
	void (*get_preferred_width) (GtkCellArea * area,
				     GtkCellAreaContext * context,
				     GtkWidget * widget,
				     gint * minimum_width,
				     gint * natural_width);
	void (*get_preferred_height_for_width) (GtkCellArea * area,
						GtkCellAreaContext *
						context,
						GtkWidget * widget,
						gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*get_preferred_height) (GtkCellArea * area,
				      GtkCellAreaContext * context,
				      GtkWidget * widget,
				      gint * minimum_width,
				      gint * natural_width);
	void (*get_preferred_width_for_height) (GtkCellArea * area,
						GtkCellAreaContext *
						context,
						GtkWidget * widget,
						gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*set_cell_property) (GtkCellArea * area,
				   GtkCellRenderer * renderer,
				   guint property_id, const GValue * value,
				   GParamSpec * pspec);
	void (*get_cell_property) (GtkCellArea * area,
				   GtkCellRenderer * renderer,
				   guint property_id, GValue * value,
				   GParamSpec * pspec);
	 gboolean(*focus) (GtkCellArea * area, GtkDirectionType direction);
	 gboolean(*is_activatable) (GtkCellArea * area);
	 gboolean(*activate) (GtkCellArea * area,
			      GtkCellAreaContext * context,
			      GtkWidget * widget,
			      const GdkRectangle * cell_area,
			      GtkCellRendererState flags,
			      gboolean edit_only);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkCellAreaContextClass {
	GObjectClass parent_class;
	void (*allocate) (GtkCellAreaContext * context, gint width,
			  gint height);
	void (*reset) (GtkCellAreaContext * context);
	void (*get_preferred_height_for_width) (GtkCellAreaContext *
						context, gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*get_preferred_width_for_height) (GtkCellAreaContext *
						context, gint width,
						gint * minimum_height,
						gint * natural_height);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
    };

    struct _GtkPrintOperation {
	GObject parent_instance;
	GtkPrintOperationPrivate *priv;
    };

    struct _GtkPrintOperationClass {
	GObjectClass parent_class;
	void (*done) (GtkPrintOperation * operation,
		      GtkPrintOperationResult result);
	void (*begin_print) (GtkPrintOperation * operation,
			     GtkPrintContext * context);
	 gboolean(*paginate) (GtkPrintOperation * operation,
			      GtkPrintContext * context);
	void (*request_page_setup) (GtkPrintOperation * operation,
				    GtkPrintContext * context,
				    gint page_nr, GtkPageSetup * setup);
	void (*draw_page) (GtkPrintOperation * operation,
			   GtkPrintContext * context, gint page_nr);
	void (*end_print) (GtkPrintOperation * operation,
			   GtkPrintContext * context);
	void (*status_changed) (GtkPrintOperation * operation);
	GtkWidget *(*create_custom_widget) (GtkPrintOperation * operation);
	void (*custom_widget_apply) (GtkPrintOperation * operation,
				     GtkWidget * widget);
	 gboolean(*preview) (GtkPrintOperation * operation,
			     GtkPrintOperationPreview * preview,
			     GtkPrintContext * context,
			     GtkWindow * parent);
	void (*update_custom_widget) (GtkPrintOperation * operation,
				      GtkWidget * widget,
				      GtkPageSetup * setup,
				      GtkPrintSettings * settings);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkCellRendererPixbuf {
	GtkCellRenderer parent;
	GtkCellRendererPixbufPrivate *priv;
    };

    struct _GtkCellRendererPixbufClass {
	GtkCellRendererClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAlignment {
	GtkBin parent_instance;
	GtkAlignmentPrivate *priv;
    };

    struct _GtkAlignmentClass {
	GtkBinClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeView {
	GtkContainer parent;
	GtkTreeViewPrivate *priv;
    };

    struct _GtkTreeViewClass {
	GtkContainerClass parent_class;
	void (*row_activated) (GtkTreeView * tree_view, GtkTreePath * path,
			       GtkTreeViewColumn * column);
	 gboolean(*test_expand_row) (GtkTreeView * tree_view,
				     GtkTreeIter * iter,
				     GtkTreePath * path);
	 gboolean(*test_collapse_row) (GtkTreeView * tree_view,
				       GtkTreeIter * iter,
				       GtkTreePath * path);
	void (*row_expanded) (GtkTreeView * tree_view, GtkTreeIter * iter,
			      GtkTreePath * path);
	void (*row_collapsed) (GtkTreeView * tree_view, GtkTreeIter * iter,
			       GtkTreePath * path);
	void (*columns_changed) (GtkTreeView * tree_view);
	void (*cursor_changed) (GtkTreeView * tree_view);
	 gboolean(*move_cursor) (GtkTreeView * tree_view,
				 GtkMovementStep step, gint count);
	 gboolean(*select_all) (GtkTreeView * tree_view);
	 gboolean(*unselect_all) (GtkTreeView * tree_view);
	 gboolean(*select_cursor_row) (GtkTreeView * tree_view,
				       gboolean start_editing);
	 gboolean(*toggle_cursor_row) (GtkTreeView * tree_view);
	 gboolean(*expand_collapse_cursor_row) (GtkTreeView * tree_view,
						gboolean logical,
						gboolean expand,
						gboolean open_all);
	 gboolean(*select_cursor_parent) (GtkTreeView * tree_view);
	 gboolean(*start_interactive_search) (GtkTreeView * tree_view);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkOrientableIface {
	GTypeInterface base_iface;
    };

    struct _GtkCellRendererToggle {
	GtkCellRenderer parent;
	GtkCellRendererTogglePrivate *priv;
    };

    struct _GtkCellRendererToggleClass {
	GtkCellRendererClass parent_class;
	void (*toggled) (GtkCellRendererToggle * cell_renderer_toggle,
			 const gchar * path);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAboutDialog {
	GtkDialog parent_instance;
	GtkAboutDialogPrivate *priv;
    };

    struct _GtkAboutDialogClass {
	GtkDialogClass parent_class;
	 gboolean(*activate_link) (GtkAboutDialog * dialog,
				   const gchar * uri);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkTreeIter {
	gint stamp;
	gpointer user_data;
	gpointer user_data2;
	gpointer user_data3;
    };

    struct _GtkTreeModelIface {
	GTypeInterface g_iface;
	void (*row_changed) (GtkTreeModel * tree_model, GtkTreePath * path,
			     GtkTreeIter * iter);
	void (*row_inserted) (GtkTreeModel * tree_model,
			      GtkTreePath * path, GtkTreeIter * iter);
	void (*row_has_child_toggled) (GtkTreeModel * tree_model,
				       GtkTreePath * path,
				       GtkTreeIter * iter);
	void (*row_deleted) (GtkTreeModel * tree_model,
			     GtkTreePath * path);
	void (*rows_reordered) (GtkTreeModel * tree_model,
				GtkTreePath * path, GtkTreeIter * iter,
				gint * new_order);
	 GtkTreeModelFlags(*get_flags) (GtkTreeModel * tree_model);
	 gint(*get_n_columns) (GtkTreeModel * tree_model);
	 GType(*get_column_type) (GtkTreeModel * tree_model, gint index_);
	 gboolean(*get_iter) (GtkTreeModel * tree_model,
			      GtkTreeIter * iter, GtkTreePath * path);
	GtkTreePath *(*get_path) (GtkTreeModel * tree_model,
				  GtkTreeIter * iter);
	void (*get_value) (GtkTreeModel * tree_model, GtkTreeIter * iter,
			   gint column, GValue * value);
	 gboolean(*iter_next) (GtkTreeModel * tree_model,
			       GtkTreeIter * iter);
	 gboolean(*iter_previous) (GtkTreeModel * tree_model,
				   GtkTreeIter * iter);
	 gboolean(*iter_children) (GtkTreeModel * tree_model,
				   GtkTreeIter * iter,
				   GtkTreeIter * parent);
	 gboolean(*iter_has_child) (GtkTreeModel * tree_model,
				    GtkTreeIter * iter);
	 gint(*iter_n_children) (GtkTreeModel * tree_model,
				 GtkTreeIter * iter);
	 gboolean(*iter_nth_child) (GtkTreeModel * tree_model,
				    GtkTreeIter * iter,
				    GtkTreeIter * parent, gint n);
	 gboolean(*iter_parent) (GtkTreeModel * tree_model,
				 GtkTreeIter * iter, GtkTreeIter * parent);
	void (*ref_node) (GtkTreeModel * tree_model, GtkTreeIter * iter);
	void (*unref_node) (GtkTreeModel * tree_model, GtkTreeIter * iter);
    };

    struct _GtkCheckButton {
	GtkToggleButton toggle_button;
    };

    struct _GtkCheckButtonClass {
	GtkToggleButtonClass parent_class;
	void (*draw_indicator) (GtkCheckButton * check_button,
				cairo_t * cr);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkWindowClass {
	GtkBinClass parent_class;
	void (*set_focus) (GtkWindow * window, GtkWidget * focus);
	void (*activate_focus) (GtkWindow * window);
	void (*activate_default) (GtkWindow * window);
	void (*keys_changed) (GtkWindow * window);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkWindowGroup {
	GObject parent_instance;
	GtkWindowPrivate *priv;
    };

    struct _GtkWindowGroupClass {
	GObjectClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenu {
	GtkMenuShell menu_shell;
	GtkMenuPrivate *priv;
    };

    struct _GtkMenuClass {
	GtkMenuShellClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkLevelBar {
	GtkWidget parent;
	GtkLevelBarPrivate *priv;
    };

    struct _GtkLevelBarClass {
	GtkWidgetClass parent_class;
	void (*offset_changed) (GtkLevelBar * self, const gchar * name);
	gpointer padding;
    };

    struct _GtkComboBox {
	GtkBin parent_instance;
	GtkComboBoxPrivate *priv;
    };

    struct _GtkComboBoxClass {
	GtkBinClass parent_class;
	void (*changed) (GtkComboBox * combo_box);
	gchar *(*format_entry_text) (GtkComboBox * combo_box,
				     const gchar * path);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
    };

    struct _GtkSpinner {
	GtkWidget parent;
	GtkSpinnerPrivate *priv;
    };

    struct _GtkSpinnerClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkToolPalette {
	GtkContainer parent_instance;
	GtkToolPalettePrivate *priv;
    };

    struct _GtkToolPaletteClass {
	GtkContainerClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentChooserDialog {
	GtkDialog parent_instance;
	GtkRecentChooserDialogPrivate *priv;
    };

    struct _GtkRecentChooserDialogClass {
	GtkDialogClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkCellRendererCombo {
	GtkCellRendererText parent_instance;
	GtkCellRendererComboPrivate *priv;
    };

    struct _GtkCellRendererComboClass {
	GtkCellRendererTextClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkBuilder {
	GObject parent_instance;
	GtkBuilderPrivate *priv;
    };

    struct _GtkBuilderClass {
	GObjectClass parent_class;
	 GType(*get_type_from_name) (GtkBuilder * builder,
				     const char *type_name);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkTextBufferClass {
	GObjectClass parent_class;
	void (*insert_text) (GtkTextBuffer * buffer, GtkTextIter * pos,
			     const gchar * new_text, gint new_text_length);
	void (*insert_pixbuf) (GtkTextBuffer * buffer, GtkTextIter * iter,
			       GdkPixbuf * pixbuf);
	void (*insert_child_anchor) (GtkTextBuffer * buffer,
				     GtkTextIter * iter,
				     GtkTextChildAnchor * anchor);
	void (*delete_range) (GtkTextBuffer * buffer, GtkTextIter * start,
			      GtkTextIter * end);
	void (*changed) (GtkTextBuffer * buffer);
	void (*modified_changed) (GtkTextBuffer * buffer);
	void (*mark_set) (GtkTextBuffer * buffer,
			  const GtkTextIter * location,
			  GtkTextMark * mark);
	void (*mark_deleted) (GtkTextBuffer * buffer, GtkTextMark * mark);
	void (*apply_tag) (GtkTextBuffer * buffer, GtkTextTag * tag,
			   const GtkTextIter * start,
			   const GtkTextIter * end);
	void (*remove_tag) (GtkTextBuffer * buffer, GtkTextTag * tag,
			    const GtkTextIter * start,
			    const GtkTextIter * end);
	void (*begin_user_action) (GtkTextBuffer * buffer);
	void (*end_user_action) (GtkTextBuffer * buffer);
	void (*paste_done) (GtkTextBuffer * buffer,
			    GtkClipboard * clipboard);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkIconTheme {
	GObject parent_instance;
	GtkIconThemePrivate *priv;
    };

    struct _GtkIconThemeClass {
	GObjectClass parent_class;
	void (*changed) (GtkIconTheme * icon_theme);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
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
	guint marks_unbound:1;
	GtkBindingEntry *set_next;
	GtkBindingEntry *hash_next;
	GtkBindingSignal *signals;
    };

    struct _GtkBindingArg {
	GType arg_type;
	union {
	    glong long_data;
	    gdouble double_data;
	    gchar *string_data;
	} d;
    };

    struct _GtkBindingSignal {
	GtkBindingSignal *next;
	gchar *signal_name;
	guint n_args;
	GtkBindingArg *args;
    };

    struct _GtkCellLayoutIface {
	GTypeInterface g_iface;
	void (*pack_start) (GtkCellLayout * cell_layout,
			    GtkCellRenderer * cell, gboolean expand);
	void (*pack_end) (GtkCellLayout * cell_layout,
			  GtkCellRenderer * cell, gboolean expand);
	void (*clear) (GtkCellLayout * cell_layout);
	void (*add_attribute) (GtkCellLayout * cell_layout,
			       GtkCellRenderer * cell,
			       const gchar * attribute, gint column);
	void (*set_cell_data_func) (GtkCellLayout * cell_layout,
				    GtkCellRenderer * cell,
				    GtkCellLayoutDataFunc func,
				    gpointer func_data,
				    GDestroyNotify destroy);
	void (*clear_attributes) (GtkCellLayout * cell_layout,
				  GtkCellRenderer * cell);
	void (*reorder) (GtkCellLayout * cell_layout,
			 GtkCellRenderer * cell, gint position);
	GList *(*get_cells) (GtkCellLayout * cell_layout);
	GtkCellArea *(*get_area) (GtkCellLayout * cell_layout);
    };

    struct _GtkToolbar {
	GtkContainer container;
	GtkToolbarPrivate *priv;
    };

    struct _GtkToolbarClass {
	GtkContainerClass parent_class;
	void (*orientation_changed) (GtkToolbar * toolbar,
				     GtkOrientation orientation);
	void (*style_changed) (GtkToolbar * toolbar,
			       GtkToolbarStyle style);
	 gboolean(*popup_context_menu) (GtkToolbar * toolbar, gint x,
					gint y, gint button_number);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkMenuToolButton {
	GtkToolButton parent;
	GtkMenuToolButtonPrivate *priv;
    };

    struct _GtkMenuToolButtonClass {
	GtkToolButtonClass parent_class;
	void (*show_menu) (GtkMenuToolButton * button);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkColorChooserWidget {
	GtkBox parent_instance;
	GtkColorChooserWidgetPrivate *priv;
    };

    struct _GtkColorChooserWidgetClass {
	GtkBoxClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkStatusbar {
	GtkBox parent_widget;
	GtkStatusbarPrivate *priv;
    };

    struct _GtkStatusbarClass {
	GtkBoxClass parent_class;
	gpointer reserved;
	void (*text_pushed) (GtkStatusbar * statusbar, guint context_id,
			     const gchar * text);
	void (*text_popped) (GtkStatusbar * statusbar, guint context_id,
			     const gchar * text);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkInvisible {
	GtkWidget widget;
	GtkInvisiblePrivate *priv;
    };

    struct _GtkInvisibleClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkExpander {
	GtkBin bin;
	GtkExpanderPrivate *priv;
    };

    struct _GtkExpanderClass {
	GtkBinClass parent_class;
	void (*activate) (GtkExpander * expander);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkRecentChooserMenu {
	GtkMenu parent_instance;
	GtkRecentChooserMenuPrivate *priv;
    };

    struct _GtkRecentChooserMenuClass {
	GtkMenuClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkStyleContextClass {
	GObjectClass parent_class;
	void (*changed) (GtkStyleContext * context);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkSeparatorToolItem {
	GtkToolItem parent;
	GtkSeparatorToolItemPrivate *priv;
    };

    struct _GtkSeparatorToolItemClass {
	GtkToolItemClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkAspectFrame {
	GtkFrame frame;
	GtkAspectFramePrivate *priv;
    };

    struct _GtkAspectFrameClass {
	GtkFrameClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkLabel {
	GtkMisc misc;
	GtkLabelPrivate *priv;
    };

    struct _GtkLabelClass {
	GtkMiscClass parent_class;
	void (*move_cursor) (GtkLabel * label, GtkMovementStep step,
			     gint count, gboolean extend_selection);
	void (*copy_clipboard) (GtkLabel * label);
	void (*populate_popup) (GtkLabel * label, GtkMenu * menu);
	 gboolean(*activate_link) (GtkLabel * label, const gchar * uri);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkTreeSortableIface {
	GTypeInterface g_iface;
	void (*sort_column_changed) (GtkTreeSortable * sortable);
	 gboolean(*get_sort_column_id) (GtkTreeSortable * sortable,
					gint * sort_column_id,
					GtkSortType * order);
	void (*set_sort_column_id) (GtkTreeSortable * sortable,
				    gint sort_column_id,
				    GtkSortType order);
	void (*set_sort_func) (GtkTreeSortable * sortable,
			       gint sort_column_id,
			       GtkTreeIterCompareFunc sort_func,
			       gpointer user_data, GDestroyNotify destroy);
	void (*set_default_sort_func) (GtkTreeSortable * sortable,
				       GtkTreeIterCompareFunc sort_func,
				       gpointer user_data,
				       GDestroyNotify destroy);
	 gboolean(*has_default_sort_func) (GtkTreeSortable * sortable);
    };

    struct _GtkFileChooserButton {
	GtkBox parent;
	GtkFileChooserButtonPrivate *priv;
    };

    struct _GtkFileChooserButtonClass {
	GtkBoxClass parent_class;
	void (*file_set) (GtkFileChooserButton * fc);
	void *__gtk_reserved1;
	void *__gtk_reserved2;
	void *__gtk_reserved3;
	void *__gtk_reserved4;
    };

    struct _GtkProgressBar {
	GtkWidget parent;
	GtkProgressBarPrivate *priv;
    };

    struct _GtkProgressBarClass {
	GtkWidgetClass parent_class;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };

    struct _GtkContainer {
	GtkWidget widget;
	GtkContainerPrivate *priv;
    };

    struct _GtkContainerClass {
	GtkWidgetClass parent_class;
	void (*add) (GtkContainer * container, GtkWidget * widget);
	void (*remove) (GtkContainer * container, GtkWidget * widget);
	void (*check_resize) (GtkContainer * container);
	void (*forall) (GtkContainer * container,
			gboolean include_internals, GtkCallback callback,
			gpointer callback_data);
	void (*set_focus_child) (GtkContainer * container,
				 GtkWidget * widget);
	 GType(*child_type) (GtkContainer * container);
	gchar *(*composite_name) (GtkContainer * container,
				  GtkWidget * child);
	void (*set_child_property) (GtkContainer * container,
				    GtkWidget * child, guint property_id,
				    const GValue * value,
				    GParamSpec * pspec);
	void (*get_child_property) (GtkContainer * container,
				    GtkWidget * child, guint property_id,
				    GValue * value, GParamSpec * pspec);
	GtkWidgetPath *(*get_path_for_child) (GtkContainer * container,
					      GtkWidget * child);
	unsigned int _handle_border_width;
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
	void (*_gtk_reserved5) (void);
	void (*_gtk_reserved6) (void);
	void (*_gtk_reserved7) (void);
	void (*_gtk_reserved8) (void);
    };

    struct _GtkIconView {
	GtkContainer parent;
	GtkIconViewPrivate *priv;
    };

    struct _GtkIconViewClass {
	GtkContainerClass parent_class;
	void (*item_activated) (GtkIconView * icon_view,
				GtkTreePath * path);
	void (*selection_changed) (GtkIconView * icon_view);
	void (*select_all) (GtkIconView * icon_view);
	void (*unselect_all) (GtkIconView * icon_view);
	void (*select_cursor_item) (GtkIconView * icon_view);
	void (*toggle_cursor_item) (GtkIconView * icon_view);
	 gboolean(*move_cursor) (GtkIconView * icon_view,
				 GtkMovementStep step, gint count);
	 gboolean(*activate_cursor_item) (GtkIconView * icon_view);
	void (*_gtk_reserved1) (void);
	void (*_gtk_reserved2) (void);
	void (*_gtk_reserved3) (void);
	void (*_gtk_reserved4) (void);
    };


/* Function prototypes */

    extern void gtk_about_dialog_add_credit_section(GtkAboutDialog * about,
						    const char *,
						    const char **);
    extern const char *const *gtk_about_dialog_get_artists(GtkAboutDialog *
							   about);
    extern const char *const *gtk_about_dialog_get_authors(GtkAboutDialog *
							   about);
    extern const char *gtk_about_dialog_get_comments(GtkAboutDialog *
						     about);
    extern const char *gtk_about_dialog_get_copyright(GtkAboutDialog *
						      about);
    extern const char *const
	*gtk_about_dialog_get_documenters(GtkAboutDialog * about);
    extern const char *gtk_about_dialog_get_license(GtkAboutDialog *
						    about);
    extern GtkLicense gtk_about_dialog_get_license_type(GtkAboutDialog *
							about);
    extern GdkPixbuf *gtk_about_dialog_get_logo(GtkAboutDialog * about);
    extern const char *gtk_about_dialog_get_logo_icon_name(GtkAboutDialog *
							   about);
    extern const char *gtk_about_dialog_get_program_name(GtkAboutDialog *
							 about);
    extern const char
	*gtk_about_dialog_get_translator_credits(GtkAboutDialog * about);
    extern GType gtk_about_dialog_get_type(void);
    extern const char *gtk_about_dialog_get_version(GtkAboutDialog *
						    about);
    extern const char *gtk_about_dialog_get_website(GtkAboutDialog *
						    about);
    extern const char *gtk_about_dialog_get_website_label(GtkAboutDialog *
							  about);
    extern gboolean gtk_about_dialog_get_wrap_license(GtkAboutDialog *
						      about);
    extern GtkWidget *gtk_about_dialog_new(void);
    extern void gtk_about_dialog_set_artists(GtkAboutDialog * about,
					     const char **);
    extern void gtk_about_dialog_set_authors(GtkAboutDialog * about,
					     const char **);
    extern void gtk_about_dialog_set_comments(GtkAboutDialog * about,
					      const char *);
    extern void gtk_about_dialog_set_copyright(GtkAboutDialog * about,
					       const char *);
    extern void gtk_about_dialog_set_documenters(GtkAboutDialog * about,
						 const char **);
    extern void gtk_about_dialog_set_license(GtkAboutDialog * about,
					     const char *);
    extern void gtk_about_dialog_set_license_type(GtkAboutDialog * about,
						  GtkLicense);
    extern void gtk_about_dialog_set_logo(GtkAboutDialog * about,
					  GdkPixbuf *);
    extern void gtk_about_dialog_set_logo_icon_name(GtkAboutDialog * about,
						    const char *);
    extern void gtk_about_dialog_set_program_name(GtkAboutDialog * about,
						  const char *);
    extern void gtk_about_dialog_set_translator_credits(GtkAboutDialog *
							about,
							const char *);
    extern void gtk_about_dialog_set_version(GtkAboutDialog * about,
					     const char *);
    extern void gtk_about_dialog_set_website(GtkAboutDialog * about,
					     const char *);
    extern void gtk_about_dialog_set_website_label(GtkAboutDialog * about,
						   const char *);
    extern void gtk_about_dialog_set_wrap_license(GtkAboutDialog * about,
						  gboolean);
    extern GType gtk_accel_flags_get_type(void);
    extern gboolean gtk_accel_group_activate(GtkAccelGroup * accel_group,
					     GQuark accel_quark,
					     GObject * accelratable,
					     guint accel_key,
					     GdkModifierType accel_mods);
    extern void gtk_accel_group_connect(GtkAccelGroup * accel_group,
					guint accel_key,
					GdkModifierType accel_mods,
					GtkAccelFlags accel_flags,
					GClosure * closure);
    extern void gtk_accel_group_connect_by_path(GtkAccelGroup *
						accel_group, const char *,
						GClosure *);
    extern gboolean gtk_accel_group_disconnect(GtkAccelGroup * accel_group,
					       GClosure *);
    extern gboolean gtk_accel_group_disconnect_key(GtkAccelGroup *
						   accel_group,
						   guint accel_key,
						   GdkModifierType
						   accel_mods);
    extern GtkAccelKey *gtk_accel_group_find(GtkAccelGroup * accel_group,
					     GtkAccelGroupFindFunc,
					     gpointer);
    extern GtkAccelGroup *gtk_accel_group_from_accel_closure(GClosure *
							     closure);
    extern gboolean gtk_accel_group_get_is_locked(GtkAccelGroup *
						  accel_group);
    extern GdkModifierType gtk_accel_group_get_modifier_mask(GtkAccelGroup
							     *
							     accel_group);
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
    extern GtkWidget *gtk_accel_label_new(const char *string);
    extern gboolean gtk_accel_label_refetch(GtkAccelLabel * accel_label);
    extern void gtk_accel_label_set_accel(GtkAccelLabel * accel_label,
					  guint accelerator_key,
					  GdkModifierType
					  accelerator_mods);
    extern void gtk_accel_label_set_accel_closure(GtkAccelLabel *
						  accel_label, GClosure *);
    extern void gtk_accel_label_set_accel_widget(GtkAccelLabel *
						 accel_label, GtkWidget *);
    extern void gtk_accel_map_add_entry(const gchar * accel_path,
					guint accel_key,
					GdkModifierType accel_mods);
    extern void gtk_accel_map_add_filter(const char *filter_pattern);
    extern gboolean gtk_accel_map_change_entry(const gchar * accel_path,
					       guint accel_key,
					       GdkModifierType accel_mods,
					       gboolean replace);
    extern void gtk_accel_map_foreach(gpointer data, GtkAccelMapForeach);
    extern void gtk_accel_map_foreach_unfiltered(gpointer data,
						 GtkAccelMapForeach);
    extern GtkAccelMap *gtk_accel_map_get(void);
    extern GType gtk_accel_map_get_type(void);
    extern void gtk_accel_map_load(const char *file_name);
    extern void gtk_accel_map_load_fd(gint fd);
    extern void gtk_accel_map_load_scanner(GScanner * scanner);
    extern void gtk_accel_map_lock_path(const char *accel_path);
    extern gboolean gtk_accel_map_lookup_entry(const char *accel_path,
					       GtkAccelKey *);
    extern void gtk_accel_map_save(const char *file_name);
    extern void gtk_accel_map_save_fd(gint fd);
    extern void gtk_accel_map_unlock_path(const char *accel_path);
    extern GdkModifierType gtk_accelerator_get_default_mod_mask(void);
    extern gchar *gtk_accelerator_get_label(guint accelerator_key,
					    GdkModifierType
					    accelerator_mods);
    extern gchar *gtk_accelerator_get_label_with_keycode(GdkDisplay *
							 display,
							 guint accel_key,
							 guint keycode,
							 GdkModifierType
							 accel_mods);
    extern gchar *gtk_accelerator_name(guint accelerator_key,
				       GdkModifierType accel_key);
    extern gchar *gtk_accelerator_name_with_keycode(GdkDisplay * display,
						    guint accel_key,
						    guint keycode,
						    GdkModifierType
						    accel_mods);
    extern void gtk_accelerator_parse(const char *accelerator, guint *,
				      GdkModifierType *);
    extern void gtk_accelerator_parse_with_keycode(const char *accelerator,
						   guint *, guint * *,
						   GdkModifierType *);
    extern void gtk_accelerator_set_default_mod_mask(GdkModifierType
						     default_mod_mask);
    extern gboolean gtk_accelerator_valid(guint keyval,
					  GdkModifierType modifiers);
    extern void gtk_accessible_connect_widget_destroyed(GtkAccessible *
							accessible);
    extern GType gtk_accessible_get_type(void);
    extern GtkWidget *gtk_accessible_get_widget(GtkAccessible *
						accessible);
    extern void gtk_accessible_set_widget(GtkAccessible * accessible,
					  GtkWidget *);
    extern void gtk_action_activate(GtkAction * action);
    extern void gtk_action_block_activate(GtkAction * action);
    extern void gtk_action_connect_accelerator(GtkAction * action);
    extern GtkWidget *gtk_action_create_icon(GtkAction * action,
					     GtkIconSize);
    extern GtkWidget *gtk_action_create_menu(GtkAction * action);
    extern GtkWidget *gtk_action_create_menu_item(GtkAction * action);
    extern GtkWidget *gtk_action_create_tool_item(GtkAction * action);
    extern void gtk_action_disconnect_accelerator(GtkAction * action);
    extern GClosure *gtk_action_get_accel_closure(GtkAction * action);
    extern const char *gtk_action_get_accel_path(GtkAction * action);
    extern gboolean gtk_action_get_always_show_image(GtkAction * action);
    extern GIcon *gtk_action_get_gicon(GtkAction * action);
    extern const char *gtk_action_get_icon_name(GtkAction * action);
    extern gboolean gtk_action_get_is_important(GtkAction * action);
    extern const char *gtk_action_get_label(GtkAction * action);
    extern const char *gtk_action_get_name(GtkAction * action);
    extern GSList *gtk_action_get_proxies(GtkAction * action);
    extern gboolean gtk_action_get_sensitive(GtkAction * action);
    extern const char *gtk_action_get_short_label(GtkAction * action);
    extern const char *gtk_action_get_stock_id(GtkAction * action);
    extern const char *gtk_action_get_tooltip(GtkAction * action);
    extern GType gtk_action_get_type(void);
    extern gboolean gtk_action_get_visible(GtkAction * action);
    extern gboolean gtk_action_get_visible_horizontal(GtkAction * action);
    extern gboolean gtk_action_get_visible_vertical(GtkAction * action);
    extern void gtk_action_group_add_action(GtkActionGroup * action_group,
					    GtkAction *);
    extern void gtk_action_group_add_action_with_accel(GtkActionGroup *
						       action_group,
						       GtkAction *,
						       const char *);
    extern void gtk_action_group_add_actions(GtkActionGroup * action_group,
					     const GtkActionEntry *, guint,
					     gpointer);
    extern void gtk_action_group_add_actions_full(GtkActionGroup *
						  action_group,
						  const GtkActionEntry *,
						  guint, gpointer,
						  GDestroyNotify);
    extern void gtk_action_group_add_radio_actions(GtkActionGroup *
						   action_group,
						   const
						   GtkRadioActionEntry *,
						   guint, gint, GCallback,
						   gpointer);
    extern void gtk_action_group_add_radio_actions_full(GtkActionGroup *
							action_group,
							const
							GtkRadioActionEntry
							*, guint, gint,
							GCallback,
							gpointer,
							GDestroyNotify);
    extern void gtk_action_group_add_toggle_actions(GtkActionGroup *
						    action_group,
						    const
						    GtkToggleActionEntry *,
						    guint, gpointer);
    extern void gtk_action_group_add_toggle_actions_full(GtkActionGroup *
							 action_group,
							 const
							 GtkToggleActionEntry
							 *, guint,
							 gpointer,
							 GDestroyNotify);
    extern GtkAccelGroup *gtk_action_group_get_accel_group(GtkActionGroup *
							   action_group);
    extern GtkAction *gtk_action_group_get_action(GtkActionGroup *
						  action_group,
						  const char *);
    extern const char *gtk_action_group_get_name(GtkActionGroup *
						 action_group);
    extern gboolean gtk_action_group_get_sensitive(GtkActionGroup *
						   action_group);
    extern GType gtk_action_group_get_type(void);
    extern gboolean gtk_action_group_get_visible(GtkActionGroup *
						 action_group);
    extern GList *gtk_action_group_list_actions(GtkActionGroup *
						action_group);
    extern GtkActionGroup *gtk_action_group_new(const char *name);
    extern void gtk_action_group_remove_action(GtkActionGroup *
					       action_group, GtkAction *);
    extern void gtk_action_group_set_accel_group(GtkActionGroup *
						 action_group,
						 GtkAccelGroup *);
    extern void gtk_action_group_set_sensitive(GtkActionGroup *
					       action_group, gboolean);
    extern void gtk_action_group_set_translate_func(GtkActionGroup *
						    action_group,
						    GtkTranslateFunc,
						    gpointer,
						    GDestroyNotify);
    extern void gtk_action_group_set_translation_domain(GtkActionGroup *
							action_group,
							const char *);
    extern void gtk_action_group_set_visible(GtkActionGroup * action_group,
					     gboolean);
    extern const char *gtk_action_group_translate_string(GtkActionGroup *
							 action_group,
							 const char *);
    extern gboolean gtk_action_is_sensitive(GtkAction * action);
    extern gboolean gtk_action_is_visible(GtkAction * action);
    extern GtkAction *gtk_action_new(const char *name, const char *,
				     const char *, const char *);
    extern void gtk_action_set_accel_group(GtkAction * action,
					   GtkAccelGroup *);
    extern void gtk_action_set_accel_path(GtkAction * action,
					  const char *);
    extern void gtk_action_set_always_show_image(GtkAction * action,
						 gboolean);
    extern void gtk_action_set_gicon(GtkAction * action, GIcon *);
    extern void gtk_action_set_icon_name(GtkAction * action, const char *);
    extern void gtk_action_set_is_important(GtkAction * action, gboolean);
    extern void gtk_action_set_label(GtkAction * action, const char *);
    extern void gtk_action_set_sensitive(GtkAction * action, gboolean);
    extern void gtk_action_set_short_label(GtkAction * action,
					   const char *);
    extern void gtk_action_set_stock_id(GtkAction * action, const char *);
    extern void gtk_action_set_tooltip(GtkAction * action, const char *);
    extern void gtk_action_set_visible(GtkAction * action, gboolean);
    extern void gtk_action_set_visible_horizontal(GtkAction * action,
						  gboolean);
    extern void gtk_action_set_visible_vertical(GtkAction * action,
						gboolean);
    extern void gtk_action_unblock_activate(GtkAction * action);
    extern const char *gtk_actionable_get_action_name(GtkActionable *
						      actionable);
    extern GVariant *gtk_actionable_get_action_target_value(GtkActionable *
							    actionable);
    extern GType gtk_actionable_get_type(void);
    extern void gtk_actionable_set_action_name(GtkActionable * actionable,
					       const char *);
    extern void gtk_actionable_set_action_target(GtkActionable *
						 actionable, const char *,
						 ...);
    extern void gtk_actionable_set_action_target_value(GtkActionable *
						       actionable,
						       GVariant *);
    extern void gtk_actionable_set_detailed_action_name(GtkActionable *
							actionable,
							const char *);
    extern void gtk_activatable_do_set_related_action(GtkActivatable *
						      activatable,
						      GtkAction *);
    extern GtkAction *gtk_activatable_get_related_action(GtkActivatable *
							 activatable);
    extern GType gtk_activatable_get_type(void);
    extern gboolean
	gtk_activatable_get_use_action_appearance(GtkActivatable *
						  activatable);
    extern void gtk_activatable_set_related_action(GtkActivatable *
						   activatable,
						   GtkAction *);
    extern void gtk_activatable_set_use_action_appearance(GtkActivatable *
							  activatable,
							  gboolean);
    extern void gtk_activatable_sync_action_properties(GtkActivatable *
						       activatable,
						       GtkAction *);
    extern void gtk_adjustment_changed(GtkAdjustment * adjustment);
    extern void gtk_adjustment_clamp_page(GtkAdjustment * adjustment,
					  gdouble, gdouble);
    extern void gtk_adjustment_configure(GtkAdjustment * adjustment,
					 gdouble, gdouble, gdouble,
					 gdouble, gdouble, gdouble);
    extern gdouble gtk_adjustment_get_lower(GtkAdjustment * adjustment);
    extern gdouble gtk_adjustment_get_minimum_increment(GtkAdjustment *
							adjustment);
    extern gdouble gtk_adjustment_get_page_increment(GtkAdjustment *
						     adjustment);
    extern gdouble gtk_adjustment_get_page_size(GtkAdjustment *
						adjustment);
    extern gdouble gtk_adjustment_get_step_increment(GtkAdjustment *
						     adjustment);
    extern GType gtk_adjustment_get_type(void);
    extern gdouble gtk_adjustment_get_upper(GtkAdjustment * adjustment);
    extern gdouble gtk_adjustment_get_value(GtkAdjustment * adjustment);
    extern GtkAdjustment *gtk_adjustment_new(gdouble value, gdouble,
					     gdouble, gdouble, gdouble,
					     gdouble);
    extern void gtk_adjustment_set_lower(GtkAdjustment * adjustment,
					 gdouble);
    extern void gtk_adjustment_set_page_increment(GtkAdjustment *
						  adjustment, gdouble);
    extern void gtk_adjustment_set_page_size(GtkAdjustment * adjustment,
					     gdouble);
    extern void gtk_adjustment_set_step_increment(GtkAdjustment *
						  adjustment, gdouble);
    extern void gtk_adjustment_set_upper(GtkAdjustment * adjustment,
					 gdouble);
    extern void gtk_adjustment_set_value(GtkAdjustment * adjustment,
					 gdouble);
    extern void gtk_adjustment_value_changed(GtkAdjustment * adjustment);
    extern GType gtk_align_get_type(void);
    extern void gtk_alignment_get_padding(GtkAlignment * alignment,
					  guint *, guint *, guint *,
					  guint *);
    extern GType gtk_alignment_get_type(void);
    extern GtkWidget *gtk_alignment_new(gfloat xalign, gfloat, gfloat,
					gfloat);
    extern void gtk_alignment_set(GtkAlignment * alignment, gfloat, gfloat,
				  gfloat, gfloat);
    extern void gtk_alignment_set_padding(GtkAlignment * alignment, guint,
					  guint, guint, guint);
    extern gboolean gtk_alternative_dialog_button_order(GdkScreen *
							screen);
    extern void
	gtk_app_chooser_button_append_custom_item(GtkAppChooserButton *
						  self, const char *,
						  const char *, GIcon *);
    extern void gtk_app_chooser_button_append_separator(GtkAppChooserButton
							* self);
    extern const char
	*gtk_app_chooser_button_get_heading(GtkAppChooserButton * self);
    extern gboolean
	gtk_app_chooser_button_get_show_default_item(GtkAppChooserButton *
						     self);
    extern gboolean
	gtk_app_chooser_button_get_show_dialog_item(GtkAppChooserButton *
						    self);
    extern GType gtk_app_chooser_button_get_type(void);
    extern GtkWidget *gtk_app_chooser_button_new(const char *content_type);
    extern void
	gtk_app_chooser_button_set_active_custom_item(GtkAppChooserButton *
						      self, const char *);
    extern void gtk_app_chooser_button_set_heading(GtkAppChooserButton *
						   self, const char *);
    extern void
	gtk_app_chooser_button_set_show_default_item(GtkAppChooserButton *
						     self, gboolean);
    extern void
	gtk_app_chooser_button_set_show_dialog_item(GtkAppChooserButton *
						    self, gboolean);
    extern const char
	*gtk_app_chooser_dialog_get_heading(GtkAppChooserDialog * self);
    extern GType gtk_app_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_app_chooser_dialog_get_widget(GtkAppChooserDialog
							* self);
    extern GtkWidget *gtk_app_chooser_dialog_new(GtkWindow * parent,
						 GtkDialogFlags, GFile *);
    extern GtkWidget *gtk_app_chooser_dialog_new_for_content_type(GtkWindow
								  * parent,
								  GtkDialogFlags,
								  const
								  char *);
    extern void gtk_app_chooser_dialog_set_heading(GtkAppChooserDialog *
						   self, const char *);
    extern GAppInfo *gtk_app_chooser_get_app_info(GtkAppChooser * self);
    extern gchar *gtk_app_chooser_get_content_type(GtkAppChooser * self);
    extern GType gtk_app_chooser_get_type(void);
    extern void gtk_app_chooser_refresh(GtkAppChooser * self);
    extern const char
	*gtk_app_chooser_widget_get_default_text(GtkAppChooserWidget *
						 self);
    extern gboolean gtk_app_chooser_widget_get_show_all(GtkAppChooserWidget
							* self);
    extern gboolean
	gtk_app_chooser_widget_get_show_default(GtkAppChooserWidget *
						self);
    extern gboolean
	gtk_app_chooser_widget_get_show_fallback(GtkAppChooserWidget *
						 self);
    extern gboolean
	gtk_app_chooser_widget_get_show_other(GtkAppChooserWidget * self);
    extern gboolean
	gtk_app_chooser_widget_get_show_recommended(GtkAppChooserWidget *
						    self);
    extern GType gtk_app_chooser_widget_get_type(void);
    extern GtkWidget *gtk_app_chooser_widget_new(const char *content_type);
    extern void gtk_app_chooser_widget_set_default_text(GtkAppChooserWidget
							* self,
							const char *);
    extern void gtk_app_chooser_widget_set_show_all(GtkAppChooserWidget *
						    self, gboolean);
    extern void gtk_app_chooser_widget_set_show_default(GtkAppChooserWidget
							* self, gboolean);
    extern void
	gtk_app_chooser_widget_set_show_fallback(GtkAppChooserWidget *
						 self, gboolean);
    extern void gtk_app_chooser_widget_set_show_other(GtkAppChooserWidget *
						      self, gboolean);
    extern void
	gtk_app_chooser_widget_set_show_recommended(GtkAppChooserWidget *
						    self, gboolean);
    extern void gtk_application_add_accelerator(GtkApplication *
						application, const char *,
						const char *, GVariant *);
    extern void gtk_application_add_window(GtkApplication * application,
					   GtkWindow *);
    extern GtkWindow *gtk_application_get_active_window(GtkApplication *
							application);
    extern GMenuModel *gtk_application_get_app_menu(GtkApplication *
						    application);
    extern GMenuModel *gtk_application_get_menubar(GtkApplication *
						   application);
    extern GType gtk_application_get_type(void);
    extern GtkWindow *gtk_application_get_window_by_id(GtkApplication *
						       application, guint);
    extern GList *gtk_application_get_windows(GtkApplication *
					      application);
    extern guint gtk_application_inhibit(GtkApplication * application,
					 GtkWindow *,
					 GtkApplicationInhibitFlags,
					 const char *);
    extern GType gtk_application_inhibit_flags_get_type(void);
    extern gboolean gtk_application_is_inhibited(GtkApplication *
						 application,
						 GtkApplicationInhibitFlags);
    extern GtkApplication *gtk_application_new(const char *application_id,
					       GApplicationFlags);
    extern void gtk_application_remove_accelerator(GtkApplication *
						   application,
						   const char *,
						   GVariant *);
    extern void gtk_application_remove_window(GtkApplication * application,
					      GtkWindow *);
    extern void gtk_application_set_app_menu(GtkApplication * application,
					     GMenuModel *);
    extern void gtk_application_set_menubar(GtkApplication * application,
					    GMenuModel *);
    extern void gtk_application_uninhibit(GtkApplication * application,
					  guint);
    extern guint gtk_application_window_get_id(GtkApplicationWindow *
					       window);
    extern gboolean
	gtk_application_window_get_show_menubar(GtkApplicationWindow *
						window);
    extern GType gtk_application_window_get_type(void);
    extern GtkWidget *gtk_application_window_new(GtkApplication *
						 application);
    extern void
	gtk_application_window_set_show_menubar(GtkApplicationWindow *
						window, gboolean);
    extern GType gtk_arrow_get_type(void);
    extern GtkWidget *gtk_arrow_new(GtkArrowType arrow_type,
				    GtkShadowType);
    extern GType gtk_arrow_placement_get_type(void);
    extern void gtk_arrow_set(GtkArrow * arrow, GtkArrowType,
			      GtkShadowType);
    extern GType gtk_arrow_type_get_type(void);
    extern GType gtk_aspect_frame_get_type(void);
    extern GtkWidget *gtk_aspect_frame_new(const char *label, gfloat,
					   gfloat, gfloat, gboolean);
    extern void gtk_aspect_frame_set(GtkAspectFrame * aspect_frame, gfloat,
				     gfloat, gfloat, gboolean);
    extern void gtk_assistant_add_action_widget(GtkAssistant * assistant,
						GtkWidget *);
    extern gint gtk_assistant_append_page(GtkAssistant * assistant,
					  GtkWidget *);
    extern void gtk_assistant_commit(GtkAssistant * assistant);
    extern gint gtk_assistant_get_current_page(GtkAssistant * assistant);
    extern gint gtk_assistant_get_n_pages(GtkAssistant * assistant);
    extern GtkWidget *gtk_assistant_get_nth_page(GtkAssistant * assistant,
						 gint);
    extern gboolean gtk_assistant_get_page_complete(GtkAssistant *
						    assistant,
						    GtkWidget *);
    extern GdkPixbuf *gtk_assistant_get_page_header_image(GtkAssistant *
							  assistant,
							  GtkWidget *);
    extern GdkPixbuf *gtk_assistant_get_page_side_image(GtkAssistant *
							assistant,
							GtkWidget *);
    extern const char *gtk_assistant_get_page_title(GtkAssistant *
						    assistant,
						    GtkWidget *);
    extern GtkAssistantPageType gtk_assistant_get_page_type(GtkAssistant *
							    assistant,
							    GtkWidget *);
    extern GType gtk_assistant_get_type(void);
    extern gint gtk_assistant_insert_page(GtkAssistant * assistant,
					  GtkWidget *, gint);
    extern GtkWidget *gtk_assistant_new(void);
    extern void gtk_assistant_next_page(GtkAssistant * assistant);
    extern GType gtk_assistant_page_type_get_type(void);
    extern gint gtk_assistant_prepend_page(GtkAssistant * assistant,
					   GtkWidget *);
    extern void gtk_assistant_previous_page(GtkAssistant * assistant);
    extern void gtk_assistant_remove_action_widget(GtkAssistant *
						   assistant, GtkWidget *);
    extern void gtk_assistant_remove_page(GtkAssistant * assistant, gint);
    extern void gtk_assistant_set_current_page(GtkAssistant * assistant,
					       gint);
    extern void gtk_assistant_set_forward_page_func(GtkAssistant *
						    assistant,
						    GtkAssistantPageFunc,
						    gpointer,
						    GDestroyNotify);
    extern void gtk_assistant_set_page_complete(GtkAssistant * assistant,
						GtkWidget *, gboolean);
    extern void gtk_assistant_set_page_header_image(GtkAssistant *
						    assistant, GtkWidget *,
						    GdkPixbuf *);
    extern void gtk_assistant_set_page_side_image(GtkAssistant * assistant,
						  GtkWidget *,
						  GdkPixbuf *);
    extern void gtk_assistant_set_page_title(GtkAssistant * assistant,
					     GtkWidget *, const char *);
    extern void gtk_assistant_set_page_type(GtkAssistant * assistant,
					    GtkWidget *,
					    GtkAssistantPageType);
    extern void gtk_assistant_update_buttons_state(GtkAssistant *
						   assistant);
    extern GType gtk_attach_options_get_type(void);
    extern GtkWidget *gtk_bin_get_child(GtkBin * bin);
    extern GType gtk_bin_get_type(void);
    extern void gtk_binding_entry_add_signal(GtkBindingSet * binding_set,
					     guint keyval,
					     GdkModifierType modifiers,
					     const gchar * signal_name,
					     guint n_args, ...);
    extern GTokenType
	gtk_binding_entry_add_signal_from_string(GtkBindingSet *
						 binding_set,
						 const char *);
    extern void gtk_binding_entry_add_signall(GtkBindingSet * binding_set,
					      guint keyval,
					      GdkModifierType modifiers,
					      const gchar * signal_name,
					      GSList * binding_args);
    extern void gtk_binding_entry_remove(GtkBindingSet * binding_set,
					 guint keyval,
					 GdkModifierType modifiers);
    extern void gtk_binding_entry_skip(GtkBindingSet * binding_set,
				       guint keyval,
				       GdkModifierType modifiers);
    extern gboolean gtk_binding_set_activate(GtkBindingSet * binding_set,
					     guint keyval,
					     GdkModifierType modifiers,
					     GObject * object);
    extern void gtk_binding_set_add_path(GtkBindingSet * binding_set,
					 GtkPathType, const char *,
					 GtkPathPriorityType);
    extern GtkBindingSet *gtk_binding_set_by_class(gpointer object_class);
    extern GtkBindingSet *gtk_binding_set_find(const char *set_name);
    extern GtkBindingSet *gtk_binding_set_new(const char *set_name);
    extern gboolean gtk_bindings_activate(GObject * object, guint keyval,
					  GdkModifierType modifiers);
    extern gboolean gtk_bindings_activate_event(GObject * object,
						GdkEventKey *);
    extern GtkBorder *gtk_border_copy(const GtkBorder * border_);
    extern void gtk_border_free(GtkBorder * border_);
    extern GType gtk_border_get_type(void);
    extern GtkBorder *gtk_border_new(void);
    extern GType gtk_border_style_get_type(void);
    extern gboolean gtk_box_get_homogeneous(GtkBox * box);
    extern gint gtk_box_get_spacing(GtkBox * box);
    extern GType gtk_box_get_type(void);
    extern GtkWidget *gtk_box_new(GtkOrientation orientation, gint);
    extern void gtk_box_pack_end(GtkBox * box, GtkWidget *, gboolean,
				 gboolean, guint);
    extern void gtk_box_pack_start(GtkBox * box, GtkWidget *, gboolean,
				   gboolean, guint);
    extern void gtk_box_query_child_packing(GtkBox * box, GtkWidget *,
					    gboolean *, gboolean *,
					    guint *, GtkPackType *);
    extern void gtk_box_reorder_child(GtkBox * box, GtkWidget *, gint);
    extern void gtk_box_set_child_packing(GtkBox * box, GtkWidget *,
					  gboolean, gboolean, guint,
					  GtkPackType);
    extern void gtk_box_set_homogeneous(GtkBox * box, gboolean);
    extern void gtk_box_set_spacing(GtkBox * box, gint);
    extern void gtk_buildable_add_child(GtkBuildable * buildable,
					GtkBuilder *, GObject *,
					const char *);
    extern GObject *gtk_buildable_construct_child(GtkBuildable * buildable,
						  GtkBuilder *,
						  const char *);
    extern void gtk_buildable_custom_finished(GtkBuildable * buildable,
					      GtkBuilder *, GObject *,
					      const char *, void *);
    extern void gtk_buildable_custom_tag_end(GtkBuildable * buildable,
					     GtkBuilder *, GObject *,
					     const char *, void **);
    extern gboolean gtk_buildable_custom_tag_start(GtkBuildable *
						   buildable, GtkBuilder *,
						   GObject *, const char *,
						   GMarkupParser *,
						   void **);
    extern GObject *gtk_buildable_get_internal_child(GtkBuildable *
						     buildable,
						     GtkBuilder *,
						     const char *);
    extern const char *gtk_buildable_get_name(GtkBuildable * buildable);
    extern GType gtk_buildable_get_type(void);
    extern void gtk_buildable_parser_finished(GtkBuildable * buildable,
					      GtkBuilder *);
    extern void gtk_buildable_set_buildable_property(GtkBuildable *
						     buildable,
						     GtkBuilder *,
						     const char *,
						     const GValue *);
    extern void gtk_buildable_set_name(GtkBuildable * buildable,
				       const char *);
    extern guint gtk_builder_add_from_file(GtkBuilder * builder,
					   const char *, GError * *);
    extern guint gtk_builder_add_from_resource(GtkBuilder * builder,
					       const char *, GError * *);
    extern guint gtk_builder_add_from_string(GtkBuilder * builder,
					     const char *, gsize,
					     GError * *);
    extern guint gtk_builder_add_objects_from_file(GtkBuilder * builder,
						   const char *, gchar * *,
						   GError * *);
    extern guint gtk_builder_add_objects_from_resource(GtkBuilder *
						       builder,
						       const char *,
						       gchar * *,
						       GError * *);
    extern guint gtk_builder_add_objects_from_string(GtkBuilder * builder,
						     const char *, gsize,
						     gchar * *,
						     GError * *);
    extern void gtk_builder_connect_signals(GtkBuilder * builder,
					    gpointer);
    extern void gtk_builder_connect_signals_full(GtkBuilder * builder,
						 GtkBuilderConnectFunc,
						 gpointer);
    extern GType gtk_builder_error_get_type(void);
    extern GQuark gtk_builder_error_quark(void);
    extern GObject *gtk_builder_get_object(GtkBuilder * builder,
					   const char *);
    extern GSList *gtk_builder_get_objects(GtkBuilder * builder);
    extern const char *gtk_builder_get_translation_domain(GtkBuilder *
							  builder);
    extern GType gtk_builder_get_type(void);
    extern GType gtk_builder_get_type_from_name(GtkBuilder * builder,
						const char *);
    extern GtkBuilder *gtk_builder_new(void);
    extern void gtk_builder_set_translation_domain(GtkBuilder * builder,
						   const char *);
    extern gboolean gtk_builder_value_from_string(GtkBuilder * builder,
						  GParamSpec *,
						  const char *, GValue *,
						  GError * *);
    extern gboolean gtk_builder_value_from_string_type(GtkBuilder *
						       builder, GType,
						       const char *,
						       GValue *,
						       GError * *);
    extern gboolean gtk_button_box_get_child_non_homogeneous(GtkButtonBox *
							     widget,
							     GtkWidget *);
    extern gboolean gtk_button_box_get_child_secondary(GtkButtonBox *
						       widget,
						       GtkWidget *);
    extern GtkButtonBoxStyle gtk_button_box_get_layout(GtkButtonBox *
						       widget);
    extern GType gtk_button_box_get_type(void);
    extern GtkWidget *gtk_button_box_new(GtkOrientation orientation);
    extern void gtk_button_box_set_child_non_homogeneous(GtkButtonBox *
							 widget,
							 GtkWidget *,
							 gboolean);
    extern void gtk_button_box_set_child_secondary(GtkButtonBox * widget,
						   GtkWidget *, gboolean);
    extern void gtk_button_box_set_layout(GtkButtonBox * widget,
					  GtkButtonBoxStyle);
    extern GType gtk_button_box_style_get_type(void);
    extern void gtk_button_clicked(GtkButton * button);
    extern void gtk_button_enter(GtkButton * button);
    extern void gtk_button_get_alignment(GtkButton * button, gfloat *,
					 gfloat *);
    extern gboolean gtk_button_get_always_show_image(GtkButton * button);
    extern GdkWindow *gtk_button_get_event_window(GtkButton * button);
    extern gboolean gtk_button_get_focus_on_click(GtkButton * button);
    extern GtkWidget *gtk_button_get_image(GtkButton * button);
    extern GtkPositionType gtk_button_get_image_position(GtkButton *
							 button);
    extern const char *gtk_button_get_label(GtkButton * button);
    extern GtkReliefStyle gtk_button_get_relief(GtkButton * button);
    extern GType gtk_button_get_type(void);
    extern gboolean gtk_button_get_use_stock(GtkButton * button);
    extern gboolean gtk_button_get_use_underline(GtkButton * button);
    extern void gtk_button_leave(GtkButton * button);
    extern GtkWidget *gtk_button_new(void);
    extern GtkWidget *gtk_button_new_from_stock(const char *stock_id);
    extern GtkWidget *gtk_button_new_with_label(const char *label);
    extern GtkWidget *gtk_button_new_with_mnemonic(const char *label);
    extern void gtk_button_pressed(GtkButton * button);
    extern void gtk_button_released(GtkButton * button);
    extern void gtk_button_set_alignment(GtkButton * button, gfloat,
					 gfloat);
    extern void gtk_button_set_always_show_image(GtkButton * button,
						 gboolean);
    extern void gtk_button_set_focus_on_click(GtkButton * button,
					      gboolean);
    extern void gtk_button_set_image(GtkButton * button, GtkWidget *);
    extern void gtk_button_set_image_position(GtkButton * button,
					      GtkPositionType);
    extern void gtk_button_set_label(GtkButton * button, const char *);
    extern void gtk_button_set_relief(GtkButton * button, GtkReliefStyle);
    extern void gtk_button_set_use_stock(GtkButton * button, gboolean);
    extern void gtk_button_set_use_underline(GtkButton * button, gboolean);
    extern GType gtk_buttons_type_get_type(void);
    extern gboolean gtk_cairo_should_draw_window(cairo_t * cr,
						 GdkWindow *);
    extern void gtk_cairo_transform_to_window(cairo_t * cr, GtkWidget *,
					      GdkWindow *);
    extern void gtk_calendar_clear_marks(GtkCalendar * calendar);
    extern GType gtk_calendar_display_options_get_type(void);
    extern void gtk_calendar_get_date(GtkCalendar * calendar, guint *,
				      guint *, guint *);
    extern gboolean gtk_calendar_get_day_is_marked(GtkCalendar * calendar,
						   guint);
    extern gint gtk_calendar_get_detail_height_rows(GtkCalendar *
						    calendar);
    extern gint gtk_calendar_get_detail_width_chars(GtkCalendar *
						    calendar);
    extern GtkCalendarDisplayOptions
	gtk_calendar_get_display_options(GtkCalendar * calendar);
    extern GType gtk_calendar_get_type(void);
    extern void gtk_calendar_mark_day(GtkCalendar * calendar, guint);
    extern GtkWidget *gtk_calendar_new(void);
    extern void gtk_calendar_select_day(GtkCalendar * calendar, guint);
    extern void gtk_calendar_select_month(GtkCalendar * calendar, guint,
					  guint);
    extern void gtk_calendar_set_detail_func(GtkCalendar * calendar,
					     GtkCalendarDetailFunc,
					     gpointer, GDestroyNotify);
    extern void gtk_calendar_set_detail_height_rows(GtkCalendar * calendar,
						    gint);
    extern void gtk_calendar_set_detail_width_chars(GtkCalendar * calendar,
						    gint);
    extern void gtk_calendar_set_display_options(GtkCalendar * calendar,
						 GtkCalendarDisplayOptions);
    extern void gtk_calendar_unmark_day(GtkCalendar * calendar, guint);
    extern gboolean gtk_cell_area_activate(GtkCellArea * area,
					   GtkCellAreaContext *,
					   GtkWidget *,
					   const GdkRectangle *,
					   GtkCellRendererState, gboolean);
    extern gboolean gtk_cell_area_activate_cell(GtkCellArea * area,
						GtkWidget *,
						GtkCellRenderer *,
						GdkEvent *,
						const GdkRectangle *,
						GtkCellRendererState);
    extern void gtk_cell_area_add(GtkCellArea * area, GtkCellRenderer *);
    extern void gtk_cell_area_add_focus_sibling(GtkCellArea * area,
						GtkCellRenderer *,
						GtkCellRenderer *);
    extern void gtk_cell_area_add_with_properties(GtkCellArea * area,
						  GtkCellRenderer *,
						  const char *, ...);
    extern void gtk_cell_area_apply_attributes(GtkCellArea * area,
					       GtkTreeModel *,
					       GtkTreeIter *, gboolean,
					       gboolean);
    extern void gtk_cell_area_attribute_connect(GtkCellArea * area,
						GtkCellRenderer *,
						const char *, gint);
    extern void gtk_cell_area_attribute_disconnect(GtkCellArea * area,
						   GtkCellRenderer *,
						   const char *);
    extern gint gtk_cell_area_box_get_spacing(GtkCellAreaBox * box);
    extern GType gtk_cell_area_box_get_type(void);
    extern GtkCellArea *gtk_cell_area_box_new(void);
    extern void gtk_cell_area_box_pack_end(GtkCellAreaBox * box,
					   GtkCellRenderer *, gboolean,
					   gboolean, gboolean);
    extern void gtk_cell_area_box_pack_start(GtkCellAreaBox * box,
					     GtkCellRenderer *, gboolean,
					     gboolean, gboolean);
    extern void gtk_cell_area_box_set_spacing(GtkCellAreaBox * box, gint);
    extern void gtk_cell_area_cell_get(GtkCellArea * area,
				       GtkCellRenderer *, const char *,
				       ...);
    extern void gtk_cell_area_cell_get_property(GtkCellArea * area,
						GtkCellRenderer *,
						const char *, GValue *);
    extern void gtk_cell_area_cell_get_valist(GtkCellArea * area,
					      const gchar *
					      first_property_name,
					      const char *,
					      va_list var_args);
    extern void gtk_cell_area_cell_set(GtkCellArea * area,
				       GtkCellRenderer *, const char *,
				       ...);
    extern void gtk_cell_area_cell_set_property(GtkCellArea * area,
						GtkCellRenderer *,
						const char *,
						const GValue *);
    extern void gtk_cell_area_cell_set_valist(GtkCellArea * area,
					      const gchar *
					      first_property_name,
					      const char *,
					      va_list var_args);
    extern GParamSpec
	*gtk_cell_area_class_find_cell_property(GtkCellAreaClass * aclass,
						const char *);
    extern void gtk_cell_area_class_install_cell_property(GtkCellAreaClass
							  * aclass, guint,
							  GParamSpec *);
    extern GParamSpec
	**gtk_cell_area_class_list_cell_properties(GtkCellAreaClass *
						   aclass, guint *);
    extern void gtk_cell_area_context_allocate(GtkCellAreaContext *
					       context, gint, gint);
    extern void gtk_cell_area_context_get_allocation(GtkCellAreaContext *
						     context, gint *,
						     gint *);
    extern GtkCellArea *gtk_cell_area_context_get_area(GtkCellAreaContext *
						       context);
    extern void
	gtk_cell_area_context_get_preferred_height(GtkCellAreaContext *
						   context, gint *,
						   gint *);
    extern void
	gtk_cell_area_context_get_preferred_height_for_width
	(GtkCellAreaContext * context, gint, gint *, gint *);
    extern void
	gtk_cell_area_context_get_preferred_width(GtkCellAreaContext *
						  context, gint *, gint *);
    extern void
	gtk_cell_area_context_get_preferred_width_for_height
	(GtkCellAreaContext * context, gint, gint *, gint *);
    extern GType gtk_cell_area_context_get_type(void);
    extern void
	gtk_cell_area_context_push_preferred_height(GtkCellAreaContext *
						    context, gint, gint);
    extern void
	gtk_cell_area_context_push_preferred_width(GtkCellAreaContext *
						   context, gint, gint);
    extern void gtk_cell_area_context_reset(GtkCellAreaContext * context);
    extern GtkCellAreaContext *gtk_cell_area_copy_context(GtkCellArea *
							  area,
							  GtkCellAreaContext
							  *);
    extern GtkCellAreaContext *gtk_cell_area_create_context(GtkCellArea *
							    area);
    extern gint gtk_cell_area_event(GtkCellArea * area,
				    GtkCellAreaContext *, GtkWidget *,
				    GdkEvent *, const GdkRectangle *,
				    GtkCellRendererState);
    extern gboolean gtk_cell_area_focus(GtkCellArea * area,
					GtkDirectionType);
    extern void gtk_cell_area_foreach(GtkCellArea * area, GtkCellCallback,
				      gpointer);
    extern void gtk_cell_area_foreach_alloc(GtkCellArea * area,
					    GtkCellAreaContext *,
					    GtkWidget *,
					    const GdkRectangle *,
					    const GdkRectangle *,
					    GtkCellAllocCallback,
					    gpointer);
    extern void gtk_cell_area_get_cell_allocation(GtkCellArea * area,
						  GtkCellAreaContext *,
						  GtkWidget *,
						  GtkCellRenderer *,
						  const GdkRectangle *,
						  GdkRectangle *);
    extern GtkCellRenderer *gtk_cell_area_get_cell_at_position(GtkCellArea
							       * area,
							       GtkCellAreaContext
							       *,
							       GtkWidget *,
							       const
							       GdkRectangle
							       *, gint,
							       gint,
							       GdkRectangle
							       *);
    extern const char *gtk_cell_area_get_current_path_string(GtkCellArea *
							     area);
    extern GtkCellEditable *gtk_cell_area_get_edit_widget(GtkCellArea *
							  area);
    extern GtkCellRenderer *gtk_cell_area_get_edited_cell(GtkCellArea *
							  area);
    extern GtkCellRenderer *gtk_cell_area_get_focus_cell(GtkCellArea *
							 area);
    extern GtkCellRenderer
	*gtk_cell_area_get_focus_from_sibling(GtkCellArea * area,
					      GtkCellRenderer *);
    extern const GList *gtk_cell_area_get_focus_siblings(GtkCellArea *
							 area,
							 GtkCellRenderer
							 *);
    extern void gtk_cell_area_get_preferred_height(GtkCellArea * area,
						   GtkCellAreaContext *,
						   GtkWidget *, gint *,
						   gint *);
    extern void gtk_cell_area_get_preferred_height_for_width(GtkCellArea *
							     area,
							     GtkCellAreaContext
							     *,
							     GtkWidget *,
							     gint, gint *,
							     gint *);
    extern void gtk_cell_area_get_preferred_width(GtkCellArea * area,
						  GtkCellAreaContext *,
						  GtkWidget *, gint *,
						  gint *);
    extern void gtk_cell_area_get_preferred_width_for_height(GtkCellArea *
							     area,
							     GtkCellAreaContext
							     *,
							     GtkWidget *,
							     gint, gint *,
							     gint *);
    extern GtkSizeRequestMode gtk_cell_area_get_request_mode(GtkCellArea *
							     area);
    extern GType gtk_cell_area_get_type(void);
    extern gboolean gtk_cell_area_has_renderer(GtkCellArea * area,
					       GtkCellRenderer *);
    extern void gtk_cell_area_inner_cell_area(GtkCellArea * area,
					      GtkWidget *,
					      const GdkRectangle *,
					      GdkRectangle *);
    extern gboolean gtk_cell_area_is_activatable(GtkCellArea * area);
    extern gboolean gtk_cell_area_is_focus_sibling(GtkCellArea * area,
						   GtkCellRenderer *,
						   GtkCellRenderer *);
    extern void gtk_cell_area_remove(GtkCellArea * area,
				     GtkCellRenderer *);
    extern void gtk_cell_area_remove_focus_sibling(GtkCellArea * area,
						   GtkCellRenderer *,
						   GtkCellRenderer *);
    extern void gtk_cell_area_render(GtkCellArea * area,
				     GtkCellAreaContext *, GtkWidget *,
				     cairo_t *, const GdkRectangle *,
				     const GdkRectangle *,
				     GtkCellRendererState, gboolean);
    extern void gtk_cell_area_request_renderer(GtkCellArea * area,
					       GtkCellRenderer *,
					       GtkOrientation, GtkWidget *,
					       gint, gint *, gint *);
    extern void gtk_cell_area_set_focus_cell(GtkCellArea * area,
					     GtkCellRenderer *);
    extern void gtk_cell_area_stop_editing(GtkCellArea * area, gboolean);
    extern void gtk_cell_editable_editing_done(GtkCellEditable *
					       cell_editable);
    extern GType gtk_cell_editable_get_type(void);
    extern void gtk_cell_editable_remove_widget(GtkCellEditable *
						cell_editable);
    extern void gtk_cell_editable_start_editing(GtkCellEditable *
						cell_editable, GdkEvent *);
    extern void gtk_cell_layout_add_attribute(GtkCellLayout * cell_layout,
					      GtkCellRenderer *,
					      const char *, gint);
    extern void gtk_cell_layout_clear(GtkCellLayout * cell_layout);
    extern void gtk_cell_layout_clear_attributes(GtkCellLayout *
						 cell_layout,
						 GtkCellRenderer *);
    extern GtkCellArea *gtk_cell_layout_get_area(GtkCellLayout *
						 cell_layout);
    extern GList *gtk_cell_layout_get_cells(GtkCellLayout * cell_layout);
    extern GType gtk_cell_layout_get_type(void);
    extern void gtk_cell_layout_pack_end(GtkCellLayout * cell_layout,
					 GtkCellRenderer *, gboolean);
    extern void gtk_cell_layout_pack_start(GtkCellLayout * cell_layout,
					   GtkCellRenderer *, gboolean);
    extern void gtk_cell_layout_reorder(GtkCellLayout * cell_layout,
					GtkCellRenderer *, gint);
    extern void gtk_cell_layout_set_attributes(GtkCellLayout * cell_layout,
					       GtkCellRenderer *, ...);
    extern void gtk_cell_layout_set_cell_data_func(GtkCellLayout *
						   cell_layout,
						   GtkCellRenderer *,
						   GtkCellLayoutDataFunc,
						   gpointer,
						   GDestroyNotify);
    extern GType gtk_cell_renderer_accel_get_type(void);
    extern GType gtk_cell_renderer_accel_mode_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_accel_new(void);
    extern gboolean gtk_cell_renderer_activate(GtkCellRenderer * cell,
					       GdkEvent *, GtkWidget *,
					       const char *,
					       const GdkRectangle *,
					       const GdkRectangle *,
					       GtkCellRendererState);
    extern GType gtk_cell_renderer_combo_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_combo_new(void);
    extern void gtk_cell_renderer_get_aligned_area(GtkCellRenderer * cell,
						   GtkWidget *,
						   GtkCellRendererState,
						   const GdkRectangle *,
						   GdkRectangle *);
    extern void gtk_cell_renderer_get_alignment(GtkCellRenderer * cell,
						gfloat *, gfloat *);
    extern void gtk_cell_renderer_get_fixed_size(GtkCellRenderer * cell,
						 gint *, gint *);
    extern void gtk_cell_renderer_get_padding(GtkCellRenderer * cell,
					      gint *, gint *);
    extern void gtk_cell_renderer_get_preferred_height(GtkCellRenderer *
						       cell, GtkWidget *,
						       gint *, gint *);
    extern void
	gtk_cell_renderer_get_preferred_height_for_width(GtkCellRenderer *
							 cell, GtkWidget *,
							 gint, gint *,
							 gint *);
    extern void gtk_cell_renderer_get_preferred_size(GtkCellRenderer *
						     cell, GtkWidget *,
						     GtkRequisition *,
						     GtkRequisition *);
    extern void gtk_cell_renderer_get_preferred_width(GtkCellRenderer *
						      cell, GtkWidget *,
						      gint *, gint *);
    extern void
	gtk_cell_renderer_get_preferred_width_for_height(GtkCellRenderer *
							 cell, GtkWidget *,
							 gint, gint *,
							 gint *);
    extern GtkSizeRequestMode
	gtk_cell_renderer_get_request_mode(GtkCellRenderer * cell);
    extern gboolean gtk_cell_renderer_get_sensitive(GtkCellRenderer *
						    cell);
    extern void gtk_cell_renderer_get_size(GtkCellRenderer * cell,
					   GtkWidget *,
					   const GdkRectangle *, gint *,
					   gint *, gint *, gint *);
    extern GtkStateFlags gtk_cell_renderer_get_state(GtkCellRenderer *
						     cell, GtkWidget *,
						     GtkCellRendererState);
    extern GType gtk_cell_renderer_get_type(void);
    extern gboolean gtk_cell_renderer_get_visible(GtkCellRenderer * cell);
    extern gboolean gtk_cell_renderer_is_activatable(GtkCellRenderer *
						     cell);
    extern GType gtk_cell_renderer_mode_get_type(void);
    extern GType gtk_cell_renderer_pixbuf_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_pixbuf_new(void);
    extern GType gtk_cell_renderer_progress_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_progress_new(void);
    extern void gtk_cell_renderer_render(GtkCellRenderer * cell, cairo_t *,
					 GtkWidget *, const GdkRectangle *,
					 const GdkRectangle *,
					 GtkCellRendererState);
    extern void gtk_cell_renderer_set_alignment(GtkCellRenderer * cell,
						gfloat, gfloat);
    extern void gtk_cell_renderer_set_fixed_size(GtkCellRenderer * cell,
						 gint, gint);
    extern void gtk_cell_renderer_set_padding(GtkCellRenderer * cell, gint,
					      gint);
    extern void gtk_cell_renderer_set_sensitive(GtkCellRenderer * cell,
						gboolean);
    extern void gtk_cell_renderer_set_visible(GtkCellRenderer * cell,
					      gboolean);
    extern GType gtk_cell_renderer_spin_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_spin_new(void);
    extern GType gtk_cell_renderer_spinner_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_spinner_new(void);
    extern GtkCellEditable *gtk_cell_renderer_start_editing(GtkCellRenderer
							    * cell,
							    GdkEvent *,
							    GtkWidget *,
							    const char *,
							    const
							    GdkRectangle *,
							    const
							    GdkRectangle *,
							    GtkCellRendererState);
    extern GType gtk_cell_renderer_state_get_type(void);
    extern void gtk_cell_renderer_stop_editing(GtkCellRenderer * cell,
					       gboolean);
    extern GType gtk_cell_renderer_text_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_text_new(void);
    extern void
	gtk_cell_renderer_text_set_fixed_height_from_font
	(GtkCellRendererText * renderer, gint);
    extern gboolean
	gtk_cell_renderer_toggle_get_activatable(GtkCellRendererToggle *
						 toggle);
    extern gboolean
	gtk_cell_renderer_toggle_get_active(GtkCellRendererToggle *
					    toggle);
    extern gboolean
	gtk_cell_renderer_toggle_get_radio(GtkCellRendererToggle * toggle);
    extern GType gtk_cell_renderer_toggle_get_type(void);
    extern GtkCellRenderer *gtk_cell_renderer_toggle_new(void);
    extern void
	gtk_cell_renderer_toggle_set_activatable(GtkCellRendererToggle *
						 toggle, gboolean);
    extern void gtk_cell_renderer_toggle_set_active(GtkCellRendererToggle *
						    toggle, gboolean);
    extern void gtk_cell_renderer_toggle_set_radio(GtkCellRendererToggle *
						   toggle, gboolean);
    extern GtkTreePath *gtk_cell_view_get_displayed_row(GtkCellView *
							cell_view);
    extern gboolean gtk_cell_view_get_draw_sensitive(GtkCellView *
						     cell_view);
    extern gboolean gtk_cell_view_get_fit_model(GtkCellView * cell_view);
    extern GtkTreeModel *gtk_cell_view_get_model(GtkCellView * cell_view);
    extern gboolean gtk_cell_view_get_size_of_row(GtkCellView * cell_view,
						  GtkTreePath *,
						  GtkRequisition *);
    extern GType gtk_cell_view_get_type(void);
    extern GtkWidget *gtk_cell_view_new(void);
    extern GtkWidget *gtk_cell_view_new_with_context(GtkCellArea * area,
						     GtkCellAreaContext *);
    extern GtkWidget *gtk_cell_view_new_with_markup(const char *markup);
    extern GtkWidget *gtk_cell_view_new_with_pixbuf(GdkPixbuf * pixbuf);
    extern GtkWidget *gtk_cell_view_new_with_text(const char *text);
    extern void gtk_cell_view_set_background_color(GtkCellView * cell_view,
						   const GdkColor *);
    extern void gtk_cell_view_set_background_rgba(GtkCellView * cell_view,
						  const GdkRGBA *);
    extern void gtk_cell_view_set_displayed_row(GtkCellView * cell_view,
						GtkTreePath *);
    extern void gtk_cell_view_set_draw_sensitive(GtkCellView * cell_view,
						 gboolean);
    extern void gtk_cell_view_set_fit_model(GtkCellView * cell_view,
					    gboolean);
    extern void gtk_cell_view_set_model(GtkCellView * cell_view,
					GtkTreeModel *);
    extern GType gtk_check_button_get_type(void);
    extern GtkWidget *gtk_check_button_new(void);
    extern GtkWidget *gtk_check_button_new_with_label(const char *label);
    extern GtkWidget *gtk_check_button_new_with_mnemonic(const char
							 *label);
    extern gboolean gtk_check_menu_item_get_active(GtkCheckMenuItem *
						   check_menu_item);
    extern gboolean gtk_check_menu_item_get_draw_as_radio(GtkCheckMenuItem
							  *
							  check_menu_item);
    extern gboolean gtk_check_menu_item_get_inconsistent(GtkCheckMenuItem *
							 check_menu_item);
    extern GType gtk_check_menu_item_get_type(void);
    extern GtkWidget *gtk_check_menu_item_new(void);
    extern GtkWidget *gtk_check_menu_item_new_with_label(const char
							 *label);
    extern GtkWidget *gtk_check_menu_item_new_with_mnemonic(const char
							    *label);
    extern void gtk_check_menu_item_set_active(GtkCheckMenuItem *
					       check_menu_item, gboolean);
    extern void gtk_check_menu_item_set_draw_as_radio(GtkCheckMenuItem *
						      check_menu_item,
						      gboolean);
    extern void gtk_check_menu_item_set_inconsistent(GtkCheckMenuItem *
						     check_menu_item,
						     gboolean);
    extern void gtk_check_menu_item_toggled(GtkCheckMenuItem *
					    check_menu_item);
    extern const char *gtk_check_version(guint required_major, guint,
					 guint);
    extern void gtk_clipboard_clear(GtkClipboard * clipboard);
    extern GtkClipboard *gtk_clipboard_get(GdkAtom selection);
    extern GdkDisplay *gtk_clipboard_get_display(GtkClipboard * clipboard);
    extern GtkClipboard *gtk_clipboard_get_for_display(GdkDisplay *
						       display, GdkAtom);
    extern GObject *gtk_clipboard_get_owner(GtkClipboard * clipboard);
    extern GType gtk_clipboard_get_type(void);
    extern void gtk_clipboard_request_contents(GtkClipboard * clipboard,
					       GdkAtom,
					       GtkClipboardReceivedFunc,
					       gpointer);
    extern void gtk_clipboard_request_image(GtkClipboard * clipboard,
					    GtkClipboardImageReceivedFunc,
					    gpointer);
    extern void gtk_clipboard_request_rich_text(GtkClipboard * clipboard,
						GtkTextBuffer *,
						GtkClipboardRichTextReceivedFunc,
						gpointer);
    extern void gtk_clipboard_request_targets(GtkClipboard * clipboard,
					      GtkClipboardTargetsReceivedFunc,
					      gpointer);
    extern void gtk_clipboard_request_text(GtkClipboard * clipboard,
					   GtkClipboardTextReceivedFunc,
					   gpointer);
    extern void gtk_clipboard_request_uris(GtkClipboard * clipboard,
					   GtkClipboardURIReceivedFunc,
					   gpointer);
    extern void gtk_clipboard_set_can_store(GtkClipboard * clipboard,
					    const GtkTargetEntry *, gint);
    extern void gtk_clipboard_set_image(GtkClipboard * clipboard,
					GdkPixbuf *);
    extern void gtk_clipboard_set_text(GtkClipboard * clipboard,
				       const char *, gint);
    extern gboolean gtk_clipboard_set_with_data(GtkClipboard * clipboard,
						const GtkTargetEntry *,
						guint, GtkClipboardGetFunc,
						GtkClipboardClearFunc,
						gpointer);
    extern gboolean gtk_clipboard_set_with_owner(GtkClipboard * clipboard,
						 const GtkTargetEntry *,
						 guint,
						 GtkClipboardGetFunc,
						 GtkClipboardClearFunc,
						 GObject *);
    extern void gtk_clipboard_store(GtkClipboard * clipboard);
    extern GtkSelectionData *gtk_clipboard_wait_for_contents(GtkClipboard *
							     clipboard,
							     GdkAtom);
    extern GdkPixbuf *gtk_clipboard_wait_for_image(GtkClipboard *
						   clipboard);
    extern guint8 *gtk_clipboard_wait_for_rich_text(GtkClipboard *
						    clipboard,
						    GtkTextBuffer *,
						    GdkAtom *, gsize *);
    extern gboolean gtk_clipboard_wait_for_targets(GtkClipboard *
						   clipboard, GdkAtom * *,
						   gint *);
    extern gchar *gtk_clipboard_wait_for_text(GtkClipboard * clipboard);
    extern gchar **gtk_clipboard_wait_for_uris(GtkClipboard * clipboard);
    extern gboolean gtk_clipboard_wait_is_image_available(GtkClipboard *
							  clipboard);
    extern gboolean gtk_clipboard_wait_is_rich_text_available(GtkClipboard
							      * clipboard,
							      GtkTextBuffer
							      *);
    extern gboolean gtk_clipboard_wait_is_target_available(GtkClipboard *
							   clipboard,
							   GdkAtom);
    extern gboolean gtk_clipboard_wait_is_text_available(GtkClipboard *
							 clipboard);
    extern gboolean gtk_clipboard_wait_is_uris_available(GtkClipboard *
							 clipboard);
    extern guint16 gtk_color_button_get_alpha(GtkColorButton * button);
    extern void gtk_color_button_get_color(GtkColorButton * button,
					   GdkColor *);
    extern void gtk_color_button_get_rgba(GtkColorButton * button,
					  GdkRGBA *);
    extern const char *gtk_color_button_get_title(GtkColorButton * button);
    extern GType gtk_color_button_get_type(void);
    extern gboolean gtk_color_button_get_use_alpha(GtkColorButton *
						   button);
    extern GtkWidget *gtk_color_button_new(void);
    extern GtkWidget *gtk_color_button_new_with_color(const GdkColor *
						      color);
    extern GtkWidget *gtk_color_button_new_with_rgba(const GdkRGBA * rgba);
    extern void gtk_color_button_set_alpha(GtkColorButton * button,
					   guint16);
    extern void gtk_color_button_set_color(GtkColorButton * button,
					   const GdkColor *);
    extern void gtk_color_button_set_rgba(GtkColorButton * button,
					  const GdkRGBA *);
    extern void gtk_color_button_set_title(GtkColorButton * button,
					   const char *);
    extern void gtk_color_button_set_use_alpha(GtkColorButton * button,
					       gboolean);
    extern void gtk_color_chooser_add_palette(GtkColorChooser * chooser,
					      GtkOrientation, gint, gint,
					      GdkRGBA *);
    extern GType gtk_color_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_color_chooser_dialog_new(const char *title,
						   GtkWindow *);
    extern void gtk_color_chooser_get_rgba(GtkColorChooser * chooser,
					   GdkRGBA *);
    extern GType gtk_color_chooser_get_type(void);
    extern gboolean gtk_color_chooser_get_use_alpha(GtkColorChooser *
						    chooser);
    extern void gtk_color_chooser_set_rgba(GtkColorChooser * chooser,
					   const GdkRGBA *);
    extern void gtk_color_chooser_set_use_alpha(GtkColorChooser * chooser,
						gboolean);
    extern GType gtk_color_chooser_widget_get_type(void);
    extern GtkWidget *gtk_color_chooser_widget_new(void);
    extern gint gtk_combo_box_get_active(GtkComboBox * combo_box);
    extern const char *gtk_combo_box_get_active_id(GtkComboBox *
						   combo_box);
    extern gboolean gtk_combo_box_get_active_iter(GtkComboBox * combo_box,
						  GtkTreeIter *);
    extern gboolean gtk_combo_box_get_add_tearoffs(GtkComboBox *
						   combo_box);
    extern GtkSensitivityType
	gtk_combo_box_get_button_sensitivity(GtkComboBox * combo_box);
    extern gint gtk_combo_box_get_column_span_column(GtkComboBox *
						     combo_box);
    extern gint gtk_combo_box_get_entry_text_column(GtkComboBox *
						    combo_box);
    extern gboolean gtk_combo_box_get_focus_on_click(GtkComboBox * combo);
    extern gboolean gtk_combo_box_get_has_entry(GtkComboBox * combo_box);
    extern gint gtk_combo_box_get_id_column(GtkComboBox * combo_box);
    extern GtkTreeModel *gtk_combo_box_get_model(GtkComboBox * combo_box);
    extern AtkObject *gtk_combo_box_get_popup_accessible(GtkComboBox *
							 combo_box);
    extern gboolean gtk_combo_box_get_popup_fixed_width(GtkComboBox *
							combo_box);
    extern GtkTreeViewRowSeparatorFunc
	gtk_combo_box_get_row_separator_func(GtkComboBox * combo_box);
    extern gint gtk_combo_box_get_row_span_column(GtkComboBox * combo_box);
    extern const char *gtk_combo_box_get_title(GtkComboBox * combo_box);
    extern GType gtk_combo_box_get_type(void);
    extern gint gtk_combo_box_get_wrap_width(GtkComboBox * combo_box);
    extern GtkWidget *gtk_combo_box_new(void);
    extern GtkWidget *gtk_combo_box_new_with_area(GtkCellArea * area);
    extern GtkWidget *gtk_combo_box_new_with_area_and_entry(GtkCellArea *
							    area);
    extern GtkWidget *gtk_combo_box_new_with_entry(void);
    extern GtkWidget *gtk_combo_box_new_with_model(GtkTreeModel * model);
    extern GtkWidget *gtk_combo_box_new_with_model_and_entry(GtkTreeModel *
							     model);
    extern void gtk_combo_box_popdown(GtkComboBox * combo_box);
    extern void gtk_combo_box_popup(GtkComboBox * combo_box);
    extern void gtk_combo_box_popup_for_device(GtkComboBox * combo_box,
					       GdkDevice *);
    extern void gtk_combo_box_set_active(GtkComboBox * combo_box, gint);
    extern gboolean gtk_combo_box_set_active_id(GtkComboBox * combo_box,
						const char *);
    extern void gtk_combo_box_set_active_iter(GtkComboBox * combo_box,
					      GtkTreeIter *);
    extern void gtk_combo_box_set_add_tearoffs(GtkComboBox * combo_box,
					       gboolean);
    extern void gtk_combo_box_set_button_sensitivity(GtkComboBox *
						     combo_box,
						     GtkSensitivityType);
    extern void gtk_combo_box_set_column_span_column(GtkComboBox *
						     combo_box, gint);
    extern void gtk_combo_box_set_entry_text_column(GtkComboBox *
						    combo_box, gint);
    extern void gtk_combo_box_set_focus_on_click(GtkComboBox * combo,
						 gboolean);
    extern void gtk_combo_box_set_id_column(GtkComboBox * combo_box, gint);
    extern void gtk_combo_box_set_model(GtkComboBox * combo_box,
					GtkTreeModel *);
    extern void gtk_combo_box_set_popup_fixed_width(GtkComboBox *
						    combo_box, gboolean);
    extern void gtk_combo_box_set_row_separator_func(GtkComboBox *
						     combo_box,
						     GtkTreeViewRowSeparatorFunc,
						     gpointer,
						     GDestroyNotify);
    extern void gtk_combo_box_set_row_span_column(GtkComboBox * combo_box,
						  gint);
    extern void gtk_combo_box_set_title(GtkComboBox * combo_box,
					const char *);
    extern void gtk_combo_box_set_wrap_width(GtkComboBox * combo_box,
					     gint);
    extern void gtk_combo_box_text_append(GtkComboBoxText * combo_box,
					  const char *, const char *);
    extern void gtk_combo_box_text_append_text(GtkComboBoxText * combo_box,
					       const char *);
    extern gchar *gtk_combo_box_text_get_active_text(GtkComboBoxText *
						     combo_box);
    extern GType gtk_combo_box_text_get_type(void);
    extern void gtk_combo_box_text_insert(GtkComboBoxText * combo_box,
					  gint, const char *,
					  const char *);
    extern void gtk_combo_box_text_insert_text(GtkComboBoxText * combo_box,
					       gint, const char *);
    extern GtkWidget *gtk_combo_box_text_new(void);
    extern GtkWidget *gtk_combo_box_text_new_with_entry(void);
    extern void gtk_combo_box_text_prepend(GtkComboBoxText * combo_box,
					   const char *, const char *);
    extern void gtk_combo_box_text_prepend_text(GtkComboBoxText *
						combo_box, const char *);
    extern void gtk_combo_box_text_remove(GtkComboBoxText * combo_box,
					  gint);
    extern void gtk_combo_box_text_remove_all(GtkComboBoxText * combo_box);
    extern void gtk_container_add(GtkContainer * container, GtkWidget *);
    extern void gtk_container_add_with_properties(GtkContainer * container,
						  GtkWidget *,
						  const char *, ...);
    extern void gtk_container_check_resize(GtkContainer * container);
    extern void gtk_container_child_get(GtkContainer * container,
					GtkWidget *, const char *, ...);
    extern void gtk_container_child_get_property(GtkContainer * container,
						 GtkWidget *, const char *,
						 GValue *);
    extern void gtk_container_child_get_valist(GtkContainer * container,
					       const gchar *
					       first_property_name,
					       const char *,
					       va_list var_args);
    extern void gtk_container_child_notify(GtkContainer * container,
					   GtkWidget *, const char *);
    extern void gtk_container_child_set(GtkContainer * container,
					GtkWidget *, const char *, ...);
    extern void gtk_container_child_set_property(GtkContainer * container,
						 GtkWidget *, const char *,
						 const GValue *);
    extern void gtk_container_child_set_valist(GtkContainer * container,
					       const gchar *
					       first_property_name,
					       const char *,
					       va_list var_args);
    extern GType gtk_container_child_type(GtkContainer * container);
    extern GParamSpec *gtk_container_class_find_child_property(GObjectClass
							       * cclass,
							       const char
							       *);
    extern void gtk_container_class_handle_border_width(GtkContainerClass *
							klass);
    extern void
	gtk_container_class_install_child_property(GtkContainerClass *
						   cclass, guint,
						   GParamSpec *);
    extern GParamSpec
	**gtk_container_class_list_child_properties(GObjectClass * cclass,
						    guint *);
    extern void gtk_container_forall(GtkContainer * container, GtkCallback,
				     gpointer);
    extern void gtk_container_foreach(GtkContainer * container,
				      GtkCallback, gpointer);
    extern guint gtk_container_get_border_width(GtkContainer * container);
    extern GList *gtk_container_get_children(GtkContainer * container);
    extern gboolean gtk_container_get_focus_chain(GtkContainer * container,
						  GList * *);
    extern GtkWidget *gtk_container_get_focus_child(GtkContainer *
						    container);
    extern GtkAdjustment *gtk_container_get_focus_hadjustment(GtkContainer
							      * container);
    extern GtkAdjustment *gtk_container_get_focus_vadjustment(GtkContainer
							      * container);
    extern GtkWidgetPath *gtk_container_get_path_for_child(GtkContainer *
							   container,
							   GtkWidget *);
    extern GtkResizeMode gtk_container_get_resize_mode(GtkContainer *
						       container);
    extern GType gtk_container_get_type(void);
    extern void gtk_container_propagate_draw(GtkContainer * container,
					     GtkWidget *, cairo_t *);
    extern void gtk_container_remove(GtkContainer * container,
				     GtkWidget *);
    extern void gtk_container_resize_children(GtkContainer * container);
    extern void gtk_container_set_border_width(GtkContainer * container,
					       guint);
    extern void gtk_container_set_focus_chain(GtkContainer * container,
					      GList *);
    extern void gtk_container_set_focus_child(GtkContainer * container,
					      GtkWidget *);
    extern void gtk_container_set_focus_hadjustment(GtkContainer *
						    container,
						    GtkAdjustment *);
    extern void gtk_container_set_focus_vadjustment(GtkContainer *
						    container,
						    GtkAdjustment *);
    extern void gtk_container_set_reallocate_redraws(GtkContainer *
						     container, gboolean);
    extern void gtk_container_set_resize_mode(GtkContainer * container,
					      GtkResizeMode);
    extern void gtk_container_unset_focus_chain(GtkContainer * container);
    extern GType gtk_corner_type_get_type(void);
    extern GType gtk_css_provider_error_get_type(void);
    extern GQuark gtk_css_provider_error_quark(void);
    extern GtkCssProvider *gtk_css_provider_get_default(void);
    extern GtkCssProvider *gtk_css_provider_get_named(const char *name,
						      const char *);
    extern GType gtk_css_provider_get_type(void);
    extern gboolean gtk_css_provider_load_from_data(GtkCssProvider *
						    css_provider,
						    const char *, gssize,
						    GError * *);
    extern gboolean gtk_css_provider_load_from_file(GtkCssProvider *
						    css_provider, GFile *,
						    GError * *);
    extern gboolean gtk_css_provider_load_from_path(GtkCssProvider *
						    css_provider,
						    const char *,
						    GError * *);
    extern GtkCssProvider *gtk_css_provider_new(void);
    extern char *gtk_css_provider_to_string(GtkCssProvider * provider);
    extern guint gtk_css_section_get_end_line(const GtkCssSection *
					      section);
    extern guint gtk_css_section_get_end_position(const GtkCssSection *
						  section);
    extern GFile *gtk_css_section_get_file(const GtkCssSection * section);
    extern GtkCssSection *gtk_css_section_get_parent(const GtkCssSection *
						     section);
    extern GtkCssSectionType gtk_css_section_get_section_type(const
							      GtkCssSection
							      * section);
    extern guint gtk_css_section_get_start_line(const GtkCssSection *
						section);
    extern guint gtk_css_section_get_start_position(const GtkCssSection *
						    section);
    extern GType gtk_css_section_get_type(void);
    extern GtkCssSection *gtk_css_section_ref(GtkCssSection * section);
    extern GType gtk_css_section_type_get_type(void);
    extern void gtk_css_section_unref(GtkCssSection * section);
    extern GType gtk_debug_flag_get_type(void);
    extern GType gtk_delete_type_get_type(void);
    extern GType gtk_dest_defaults_get_type(void);
    extern void gtk_device_grab_add(GtkWidget * widget, GdkDevice *,
				    gboolean);
    extern void gtk_device_grab_remove(GtkWidget * widget, GdkDevice *);
    extern void gtk_dialog_add_action_widget(GtkDialog * dialog,
					     GtkWidget *, gint);
    extern GtkWidget *gtk_dialog_add_button(GtkDialog * dialog,
					    const char *, gint);
    extern void gtk_dialog_add_buttons(GtkDialog * dialog, const char *,
				       ...);
    extern GType gtk_dialog_flags_get_type(void);
    extern GtkWidget *gtk_dialog_get_action_area(GtkDialog * dialog);
    extern GtkWidget *gtk_dialog_get_content_area(GtkDialog * dialog);
    extern gint gtk_dialog_get_response_for_widget(GtkDialog * dialog,
						   GtkWidget *);
    extern GType gtk_dialog_get_type(void);
    extern GtkWidget *gtk_dialog_get_widget_for_response(GtkDialog *
							 dialog, gint);
    extern GtkWidget *gtk_dialog_new(void);
    extern GtkWidget *gtk_dialog_new_with_buttons(const char *title,
						  GtkWindow *,
						  GtkDialogFlags,
						  const char *, ...);
    extern void gtk_dialog_response(GtkDialog * dialog, gint);
    extern gint gtk_dialog_run(GtkDialog * dialog);
    extern void gtk_dialog_set_alternative_button_order(GtkDialog * dialog,
							gint, ...);
    extern void
	gtk_dialog_set_alternative_button_order_from_array(GtkDialog *
							   dialog, gint,
							   gint *);
    extern void gtk_dialog_set_default_response(GtkDialog * dialog, gint);
    extern void gtk_dialog_set_response_sensitive(GtkDialog * dialog, gint,
						  gboolean);
    extern GType gtk_direction_type_get_type(void);
    extern void gtk_disable_setlocale(void);
    extern gint gtk_distribute_natural_allocation(gint extra_space, guint,
						  GtkRequestedSize *);
    extern GdkDragContext *gtk_drag_begin(GtkWidget * widget,
					  GtkTargetList * targets,
					  GdkDragAction actions,
					  gint button, GdkEvent * event);
    extern gboolean gtk_drag_check_threshold(GtkWidget * widget, gint,
					     gint, gint, gint);
    extern void gtk_drag_dest_add_image_targets(GtkWidget * widget);
    extern void gtk_drag_dest_add_text_targets(GtkWidget * widget);
    extern void gtk_drag_dest_add_uri_targets(GtkWidget * widget);
    extern GdkAtom gtk_drag_dest_find_target(GtkWidget * widget,
					     GdkDragContext *,
					     GtkTargetList *);
    extern GtkTargetList *gtk_drag_dest_get_target_list(GtkWidget *
							widget);
    extern gboolean gtk_drag_dest_get_track_motion(GtkWidget * widget);
    extern void gtk_drag_dest_set(GtkWidget * widget,
				  GtkDestDefaults flags, gint n_targets,
				  GdkDragAction actions);
    extern void gtk_drag_dest_set_proxy(GtkWidget * widget,
					GdkWindow * proxy_window,
					GdkDragProtocol protocol,
					gboolean use_coordinates);
    extern void gtk_drag_dest_set_target_list(GtkWidget * widget,
					      GtkTargetList *);
    extern void gtk_drag_dest_set_track_motion(GtkWidget * widget,
					       gboolean);
    extern void gtk_drag_dest_unset(GtkWidget * widget);
    extern void gtk_drag_finish(GdkDragContext * context, gboolean,
				gboolean, guint32);
    extern void gtk_drag_get_data(GtkWidget * widget,
				  GdkDragContext * context, GdkAtom target,
				  guint32 time_);
    extern GtkWidget *gtk_drag_get_source_widget(GdkDragContext * context);
    extern void gtk_drag_highlight(GtkWidget * widget);
    extern GType gtk_drag_result_get_type(void);
    extern void gtk_drag_set_icon_default(GdkDragContext * context);
    extern void gtk_drag_set_icon_gicon(GdkDragContext * context, GIcon *,
					gint, gint);
    extern void gtk_drag_set_icon_name(GdkDragContext * context,
				       const char *, gint, gint);
    extern void gtk_drag_set_icon_pixbuf(GdkDragContext * context,
					 GdkPixbuf *, gint, gint);
    extern void gtk_drag_set_icon_stock(GdkDragContext * context,
					const char *, gint, gint);
    extern void gtk_drag_set_icon_surface(GdkDragContext * context,
					  cairo_surface_t *);
    extern void gtk_drag_set_icon_widget(GdkDragContext * context,
					 GtkWidget *, gint, gint);
    extern void gtk_drag_source_add_image_targets(GtkWidget * widget);
    extern void gtk_drag_source_add_text_targets(GtkWidget * widget);
    extern void gtk_drag_source_add_uri_targets(GtkWidget * widget);
    extern GtkTargetList *gtk_drag_source_get_target_list(GtkWidget *
							  widget);
    extern void gtk_drag_source_set(GtkWidget * widget,
				    GdkModifierType start_button_mask,
				    gint n_targets, GdkDragAction actions);
    extern void gtk_drag_source_set_icon_gicon(GtkWidget * widget,
					       GIcon *);
    extern void gtk_drag_source_set_icon_name(GtkWidget * widget,
					      const char *);
    extern void gtk_drag_source_set_icon_pixbuf(GtkWidget * widget,
						GdkPixbuf *);
    extern void gtk_drag_source_set_icon_stock(GtkWidget * widget,
					       const char *);
    extern void gtk_drag_source_set_target_list(GtkWidget * widget,
						GtkTargetList *);
    extern void gtk_drag_source_unset(GtkWidget * widget);
    extern void gtk_drag_unhighlight(GtkWidget * widget);
    extern void gtk_draw_insertion_cursor(GtkWidget * widget, cairo_t *,
					  const GdkRectangle *, gboolean,
					  GtkTextDirection, gboolean);
    extern GType gtk_drawing_area_get_type(void);
    extern GtkWidget *gtk_drawing_area_new(void);
    extern void gtk_editable_copy_clipboard(GtkEditable * editable);
    extern void gtk_editable_cut_clipboard(GtkEditable * editable);
    extern void gtk_editable_delete_selection(GtkEditable * editable);
    extern void gtk_editable_delete_text(GtkEditable * editable, gint,
					 gint);
    extern gchar *gtk_editable_get_chars(GtkEditable * editable, gint,
					 gint);
    extern gboolean gtk_editable_get_editable(GtkEditable * editable);
    extern gint gtk_editable_get_position(GtkEditable * editable);
    extern gboolean gtk_editable_get_selection_bounds(GtkEditable *
						      editable, gint *,
						      gint *);
    extern GType gtk_editable_get_type(void);
    extern void gtk_editable_insert_text(GtkEditable * editable,
					 const char *, gint, gint *);
    extern void gtk_editable_paste_clipboard(GtkEditable * editable);
    extern void gtk_editable_select_region(GtkEditable * editable, gint,
					   gint);
    extern void gtk_editable_set_editable(GtkEditable * editable,
					  gboolean);
    extern void gtk_editable_set_position(GtkEditable * editable, gint);
    extern guint gtk_entry_buffer_delete_text(GtkEntryBuffer * buffer,
					      guint, gint);
    extern void gtk_entry_buffer_emit_deleted_text(GtkEntryBuffer * buffer,
						   guint, guint);
    extern void gtk_entry_buffer_emit_inserted_text(GtkEntryBuffer *
						    buffer, guint,
						    const char *, guint);
    extern gsize gtk_entry_buffer_get_bytes(GtkEntryBuffer * buffer);
    extern guint gtk_entry_buffer_get_length(GtkEntryBuffer * buffer);
    extern gint gtk_entry_buffer_get_max_length(GtkEntryBuffer * buffer);
    extern const char *gtk_entry_buffer_get_text(GtkEntryBuffer * buffer);
    extern GType gtk_entry_buffer_get_type(void);
    extern guint gtk_entry_buffer_insert_text(GtkEntryBuffer * buffer,
					      guint, const char *, gint);
    extern GtkEntryBuffer *gtk_entry_buffer_new(const char *initial_chars,
						gint);
    extern void gtk_entry_buffer_set_max_length(GtkEntryBuffer * buffer,
						gint);
    extern void gtk_entry_buffer_set_text(GtkEntryBuffer * buffer,
					  const char *, gint);
    extern void gtk_entry_completion_complete(GtkEntryCompletion *
					      completion);
    extern gchar *gtk_entry_completion_compute_prefix(GtkEntryCompletion *
						      completion,
						      const char *);
    extern void gtk_entry_completion_delete_action(GtkEntryCompletion *
						   completion, gint);
    extern const char
	*gtk_entry_completion_get_completion_prefix(GtkEntryCompletion *
						    completion);
    extern GtkWidget *gtk_entry_completion_get_entry(GtkEntryCompletion *
						     completion);
    extern gboolean
	gtk_entry_completion_get_inline_completion(GtkEntryCompletion *
						   completion);
    extern gboolean
	gtk_entry_completion_get_inline_selection(GtkEntryCompletion *
						  completion);
    extern gint
	gtk_entry_completion_get_minimum_key_length(GtkEntryCompletion *
						    completion);
    extern GtkTreeModel *gtk_entry_completion_get_model(GtkEntryCompletion
							* completion);
    extern gboolean
	gtk_entry_completion_get_popup_completion(GtkEntryCompletion *
						  completion);
    extern gboolean
	gtk_entry_completion_get_popup_set_width(GtkEntryCompletion *
						 completion);
    extern gboolean
	gtk_entry_completion_get_popup_single_match(GtkEntryCompletion *
						    completion);
    extern gint gtk_entry_completion_get_text_column(GtkEntryCompletion *
						     completion);
    extern GType gtk_entry_completion_get_type(void);
    extern void
	gtk_entry_completion_insert_action_markup(GtkEntryCompletion *
						  completion, gint,
						  const char *);
    extern void gtk_entry_completion_insert_action_text(GtkEntryCompletion
							* completion, gint,
							const char *);
    extern void gtk_entry_completion_insert_prefix(GtkEntryCompletion *
						   completion);
    extern GtkEntryCompletion *gtk_entry_completion_new(void);
    extern GtkEntryCompletion
	*gtk_entry_completion_new_with_area(GtkCellArea * area);
    extern void
	gtk_entry_completion_set_inline_completion(GtkEntryCompletion *
						   completion, gboolean);
    extern void
	gtk_entry_completion_set_inline_selection(GtkEntryCompletion *
						  completion, gboolean);
    extern void gtk_entry_completion_set_match_func(GtkEntryCompletion *
						    completion,
						    GtkEntryCompletionMatchFunc,
						    gpointer,
						    GDestroyNotify);
    extern void
	gtk_entry_completion_set_minimum_key_length(GtkEntryCompletion *
						    completion, gint);
    extern void gtk_entry_completion_set_model(GtkEntryCompletion *
					       completion, GtkTreeModel *);
    extern void
	gtk_entry_completion_set_popup_completion(GtkEntryCompletion *
						  completion, gboolean);
    extern void gtk_entry_completion_set_popup_set_width(GtkEntryCompletion
							 * completion,
							 gboolean);
    extern void
	gtk_entry_completion_set_popup_single_match(GtkEntryCompletion *
						    completion, gboolean);
    extern void gtk_entry_completion_set_text_column(GtkEntryCompletion *
						     completion, gint);
    extern gboolean gtk_entry_get_activates_default(GtkEntry * entry);
    extern gfloat gtk_entry_get_alignment(GtkEntry * entry);
    extern PangoAttrList *gtk_entry_get_attributes(GtkEntry * entry);
    extern GtkEntryBuffer *gtk_entry_get_buffer(GtkEntry * entry);
    extern GtkEntryCompletion *gtk_entry_get_completion(GtkEntry * entry);
    extern gint gtk_entry_get_current_icon_drag_source(GtkEntry * entry);
    extern GtkAdjustment *gtk_entry_get_cursor_hadjustment(GtkEntry *
							   entry);
    extern gboolean gtk_entry_get_has_frame(GtkEntry * entry);
    extern gboolean gtk_entry_get_icon_activatable(GtkEntry * entry,
						   GtkEntryIconPosition);
    extern void gtk_entry_get_icon_area(GtkEntry * entry,
					GtkEntryIconPosition,
					GdkRectangle *);
    extern gint gtk_entry_get_icon_at_pos(GtkEntry * entry, gint, gint);
    extern GIcon *gtk_entry_get_icon_gicon(GtkEntry * entry,
					   GtkEntryIconPosition);
    extern const char *gtk_entry_get_icon_name(GtkEntry * entry,
					       GtkEntryIconPosition);
    extern GdkPixbuf *gtk_entry_get_icon_pixbuf(GtkEntry * entry,
						GtkEntryIconPosition);
    extern gboolean gtk_entry_get_icon_sensitive(GtkEntry * entry,
						 GtkEntryIconPosition);
    extern const char *gtk_entry_get_icon_stock(GtkEntry * entry,
						GtkEntryIconPosition);
    extern GtkImageType gtk_entry_get_icon_storage_type(GtkEntry * entry,
							GtkEntryIconPosition);
    extern gchar *gtk_entry_get_icon_tooltip_markup(GtkEntry * entry,
						    GtkEntryIconPosition);
    extern gchar *gtk_entry_get_icon_tooltip_text(GtkEntry * entry,
						  GtkEntryIconPosition);
    extern const GtkBorder *gtk_entry_get_inner_border(GtkEntry * entry);
    extern GtkInputHints gtk_entry_get_input_hints(GtkEntry * entry);
    extern GtkInputPurpose gtk_entry_get_input_purpose(GtkEntry * entry);
    extern gunichar gtk_entry_get_invisible_char(GtkEntry * entry);
    extern PangoLayout *gtk_entry_get_layout(GtkEntry * entry);
    extern void gtk_entry_get_layout_offsets(GtkEntry * entry, gint *,
					     gint *);
    extern gint gtk_entry_get_max_length(GtkEntry * entry);
    extern gboolean gtk_entry_get_overwrite_mode(GtkEntry * entry);
    extern const char *gtk_entry_get_placeholder_text(GtkEntry * entry);
    extern gdouble gtk_entry_get_progress_fraction(GtkEntry * entry);
    extern gdouble gtk_entry_get_progress_pulse_step(GtkEntry * entry);
    extern const char *gtk_entry_get_text(GtkEntry * entry);
    extern void gtk_entry_get_text_area(GtkEntry * entry, GdkRectangle *);
    extern guint16 gtk_entry_get_text_length(GtkEntry * entry);
    extern GType gtk_entry_get_type(void);
    extern gboolean gtk_entry_get_visibility(GtkEntry * entry);
    extern gint gtk_entry_get_width_chars(GtkEntry * entry);
    extern GType gtk_entry_icon_position_get_type(void);
    extern gboolean gtk_entry_im_context_filter_keypress(GtkEntry * entry,
							 GdkEventKey *);
    extern gint gtk_entry_layout_index_to_text_index(GtkEntry * entry,
						     gint);
    extern GtkWidget *gtk_entry_new(void);
    extern GtkWidget *gtk_entry_new_with_buffer(GtkEntryBuffer * buffer);
    extern void gtk_entry_progress_pulse(GtkEntry * entry);
    extern void gtk_entry_reset_im_context(GtkEntry * entry);
    extern void gtk_entry_set_activates_default(GtkEntry * entry,
						gboolean);
    extern void gtk_entry_set_alignment(GtkEntry * entry, gfloat);
    extern void gtk_entry_set_attributes(GtkEntry * entry,
					 PangoAttrList *);
    extern void gtk_entry_set_buffer(GtkEntry * entry, GtkEntryBuffer *);
    extern void gtk_entry_set_completion(GtkEntry * entry,
					 GtkEntryCompletion *);
    extern void gtk_entry_set_cursor_hadjustment(GtkEntry * entry,
						 GtkAdjustment *);
    extern void gtk_entry_set_has_frame(GtkEntry * entry, gboolean);
    extern void gtk_entry_set_icon_activatable(GtkEntry * entry,
					       GtkEntryIconPosition,
					       gboolean);
    extern void gtk_entry_set_icon_drag_source(GtkEntry * entry,
					       GtkEntryIconPosition
					       icon_pos,
					       GtkTargetList * target_list,
					       GdkDragAction actions);
    extern void gtk_entry_set_icon_from_gicon(GtkEntry * entry,
					      GtkEntryIconPosition,
					      GIcon *);
    extern void gtk_entry_set_icon_from_icon_name(GtkEntry * entry,
						  GtkEntryIconPosition,
						  const char *);
    extern void gtk_entry_set_icon_from_pixbuf(GtkEntry * entry,
					       GtkEntryIconPosition,
					       GdkPixbuf *);
    extern void gtk_entry_set_icon_from_stock(GtkEntry * entry,
					      GtkEntryIconPosition,
					      const char *);
    extern void gtk_entry_set_icon_sensitive(GtkEntry * entry,
					     GtkEntryIconPosition,
					     gboolean);
    extern void gtk_entry_set_icon_tooltip_markup(GtkEntry * entry,
						  GtkEntryIconPosition,
						  const char *);
    extern void gtk_entry_set_icon_tooltip_text(GtkEntry * entry,
						GtkEntryIconPosition,
						const char *);
    extern void gtk_entry_set_inner_border(GtkEntry * entry,
					   const GtkBorder *);
    extern void gtk_entry_set_input_hints(GtkEntry * entry, GtkInputHints);
    extern void gtk_entry_set_input_purpose(GtkEntry * entry,
					    GtkInputPurpose);
    extern void gtk_entry_set_invisible_char(GtkEntry * entry, gunichar);
    extern void gtk_entry_set_max_length(GtkEntry * entry, gint);
    extern void gtk_entry_set_overwrite_mode(GtkEntry * entry, gboolean);
    extern void gtk_entry_set_placeholder_text(GtkEntry * entry,
					       const char *);
    extern void gtk_entry_set_progress_fraction(GtkEntry * entry, gdouble);
    extern void gtk_entry_set_progress_pulse_step(GtkEntry * entry,
						  gdouble);
    extern void gtk_entry_set_text(GtkEntry * entry, const char *);
    extern void gtk_entry_set_visibility(GtkEntry * entry, gboolean);
    extern void gtk_entry_set_width_chars(GtkEntry * entry, gint);
    extern gint gtk_entry_text_index_to_layout_index(GtkEntry * entry,
						     gint);
    extern void gtk_entry_unset_invisible_char(GtkEntry * entry);
    extern gboolean gtk_event_box_get_above_child(GtkEventBox * event_box);
    extern GType gtk_event_box_get_type(void);
    extern gboolean gtk_event_box_get_visible_window(GtkEventBox *
						     event_box);
    extern GtkWidget *gtk_event_box_new(void);
    extern void gtk_event_box_set_above_child(GtkEventBox * event_box,
					      gboolean);
    extern void gtk_event_box_set_visible_window(GtkEventBox * event_box,
						 gboolean);
    extern gboolean gtk_events_pending(void);
    extern gboolean gtk_expander_get_expanded(GtkExpander * expander);
    extern const char *gtk_expander_get_label(GtkExpander * expander);
    extern gboolean gtk_expander_get_label_fill(GtkExpander * expander);
    extern GtkWidget *gtk_expander_get_label_widget(GtkExpander *
						    expander);
    extern gboolean gtk_expander_get_resize_toplevel(GtkExpander *
						     expander);
    extern gint gtk_expander_get_spacing(GtkExpander * expander);
    extern GType gtk_expander_get_type(void);
    extern gboolean gtk_expander_get_use_markup(GtkExpander * expander);
    extern gboolean gtk_expander_get_use_underline(GtkExpander * expander);
    extern GtkWidget *gtk_expander_new(const char *label);
    extern GtkWidget *gtk_expander_new_with_mnemonic(const char *label);
    extern void gtk_expander_set_expanded(GtkExpander * expander,
					  gboolean);
    extern void gtk_expander_set_label(GtkExpander * expander,
				       const char *);
    extern void gtk_expander_set_label_fill(GtkExpander * expander,
					    gboolean);
    extern void gtk_expander_set_label_widget(GtkExpander * expander,
					      GtkWidget *);
    extern void gtk_expander_set_resize_toplevel(GtkExpander * expander,
						 gboolean);
    extern void gtk_expander_set_spacing(GtkExpander * expander, gint);
    extern void gtk_expander_set_use_markup(GtkExpander * expander,
					    gboolean);
    extern void gtk_expander_set_use_underline(GtkExpander * expander,
					       gboolean);
    extern GType gtk_expander_style_get_type(void);
    extern gboolean gtk_false(void);
    extern GType gtk_file_chooser_action_get_type(void);
    extern void gtk_file_chooser_add_filter(GtkFileChooser * chooser,
					    GtkFileFilter *);
    extern gboolean gtk_file_chooser_add_shortcut_folder(GtkFileChooser *
							 chooser,
							 const char *,
							 GError * *);
    extern gboolean gtk_file_chooser_add_shortcut_folder_uri(GtkFileChooser
							     * chooser,
							     const char *,
							     GError * *);
    extern gboolean
	gtk_file_chooser_button_get_focus_on_click(GtkFileChooserButton *
						   button);
    extern const char
	*gtk_file_chooser_button_get_title(GtkFileChooserButton * button);
    extern GType gtk_file_chooser_button_get_type(void);
    extern gint
	gtk_file_chooser_button_get_width_chars(GtkFileChooserButton *
						button);
    extern GtkWidget *gtk_file_chooser_button_new(const char *title,
						  GtkFileChooserAction);
    extern GtkWidget *gtk_file_chooser_button_new_with_dialog(GtkWidget *
							      dialog);
    extern void
	gtk_file_chooser_button_set_focus_on_click(GtkFileChooserButton *
						   button, gboolean);
    extern void gtk_file_chooser_button_set_title(GtkFileChooserButton *
						  button, const char *);
    extern void
	gtk_file_chooser_button_set_width_chars(GtkFileChooserButton *
						button, gint);
    extern GType gtk_file_chooser_confirmation_get_type(void);
    extern GType gtk_file_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_file_chooser_dialog_new(const char *title,
						  GtkWindow *,
						  GtkFileChooserAction,
						  const char *, ...);
    extern GType gtk_file_chooser_error_get_type(void);
    extern GQuark gtk_file_chooser_error_quark(void);
    extern GtkFileChooserAction gtk_file_chooser_get_action(GtkFileChooser
							    * chooser);
    extern gboolean gtk_file_chooser_get_create_folders(GtkFileChooser *
							chooser);
    extern gchar *gtk_file_chooser_get_current_folder(GtkFileChooser *
						      chooser);
    extern GFile *gtk_file_chooser_get_current_folder_file(GtkFileChooser *
							   chooser);
    extern gchar *gtk_file_chooser_get_current_folder_uri(GtkFileChooser *
							  chooser);
    extern gboolean
	gtk_file_chooser_get_do_overwrite_confirmation(GtkFileChooser *
						       chooser);
    extern GtkWidget *gtk_file_chooser_get_extra_widget(GtkFileChooser *
							chooser);
    extern GFile *gtk_file_chooser_get_file(GtkFileChooser * chooser);
    extern gchar *gtk_file_chooser_get_filename(GtkFileChooser * chooser);
    extern GSList *gtk_file_chooser_get_filenames(GtkFileChooser *
						  chooser);
    extern GSList *gtk_file_chooser_get_files(GtkFileChooser * chooser);
    extern GtkFileFilter *gtk_file_chooser_get_filter(GtkFileChooser *
						      chooser);
    extern gboolean gtk_file_chooser_get_local_only(GtkFileChooser *
						    chooser);
    extern GFile *gtk_file_chooser_get_preview_file(GtkFileChooser *
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
					       GtkFileFilter *);
    extern gboolean gtk_file_chooser_remove_shortcut_folder(GtkFileChooser
							    * chooser,
							    const char *,
							    GError * *);
    extern gboolean
	gtk_file_chooser_remove_shortcut_folder_uri(GtkFileChooser *
						    chooser, const char *,
						    GError * *);
    extern void gtk_file_chooser_select_all(GtkFileChooser * chooser);
    extern gboolean gtk_file_chooser_select_file(GtkFileChooser * chooser,
						 GFile *, GError * *);
    extern gboolean gtk_file_chooser_select_filename(GtkFileChooser *
						     chooser,
						     const char *);
    extern gboolean gtk_file_chooser_select_uri(GtkFileChooser * chooser,
						const char *);
    extern void gtk_file_chooser_set_action(GtkFileChooser * chooser,
					    GtkFileChooserAction);
    extern void gtk_file_chooser_set_create_folders(GtkFileChooser *
						    chooser, gboolean);
    extern gboolean gtk_file_chooser_set_current_folder(GtkFileChooser *
							chooser,
							const char *);
    extern gboolean gtk_file_chooser_set_current_folder_file(GtkFileChooser
							     * chooser,
							     GFile *,
							     GError * *);
    extern gboolean gtk_file_chooser_set_current_folder_uri(GtkFileChooser
							    * chooser,
							    const char *);
    extern void gtk_file_chooser_set_current_name(GtkFileChooser * chooser,
						  const char *);
    extern void
	gtk_file_chooser_set_do_overwrite_confirmation(GtkFileChooser *
						       chooser, gboolean);
    extern void gtk_file_chooser_set_extra_widget(GtkFileChooser * chooser,
						  GtkWidget *);
    extern gboolean gtk_file_chooser_set_file(GtkFileChooser * chooser,
					      GFile *, GError * *);
    extern gboolean gtk_file_chooser_set_filename(GtkFileChooser * chooser,
						  const char *);
    extern void gtk_file_chooser_set_filter(GtkFileChooser * chooser,
					    GtkFileFilter *);
    extern void gtk_file_chooser_set_local_only(GtkFileChooser * chooser,
						gboolean);
    extern void gtk_file_chooser_set_preview_widget(GtkFileChooser *
						    chooser, GtkWidget *);
    extern void gtk_file_chooser_set_preview_widget_active(GtkFileChooser *
							   chooser,
							   gboolean);
    extern void gtk_file_chooser_set_select_multiple(GtkFileChooser *
						     chooser, gboolean);
    extern void gtk_file_chooser_set_show_hidden(GtkFileChooser * chooser,
						 gboolean);
    extern gboolean gtk_file_chooser_set_uri(GtkFileChooser * chooser,
					     const char *);
    extern void gtk_file_chooser_set_use_preview_label(GtkFileChooser *
						       chooser, gboolean);
    extern void gtk_file_chooser_unselect_all(GtkFileChooser * chooser);
    extern void gtk_file_chooser_unselect_file(GtkFileChooser * chooser,
					       GFile *);
    extern void gtk_file_chooser_unselect_filename(GtkFileChooser *
						   chooser, const char *);
    extern void gtk_file_chooser_unselect_uri(GtkFileChooser * chooser,
					      const char *);
    extern GType gtk_file_chooser_widget_get_type(void);
    extern GtkWidget *gtk_file_chooser_widget_new(GtkFileChooserAction
						  action);
    extern void gtk_file_filter_add_custom(GtkFileFilter * filter,
					   GtkFileFilterFlags,
					   GtkFileFilterFunc, gpointer,
					   GDestroyNotify);
    extern void gtk_file_filter_add_mime_type(GtkFileFilter * filter,
					      const char *);
    extern void gtk_file_filter_add_pattern(GtkFileFilter * filter,
					    const char *);
    extern void gtk_file_filter_add_pixbuf_formats(GtkFileFilter * filter);
    extern gboolean gtk_file_filter_filter(GtkFileFilter * filter,
					   const GtkFileFilterInfo *);
    extern GType gtk_file_filter_flags_get_type(void);
    extern const char *gtk_file_filter_get_name(GtkFileFilter * filter);
    extern GtkFileFilterFlags gtk_file_filter_get_needed(GtkFileFilter *
							 filter);
    extern GType gtk_file_filter_get_type(void);
    extern GtkFileFilter *gtk_file_filter_new(void);
    extern void gtk_file_filter_set_name(GtkFileFilter * filter,
					 const char *);
    extern GType gtk_fixed_get_type(void);
    extern void gtk_fixed_move(GtkFixed * fixed, GtkWidget *, gint, gint);
    extern GtkWidget *gtk_fixed_new(void);
    extern void gtk_fixed_put(GtkFixed * fixed, GtkWidget *, gint, gint);
    extern const char *gtk_font_button_get_font_name(GtkFontButton *
						     font_button);
    extern gboolean gtk_font_button_get_show_size(GtkFontButton *
						  font_button);
    extern gboolean gtk_font_button_get_show_style(GtkFontButton *
						   font_button);
    extern const char *gtk_font_button_get_title(GtkFontButton *
						 font_button);
    extern GType gtk_font_button_get_type(void);
    extern gboolean gtk_font_button_get_use_font(GtkFontButton *
						 font_button);
    extern gboolean gtk_font_button_get_use_size(GtkFontButton *
						 font_button);
    extern GtkWidget *gtk_font_button_new(void);
    extern GtkWidget *gtk_font_button_new_with_font(const char *fontname);
    extern gboolean gtk_font_button_set_font_name(GtkFontButton *
						  font_button,
						  const char *);
    extern void gtk_font_button_set_show_size(GtkFontButton * font_button,
					      gboolean);
    extern void gtk_font_button_set_show_style(GtkFontButton * font_button,
					       gboolean);
    extern void gtk_font_button_set_title(GtkFontButton * font_button,
					  const char *);
    extern void gtk_font_button_set_use_font(GtkFontButton * font_button,
					     gboolean);
    extern void gtk_font_button_set_use_size(GtkFontButton * font_button,
					     gboolean);
    extern GType gtk_font_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_font_chooser_dialog_new(const char *title,
						  GtkWindow *);
    extern gchar *gtk_font_chooser_get_font(GtkFontChooser * fontchooser);
    extern PangoFontDescription
	*gtk_font_chooser_get_font_desc(GtkFontChooser * fontchooser);
    extern PangoFontFace *gtk_font_chooser_get_font_face(GtkFontChooser *
							 fontchooser);
    extern PangoFontFamily *gtk_font_chooser_get_font_family(GtkFontChooser
							     *
							     fontchooser);
    extern gint gtk_font_chooser_get_font_size(GtkFontChooser *
					       fontchooser);
    extern gchar *gtk_font_chooser_get_preview_text(GtkFontChooser *
						    fontchooser);
    extern gboolean gtk_font_chooser_get_show_preview_entry(GtkFontChooser
							    * fontchooser);
    extern GType gtk_font_chooser_get_type(void);
    extern void gtk_font_chooser_set_filter_func(GtkFontChooser *
						 fontchooser,
						 GtkFontFilterFunc,
						 gpointer, GDestroyNotify);
    extern void gtk_font_chooser_set_font(GtkFontChooser * fontchooser,
					  const char *);
    extern void gtk_font_chooser_set_font_desc(GtkFontChooser *
					       fontchooser,
					       const PangoFontDescription
					       *);
    extern void gtk_font_chooser_set_preview_text(GtkFontChooser *
						  fontchooser,
						  const char *);
    extern void gtk_font_chooser_set_show_preview_entry(GtkFontChooser *
							fontchooser,
							gboolean);
    extern GType gtk_font_chooser_widget_get_type(void);
    extern GtkWidget *gtk_font_chooser_widget_new(void);
    extern const char *gtk_frame_get_label(GtkFrame * frame);
    extern void gtk_frame_get_label_align(GtkFrame * frame, gfloat *,
					  gfloat *);
    extern GtkWidget *gtk_frame_get_label_widget(GtkFrame * frame);
    extern GtkShadowType gtk_frame_get_shadow_type(GtkFrame * frame);
    extern GType gtk_frame_get_type(void);
    extern GtkWidget *gtk_frame_new(const char *label);
    extern void gtk_frame_set_label(GtkFrame * frame, const char *);
    extern void gtk_frame_set_label_align(GtkFrame * frame, gfloat,
					  gfloat);
    extern void gtk_frame_set_label_widget(GtkFrame * frame, GtkWidget *);
    extern void gtk_frame_set_shadow_type(GtkFrame * frame, GtkShadowType);
    extern guint gtk_get_binary_age(void);
    extern GdkEvent *gtk_get_current_event(void);
    extern GdkDevice *gtk_get_current_event_device(void);
    extern gboolean gtk_get_current_event_state(GdkModifierType * state);
    extern guint32 gtk_get_current_event_time(void);
    extern guint gtk_get_debug_flags(void);
    extern PangoLanguage *gtk_get_default_language(void);
    extern GtkWidget *gtk_get_event_widget(GdkEvent * event);
    extern guint gtk_get_interface_age(void);
    extern guint gtk_get_major_version(void);
    extern guint gtk_get_micro_version(void);
    extern guint gtk_get_minor_version(void);
    extern GOptionGroup *gtk_get_option_group(gboolean
					      open_default_display);
    extern void gtk_grab_add(GtkWidget * widget);
    extern GtkWidget *gtk_grab_get_current(void);
    extern void gtk_grab_remove(GtkWidget * widget);
    extern void gtk_gradient_add_color_stop(GtkGradient * gradient,
					    gdouble, GtkSymbolicColor *);
    extern GType gtk_gradient_get_type(void);
    extern GtkGradient *gtk_gradient_new_linear(gdouble x0, gdouble,
						gdouble, gdouble);
    extern GtkGradient *gtk_gradient_new_radial(gdouble x0, gdouble,
						gdouble, gdouble, gdouble,
						gdouble);
    extern GtkGradient *gtk_gradient_ref(GtkGradient * gradient);
    extern gboolean gtk_gradient_resolve(GtkGradient * gradient,
					 GtkStyleProperties *,
					 cairo_pattern_t * *);
    extern cairo_pattern_t *gtk_gradient_resolve_for_context(GtkGradient *
							     gradient,
							     GtkStyleContext
							     *);
    extern char *gtk_gradient_to_string(GtkGradient * gradient);
    extern void gtk_gradient_unref(GtkGradient * gradient);
    extern void gtk_grid_attach(GtkGrid * grid, GtkWidget *, gint, gint,
				gint, gint);
    extern void gtk_grid_attach_next_to(GtkGrid * grid, GtkWidget *,
					GtkWidget *, GtkPositionType, gint,
					gint);
    extern GtkWidget *gtk_grid_get_child_at(GtkGrid * grid, gint, gint);
    extern gboolean gtk_grid_get_column_homogeneous(GtkGrid * grid);
    extern guint gtk_grid_get_column_spacing(GtkGrid * grid);
    extern gboolean gtk_grid_get_row_homogeneous(GtkGrid * grid);
    extern guint gtk_grid_get_row_spacing(GtkGrid * grid);
    extern GType gtk_grid_get_type(void);
    extern void gtk_grid_insert_column(GtkGrid * grid, gint);
    extern void gtk_grid_insert_next_to(GtkGrid * grid, GtkWidget *,
					GtkPositionType);
    extern void gtk_grid_insert_row(GtkGrid * grid, gint);
    extern GtkWidget *gtk_grid_new(void);
    extern void gtk_grid_set_column_homogeneous(GtkGrid * grid, gboolean);
    extern void gtk_grid_set_column_spacing(GtkGrid * grid, guint);
    extern void gtk_grid_set_row_homogeneous(GtkGrid * grid, gboolean);
    extern void gtk_grid_set_row_spacing(GtkGrid * grid, guint);
    extern void gtk_hsv_to_rgb(gdouble h, gdouble, gdouble, gdouble *,
			       gdouble *, gdouble *);
    extern void gtk_icon_factory_add(GtkIconFactory * factory,
				     const char *, GtkIconSet *);
    extern void gtk_icon_factory_add_default(GtkIconFactory * factory);
    extern GType gtk_icon_factory_get_type(void);
    extern GtkIconSet *gtk_icon_factory_lookup(GtkIconFactory * factory,
					       const char *);
    extern GtkIconSet *gtk_icon_factory_lookup_default(const char
						       *stock_id);
    extern GtkIconFactory *gtk_icon_factory_new(void);
    extern void gtk_icon_factory_remove_default(GtkIconFactory * factory);
    extern GtkIconInfo *gtk_icon_info_copy(GtkIconInfo * icon_info);
    extern void gtk_icon_info_free(GtkIconInfo * icon_info);
    extern gboolean gtk_icon_info_get_attach_points(GtkIconInfo *
						    icon_info,
						    GdkPoint * *, gint *);
    extern gint gtk_icon_info_get_base_size(GtkIconInfo * icon_info);
    extern GdkPixbuf *gtk_icon_info_get_builtin_pixbuf(GtkIconInfo *
						       icon_info);
    extern const char *gtk_icon_info_get_display_name(GtkIconInfo *
						      icon_info);
    extern gboolean gtk_icon_info_get_embedded_rect(GtkIconInfo *
						    icon_info,
						    GdkRectangle *);
    extern const char *gtk_icon_info_get_filename(GtkIconInfo * icon_info);
    extern GType gtk_icon_info_get_type(void);
    extern GdkPixbuf *gtk_icon_info_load_icon(GtkIconInfo * icon_info,
					      GError * *);
    extern GdkPixbuf *gtk_icon_info_load_symbolic(GtkIconInfo * icon_info,
						  const GdkRGBA *,
						  const GdkRGBA *,
						  const GdkRGBA *,
						  const GdkRGBA *,
						  gboolean *, GError * *);
    extern GdkPixbuf *gtk_icon_info_load_symbolic_for_context(GtkIconInfo *
							      icon_info,
							      GtkStyleContext
							      *,
							      gboolean *,
							      GError * *);
    extern GdkPixbuf *gtk_icon_info_load_symbolic_for_style(GtkIconInfo *
							    icon_info,
							    GtkStyle *,
							    GtkStateType,
							    gboolean *,
							    GError * *);
    extern GtkIconInfo *gtk_icon_info_new_for_pixbuf(GtkIconTheme *
						     icon_theme,
						     GdkPixbuf *);
    extern void gtk_icon_info_set_raw_coordinates(GtkIconInfo * icon_info,
						  gboolean);
    extern GType gtk_icon_lookup_flags_get_type(void);
    extern void gtk_icon_set_add_source(GtkIconSet * icon_set,
					const GtkIconSource *);
    extern GtkIconSet *gtk_icon_set_copy(GtkIconSet * icon_set);
    extern void gtk_icon_set_get_sizes(GtkIconSet * icon_set,
				       GtkIconSize * *, gint *);
    extern GType gtk_icon_set_get_type(void);
    extern GtkIconSet *gtk_icon_set_new(void);
    extern GtkIconSet *gtk_icon_set_new_from_pixbuf(GdkPixbuf * pixbuf);
    extern GtkIconSet *gtk_icon_set_ref(GtkIconSet * icon_set);
    extern GdkPixbuf *gtk_icon_set_render_icon(GtkIconSet * icon_set,
					       GtkStyle *,
					       GtkTextDirection,
					       GtkStateType, GtkIconSize,
					       GtkWidget *, const char *);
    extern GdkPixbuf *gtk_icon_set_render_icon_pixbuf(GtkIconSet *
						      icon_set,
						      GtkStyleContext *,
						      GtkIconSize);
    extern void gtk_icon_set_unref(GtkIconSet * icon_set);
    extern GtkIconSize gtk_icon_size_from_name(const char *name);
    extern const char *gtk_icon_size_get_name(GtkIconSize size);
    extern GType gtk_icon_size_get_type(void);
    extern gboolean gtk_icon_size_lookup(GtkIconSize size, gint *, gint *);
    extern gboolean gtk_icon_size_lookup_for_settings(GtkSettings *
						      settings,
						      GtkIconSize, gint *,
						      gint *);
    extern GtkIconSize gtk_icon_size_register(const char *name, gint,
					      gint);
    extern void gtk_icon_size_register_alias(const char *alias,
					     GtkIconSize);
    extern GtkIconSource *gtk_icon_source_copy(const GtkIconSource *
					       source);
    extern void gtk_icon_source_free(GtkIconSource * source);
    extern GtkTextDirection gtk_icon_source_get_direction(const
							  GtkIconSource *
							  source);
    extern gboolean gtk_icon_source_get_direction_wildcarded(const
							     GtkIconSource
							     * source);
    extern const char *gtk_icon_source_get_filename(const GtkIconSource *
						    source);
    extern const char *gtk_icon_source_get_icon_name(const GtkIconSource *
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
					      GtkTextDirection);
    extern void gtk_icon_source_set_direction_wildcarded(GtkIconSource *
							 source, gboolean);
    extern void gtk_icon_source_set_filename(GtkIconSource * source,
					     const char *);
    extern void gtk_icon_source_set_icon_name(GtkIconSource * source,
					      const char *);
    extern void gtk_icon_source_set_pixbuf(GtkIconSource * source,
					   GdkPixbuf *);
    extern void gtk_icon_source_set_size(GtkIconSource * source,
					 GtkIconSize);
    extern void gtk_icon_source_set_size_wildcarded(GtkIconSource * source,
						    gboolean);
    extern void gtk_icon_source_set_state(GtkIconSource * source,
					  GtkStateType);
    extern void gtk_icon_source_set_state_wildcarded(GtkIconSource *
						     source, gboolean);
    extern void gtk_icon_theme_add_builtin_icon(const char *icon_name,
						gint, GdkPixbuf *);
    extern void gtk_icon_theme_append_search_path(GtkIconTheme *
						  icon_theme,
						  const char *);
    extern GtkIconInfo *gtk_icon_theme_choose_icon(GtkIconTheme *
						   icon_theme,
						   const char **, gint,
						   GtkIconLookupFlags);
    extern GType gtk_icon_theme_error_get_type(void);
    extern GQuark gtk_icon_theme_error_quark(void);
    extern GtkIconTheme *gtk_icon_theme_get_default(void);
    extern char *gtk_icon_theme_get_example_icon_name(GtkIconTheme *
						      icon_theme);
    extern GtkIconTheme *gtk_icon_theme_get_for_screen(GdkScreen * screen);
    extern gint *gtk_icon_theme_get_icon_sizes(GtkIconTheme * icon_theme,
					       const char *);
    extern void gtk_icon_theme_get_search_path(GtkIconTheme * icon_theme,
					       gchar * **, gint *);
    extern GType gtk_icon_theme_get_type(void);
    extern gboolean gtk_icon_theme_has_icon(GtkIconTheme * icon_theme,
					    const char *);
    extern GList *gtk_icon_theme_list_contexts(GtkIconTheme * icon_theme);
    extern GList *gtk_icon_theme_list_icons(GtkIconTheme * icon_theme,
					    const char *);
    extern GdkPixbuf *gtk_icon_theme_load_icon(GtkIconTheme * icon_theme,
					       const char *, gint,
					       GtkIconLookupFlags,
					       GError * *);
    extern GtkIconInfo *gtk_icon_theme_lookup_by_gicon(GtkIconTheme *
						       icon_theme, GIcon *,
						       gint,
						       GtkIconLookupFlags);
    extern GtkIconInfo *gtk_icon_theme_lookup_icon(GtkIconTheme *
						   icon_theme,
						   const char *, gint,
						   GtkIconLookupFlags);
    extern GtkIconTheme *gtk_icon_theme_new(void);
    extern void gtk_icon_theme_prepend_search_path(GtkIconTheme *
						   icon_theme,
						   const char *);
    extern gboolean gtk_icon_theme_rescan_if_needed(GtkIconTheme *
						    icon_theme);
    extern void gtk_icon_theme_set_custom_theme(GtkIconTheme * icon_theme,
						const char *);
    extern void gtk_icon_theme_set_screen(GtkIconTheme * icon_theme,
					  GdkScreen *);
    extern void gtk_icon_theme_set_search_path(GtkIconTheme * icon_theme,
					       const char **, gint);
    extern void
	gtk_icon_view_convert_widget_to_bin_window_coords(GtkIconView *
							  icon_view, gint,
							  gint, gint *,
							  gint *);
    extern cairo_surface_t *gtk_icon_view_create_drag_icon(GtkIconView *
							   icon_view,
							   GtkTreePath *);
    extern GType gtk_icon_view_drop_position_get_type(void);
    extern void gtk_icon_view_enable_model_drag_dest(GtkIconView *
						     icon_view,
						     gint n_targets,
						     GdkDragAction
						     actions);
    extern void gtk_icon_view_enable_model_drag_source(GtkIconView *
						       icon_view,
						       GdkModifierType
						       start_button_mask,
						       gint n_targets,
						       GdkDragAction
						       actions);
    extern gboolean gtk_icon_view_get_cell_rect(GtkIconView * icon_view,
						GtkTreePath *,
						GtkCellRenderer *,
						GdkRectangle *);
    extern gint gtk_icon_view_get_column_spacing(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_columns(GtkIconView * icon_view);
    extern gboolean gtk_icon_view_get_cursor(GtkIconView * icon_view,
					     GtkTreePath * *,
					     GtkCellRenderer * *);
    extern gboolean gtk_icon_view_get_dest_item_at_pos(GtkIconView *
						       icon_view, gint,
						       gint,
						       GtkTreePath * *,
						       GtkIconViewDropPosition
						       *);
    extern void gtk_icon_view_get_drag_dest_item(GtkIconView * icon_view,
						 GtkTreePath * *,
						 GtkIconViewDropPosition
						 *);
    extern gboolean gtk_icon_view_get_item_at_pos(GtkIconView * icon_view,
						  gint, gint,
						  GtkTreePath * *,
						  GtkCellRenderer * *);
    extern gint gtk_icon_view_get_item_column(GtkIconView * icon_view,
					      GtkTreePath *);
    extern GtkOrientation gtk_icon_view_get_item_orientation(GtkIconView *
							     icon_view);
    extern gint gtk_icon_view_get_item_padding(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_item_row(GtkIconView * icon_view,
					   GtkTreePath *);
    extern gint gtk_icon_view_get_item_width(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_margin(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_markup_column(GtkIconView * icon_view);
    extern GtkTreeModel *gtk_icon_view_get_model(GtkIconView * icon_view);
    extern GtkTreePath *gtk_icon_view_get_path_at_pos(GtkIconView *
						      icon_view, gint,
						      gint);
    extern gint gtk_icon_view_get_pixbuf_column(GtkIconView * icon_view);
    extern gboolean gtk_icon_view_get_reorderable(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_row_spacing(GtkIconView * icon_view);
    extern GList *gtk_icon_view_get_selected_items(GtkIconView *
						   icon_view);
    extern GtkSelectionMode gtk_icon_view_get_selection_mode(GtkIconView *
							     icon_view);
    extern gint gtk_icon_view_get_spacing(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_text_column(GtkIconView * icon_view);
    extern gint gtk_icon_view_get_tooltip_column(GtkIconView * icon_view);
    extern gboolean gtk_icon_view_get_tooltip_context(GtkIconView *
						      icon_view, gint *,
						      gint *, gboolean,
						      GtkTreeModel * *,
						      GtkTreePath * *,
						      GtkTreeIter *);
    extern GType gtk_icon_view_get_type(void);
    extern gboolean gtk_icon_view_get_visible_range(GtkIconView *
						    icon_view,
						    GtkTreePath * *,
						    GtkTreePath * *);
    extern void gtk_icon_view_item_activated(GtkIconView * icon_view,
					     GtkTreePath *);
    extern GtkWidget *gtk_icon_view_new(void);
    extern GtkWidget *gtk_icon_view_new_with_area(GtkCellArea * area);
    extern GtkWidget *gtk_icon_view_new_with_model(GtkTreeModel * model);
    extern gboolean gtk_icon_view_path_is_selected(GtkIconView * icon_view,
						   GtkTreePath *);
    extern void gtk_icon_view_scroll_to_path(GtkIconView * icon_view,
					     GtkTreePath *, gboolean,
					     gfloat, gfloat);
    extern void gtk_icon_view_select_all(GtkIconView * icon_view);
    extern void gtk_icon_view_select_path(GtkIconView * icon_view,
					  GtkTreePath *);
    extern void gtk_icon_view_selected_foreach(GtkIconView * icon_view,
					       GtkIconViewForeachFunc,
					       gpointer);
    extern void gtk_icon_view_set_column_spacing(GtkIconView * icon_view,
						 gint);
    extern void gtk_icon_view_set_columns(GtkIconView * icon_view, gint);
    extern void gtk_icon_view_set_cursor(GtkIconView * icon_view,
					 GtkTreePath *, GtkCellRenderer *,
					 gboolean);
    extern void gtk_icon_view_set_drag_dest_item(GtkIconView * icon_view,
						 GtkTreePath *,
						 GtkIconViewDropPosition);
    extern void gtk_icon_view_set_item_orientation(GtkIconView * icon_view,
						   GtkOrientation);
    extern void gtk_icon_view_set_item_padding(GtkIconView * icon_view,
					       gint);
    extern void gtk_icon_view_set_item_width(GtkIconView * icon_view,
					     gint);
    extern void gtk_icon_view_set_margin(GtkIconView * icon_view, gint);
    extern void gtk_icon_view_set_markup_column(GtkIconView * icon_view,
						gint);
    extern void gtk_icon_view_set_model(GtkIconView * icon_view,
					GtkTreeModel *);
    extern void gtk_icon_view_set_pixbuf_column(GtkIconView * icon_view,
						gint);
    extern void gtk_icon_view_set_reorderable(GtkIconView * icon_view,
					      gboolean);
    extern void gtk_icon_view_set_row_spacing(GtkIconView * icon_view,
					      gint);
    extern void gtk_icon_view_set_selection_mode(GtkIconView * icon_view,
						 GtkSelectionMode);
    extern void gtk_icon_view_set_spacing(GtkIconView * icon_view, gint);
    extern void gtk_icon_view_set_text_column(GtkIconView * icon_view,
					      gint);
    extern void gtk_icon_view_set_tooltip_cell(GtkIconView * icon_view,
					       GtkTooltip *, GtkTreePath *,
					       GtkCellRenderer *);
    extern void gtk_icon_view_set_tooltip_column(GtkIconView * icon_view,
						 gint);
    extern void gtk_icon_view_set_tooltip_item(GtkIconView * icon_view,
					       GtkTooltip *,
					       GtkTreePath *);
    extern void gtk_icon_view_unselect_all(GtkIconView * icon_view);
    extern void gtk_icon_view_unselect_path(GtkIconView * icon_view,
					    GtkTreePath *);
    extern void gtk_icon_view_unset_model_drag_dest(GtkIconView *
						    icon_view);
    extern void gtk_icon_view_unset_model_drag_source(GtkIconView *
						      icon_view);
    extern gboolean gtk_im_context_delete_surrounding(GtkIMContext *
						      context, gint, gint);
    extern gboolean gtk_im_context_filter_keypress(GtkIMContext * context,
						   GdkEventKey *);
    extern void gtk_im_context_focus_in(GtkIMContext * context);
    extern void gtk_im_context_focus_out(GtkIMContext * context);
    extern void gtk_im_context_get_preedit_string(GtkIMContext * context,
						  gchar * *,
						  PangoAttrList * *,
						  gint *);
    extern gboolean gtk_im_context_get_surrounding(GtkIMContext * context,
						   gchar * *, gint *);
    extern GType gtk_im_context_get_type(void);
    extern void gtk_im_context_reset(GtkIMContext * context);
    extern void gtk_im_context_set_client_window(GtkIMContext * context,
						 GdkWindow *);
    extern void gtk_im_context_set_cursor_location(GtkIMContext * context,
						   const GdkRectangle *);
    extern void gtk_im_context_set_surrounding(GtkIMContext * context,
					       const char *, gint, gint);
    extern void gtk_im_context_set_use_preedit(GtkIMContext * context,
					       gboolean);
    extern void gtk_im_context_simple_add_table(GtkIMContextSimple *
						context_simple, guint16 *,
						gint, gint);
    extern GType gtk_im_context_simple_get_type(void);
    extern GtkIMContext *gtk_im_context_simple_new(void);
    extern void gtk_im_multicontext_append_menuitems(GtkIMMulticontext *
						     context,
						     GtkMenuShell *);
    extern const char *gtk_im_multicontext_get_context_id(GtkIMMulticontext
							  * context);
    extern GType gtk_im_multicontext_get_type(void);
    extern GtkIMContext *gtk_im_multicontext_new(void);
    extern void gtk_im_multicontext_set_context_id(GtkIMMulticontext *
						   context, const char *);
    extern GType gtk_im_preedit_style_get_type(void);
    extern GType gtk_im_status_style_get_type(void);
    extern void gtk_image_clear(GtkImage * image);
    extern GdkPixbufAnimation *gtk_image_get_animation(GtkImage * image);
    extern void gtk_image_get_gicon(GtkImage * image, GIcon * *,
				    GtkIconSize *);
    extern void gtk_image_get_icon_name(GtkImage * image, const char **,
					GtkIconSize *);
    extern void gtk_image_get_icon_set(GtkImage * image, GtkIconSet * *,
				       GtkIconSize *);
    extern GdkPixbuf *gtk_image_get_pixbuf(GtkImage * image);
    extern gint gtk_image_get_pixel_size(GtkImage * image);
    extern void gtk_image_get_stock(GtkImage * image, gchar * *,
				    GtkIconSize *);
    extern GtkImageType gtk_image_get_storage_type(GtkImage * image);
    extern GType gtk_image_get_type(void);
    extern gboolean
	gtk_image_menu_item_get_always_show_image(GtkImageMenuItem *
						  image_menu_item);
    extern GtkWidget *gtk_image_menu_item_get_image(GtkImageMenuItem *
						    image_menu_item);
    extern GType gtk_image_menu_item_get_type(void);
    extern gboolean gtk_image_menu_item_get_use_stock(GtkImageMenuItem *
						      image_menu_item);
    extern GtkWidget *gtk_image_menu_item_new(void);
    extern GtkWidget *gtk_image_menu_item_new_from_stock(const char
							 *stock_id,
							 GtkAccelGroup *);
    extern GtkWidget *gtk_image_menu_item_new_with_label(const char
							 *label);
    extern GtkWidget *gtk_image_menu_item_new_with_mnemonic(const char
							    *label);
    extern void gtk_image_menu_item_set_accel_group(GtkImageMenuItem *
						    image_menu_item,
						    GtkAccelGroup *);
    extern void gtk_image_menu_item_set_always_show_image(GtkImageMenuItem
							  *
							  image_menu_item,
							  gboolean);
    extern void gtk_image_menu_item_set_image(GtkImageMenuItem *
					      image_menu_item,
					      GtkWidget *);
    extern void gtk_image_menu_item_set_use_stock(GtkImageMenuItem *
						  image_menu_item,
						  gboolean);
    extern GtkWidget *gtk_image_new(void);
    extern GtkWidget *gtk_image_new_from_animation(GdkPixbufAnimation *
						   animation);
    extern GtkWidget *gtk_image_new_from_file(const char *filename);
    extern GtkWidget *gtk_image_new_from_gicon(GIcon * icon, GtkIconSize);
    extern GtkWidget *gtk_image_new_from_icon_name(const char *icon_name,
						   GtkIconSize);
    extern GtkWidget *gtk_image_new_from_icon_set(GtkIconSet * icon_set,
						  GtkIconSize);
    extern GtkWidget *gtk_image_new_from_pixbuf(GdkPixbuf * pixbuf);
    extern GtkWidget *gtk_image_new_from_resource(const char
						  *resource_path);
    extern GtkWidget *gtk_image_new_from_stock(const char *stock_id,
					       GtkIconSize);
    extern void gtk_image_set_from_animation(GtkImage * image,
					     GdkPixbufAnimation *);
    extern void gtk_image_set_from_file(GtkImage * image, const char *);
    extern void gtk_image_set_from_gicon(GtkImage * image, GIcon *,
					 GtkIconSize);
    extern void gtk_image_set_from_icon_name(GtkImage * image,
					     const char *, GtkIconSize);
    extern void gtk_image_set_from_icon_set(GtkImage * image, GtkIconSet *,
					    GtkIconSize);
    extern void gtk_image_set_from_pixbuf(GtkImage * image, GdkPixbuf *);
    extern void gtk_image_set_from_resource(GtkImage * image,
					    const char *);
    extern void gtk_image_set_from_stock(GtkImage * image, const char *,
					 GtkIconSize);
    extern void gtk_image_set_pixel_size(GtkImage * image, gint);
    extern GType gtk_image_type_get_type(void);
    extern void gtk_info_bar_add_action_widget(GtkInfoBar * info_bar,
					       GtkWidget *, gint);
    extern GtkWidget *gtk_info_bar_add_button(GtkInfoBar * info_bar,
					      const char *, gint);
    extern void gtk_info_bar_add_buttons(GtkInfoBar * info_bar,
					 const char *, ...);
    extern GtkWidget *gtk_info_bar_get_action_area(GtkInfoBar * info_bar);
    extern GtkWidget *gtk_info_bar_get_content_area(GtkInfoBar * info_bar);
    extern GtkMessageType gtk_info_bar_get_message_type(GtkInfoBar *
							info_bar);
    extern GType gtk_info_bar_get_type(void);
    extern GtkWidget *gtk_info_bar_new(void);
    extern GtkWidget *gtk_info_bar_new_with_buttons(const char
						    *first_button_text,
						    ...);
    extern void gtk_info_bar_response(GtkInfoBar * info_bar, gint);
    extern void gtk_info_bar_set_default_response(GtkInfoBar * info_bar,
						  gint);
    extern void gtk_info_bar_set_message_type(GtkInfoBar * info_bar,
					      GtkMessageType);
    extern void gtk_info_bar_set_response_sensitive(GtkInfoBar * info_bar,
						    gint, gboolean);
    extern void gtk_init(int *argc, char ***);
    extern gboolean gtk_init_check(int *argc, char ***);
    extern gboolean gtk_init_with_args(gint * argc, gchar * **,
				       const char *, const GOptionEntry *,
				       const char *, GError * *);
    extern GType gtk_input_hints_get_type(void);
    extern GType gtk_input_purpose_get_type(void);
    extern GdkScreen *gtk_invisible_get_screen(GtkInvisible * invisible);
    extern GType gtk_invisible_get_type(void);
    extern GtkWidget *gtk_invisible_new(void);
    extern GtkWidget *gtk_invisible_new_for_screen(GdkScreen * screen);
    extern void gtk_invisible_set_screen(GtkInvisible * invisible,
					 GdkScreen *);
    extern GType gtk_junction_sides_get_type(void);
    extern GType gtk_justification_get_type(void);
    extern guint gtk_key_snooper_install(GtkKeySnoopFunc snooper,
					 gpointer);
    extern void gtk_key_snooper_remove(guint snooper_handler_id);
    extern gdouble gtk_label_get_angle(GtkLabel * label);
    extern PangoAttrList *gtk_label_get_attributes(GtkLabel * label);
    extern const char *gtk_label_get_current_uri(GtkLabel * label);
    extern PangoEllipsizeMode gtk_label_get_ellipsize(GtkLabel * label);
    extern GtkJustification gtk_label_get_justify(GtkLabel * label);
    extern const char *gtk_label_get_label(GtkLabel * label);
    extern PangoLayout *gtk_label_get_layout(GtkLabel * label);
    extern void gtk_label_get_layout_offsets(GtkLabel * label, gint *,
					     gint *);
    extern gboolean gtk_label_get_line_wrap(GtkLabel * label);
    extern PangoWrapMode gtk_label_get_line_wrap_mode(GtkLabel * label);
    extern gint gtk_label_get_max_width_chars(GtkLabel * label);
    extern guint gtk_label_get_mnemonic_keyval(GtkLabel * label);
    extern GtkWidget *gtk_label_get_mnemonic_widget(GtkLabel * label);
    extern gboolean gtk_label_get_selectable(GtkLabel * label);
    extern gboolean gtk_label_get_selection_bounds(GtkLabel * label,
						   gint *, gint *);
    extern gboolean gtk_label_get_single_line_mode(GtkLabel * label);
    extern const char *gtk_label_get_text(GtkLabel * label);
    extern gboolean gtk_label_get_track_visited_links(GtkLabel * label);
    extern GType gtk_label_get_type(void);
    extern gboolean gtk_label_get_use_markup(GtkLabel * label);
    extern gboolean gtk_label_get_use_underline(GtkLabel * label);
    extern gint gtk_label_get_width_chars(GtkLabel * label);
    extern GtkWidget *gtk_label_new(const char *str);
    extern GtkWidget *gtk_label_new_with_mnemonic(const char *str);
    extern void gtk_label_select_region(GtkLabel * label, gint, gint);
    extern void gtk_label_set_angle(GtkLabel * label, gdouble);
    extern void gtk_label_set_attributes(GtkLabel * label,
					 PangoAttrList *);
    extern void gtk_label_set_ellipsize(GtkLabel * label,
					PangoEllipsizeMode);
    extern void gtk_label_set_justify(GtkLabel * label, GtkJustification);
    extern void gtk_label_set_label(GtkLabel * label, const char *);
    extern void gtk_label_set_line_wrap(GtkLabel * label, gboolean);
    extern void gtk_label_set_line_wrap_mode(GtkLabel * label,
					     PangoWrapMode);
    extern void gtk_label_set_markup(GtkLabel * label, const char *);
    extern void gtk_label_set_markup_with_mnemonic(GtkLabel * label,
						   const char *);
    extern void gtk_label_set_max_width_chars(GtkLabel * label, gint);
    extern void gtk_label_set_mnemonic_widget(GtkLabel * label,
					      GtkWidget *);
    extern void gtk_label_set_pattern(GtkLabel * label, const char *);
    extern void gtk_label_set_selectable(GtkLabel * label, gboolean);
    extern void gtk_label_set_single_line_mode(GtkLabel * label, gboolean);
    extern void gtk_label_set_text(GtkLabel * label, const char *);
    extern void gtk_label_set_text_with_mnemonic(GtkLabel * label,
						 const char *);
    extern void gtk_label_set_track_visited_links(GtkLabel * label,
						  gboolean);
    extern void gtk_label_set_use_markup(GtkLabel * label, gboolean);
    extern void gtk_label_set_use_underline(GtkLabel * label, gboolean);
    extern void gtk_label_set_width_chars(GtkLabel * label, gint);
    extern GdkWindow *gtk_layout_get_bin_window(GtkLayout * layout);
    extern GtkAdjustment *gtk_layout_get_hadjustment(GtkLayout * layout);
    extern void gtk_layout_get_size(GtkLayout * layout, guint *, guint *);
    extern GType gtk_layout_get_type(void);
    extern GtkAdjustment *gtk_layout_get_vadjustment(GtkLayout * layout);
    extern void gtk_layout_move(GtkLayout * layout, GtkWidget *, gint,
				gint);
    extern GtkWidget *gtk_layout_new(GtkAdjustment * hadjustment,
				     GtkAdjustment *);
    extern void gtk_layout_put(GtkLayout * layout, GtkWidget *, gint,
			       gint);
    extern void gtk_layout_set_hadjustment(GtkLayout * layout,
					   GtkAdjustment *);
    extern void gtk_layout_set_size(GtkLayout * layout, guint, guint);
    extern void gtk_layout_set_vadjustment(GtkLayout * layout,
					   GtkAdjustment *);
    extern void gtk_level_bar_add_offset_value(GtkLevelBar * self,
					       const char *, gdouble);
    extern gdouble gtk_level_bar_get_max_value(GtkLevelBar * self);
    extern gdouble gtk_level_bar_get_min_value(GtkLevelBar * self);
    extern GtkLevelBarMode gtk_level_bar_get_mode(GtkLevelBar * self);
    extern gboolean gtk_level_bar_get_offset_value(GtkLevelBar * self,
						   const char *,
						   gdouble *);
    extern GType gtk_level_bar_get_type(void);
    extern gdouble gtk_level_bar_get_value(GtkLevelBar * self);
    extern GType gtk_level_bar_mode_get_type(void);
    extern GtkWidget *gtk_level_bar_new(void);
    extern GtkWidget *gtk_level_bar_new_for_interval(gdouble min_value,
						     gdouble);
    extern void gtk_level_bar_remove_offset_value(GtkLevelBar * self,
						  const char *);
    extern void gtk_level_bar_set_max_value(GtkLevelBar * self, gdouble);
    extern void gtk_level_bar_set_min_value(GtkLevelBar * self, gdouble);
    extern void gtk_level_bar_set_mode(GtkLevelBar * self,
				       GtkLevelBarMode);
    extern void gtk_level_bar_set_value(GtkLevelBar * self, gdouble);
    extern GType gtk_license_get_type(void);
    extern GType gtk_link_button_get_type(void);
    extern const char *gtk_link_button_get_uri(GtkLinkButton *
					       link_button);
    extern gboolean gtk_link_button_get_visited(GtkLinkButton *
						link_button);
    extern GtkWidget *gtk_link_button_new(const char *uri);
    extern GtkWidget *gtk_link_button_new_with_label(const char *uri,
						     const char *);
    extern void gtk_link_button_set_uri(GtkLinkButton * link_button,
					const char *);
    extern void gtk_link_button_set_visited(GtkLinkButton * link_button,
					    gboolean);
    extern void gtk_list_store_append(GtkListStore * list_store,
				      GtkTreeIter *);
    extern void gtk_list_store_clear(GtkListStore * list_store);
    extern GType gtk_list_store_get_type(void);
    extern void gtk_list_store_insert(GtkListStore * list_store,
				      GtkTreeIter *, gint);
    extern void gtk_list_store_insert_after(GtkListStore * list_store,
					    GtkTreeIter *, GtkTreeIter *);
    extern void gtk_list_store_insert_before(GtkListStore * list_store,
					     GtkTreeIter *, GtkTreeIter *);
    extern void gtk_list_store_insert_with_values(GtkListStore *
						  list_store,
						  GtkTreeIter *, gint,
						  ...);
    extern void gtk_list_store_insert_with_valuesv(GtkListStore *
						   list_store,
						   GtkTreeIter *, gint,
						   gint *, GValue *, gint);
    extern gboolean gtk_list_store_iter_is_valid(GtkListStore * list_store,
						 GtkTreeIter *);
    extern void gtk_list_store_move_after(GtkListStore * store,
					  GtkTreeIter *, GtkTreeIter *);
    extern void gtk_list_store_move_before(GtkListStore * store,
					   GtkTreeIter *, GtkTreeIter *);
    extern GtkListStore *gtk_list_store_new(gint n_columns, ...);
    extern GtkListStore *gtk_list_store_newv(gint n_columns, GType *);
    extern void gtk_list_store_prepend(GtkListStore * list_store,
				       GtkTreeIter *);
    extern gboolean gtk_list_store_remove(GtkListStore * list_store,
					  GtkTreeIter *);
    extern void gtk_list_store_reorder(GtkListStore * store, gint *);
    extern void gtk_list_store_set(GtkListStore * list_store,
				   GtkTreeIter *, ...);
    extern void gtk_list_store_set_column_types(GtkListStore * list_store,
						gint, GType *);
    extern void gtk_list_store_set_valist(GtkListStore * list_store,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_list_store_set_value(GtkListStore * list_store,
					 GtkTreeIter *, gint, GValue *);
    extern void gtk_list_store_set_valuesv(GtkListStore * list_store,
					   GtkTreeIter *, gint *, GValue *,
					   gint);
    extern void gtk_list_store_swap(GtkListStore * store, GtkTreeIter *,
				    GtkTreeIter *);
    extern GPermission *gtk_lock_button_get_permission(GtkLockButton *
						       button);
    extern GType gtk_lock_button_get_type(void);
    extern GtkWidget *gtk_lock_button_new(GPermission * permission);
    extern void gtk_lock_button_set_permission(GtkLockButton * button,
					       GPermission *);
    extern void gtk_main(void);
    extern void gtk_main_do_event(GdkEvent * event);
    extern gboolean gtk_main_iteration(void);
    extern gboolean gtk_main_iteration_do(gboolean blocking);
    extern guint gtk_main_level(void);
    extern void gtk_main_quit(void);
    extern void gtk_menu_attach(GtkMenu * menu, GtkWidget *, guint, guint,
				guint, guint);
    extern void gtk_menu_attach_to_widget(GtkMenu * menu, GtkWidget *,
					  GtkMenuDetachFunc);
    extern GtkPackDirection
	gtk_menu_bar_get_child_pack_direction(GtkMenuBar * menubar);
    extern GtkPackDirection gtk_menu_bar_get_pack_direction(GtkMenuBar *
							    menubar);
    extern GType gtk_menu_bar_get_type(void);
    extern GtkWidget *gtk_menu_bar_new(void);
    extern GtkWidget *gtk_menu_bar_new_from_model(GMenuModel * model);
    extern void gtk_menu_bar_set_child_pack_direction(GtkMenuBar * menubar,
						      GtkPackDirection);
    extern void gtk_menu_bar_set_pack_direction(GtkMenuBar * menubar,
						GtkPackDirection);
    extern GtkWidget *gtk_menu_button_get_align_widget(GtkMenuButton *
						       menu_button);
    extern GtkArrowType gtk_menu_button_get_direction(GtkMenuButton *
						      menu_button);
    extern GMenuModel *gtk_menu_button_get_menu_model(GtkMenuButton *
						      menu_button);
    extern GtkMenu *gtk_menu_button_get_popup(GtkMenuButton * menu_button);
    extern GType gtk_menu_button_get_type(void);
    extern GtkWidget *gtk_menu_button_new(void);
    extern void gtk_menu_button_set_align_widget(GtkMenuButton *
						 menu_button, GtkWidget *);
    extern void gtk_menu_button_set_direction(GtkMenuButton * menu_button,
					      GtkArrowType);
    extern void gtk_menu_button_set_menu_model(GtkMenuButton * menu_button,
					       GMenuModel *);
    extern void gtk_menu_button_set_popup(GtkMenuButton * menu_button,
					  GtkWidget *);
    extern void gtk_menu_detach(GtkMenu * menu);
    extern GType gtk_menu_direction_type_get_type(void);
    extern GtkAccelGroup *gtk_menu_get_accel_group(GtkMenu * menu);
    extern const char *gtk_menu_get_accel_path(GtkMenu * menu);
    extern GtkWidget *gtk_menu_get_active(GtkMenu * menu);
    extern GtkWidget *gtk_menu_get_attach_widget(GtkMenu * menu);
    extern GList *gtk_menu_get_for_attach_widget(GtkWidget * widget);
    extern gint gtk_menu_get_monitor(GtkMenu * menu);
    extern gboolean gtk_menu_get_reserve_toggle_size(GtkMenu * menu);
    extern gboolean gtk_menu_get_tearoff_state(GtkMenu * menu);
    extern const char *gtk_menu_get_title(GtkMenu * menu);
    extern GType gtk_menu_get_type(void);
    extern void gtk_menu_item_activate(GtkMenuItem * menu_item);
    extern void gtk_menu_item_deselect(GtkMenuItem * menu_item);
    extern const char *gtk_menu_item_get_accel_path(GtkMenuItem *
						    menu_item);
    extern const char *gtk_menu_item_get_label(GtkMenuItem * menu_item);
    extern gboolean gtk_menu_item_get_reserve_indicator(GtkMenuItem *
							menu_item);
    extern gboolean gtk_menu_item_get_right_justified(GtkMenuItem *
						      menu_item);
    extern GtkWidget *gtk_menu_item_get_submenu(GtkMenuItem * menu_item);
    extern GType gtk_menu_item_get_type(void);
    extern gboolean gtk_menu_item_get_use_underline(GtkMenuItem *
						    menu_item);
    extern GtkWidget *gtk_menu_item_new(void);
    extern GtkWidget *gtk_menu_item_new_with_label(const char *label);
    extern GtkWidget *gtk_menu_item_new_with_mnemonic(const char *label);
    extern void gtk_menu_item_select(GtkMenuItem * menu_item);
    extern void gtk_menu_item_set_accel_path(GtkMenuItem * menu_item,
					     const char *);
    extern void gtk_menu_item_set_label(GtkMenuItem * menu_item,
					const char *);
    extern void gtk_menu_item_set_reserve_indicator(GtkMenuItem *
						    menu_item, gboolean);
    extern void gtk_menu_item_set_right_justified(GtkMenuItem * menu_item,
						  gboolean);
    extern void gtk_menu_item_set_submenu(GtkMenuItem * menu_item,
					  GtkWidget *);
    extern void gtk_menu_item_set_use_underline(GtkMenuItem * menu_item,
						gboolean);
    extern void gtk_menu_item_toggle_size_allocate(GtkMenuItem * menu_item,
						   gint);
    extern void gtk_menu_item_toggle_size_request(GtkMenuItem * menu_item,
						  gint *);
    extern GtkWidget *gtk_menu_new(void);
    extern GtkWidget *gtk_menu_new_from_model(GMenuModel * model);
    extern void gtk_menu_popdown(GtkMenu * menu);
    extern void gtk_menu_popup(GtkMenu * menu, GtkWidget *, GtkWidget *,
			       GtkMenuPositionFunc, gpointer, guint,
			       guint32);
    extern void gtk_menu_popup_for_device(GtkMenu * menu, GdkDevice *,
					  GtkWidget *, GtkWidget *,
					  GtkMenuPositionFunc, gpointer,
					  GDestroyNotify, guint, guint32);
    extern void gtk_menu_reorder_child(GtkMenu * menu, GtkWidget *, gint);
    extern void gtk_menu_reposition(GtkMenu * menu);
    extern void gtk_menu_set_accel_group(GtkMenu * menu, GtkAccelGroup *);
    extern void gtk_menu_set_accel_path(GtkMenu * menu, const char *);
    extern void gtk_menu_set_active(GtkMenu * menu, guint);
    extern void gtk_menu_set_monitor(GtkMenu * menu, gint);
    extern void gtk_menu_set_reserve_toggle_size(GtkMenu * menu, gboolean);
    extern void gtk_menu_set_screen(GtkMenu * menu, GdkScreen *);
    extern void gtk_menu_set_tearoff_state(GtkMenu * menu, gboolean);
    extern void gtk_menu_set_title(GtkMenu * menu, const char *);
    extern void gtk_menu_shell_activate_item(GtkMenuShell * menu_shell,
					     GtkWidget *, gboolean);
    extern void gtk_menu_shell_append(GtkMenuShell * menu_shell,
				      GtkWidget *);
    extern void gtk_menu_shell_bind_model(GtkMenuShell * menu_shell,
					  GMenuModel *, const char *,
					  gboolean);
    extern void gtk_menu_shell_cancel(GtkMenuShell * menu_shell);
    extern void gtk_menu_shell_deactivate(GtkMenuShell * menu_shell);
    extern void gtk_menu_shell_deselect(GtkMenuShell * menu_shell);
    extern GtkWidget *gtk_menu_shell_get_parent_shell(GtkMenuShell *
						      menu_shell);
    extern GtkWidget *gtk_menu_shell_get_selected_item(GtkMenuShell *
						       menu_shell);
    extern gboolean gtk_menu_shell_get_take_focus(GtkMenuShell *
						  menu_shell);
    extern GType gtk_menu_shell_get_type(void);
    extern void gtk_menu_shell_insert(GtkMenuShell * menu_shell,
				      GtkWidget *, gint);
    extern void gtk_menu_shell_prepend(GtkMenuShell * menu_shell,
				       GtkWidget *);
    extern void gtk_menu_shell_select_first(GtkMenuShell * menu_shell,
					    gboolean);
    extern void gtk_menu_shell_select_item(GtkMenuShell * menu_shell,
					   GtkWidget *);
    extern void gtk_menu_shell_set_take_focus(GtkMenuShell * menu_shell,
					      gboolean);
    extern GtkWidget *gtk_menu_tool_button_get_menu(GtkMenuToolButton *
						    button);
    extern GType gtk_menu_tool_button_get_type(void);
    extern GtkToolItem *gtk_menu_tool_button_new(GtkWidget * icon_widget,
						 const char *);
    extern GtkToolItem *gtk_menu_tool_button_new_from_stock(const char
							    *stock_id);
    extern void
	gtk_menu_tool_button_set_arrow_tooltip_markup(GtkMenuToolButton *
						      button,
						      const char *);
    extern void
	gtk_menu_tool_button_set_arrow_tooltip_text(GtkMenuToolButton *
						    button, const char *);
    extern void gtk_menu_tool_button_set_menu(GtkMenuToolButton * button,
					      GtkWidget *);
    extern void gtk_message_dialog_format_secondary_markup(GtkMessageDialog
							   *
							   message_dialog,
							   const char *,
							   ...);
    extern void gtk_message_dialog_format_secondary_text(GtkMessageDialog *
							 message_dialog,
							 const char *,
							 ...);
    extern GtkWidget *gtk_message_dialog_get_image(GtkMessageDialog *
						   dialog);
    extern GtkWidget *gtk_message_dialog_get_message_area(GtkMessageDialog
							  *
							  message_dialog);
    extern GType gtk_message_dialog_get_type(void);
    extern GtkWidget *gtk_message_dialog_new(GtkWindow * parent,
					     GtkDialogFlags,
					     GtkMessageType,
					     GtkButtonsType, const char *,
					     ...);
    extern GtkWidget *gtk_message_dialog_new_with_markup(GtkWindow *
							 parent,
							 GtkDialogFlags,
							 GtkMessageType,
							 GtkButtonsType,
							 const char *,
							 ...);
    extern void gtk_message_dialog_set_image(GtkMessageDialog * dialog,
					     GtkWidget *);
    extern void gtk_message_dialog_set_markup(GtkMessageDialog *
					      message_dialog,
					      const char *);
    extern GType gtk_message_type_get_type(void);
    extern void gtk_misc_get_alignment(GtkMisc * misc, gfloat *, gfloat *);
    extern void gtk_misc_get_padding(GtkMisc * misc, gint *, gint *);
    extern GType gtk_misc_get_type(void);
    extern void gtk_misc_set_alignment(GtkMisc * misc, gfloat, gfloat);
    extern void gtk_misc_set_padding(GtkMisc * misc, gint, gint);
    extern GtkWindow *gtk_mount_operation_get_parent(GtkMountOperation *
						     op);
    extern GdkScreen *gtk_mount_operation_get_screen(GtkMountOperation *
						     op);
    extern GType gtk_mount_operation_get_type(void);
    extern gboolean gtk_mount_operation_is_showing(GtkMountOperation * op);
    extern GMountOperation *gtk_mount_operation_new(GtkWindow * parent);
    extern void gtk_mount_operation_set_parent(GtkMountOperation * op,
					       GtkWindow *);
    extern void gtk_mount_operation_set_screen(GtkMountOperation * op,
					       GdkScreen *);
    extern GType gtk_movement_step_get_type(void);
    extern gint gtk_notebook_append_page(GtkNotebook * notebook,
					 GtkWidget *, GtkWidget *);
    extern gint gtk_notebook_append_page_menu(GtkNotebook * notebook,
					      GtkWidget *, GtkWidget *,
					      GtkWidget *);
    extern GtkWidget *gtk_notebook_get_action_widget(GtkNotebook *
						     notebook,
						     GtkPackType);
    extern gint gtk_notebook_get_current_page(GtkNotebook * notebook);
    extern const char *gtk_notebook_get_group_name(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_menu_label(GtkNotebook * notebook,
						  GtkWidget *);
    extern const char *gtk_notebook_get_menu_label_text(GtkNotebook *
							notebook,
							GtkWidget *);
    extern gint gtk_notebook_get_n_pages(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_nth_page(GtkNotebook * notebook,
						gint);
    extern gboolean gtk_notebook_get_scrollable(GtkNotebook * notebook);
    extern gboolean gtk_notebook_get_show_border(GtkNotebook * notebook);
    extern gboolean gtk_notebook_get_show_tabs(GtkNotebook * notebook);
    extern gboolean gtk_notebook_get_tab_detachable(GtkNotebook * notebook,
						    GtkWidget *);
    extern guint16 gtk_notebook_get_tab_hborder(GtkNotebook * notebook);
    extern GtkWidget *gtk_notebook_get_tab_label(GtkNotebook * notebook,
						 GtkWidget *);
    extern const char *gtk_notebook_get_tab_label_text(GtkNotebook *
						       notebook,
						       GtkWidget *);
    extern GtkPositionType gtk_notebook_get_tab_pos(GtkNotebook *
						    notebook);
    extern gboolean gtk_notebook_get_tab_reorderable(GtkNotebook *
						     notebook,
						     GtkWidget *);
    extern guint16 gtk_notebook_get_tab_vborder(GtkNotebook * notebook);
    extern GType gtk_notebook_get_type(void);
    extern gint gtk_notebook_insert_page(GtkNotebook * notebook,
					 GtkWidget *, GtkWidget *, gint);
    extern gint gtk_notebook_insert_page_menu(GtkNotebook * notebook,
					      GtkWidget *, GtkWidget *,
					      GtkWidget *, gint);
    extern GtkWidget *gtk_notebook_new(void);
    extern void gtk_notebook_next_page(GtkNotebook * notebook);
    extern gint gtk_notebook_page_num(GtkNotebook * notebook, GtkWidget *);
    extern void gtk_notebook_popup_disable(GtkNotebook * notebook);
    extern void gtk_notebook_popup_enable(GtkNotebook * notebook);
    extern gint gtk_notebook_prepend_page(GtkNotebook * notebook,
					  GtkWidget *, GtkWidget *);
    extern gint gtk_notebook_prepend_page_menu(GtkNotebook * notebook,
					       GtkWidget *, GtkWidget *,
					       GtkWidget *);
    extern void gtk_notebook_prev_page(GtkNotebook * notebook);
    extern void gtk_notebook_remove_page(GtkNotebook * notebook, gint);
    extern void gtk_notebook_reorder_child(GtkNotebook * notebook,
					   GtkWidget *, gint);
    extern void gtk_notebook_set_action_widget(GtkNotebook * notebook,
					       GtkWidget *, GtkPackType);
    extern void gtk_notebook_set_current_page(GtkNotebook * notebook,
					      gint);
    extern void gtk_notebook_set_group_name(GtkNotebook * notebook,
					    const char *);
    extern void gtk_notebook_set_menu_label(GtkNotebook * notebook,
					    GtkWidget *, GtkWidget *);
    extern void gtk_notebook_set_menu_label_text(GtkNotebook * notebook,
						 GtkWidget *,
						 const char *);
    extern void gtk_notebook_set_scrollable(GtkNotebook * notebook,
					    gboolean);
    extern void gtk_notebook_set_show_border(GtkNotebook * notebook,
					     gboolean);
    extern void gtk_notebook_set_show_tabs(GtkNotebook * notebook,
					   gboolean);
    extern void gtk_notebook_set_tab_detachable(GtkNotebook * notebook,
						GtkWidget *, gboolean);
    extern void gtk_notebook_set_tab_label(GtkNotebook * notebook,
					   GtkWidget *, GtkWidget *);
    extern void gtk_notebook_set_tab_label_text(GtkNotebook * notebook,
						GtkWidget *, const char *);
    extern void gtk_notebook_set_tab_pos(GtkNotebook * notebook,
					 GtkPositionType);
    extern void gtk_notebook_set_tab_reorderable(GtkNotebook * notebook,
						 GtkWidget *, gboolean);
    extern GType gtk_notebook_tab_get_type(void);
    extern GType gtk_number_up_layout_get_type(void);
    extern GIcon *gtk_numerable_icon_get_background_gicon(GtkNumerableIcon
							  * self);
    extern const char
	*gtk_numerable_icon_get_background_icon_name(GtkNumerableIcon *
						     self);
    extern gint gtk_numerable_icon_get_count(GtkNumerableIcon * self);
    extern const char *gtk_numerable_icon_get_label(GtkNumerableIcon *
						    self);
    extern GtkStyleContext
	*gtk_numerable_icon_get_style_context(GtkNumerableIcon * self);
    extern GType gtk_numerable_icon_get_type(void);
    extern GIcon *gtk_numerable_icon_new(GIcon * base_icon);
    extern GIcon *gtk_numerable_icon_new_with_style_context(GIcon *
							    base_icon,
							    GtkStyleContext
							    *);
    extern void gtk_numerable_icon_set_background_gicon(GtkNumerableIcon *
							self, GIcon *);
    extern void
	gtk_numerable_icon_set_background_icon_name(GtkNumerableIcon *
						    self, const char *);
    extern void gtk_numerable_icon_set_count(GtkNumerableIcon * self,
					     gint);
    extern void gtk_numerable_icon_set_label(GtkNumerableIcon * self,
					     const char *);
    extern void gtk_numerable_icon_set_style_context(GtkNumerableIcon *
						     self,
						     GtkStyleContext *);
    extern GdkPixbuf *gtk_offscreen_window_get_pixbuf(GtkOffscreenWindow *
						      offscreen);
    extern cairo_surface_t
	*gtk_offscreen_window_get_surface(GtkOffscreenWindow * offscreen);
    extern GType gtk_offscreen_window_get_type(void);
    extern GtkWidget *gtk_offscreen_window_new(void);
    extern GtkOrientation gtk_orientable_get_orientation(GtkOrientable *
							 orientable);
    extern GType gtk_orientable_get_type(void);
    extern void gtk_orientable_set_orientation(GtkOrientable * orientable,
					       GtkOrientation);
    extern GType gtk_orientation_get_type(void);
    extern void gtk_overlay_add_overlay(GtkOverlay * overlay, GtkWidget *);
    extern GType gtk_overlay_get_type(void);
    extern GtkWidget *gtk_overlay_new(void);
    extern GType gtk_pack_direction_get_type(void);
    extern GType gtk_pack_type_get_type(void);
    extern GType gtk_page_orientation_get_type(void);
    extern GType gtk_page_set_get_type(void);
    extern GtkPageSetup *gtk_page_setup_copy(GtkPageSetup * other);
    extern gdouble gtk_page_setup_get_bottom_margin(GtkPageSetup * setup,
						    GtkUnit);
    extern gdouble gtk_page_setup_get_left_margin(GtkPageSetup * setup,
						  GtkUnit);
    extern GtkPageOrientation gtk_page_setup_get_orientation(GtkPageSetup *
							     setup);
    extern gdouble gtk_page_setup_get_page_height(GtkPageSetup * setup,
						  GtkUnit);
    extern gdouble gtk_page_setup_get_page_width(GtkPageSetup * setup,
						 GtkUnit);
    extern gdouble gtk_page_setup_get_paper_height(GtkPageSetup * setup,
						   GtkUnit);
    extern GtkPaperSize *gtk_page_setup_get_paper_size(GtkPageSetup *
						       setup);
    extern gdouble gtk_page_setup_get_paper_width(GtkPageSetup * setup,
						  GtkUnit);
    extern gdouble gtk_page_setup_get_right_margin(GtkPageSetup * setup,
						   GtkUnit);
    extern gdouble gtk_page_setup_get_top_margin(GtkPageSetup * setup,
						 GtkUnit);
    extern GType gtk_page_setup_get_type(void);
    extern gboolean gtk_page_setup_load_file(GtkPageSetup * setup,
					     const char *, GError * *);
    extern gboolean gtk_page_setup_load_key_file(GtkPageSetup * setup,
						 GKeyFile *, const char *,
						 GError * *);
    extern GtkPageSetup *gtk_page_setup_new(void);
    extern GtkPageSetup *gtk_page_setup_new_from_file(const char
						      *file_name,
						      GError * *);
    extern GtkPageSetup *gtk_page_setup_new_from_key_file(GKeyFile *
							  key_file,
							  const char *,
							  GError * *);
    extern void gtk_page_setup_set_bottom_margin(GtkPageSetup * setup,
						 gdouble, GtkUnit);
    extern void gtk_page_setup_set_left_margin(GtkPageSetup * setup,
					       gdouble, GtkUnit);
    extern void gtk_page_setup_set_orientation(GtkPageSetup * setup,
					       GtkPageOrientation);
    extern void gtk_page_setup_set_paper_size(GtkPageSetup * setup,
					      GtkPaperSize *);
    extern void
	gtk_page_setup_set_paper_size_and_default_margins(GtkPageSetup *
							  setup,
							  GtkPaperSize *);
    extern void gtk_page_setup_set_right_margin(GtkPageSetup * setup,
						gdouble, GtkUnit);
    extern void gtk_page_setup_set_top_margin(GtkPageSetup * setup,
					      gdouble, GtkUnit);
    extern gboolean gtk_page_setup_to_file(GtkPageSetup * setup,
					   const char *, GError * *);
    extern void gtk_page_setup_to_key_file(GtkPageSetup * setup,
					   GKeyFile *, const char *);
    extern void gtk_paned_add1(GtkPaned * paned, GtkWidget *);
    extern void gtk_paned_add2(GtkPaned * paned, GtkWidget *);
    extern GtkWidget *gtk_paned_get_child1(GtkPaned * paned);
    extern GtkWidget *gtk_paned_get_child2(GtkPaned * paned);
    extern GdkWindow *gtk_paned_get_handle_window(GtkPaned * paned);
    extern gint gtk_paned_get_position(GtkPaned * paned);
    extern GType gtk_paned_get_type(void);
    extern GtkWidget *gtk_paned_new(GtkOrientation orientation);
    extern void gtk_paned_pack1(GtkPaned * paned, GtkWidget *, gboolean,
				gboolean);
    extern void gtk_paned_pack2(GtkPaned * paned, GtkWidget *, gboolean,
				gboolean);
    extern void gtk_paned_set_position(GtkPaned * paned, gint);
    extern GtkPaperSize *gtk_paper_size_copy(GtkPaperSize * other);
    extern void gtk_paper_size_free(GtkPaperSize * size);
    extern const char *gtk_paper_size_get_default(void);
    extern gdouble gtk_paper_size_get_default_bottom_margin(GtkPaperSize *
							    size, GtkUnit);
    extern gdouble gtk_paper_size_get_default_left_margin(GtkPaperSize *
							  size, GtkUnit);
    extern gdouble gtk_paper_size_get_default_right_margin(GtkPaperSize *
							   size, GtkUnit);
    extern gdouble gtk_paper_size_get_default_top_margin(GtkPaperSize *
							 size, GtkUnit);
    extern const char *gtk_paper_size_get_display_name(GtkPaperSize *
						       size);
    extern gdouble gtk_paper_size_get_height(GtkPaperSize * size, GtkUnit);
    extern const char *gtk_paper_size_get_name(GtkPaperSize * size);
    extern GList *gtk_paper_size_get_paper_sizes(gboolean include_custom);
    extern const char *gtk_paper_size_get_ppd_name(GtkPaperSize * size);
    extern GType gtk_paper_size_get_type(void);
    extern gdouble gtk_paper_size_get_width(GtkPaperSize * size, GtkUnit);
    extern gboolean gtk_paper_size_is_custom(GtkPaperSize * size);
    extern gboolean gtk_paper_size_is_equal(GtkPaperSize * size1,
					    GtkPaperSize *);
    extern GtkPaperSize *gtk_paper_size_new(const char *name);
    extern GtkPaperSize *gtk_paper_size_new_custom(const char *name,
						   const char *, gdouble,
						   gdouble, GtkUnit);
    extern GtkPaperSize *gtk_paper_size_new_from_key_file(GKeyFile *
							  key_file,
							  const char *,
							  GError * *);
    extern GtkPaperSize *gtk_paper_size_new_from_ppd(const char *ppd_name,
						     const char *, gdouble,
						     gdouble);
    extern void gtk_paper_size_set_size(GtkPaperSize * size, gdouble,
					gdouble, GtkUnit);
    extern void gtk_paper_size_to_key_file(GtkPaperSize * size, GKeyFile *,
					   const char *);
    extern gboolean gtk_parse_args(int *argc, char ***);
    extern GType gtk_path_priority_type_get_type(void);
    extern GType gtk_path_type_get_type(void);
    extern void gtk_plug_construct(GtkPlug * plug, Window);
    extern void gtk_plug_construct_for_display(GtkPlug * plug,
					       GdkDisplay *, Window);
    extern gboolean gtk_plug_get_embedded(GtkPlug * plug);
    extern Window gtk_plug_get_id(GtkPlug * plug);
    extern GdkWindow *gtk_plug_get_socket_window(GtkPlug * plug);
    extern GType gtk_plug_get_type(void);
    extern GtkWidget *gtk_plug_new(Window socket_id);
    extern GtkWidget *gtk_plug_new_for_display(GdkDisplay * display,
					       Window);
    extern GType gtk_policy_type_get_type(void);
    extern GType gtk_position_type_get_type(void);
    extern PangoContext
	*gtk_print_context_create_pango_context(GtkPrintContext * context);
    extern PangoLayout
	*gtk_print_context_create_pango_layout(GtkPrintContext * context);
    extern cairo_t *gtk_print_context_get_cairo_context(GtkPrintContext *
							context);
    extern gdouble gtk_print_context_get_dpi_x(GtkPrintContext * context);
    extern gdouble gtk_print_context_get_dpi_y(GtkPrintContext * context);
    extern gboolean gtk_print_context_get_hard_margins(GtkPrintContext *
						       context, gdouble *,
						       gdouble *,
						       gdouble *,
						       gdouble *);
    extern gdouble gtk_print_context_get_height(GtkPrintContext * context);
    extern GtkPageSetup *gtk_print_context_get_page_setup(GtkPrintContext *
							  context);
    extern PangoFontMap
	*gtk_print_context_get_pango_fontmap(GtkPrintContext * context);
    extern GType gtk_print_context_get_type(void);
    extern gdouble gtk_print_context_get_width(GtkPrintContext * context);
    extern void gtk_print_context_set_cairo_context(GtkPrintContext *
						    context, cairo_t *,
						    double, double);
    extern GType gtk_print_duplex_get_type(void);
    extern GType gtk_print_error_get_type(void);
    extern GQuark gtk_print_error_quark(void);
    extern GType gtk_print_operation_action_get_type(void);
    extern void gtk_print_operation_cancel(GtkPrintOperation * op);
    extern void gtk_print_operation_draw_page_finish(GtkPrintOperation *
						     op);
    extern GtkPageSetup
	*gtk_print_operation_get_default_page_setup(GtkPrintOperation *
						    op);
    extern gboolean
	gtk_print_operation_get_embed_page_setup(GtkPrintOperation * op);
    extern void gtk_print_operation_get_error(GtkPrintOperation * op,
					      GError * *);
    extern gboolean gtk_print_operation_get_has_selection(GtkPrintOperation
							  * op);
    extern gint gtk_print_operation_get_n_pages_to_print(GtkPrintOperation
							 * op);
    extern GtkPrintSettings
	*gtk_print_operation_get_print_settings(GtkPrintOperation * op);
    extern GtkPrintStatus gtk_print_operation_get_status(GtkPrintOperation
							 * op);
    extern const char
	*gtk_print_operation_get_status_string(GtkPrintOperation * op);
    extern gboolean
	gtk_print_operation_get_support_selection(GtkPrintOperation * op);
    extern GType gtk_print_operation_get_type(void);
    extern gboolean gtk_print_operation_is_finished(GtkPrintOperation *
						    op);
    extern GtkPrintOperation *gtk_print_operation_new(void);
    extern void
	gtk_print_operation_preview_end_preview(GtkPrintOperationPreview *
						preview);
    extern GType gtk_print_operation_preview_get_type(void);
    extern gboolean
	gtk_print_operation_preview_is_selected(GtkPrintOperationPreview *
						preview, gint);
    extern void
	gtk_print_operation_preview_render_page(GtkPrintOperationPreview *
						preview, gint);
    extern GType gtk_print_operation_result_get_type(void);
    extern GtkPrintOperationResult
	gtk_print_operation_run(GtkPrintOperation * op,
				GtkPrintOperationAction, GtkWindow *,
				GError * *);
    extern void gtk_print_operation_set_allow_async(GtkPrintOperation * op,
						    gboolean);
    extern void gtk_print_operation_set_current_page(GtkPrintOperation *
						     op, gint);
    extern void gtk_print_operation_set_custom_tab_label(GtkPrintOperation
							 * op,
							 const char *);
    extern void
	gtk_print_operation_set_default_page_setup(GtkPrintOperation * op,
						   GtkPageSetup *);
    extern void gtk_print_operation_set_defer_drawing(GtkPrintOperation *
						      op);
    extern void gtk_print_operation_set_embed_page_setup(GtkPrintOperation
							 * op, gboolean);
    extern void gtk_print_operation_set_export_filename(GtkPrintOperation *
							op, const char *);
    extern void gtk_print_operation_set_has_selection(GtkPrintOperation *
						      op, gboolean);
    extern void gtk_print_operation_set_job_name(GtkPrintOperation * op,
						 const char *);
    extern void gtk_print_operation_set_n_pages(GtkPrintOperation * op,
						gint);
    extern void gtk_print_operation_set_print_settings(GtkPrintOperation *
						       op,
						       GtkPrintSettings *);
    extern void gtk_print_operation_set_show_progress(GtkPrintOperation *
						      op, gboolean);
    extern void gtk_print_operation_set_support_selection(GtkPrintOperation
							  * op, gboolean);
    extern void
	gtk_print_operation_set_track_print_status(GtkPrintOperation * op,
						   gboolean);
    extern void gtk_print_operation_set_unit(GtkPrintOperation * op,
					     GtkUnit);
    extern void gtk_print_operation_set_use_full_page(GtkPrintOperation *
						      op, gboolean);
    extern GType gtk_print_pages_get_type(void);
    extern GType gtk_print_quality_get_type(void);
    extern GtkPageSetup *gtk_print_run_page_setup_dialog(GtkWindow *
							 parent,
							 GtkPageSetup *,
							 GtkPrintSettings
							 *);
    extern void gtk_print_run_page_setup_dialog_async(GtkWindow * parent,
						      GtkPageSetup *,
						      GtkPrintSettings *,
						      GtkPageSetupDoneFunc,
						      gpointer);
    extern GtkPrintSettings *gtk_print_settings_copy(GtkPrintSettings *
						     other);
    extern void gtk_print_settings_foreach(GtkPrintSettings * settings,
					   GtkPrintSettingsFunc, gpointer);
    extern const char *gtk_print_settings_get(GtkPrintSettings * settings,
					      const char *);
    extern gboolean gtk_print_settings_get_bool(GtkPrintSettings *
						settings, const char *);
    extern gboolean gtk_print_settings_get_collate(GtkPrintSettings *
						   settings);
    extern const char
	*gtk_print_settings_get_default_source(GtkPrintSettings *
					       settings);
    extern const char *gtk_print_settings_get_dither(GtkPrintSettings *
						     settings);
    extern gdouble gtk_print_settings_get_double(GtkPrintSettings *
						 settings, const char *);
    extern gdouble
	gtk_print_settings_get_double_with_default(GtkPrintSettings *
						   settings, const char *,
						   gdouble);
    extern GtkPrintDuplex gtk_print_settings_get_duplex(GtkPrintSettings *
							settings);
    extern const char *gtk_print_settings_get_finishings(GtkPrintSettings *
							 settings);
    extern gint gtk_print_settings_get_int(GtkPrintSettings * settings,
					   const char *);
    extern gint gtk_print_settings_get_int_with_default(GtkPrintSettings *
							settings,
							const char *,
							gint);
    extern gdouble gtk_print_settings_get_length(GtkPrintSettings *
						 settings, const char *,
						 GtkUnit);
    extern const char *gtk_print_settings_get_media_type(GtkPrintSettings *
							 settings);
    extern gint gtk_print_settings_get_n_copies(GtkPrintSettings *
						settings);
    extern gint gtk_print_settings_get_number_up(GtkPrintSettings *
						 settings);
    extern GtkNumberUpLayout
	gtk_print_settings_get_number_up_layout(GtkPrintSettings *
						settings);
    extern GtkPageOrientation
	gtk_print_settings_get_orientation(GtkPrintSettings * settings);
    extern const char *gtk_print_settings_get_output_bin(GtkPrintSettings *
							 settings);
    extern GtkPageRange
	*gtk_print_settings_get_page_ranges(GtkPrintSettings * settings,
					    gint *);
    extern GtkPageSet gtk_print_settings_get_page_set(GtkPrintSettings *
						      settings);
    extern gdouble gtk_print_settings_get_paper_height(GtkPrintSettings *
						       settings, GtkUnit);
    extern GtkPaperSize *gtk_print_settings_get_paper_size(GtkPrintSettings
							   * settings);
    extern gdouble gtk_print_settings_get_paper_width(GtkPrintSettings *
						      settings, GtkUnit);
    extern GtkPrintPages
	gtk_print_settings_get_print_pages(GtkPrintSettings * settings);
    extern const char *gtk_print_settings_get_printer(GtkPrintSettings *
						      settings);
    extern gdouble gtk_print_settings_get_printer_lpi(GtkPrintSettings *
						      settings);
    extern GtkPrintQuality gtk_print_settings_get_quality(GtkPrintSettings
							  * settings);
    extern gint gtk_print_settings_get_resolution(GtkPrintSettings *
						  settings);
    extern gint gtk_print_settings_get_resolution_x(GtkPrintSettings *
						    settings);
    extern gint gtk_print_settings_get_resolution_y(GtkPrintSettings *
						    settings);
    extern gboolean gtk_print_settings_get_reverse(GtkPrintSettings *
						   settings);
    extern gdouble gtk_print_settings_get_scale(GtkPrintSettings *
						settings);
    extern GType gtk_print_settings_get_type(void);
    extern gboolean gtk_print_settings_get_use_color(GtkPrintSettings *
						     settings);
    extern gboolean gtk_print_settings_has_key(GtkPrintSettings * settings,
					       const char *);
    extern gboolean gtk_print_settings_load_file(GtkPrintSettings *
						 settings, const char *,
						 GError * *);
    extern gboolean gtk_print_settings_load_key_file(GtkPrintSettings *
						     settings, GKeyFile *,
						     const char *,
						     GError * *);
    extern GtkPrintSettings *gtk_print_settings_new(void);
    extern GtkPrintSettings *gtk_print_settings_new_from_file(const char
							      *file_name,
							      GError * *);
    extern GtkPrintSettings *gtk_print_settings_new_from_key_file(GKeyFile
								  *
								  key_file,
								  const
								  char *,
								  GError *
								  *);
    extern void gtk_print_settings_set(GtkPrintSettings * settings,
				       const char *, const char *);
    extern void gtk_print_settings_set_bool(GtkPrintSettings * settings,
					    const char *, gboolean);
    extern void gtk_print_settings_set_collate(GtkPrintSettings * settings,
					       gboolean);
    extern void gtk_print_settings_set_default_source(GtkPrintSettings *
						      settings,
						      const char *);
    extern void gtk_print_settings_set_dither(GtkPrintSettings * settings,
					      const char *);
    extern void gtk_print_settings_set_double(GtkPrintSettings * settings,
					      const char *, gdouble);
    extern void gtk_print_settings_set_duplex(GtkPrintSettings * settings,
					      GtkPrintDuplex);
    extern void gtk_print_settings_set_finishings(GtkPrintSettings *
						  settings, const char *);
    extern void gtk_print_settings_set_int(GtkPrintSettings * settings,
					   const char *, gint);
    extern void gtk_print_settings_set_length(GtkPrintSettings * settings,
					      const char *, gdouble,
					      GtkUnit);
    extern void gtk_print_settings_set_media_type(GtkPrintSettings *
						  settings, const char *);
    extern void gtk_print_settings_set_n_copies(GtkPrintSettings *
						settings, gint);
    extern void gtk_print_settings_set_number_up(GtkPrintSettings *
						 settings, gint);
    extern void gtk_print_settings_set_number_up_layout(GtkPrintSettings *
							settings,
							GtkNumberUpLayout);
    extern void gtk_print_settings_set_orientation(GtkPrintSettings *
						   settings,
						   GtkPageOrientation);
    extern void gtk_print_settings_set_output_bin(GtkPrintSettings *
						  settings, const char *);
    extern void gtk_print_settings_set_page_ranges(GtkPrintSettings *
						   settings,
						   GtkPageRange *, gint);
    extern void gtk_print_settings_set_page_set(GtkPrintSettings *
						settings, GtkPageSet);
    extern void gtk_print_settings_set_paper_height(GtkPrintSettings *
						    settings, gdouble,
						    GtkUnit);
    extern void gtk_print_settings_set_paper_size(GtkPrintSettings *
						  settings,
						  GtkPaperSize *);
    extern void gtk_print_settings_set_paper_width(GtkPrintSettings *
						   settings, gdouble,
						   GtkUnit);
    extern void gtk_print_settings_set_print_pages(GtkPrintSettings *
						   settings,
						   GtkPrintPages);
    extern void gtk_print_settings_set_printer(GtkPrintSettings * settings,
					       const char *);
    extern void gtk_print_settings_set_printer_lpi(GtkPrintSettings *
						   settings, gdouble);
    extern void gtk_print_settings_set_quality(GtkPrintSettings * settings,
					       GtkPrintQuality);
    extern void gtk_print_settings_set_resolution(GtkPrintSettings *
						  settings, gint);
    extern void gtk_print_settings_set_resolution_xy(GtkPrintSettings *
						     settings, gint, gint);
    extern void gtk_print_settings_set_reverse(GtkPrintSettings * settings,
					       gboolean);
    extern void gtk_print_settings_set_scale(GtkPrintSettings * settings,
					     gdouble);
    extern void gtk_print_settings_set_use_color(GtkPrintSettings *
						 settings, gboolean);
    extern gboolean gtk_print_settings_to_file(GtkPrintSettings * settings,
					       const char *, GError * *);
    extern void gtk_print_settings_to_key_file(GtkPrintSettings * settings,
					       GKeyFile *, const char *);
    extern void gtk_print_settings_unset(GtkPrintSettings * settings,
					 const char *);
    extern GType gtk_print_status_get_type(void);
    extern PangoEllipsizeMode gtk_progress_bar_get_ellipsize(GtkProgressBar
							     * pbar);
    extern gdouble gtk_progress_bar_get_fraction(GtkProgressBar * pbar);
    extern gboolean gtk_progress_bar_get_inverted(GtkProgressBar * pbar);
    extern gdouble gtk_progress_bar_get_pulse_step(GtkProgressBar * pbar);
    extern gboolean gtk_progress_bar_get_show_text(GtkProgressBar * pbar);
    extern const char *gtk_progress_bar_get_text(GtkProgressBar * pbar);
    extern GType gtk_progress_bar_get_type(void);
    extern GtkWidget *gtk_progress_bar_new(void);
    extern void gtk_progress_bar_pulse(GtkProgressBar * pbar);
    extern void gtk_progress_bar_set_ellipsize(GtkProgressBar * pbar,
					       PangoEllipsizeMode);
    extern void gtk_progress_bar_set_fraction(GtkProgressBar * pbar,
					      gdouble);
    extern void gtk_progress_bar_set_inverted(GtkProgressBar * pbar,
					      gboolean);
    extern void gtk_progress_bar_set_pulse_step(GtkProgressBar * pbar,
						gdouble);
    extern void gtk_progress_bar_set_show_text(GtkProgressBar * pbar,
					       gboolean);
    extern void gtk_progress_bar_set_text(GtkProgressBar * pbar,
					  const char *);
    extern void gtk_propagate_event(GtkWidget * widget, GdkEvent *);
    extern gint gtk_radio_action_get_current_value(GtkRadioAction *
						   action);
    extern GSList *gtk_radio_action_get_group(GtkRadioAction * action);
    extern GType gtk_radio_action_get_type(void);
    extern void gtk_radio_action_join_group(GtkRadioAction * action,
					    GtkRadioAction *);
    extern GtkRadioAction *gtk_radio_action_new(const char *name,
						const char *, const char *,
						const char *, gint);
    extern void gtk_radio_action_set_current_value(GtkRadioAction * action,
						   gint);
    extern void gtk_radio_action_set_group(GtkRadioAction * action,
					   GSList *);
    extern GSList *gtk_radio_button_get_group(GtkRadioButton *
					      radio_button);
    extern GType gtk_radio_button_get_type(void);
    extern void gtk_radio_button_join_group(GtkRadioButton * radio_button,
					    GtkRadioButton *);
    extern GtkWidget *gtk_radio_button_new(GSList * group);
    extern GtkWidget *gtk_radio_button_new_from_widget(GtkRadioButton *
						       radio_group_member);
    extern GtkWidget *gtk_radio_button_new_with_label(GSList * group,
						      const char *);
    extern GtkWidget
	*gtk_radio_button_new_with_label_from_widget(GtkRadioButton *
						     radio_group_member,
						     const char *);
    extern GtkWidget *gtk_radio_button_new_with_mnemonic(GSList * group,
							 const char *);
    extern GtkWidget
	*gtk_radio_button_new_with_mnemonic_from_widget(GtkRadioButton *
							radio_group_member,
							const char *);
    extern void gtk_radio_button_set_group(GtkRadioButton * radio_button,
					   GSList *);
    extern GSList *gtk_radio_menu_item_get_group(GtkRadioMenuItem *
						 radio_menu_item);
    extern GType gtk_radio_menu_item_get_type(void);
    extern GtkWidget *gtk_radio_menu_item_new(GSList * group);
    extern GtkWidget *gtk_radio_menu_item_new_from_widget(GtkRadioMenuItem
							  * group);
    extern GtkWidget *gtk_radio_menu_item_new_with_label(GSList * group,
							 const char *);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_label_from_widget(GtkRadioMenuItem *
							group,
							const char *);
    extern GtkWidget *gtk_radio_menu_item_new_with_mnemonic(GSList * group,
							    const char *);
    extern GtkWidget
	*gtk_radio_menu_item_new_with_mnemonic_from_widget(GtkRadioMenuItem
							   * group,
							   const char *);
    extern void gtk_radio_menu_item_set_group(GtkRadioMenuItem *
					      radio_menu_item, GSList *);
    extern GSList *gtk_radio_tool_button_get_group(GtkRadioToolButton *
						   button);
    extern GType gtk_radio_tool_button_get_type(void);
    extern GtkToolItem *gtk_radio_tool_button_new(GSList * group);
    extern GtkToolItem *gtk_radio_tool_button_new_from_stock(GSList *
							     group,
							     const char *);
    extern GtkToolItem
	*gtk_radio_tool_button_new_from_widget(GtkRadioToolButton * group);
    extern GtkToolItem
	*gtk_radio_tool_button_new_with_stock_from_widget
	(GtkRadioToolButton * group, const char *);
    extern void gtk_radio_tool_button_set_group(GtkRadioToolButton *
						button, GSList *);
    extern GtkAdjustment *gtk_range_get_adjustment(GtkRange * range);
    extern gdouble gtk_range_get_fill_level(GtkRange * range);
    extern gboolean gtk_range_get_flippable(GtkRange * range);
    extern gboolean gtk_range_get_inverted(GtkRange * range);
    extern GtkSensitivityType
	gtk_range_get_lower_stepper_sensitivity(GtkRange * range);
    extern gint gtk_range_get_min_slider_size(GtkRange * range);
    extern void gtk_range_get_range_rect(GtkRange * range, GdkRectangle *);
    extern gboolean gtk_range_get_restrict_to_fill_level(GtkRange * range);
    extern gint gtk_range_get_round_digits(GtkRange * range);
    extern gboolean gtk_range_get_show_fill_level(GtkRange * range);
    extern void gtk_range_get_slider_range(GtkRange * range, gint *,
					   gint *);
    extern gboolean gtk_range_get_slider_size_fixed(GtkRange * range);
    extern GType gtk_range_get_type(void);
    extern GtkSensitivityType
	gtk_range_get_upper_stepper_sensitivity(GtkRange * range);
    extern gdouble gtk_range_get_value(GtkRange * range);
    extern void gtk_range_set_adjustment(GtkRange * range,
					 GtkAdjustment *);
    extern void gtk_range_set_fill_level(GtkRange * range, gdouble);
    extern void gtk_range_set_flippable(GtkRange * range, gboolean);
    extern void gtk_range_set_increments(GtkRange * range, gdouble,
					 gdouble);
    extern void gtk_range_set_inverted(GtkRange * range, gboolean);
    extern void gtk_range_set_lower_stepper_sensitivity(GtkRange * range,
							GtkSensitivityType);
    extern void gtk_range_set_min_slider_size(GtkRange * range, gint);
    extern void gtk_range_set_range(GtkRange * range, gdouble, gdouble);
    extern void gtk_range_set_restrict_to_fill_level(GtkRange * range,
						     gboolean);
    extern void gtk_range_set_round_digits(GtkRange * range, gint);
    extern void gtk_range_set_show_fill_level(GtkRange * range, gboolean);
    extern void gtk_range_set_slider_size_fixed(GtkRange * range,
						gboolean);
    extern void gtk_range_set_upper_stepper_sensitivity(GtkRange * range,
							GtkSensitivityType);
    extern void gtk_range_set_value(GtkRange * range, gdouble);
    extern GType gtk_rc_flags_get_type(void);
    extern gboolean gtk_rc_property_parse_border(const GParamSpec * pspec,
						 const GString *,
						 GValue *);
    extern gboolean gtk_rc_property_parse_color(const GParamSpec * pspec,
						const GString *, GValue *);
    extern gboolean gtk_rc_property_parse_enum(const GParamSpec * pspec,
					       const GString *, GValue *);
    extern gboolean gtk_rc_property_parse_flags(const GParamSpec * pspec,
						const GString *, GValue *);
    extern gboolean gtk_rc_property_parse_requisition(const GParamSpec *
						      pspec,
						      const GString *,
						      GValue *);
    extern GType gtk_rc_token_type_get_type(void);
    extern gboolean gtk_recent_action_get_show_numbers(GtkRecentAction *
						       action);
    extern GType gtk_recent_action_get_type(void);
    extern GtkAction *gtk_recent_action_new(const char *name, const char *,
					    const char *, const char *);
    extern GtkAction *gtk_recent_action_new_for_manager(const char *name,
							const char *,
							const char *,
							const char *,
							GtkRecentManager
							*);
    extern void gtk_recent_action_set_show_numbers(GtkRecentAction *
						   action, gboolean);
    extern void gtk_recent_chooser_add_filter(GtkRecentChooser * chooser,
					      GtkRecentFilter *);
    extern GType gtk_recent_chooser_dialog_get_type(void);
    extern GtkWidget *gtk_recent_chooser_dialog_new(const char *title,
						    GtkWindow *,
						    const char *, ...);
    extern GtkWidget *gtk_recent_chooser_dialog_new_for_manager(const char
								*title,
								GtkWindow
								*,
								GtkRecentManager
								*,
								const char
								*, ...);
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
					       gsize *);
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
						 menu, gboolean);
    extern void gtk_recent_chooser_remove_filter(GtkRecentChooser *
						 chooser,
						 GtkRecentFilter *);
    extern void gtk_recent_chooser_select_all(GtkRecentChooser * chooser);
    extern gboolean gtk_recent_chooser_select_uri(GtkRecentChooser *
						  chooser, const char *,
						  GError * *);
    extern gboolean gtk_recent_chooser_set_current_uri(GtkRecentChooser *
						       chooser,
						       const char *,
						       GError * *);
    extern void gtk_recent_chooser_set_filter(GtkRecentChooser * chooser,
					      GtkRecentFilter *);
    extern void gtk_recent_chooser_set_limit(GtkRecentChooser * chooser,
					     gint);
    extern void gtk_recent_chooser_set_local_only(GtkRecentChooser *
						  chooser, gboolean);
    extern void gtk_recent_chooser_set_select_multiple(GtkRecentChooser *
						       chooser, gboolean);
    extern void gtk_recent_chooser_set_show_icons(GtkRecentChooser *
						  chooser, gboolean);
    extern void gtk_recent_chooser_set_show_not_found(GtkRecentChooser *
						      chooser, gboolean);
    extern void gtk_recent_chooser_set_show_private(GtkRecentChooser *
						    chooser, gboolean);
    extern void gtk_recent_chooser_set_show_tips(GtkRecentChooser *
						 chooser, gboolean);
    extern void gtk_recent_chooser_set_sort_func(GtkRecentChooser *
						 chooser,
						 GtkRecentSortFunc,
						 gpointer, GDestroyNotify);
    extern void gtk_recent_chooser_set_sort_type(GtkRecentChooser *
						 chooser,
						 GtkRecentSortType);
    extern void gtk_recent_chooser_unselect_all(GtkRecentChooser *
						chooser);
    extern void gtk_recent_chooser_unselect_uri(GtkRecentChooser * chooser,
						const char *);
    extern GType gtk_recent_chooser_widget_get_type(void);
    extern GtkWidget *gtk_recent_chooser_widget_new(void);
    extern GtkWidget
	*gtk_recent_chooser_widget_new_for_manager(GtkRecentManager *
						   manager);
    extern void gtk_recent_filter_add_age(GtkRecentFilter * filter, gint);
    extern void gtk_recent_filter_add_application(GtkRecentFilter * filter,
						  const char *);
    extern void gtk_recent_filter_add_custom(GtkRecentFilter * filter,
					     GtkRecentFilterFlags,
					     GtkRecentFilterFunc, gpointer,
					     GDestroyNotify);
    extern void gtk_recent_filter_add_group(GtkRecentFilter * filter,
					    const char *);
    extern void gtk_recent_filter_add_mime_type(GtkRecentFilter * filter,
						const char *);
    extern void gtk_recent_filter_add_pattern(GtkRecentFilter * filter,
					      const char *);
    extern void gtk_recent_filter_add_pixbuf_formats(GtkRecentFilter *
						     filter);
    extern gboolean gtk_recent_filter_filter(GtkRecentFilter * filter,
					     const GtkRecentFilterInfo *);
    extern GType gtk_recent_filter_flags_get_type(void);
    extern const char *gtk_recent_filter_get_name(GtkRecentFilter *
						  filter);
    extern GtkRecentFilterFlags
	gtk_recent_filter_get_needed(GtkRecentFilter * filter);
    extern GType gtk_recent_filter_get_type(void);
    extern GtkRecentFilter *gtk_recent_filter_new(void);
    extern void gtk_recent_filter_set_name(GtkRecentFilter * filter,
					   const char *);
    extern GAppInfo *gtk_recent_info_create_app_info(GtkRecentInfo * info,
						     const char *,
						     GError * *);
    extern gboolean gtk_recent_info_exists(GtkRecentInfo * info);
    extern time_t gtk_recent_info_get_added(GtkRecentInfo * info);
    extern gint gtk_recent_info_get_age(GtkRecentInfo * info);
    extern gboolean gtk_recent_info_get_application_info(GtkRecentInfo *
							 info,
							 const char *,
							 const char **,
							 guint *,
							 time_t *);
    extern gchar **gtk_recent_info_get_applications(GtkRecentInfo * info,
						    gsize *);
    extern const char *gtk_recent_info_get_description(GtkRecentInfo *
						       info);
    extern const char *gtk_recent_info_get_display_name(GtkRecentInfo *
							info);
    extern GIcon *gtk_recent_info_get_gicon(GtkRecentInfo * info);
    extern gchar **gtk_recent_info_get_groups(GtkRecentInfo * info,
					      gsize *);
    extern GdkPixbuf *gtk_recent_info_get_icon(GtkRecentInfo * info, gint);
    extern const char *gtk_recent_info_get_mime_type(GtkRecentInfo * info);
    extern time_t gtk_recent_info_get_modified(GtkRecentInfo * info);
    extern gboolean gtk_recent_info_get_private_hint(GtkRecentInfo * info);
    extern gchar *gtk_recent_info_get_short_name(GtkRecentInfo * info);
    extern GType gtk_recent_info_get_type(void);
    extern const char *gtk_recent_info_get_uri(GtkRecentInfo * info);
    extern gchar *gtk_recent_info_get_uri_display(GtkRecentInfo * info);
    extern time_t gtk_recent_info_get_visited(GtkRecentInfo * info);
    extern gboolean gtk_recent_info_has_application(GtkRecentInfo * info,
						    const char *);
    extern gboolean gtk_recent_info_has_group(GtkRecentInfo * info,
					      const char *);
    extern gboolean gtk_recent_info_is_local(GtkRecentInfo * info);
    extern gchar *gtk_recent_info_last_application(GtkRecentInfo * info);
    extern gboolean gtk_recent_info_match(GtkRecentInfo * info_a,
					  GtkRecentInfo *);
    extern GtkRecentInfo *gtk_recent_info_ref(GtkRecentInfo * info);
    extern void gtk_recent_info_unref(GtkRecentInfo * info);
    extern gboolean gtk_recent_manager_add_full(GtkRecentManager * manager,
						const char *,
						const GtkRecentData *);
    extern gboolean gtk_recent_manager_add_item(GtkRecentManager * manager,
						const char *);
    extern GType gtk_recent_manager_error_get_type(void);
    extern GQuark gtk_recent_manager_error_quark(void);
    extern GtkRecentManager *gtk_recent_manager_get_default(void);
    extern GList *gtk_recent_manager_get_items(GtkRecentManager * manager);
    extern GType gtk_recent_manager_get_type(void);
    extern gboolean gtk_recent_manager_has_item(GtkRecentManager * manager,
						const char *);
    extern GtkRecentInfo *gtk_recent_manager_lookup_item(GtkRecentManager *
							 manager,
							 const char *,
							 GError * *);
    extern gboolean gtk_recent_manager_move_item(GtkRecentManager *
						 manager, const char *,
						 const char *, GError * *);
    extern GtkRecentManager *gtk_recent_manager_new(void);
    extern gint gtk_recent_manager_purge_items(GtkRecentManager * manager,
					       GError * *);
    extern gboolean gtk_recent_manager_remove_item(GtkRecentManager *
						   manager, const char *,
						   GError * *);
    extern GType gtk_recent_sort_type_get_type(void);
    extern GType gtk_region_flags_get_type(void);
    extern GType gtk_relief_style_get_type(void);
    extern void gtk_render_activity(GtkStyleContext * context, cairo_t *,
				    gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_arrow(GtkStyleContext * context, cairo_t *,
				 gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_background(GtkStyleContext * context, cairo_t *,
				      gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_check(GtkStyleContext * context, cairo_t *,
				 gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_expander(GtkStyleContext * context, cairo_t *,
				    gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_extension(GtkStyleContext * context, cairo_t *,
				     gdouble, gdouble, gdouble, gdouble,
				     GtkPositionType);
    extern void gtk_render_focus(GtkStyleContext * context, cairo_t *,
				 gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_frame(GtkStyleContext * context, cairo_t *,
				 gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_frame_gap(GtkStyleContext * context, cairo_t *,
				     gdouble, gdouble, gdouble, gdouble,
				     GtkPositionType, gdouble, gdouble);
    extern void gtk_render_handle(GtkStyleContext * context, cairo_t *,
				  gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_icon(GtkStyleContext * context, cairo_t *,
				GdkPixbuf *, gdouble, gdouble);
    extern GdkPixbuf *gtk_render_icon_pixbuf(GtkStyleContext * context,
					     const GtkIconSource * source,
					     GtkIconSize size);
    extern void gtk_render_insertion_cursor(GtkStyleContext * context,
					    cairo_t *, gdouble, gdouble,
					    PangoLayout *, int,
					    PangoDirection);
    extern void gtk_render_layout(GtkStyleContext * context, cairo_t *,
				  gdouble, gdouble, PangoLayout *);
    extern void gtk_render_line(GtkStyleContext * context, cairo_t *,
				gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_option(GtkStyleContext * context, cairo_t *,
				  gdouble, gdouble, gdouble, gdouble);
    extern void gtk_render_slider(GtkStyleContext * context, cairo_t *,
				  gdouble, gdouble, gdouble, gdouble,
				  GtkOrientation);
    extern GtkRequisition *gtk_requisition_copy(const GtkRequisition *
						requisition);
    extern void gtk_requisition_free(GtkRequisition * requisition);
    extern GType gtk_requisition_get_type(void);
    extern GtkRequisition *gtk_requisition_new(void);
    extern GType gtk_resize_mode_get_type(void);
    extern GType gtk_response_type_get_type(void);
    extern void gtk_rgb_to_hsv(gdouble r, gdouble, gdouble, gdouble *,
			       gdouble *, gdouble *);
    extern void gtk_scale_add_mark(GtkScale * scale, gdouble,
				   GtkPositionType, const char *);
    extern GtkAdjustment *gtk_scale_button_get_adjustment(GtkScaleButton *
							  button);
    extern GtkWidget *gtk_scale_button_get_minus_button(GtkScaleButton *
							button);
    extern GtkWidget *gtk_scale_button_get_plus_button(GtkScaleButton *
						       button);
    extern GtkWidget *gtk_scale_button_get_popup(GtkScaleButton * button);
    extern GType gtk_scale_button_get_type(void);
    extern gdouble gtk_scale_button_get_value(GtkScaleButton * button);
    extern GtkWidget *gtk_scale_button_new(GtkIconSize size, gdouble,
					   gdouble, gdouble,
					   const char **);
    extern void gtk_scale_button_set_adjustment(GtkScaleButton * button,
						GtkAdjustment *);
    extern void gtk_scale_button_set_icons(GtkScaleButton * button,
					   const char **);
    extern void gtk_scale_button_set_value(GtkScaleButton * button,
					   gdouble);
    extern void gtk_scale_clear_marks(GtkScale * scale);
    extern gint gtk_scale_get_digits(GtkScale * scale);
    extern gboolean gtk_scale_get_draw_value(GtkScale * scale);
    extern gboolean gtk_scale_get_has_origin(GtkScale * scale);
    extern PangoLayout *gtk_scale_get_layout(GtkScale * scale);
    extern void gtk_scale_get_layout_offsets(GtkScale * scale, gint *,
					     gint *);
    extern GType gtk_scale_get_type(void);
    extern GtkPositionType gtk_scale_get_value_pos(GtkScale * scale);
    extern GtkWidget *gtk_scale_new(GtkOrientation orientation,
				    GtkAdjustment *);
    extern GtkWidget *gtk_scale_new_with_range(GtkOrientation orientation,
					       gdouble, gdouble, gdouble);
    extern void gtk_scale_set_digits(GtkScale * scale, gint);
    extern void gtk_scale_set_draw_value(GtkScale * scale, gboolean);
    extern void gtk_scale_set_has_origin(GtkScale * scale, gboolean);
    extern void gtk_scale_set_value_pos(GtkScale * scale, GtkPositionType);
    extern GType gtk_scroll_step_get_type(void);
    extern GType gtk_scroll_type_get_type(void);
    extern GtkAdjustment *gtk_scrollable_get_hadjustment(GtkScrollable *
							 scrollable);
    extern GtkScrollablePolicy
	gtk_scrollable_get_hscroll_policy(GtkScrollable * scrollable);
    extern GType gtk_scrollable_get_type(void);
    extern GtkAdjustment *gtk_scrollable_get_vadjustment(GtkScrollable *
							 scrollable);
    extern GtkScrollablePolicy
	gtk_scrollable_get_vscroll_policy(GtkScrollable * scrollable);
    extern GType gtk_scrollable_policy_get_type(void);
    extern void gtk_scrollable_set_hadjustment(GtkScrollable * scrollable,
					       GtkAdjustment *);
    extern void gtk_scrollable_set_hscroll_policy(GtkScrollable *
						  scrollable,
						  GtkScrollablePolicy);
    extern void gtk_scrollable_set_vadjustment(GtkScrollable * scrollable,
					       GtkAdjustment *);
    extern void gtk_scrollable_set_vscroll_policy(GtkScrollable *
						  scrollable,
						  GtkScrollablePolicy);
    extern GType gtk_scrollbar_get_type(void);
    extern GtkWidget *gtk_scrollbar_new(GtkOrientation orientation,
					GtkAdjustment *);
    extern void gtk_scrolled_window_add_with_viewport(GtkScrolledWindow *
						      scrolled_window,
						      GtkWidget *);
    extern gboolean
	gtk_scrolled_window_get_capture_button_press(GtkScrolledWindow *
						     scrolled_window);
    extern GtkAdjustment
	*gtk_scrolled_window_get_hadjustment(GtkScrolledWindow *
					     scrolled_window);
    extern GtkWidget *gtk_scrolled_window_get_hscrollbar(GtkScrolledWindow
							 *
							 scrolled_window);
    extern gboolean
	gtk_scrolled_window_get_kinetic_scrolling(GtkScrolledWindow *
						  scrolled_window);
    extern gint
	gtk_scrolled_window_get_min_content_height(GtkScrolledWindow *
						   scrolled_window);
    extern gint gtk_scrolled_window_get_min_content_width(GtkScrolledWindow
							  *
							  scrolled_window);
    extern GtkCornerType
	gtk_scrolled_window_get_placement(GtkScrolledWindow *
					  scrolled_window);
    extern void gtk_scrolled_window_get_policy(GtkScrolledWindow *
					       scrolled_window,
					       GtkPolicyType *,
					       GtkPolicyType *);
    extern GtkShadowType
	gtk_scrolled_window_get_shadow_type(GtkScrolledWindow *
					    scrolled_window);
    extern GType gtk_scrolled_window_get_type(void);
    extern GtkAdjustment
	*gtk_scrolled_window_get_vadjustment(GtkScrolledWindow *
					     scrolled_window);
    extern GtkWidget *gtk_scrolled_window_get_vscrollbar(GtkScrolledWindow
							 *
							 scrolled_window);
    extern GtkWidget *gtk_scrolled_window_new(GtkAdjustment * hadjustment,
					      GtkAdjustment *);
    extern void
	gtk_scrolled_window_set_capture_button_press(GtkScrolledWindow *
						     scrolled_window,
						     gboolean);
    extern void gtk_scrolled_window_set_hadjustment(GtkScrolledWindow *
						    scrolled_window,
						    GtkAdjustment *);
    extern void gtk_scrolled_window_set_kinetic_scrolling(GtkScrolledWindow
							  *
							  scrolled_window,
							  gboolean);
    extern void
	gtk_scrolled_window_set_min_content_height(GtkScrolledWindow *
						   scrolled_window, gint);
    extern void gtk_scrolled_window_set_min_content_width(GtkScrolledWindow
							  *
							  scrolled_window,
							  gint);
    extern void gtk_scrolled_window_set_placement(GtkScrolledWindow *
						  scrolled_window,
						  GtkCornerType);
    extern void gtk_scrolled_window_set_policy(GtkScrolledWindow *
					       scrolled_window,
					       GtkPolicyType,
					       GtkPolicyType);
    extern void gtk_scrolled_window_set_shadow_type(GtkScrolledWindow *
						    scrolled_window,
						    GtkShadowType);
    extern void gtk_scrolled_window_set_vadjustment(GtkScrolledWindow *
						    scrolled_window,
						    GtkAdjustment *);
    extern void gtk_scrolled_window_unset_placement(GtkScrolledWindow *
						    scrolled_window);
    extern GType gtk_search_entry_get_type(void);
    extern GtkWidget *gtk_search_entry_new(void);
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
    extern GtkSelectionData *gtk_selection_data_copy(const GtkSelectionData
						     * data);
    extern void gtk_selection_data_free(GtkSelectionData * data);
    extern const unsigned char *gtk_selection_data_get_data(const
							    GtkSelectionData
							    *
							    selection_data);
    extern GdkAtom gtk_selection_data_get_data_type(const GtkSelectionData
						    * selection_data);
    extern const unsigned char
	*gtk_selection_data_get_data_with_length(const GtkSelectionData *
						 selection_data, gint *);
    extern GdkDisplay *gtk_selection_data_get_display(const
						      GtkSelectionData *
						      selection_data);
    extern gint gtk_selection_data_get_format(const GtkSelectionData *
					      selection_data);
    extern gint gtk_selection_data_get_length(const GtkSelectionData *
					      selection_data);
    extern GdkPixbuf *gtk_selection_data_get_pixbuf(const GtkSelectionData
						    * selection_data);
    extern GdkAtom gtk_selection_data_get_selection(const GtkSelectionData
						    * selection_data);
    extern GdkAtom gtk_selection_data_get_target(const GtkSelectionData *
						 selection_data);
    extern gboolean gtk_selection_data_get_targets(const GtkSelectionData *
						   selection_data,
						   GdkAtom * *, gint *);
    extern guchar *gtk_selection_data_get_text(const GtkSelectionData *
					       selection_data);
    extern GType gtk_selection_data_get_type(void);
    extern gchar **gtk_selection_data_get_uris(const GtkSelectionData *
					       selection_data);
    extern void gtk_selection_data_set(GtkSelectionData * selection_data,
				       GdkAtom type, gint format,
				       const guchar * data, gint length);
    extern gboolean gtk_selection_data_set_pixbuf(GtkSelectionData *
						  selection_data,
						  GdkPixbuf *);
    extern gboolean gtk_selection_data_set_text(GtkSelectionData *
						selection_data,
						const char *, gint);
    extern gboolean gtk_selection_data_set_uris(GtkSelectionData *
						selection_data, gchar * *);
    extern gboolean gtk_selection_data_targets_include_image(const
							     GtkSelectionData
							     *
							     selection_data,
							     gboolean);
    extern gboolean gtk_selection_data_targets_include_rich_text(const
								 GtkSelectionData
								 *
								 selection_data,
								 GtkTextBuffer
								 *);
    extern gboolean gtk_selection_data_targets_include_text(const
							    GtkSelectionData
							    *
							    selection_data);
    extern gboolean gtk_selection_data_targets_include_uri(const
							   GtkSelectionData
							   *
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
    extern GType gtk_sensitivity_type_get_type(void);
    extern GType gtk_separator_get_type(void);
    extern GType gtk_separator_menu_item_get_type(void);
    extern GtkWidget *gtk_separator_menu_item_new(void);
    extern GtkWidget *gtk_separator_new(GtkOrientation orientation);
    extern gboolean gtk_separator_tool_item_get_draw(GtkSeparatorToolItem *
						     item);
    extern GType gtk_separator_tool_item_get_type(void);
    extern GtkToolItem *gtk_separator_tool_item_new(void);
    extern void gtk_separator_tool_item_set_draw(GtkSeparatorToolItem *
						 item, gboolean);
    extern void gtk_set_debug_flags(guint flags);
    extern GtkSettings *gtk_settings_get_default(void);
    extern GtkSettings *gtk_settings_get_for_screen(GdkScreen * screen);
    extern GType gtk_settings_get_type(void);
    extern void gtk_settings_install_property(GParamSpec * pspec);
    extern void gtk_settings_install_property_parser(GParamSpec * pspec,
						     GtkRcPropertyParser);
    extern void gtk_settings_set_double_property(GtkSettings * settings,
						 const char *, gdouble,
						 const char *);
    extern void gtk_settings_set_long_property(GtkSettings * settings,
					       const char *, glong,
					       const char *);
    extern void gtk_settings_set_property_value(GtkSettings * settings,
						const char *,
						const GtkSettingsValue *);
    extern void gtk_settings_set_string_property(GtkSettings * settings,
						 const char *,
						 const char *,
						 const char *);
    extern GType gtk_shadow_type_get_type(void);
    extern void gtk_show_about_dialog(GtkWindow * parent, const char *,
				      ...);
    extern gboolean gtk_show_uri(GdkScreen * screen, const char *, guint32,
				 GError * *);
    extern void gtk_size_group_add_widget(GtkSizeGroup * size_group,
					  GtkWidget *);
    extern gboolean gtk_size_group_get_ignore_hidden(GtkSizeGroup *
						     size_group);
    extern GtkSizeGroupMode gtk_size_group_get_mode(GtkSizeGroup *
						    size_group);
    extern GType gtk_size_group_get_type(void);
    extern GSList *gtk_size_group_get_widgets(GtkSizeGroup * size_group);
    extern GType gtk_size_group_mode_get_type(void);
    extern GtkSizeGroup *gtk_size_group_new(GtkSizeGroupMode mode);
    extern void gtk_size_group_remove_widget(GtkSizeGroup * size_group,
					     GtkWidget *);
    extern void gtk_size_group_set_ignore_hidden(GtkSizeGroup * size_group,
						 gboolean);
    extern void gtk_size_group_set_mode(GtkSizeGroup * size_group,
					GtkSizeGroupMode);
    extern GType gtk_size_request_mode_get_type(void);
    extern void gtk_socket_add_id(GtkSocket * socket_, Window);
    extern Window gtk_socket_get_id(GtkSocket * socket_);
    extern GdkWindow *gtk_socket_get_plug_window(GtkSocket * socket_);
    extern GType gtk_socket_get_type(void);
    extern GtkWidget *gtk_socket_new(void);
    extern GType gtk_sort_type_get_type(void);
    extern void gtk_spin_button_configure(GtkSpinButton * spin_button,
					  GtkAdjustment *, gdouble, guint);
    extern GtkAdjustment *gtk_spin_button_get_adjustment(GtkSpinButton *
							 spin_button);
    extern guint gtk_spin_button_get_digits(GtkSpinButton * spin_button);
    extern void gtk_spin_button_get_increments(GtkSpinButton * spin_button,
					       gdouble *, gdouble *);
    extern gboolean gtk_spin_button_get_numeric(GtkSpinButton *
						spin_button);
    extern void gtk_spin_button_get_range(GtkSpinButton * spin_button,
					  gdouble *, gdouble *);
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
					  gdouble, guint);
    extern GtkWidget *gtk_spin_button_new_with_range(gdouble min, gdouble,
						     gdouble);
    extern void gtk_spin_button_set_adjustment(GtkSpinButton * spin_button,
					       GtkAdjustment *);
    extern void gtk_spin_button_set_digits(GtkSpinButton * spin_button,
					   guint);
    extern void gtk_spin_button_set_increments(GtkSpinButton * spin_button,
					       gdouble, gdouble);
    extern void gtk_spin_button_set_numeric(GtkSpinButton * spin_button,
					    gboolean);
    extern void gtk_spin_button_set_range(GtkSpinButton * spin_button,
					  gdouble, gdouble);
    extern void gtk_spin_button_set_snap_to_ticks(GtkSpinButton *
						  spin_button, gboolean);
    extern void gtk_spin_button_set_update_policy(GtkSpinButton *
						  spin_button,
						  GtkSpinButtonUpdatePolicy);
    extern void gtk_spin_button_set_value(GtkSpinButton * spin_button,
					  gdouble);
    extern void gtk_spin_button_set_wrap(GtkSpinButton * spin_button,
					 gboolean);
    extern void gtk_spin_button_spin(GtkSpinButton * spin_button,
				     GtkSpinType, gdouble);
    extern void gtk_spin_button_update(GtkSpinButton * spin_button);
    extern GType gtk_spin_button_update_policy_get_type(void);
    extern GType gtk_spin_type_get_type(void);
    extern GType gtk_spinner_get_type(void);
    extern GtkWidget *gtk_spinner_new(void);
    extern void gtk_spinner_start(GtkSpinner * spinner);
    extern void gtk_spinner_stop(GtkSpinner * spinner);
    extern GType gtk_state_flags_get_type(void);
    extern GType gtk_state_type_get_type(void);
    extern gboolean gtk_status_icon_get_geometry(GtkStatusIcon *
						 status_icon,
						 GdkScreen * *,
						 GdkRectangle *,
						 GtkOrientation *);
    extern GIcon *gtk_status_icon_get_gicon(GtkStatusIcon * status_icon);
    extern gboolean gtk_status_icon_get_has_tooltip(GtkStatusIcon *
						    status_icon);
    extern const char *gtk_status_icon_get_icon_name(GtkStatusIcon *
						     status_icon);
    extern GdkPixbuf *gtk_status_icon_get_pixbuf(GtkStatusIcon *
						 status_icon);
    extern GdkScreen *gtk_status_icon_get_screen(GtkStatusIcon *
						 status_icon);
    extern gint gtk_status_icon_get_size(GtkStatusIcon * status_icon);
    extern const char *gtk_status_icon_get_stock(GtkStatusIcon *
						 status_icon);
    extern GtkImageType gtk_status_icon_get_storage_type(GtkStatusIcon *
							 status_icon);
    extern const char *gtk_status_icon_get_title(GtkStatusIcon *
						 status_icon);
    extern gchar *gtk_status_icon_get_tooltip_markup(GtkStatusIcon *
						     status_icon);
    extern gchar *gtk_status_icon_get_tooltip_text(GtkStatusIcon *
						   status_icon);
    extern GType gtk_status_icon_get_type(void);
    extern gboolean gtk_status_icon_get_visible(GtkStatusIcon *
						status_icon);
    extern guint32 gtk_status_icon_get_x11_window_id(GtkStatusIcon *
						     status_icon);
    extern gboolean gtk_status_icon_is_embedded(GtkStatusIcon *
						status_icon);
    extern GtkStatusIcon *gtk_status_icon_new(void);
    extern GtkStatusIcon *gtk_status_icon_new_from_file(const char
							*filename);
    extern GtkStatusIcon *gtk_status_icon_new_from_gicon(GIcon * icon);
    extern GtkStatusIcon *gtk_status_icon_new_from_icon_name(const char
							     *icon_name);
    extern GtkStatusIcon *gtk_status_icon_new_from_pixbuf(GdkPixbuf *
							  pixbuf);
    extern GtkStatusIcon *gtk_status_icon_new_from_stock(const char
							 *stock_id);
    extern void gtk_status_icon_position_menu(GtkMenu * menu, gint *,
					      gint *, gboolean *,
					      gpointer);
    extern void gtk_status_icon_set_from_file(GtkStatusIcon * status_icon,
					      const char *);
    extern void gtk_status_icon_set_from_gicon(GtkStatusIcon * status_icon,
					       GIcon *);
    extern void gtk_status_icon_set_from_icon_name(GtkStatusIcon *
						   status_icon,
						   const char *);
    extern void gtk_status_icon_set_from_pixbuf(GtkStatusIcon *
						status_icon, GdkPixbuf *);
    extern void gtk_status_icon_set_from_stock(GtkStatusIcon * status_icon,
					       const char *);
    extern void gtk_status_icon_set_has_tooltip(GtkStatusIcon *
						status_icon, gboolean);
    extern void gtk_status_icon_set_name(GtkStatusIcon * status_icon,
					 const char *);
    extern void gtk_status_icon_set_screen(GtkStatusIcon * status_icon,
					   GdkScreen *);
    extern void gtk_status_icon_set_title(GtkStatusIcon * status_icon,
					  const char *);
    extern void gtk_status_icon_set_tooltip_markup(GtkStatusIcon *
						   status_icon,
						   const char *);
    extern void gtk_status_icon_set_tooltip_text(GtkStatusIcon *
						 status_icon,
						 const char *);
    extern void gtk_status_icon_set_visible(GtkStatusIcon * status_icon,
					    gboolean);
    extern guint gtk_statusbar_get_context_id(GtkStatusbar * statusbar,
					      const char *);
    extern GtkWidget *gtk_statusbar_get_message_area(GtkStatusbar *
						     statusbar);
    extern GType gtk_statusbar_get_type(void);
    extern GtkWidget *gtk_statusbar_new(void);
    extern void gtk_statusbar_pop(GtkStatusbar * statusbar, guint);
    extern guint gtk_statusbar_push(GtkStatusbar * statusbar, guint,
				    const char *);
    extern void gtk_statusbar_remove(GtkStatusbar * statusbar, guint,
				     guint);
    extern void gtk_statusbar_remove_all(GtkStatusbar * statusbar, guint);
    extern void gtk_stock_add(const GtkStockItem * items, guint);
    extern void gtk_stock_add_static(const GtkStockItem * items, guint);
    extern GtkStockItem *gtk_stock_item_copy(const GtkStockItem * item);
    extern void gtk_stock_item_free(GtkStockItem * item);
    extern GSList *gtk_stock_list_ids(void);
    extern gboolean gtk_stock_lookup(const char *stock_id, GtkStockItem *);
    extern void gtk_stock_set_translate_func(const char *domain,
					     GtkTranslateFunc, gpointer,
					     GDestroyNotify);
    extern void gtk_style_context_add_class(GtkStyleContext * context,
					    const char *);
    extern void gtk_style_context_add_provider(GtkStyleContext * context,
					       GtkStyleProvider *, guint);
    extern void gtk_style_context_add_provider_for_screen(GdkScreen *
							  screen,
							  GtkStyleProvider
							  *, guint);
    extern void gtk_style_context_add_region(GtkStyleContext * context,
					     const char *, GtkRegionFlags);
    extern void gtk_style_context_cancel_animations(GtkStyleContext *
						    context, gpointer);
    extern void gtk_style_context_get(GtkStyleContext * context,
				      GtkStateFlags, ...);
    extern void gtk_style_context_get_background_color(GtkStyleContext *
						       context,
						       GtkStateFlags,
						       GdkRGBA *);
    extern void gtk_style_context_get_border(GtkStyleContext * context,
					     GtkStateFlags, GtkBorder *);
    extern void gtk_style_context_get_border_color(GtkStyleContext *
						   context, GtkStateFlags,
						   GdkRGBA *);
    extern void gtk_style_context_get_color(GtkStyleContext * context,
					    GtkStateFlags, GdkRGBA *);
    extern GtkTextDirection gtk_style_context_get_direction(GtkStyleContext
							    * context);
    extern const PangoFontDescription
	*gtk_style_context_get_font(GtkStyleContext * context,
				    GtkStateFlags);
    extern GtkJunctionSides
	gtk_style_context_get_junction_sides(GtkStyleContext * context);
    extern void gtk_style_context_get_margin(GtkStyleContext * context,
					     GtkStateFlags, GtkBorder *);
    extern void gtk_style_context_get_padding(GtkStyleContext * context,
					      GtkStateFlags, GtkBorder *);
    extern GtkStyleContext *gtk_style_context_get_parent(GtkStyleContext *
							 context);
    extern const GtkWidgetPath *gtk_style_context_get_path(GtkStyleContext
							   * context);
    extern void gtk_style_context_get_property(GtkStyleContext * context,
					       const char *, GtkStateFlags,
					       GValue *);
    extern GdkScreen *gtk_style_context_get_screen(GtkStyleContext *
						   context);
    extern GtkCssSection *gtk_style_context_get_section(GtkStyleContext *
							context,
							const char *);
    extern GtkStateFlags gtk_style_context_get_state(GtkStyleContext *
						     context);
    extern void gtk_style_context_get_style(GtkStyleContext * context,
					    ...);
    extern void gtk_style_context_get_style_property(GtkStyleContext *
						     context, const char *,
						     GValue *);
    extern void gtk_style_context_get_style_valist(GtkStyleContext *
						   context, va_list);
    extern GType gtk_style_context_get_type(void);
    extern void gtk_style_context_get_valist(GtkStyleContext * context,
					     GtkStateFlags state,
					     va_list var_args);
    extern gboolean gtk_style_context_has_class(GtkStyleContext * context,
						const char *);
    extern gboolean gtk_style_context_has_region(GtkStyleContext * context,
						 const char *,
						 GtkRegionFlags *);
    extern void gtk_style_context_invalidate(GtkStyleContext * context);
    extern GList *gtk_style_context_list_classes(GtkStyleContext *
						 context);
    extern GList *gtk_style_context_list_regions(GtkStyleContext *
						 context);
    extern gboolean gtk_style_context_lookup_color(GtkStyleContext *
						   context, const char *,
						   GdkRGBA *);
    extern GtkIconSet *gtk_style_context_lookup_icon_set(GtkStyleContext *
							 context,
							 const char *);
    extern GtkStyleContext *gtk_style_context_new(void);
    extern void gtk_style_context_notify_state_change(GtkStyleContext *
						      context, GdkWindow *,
						      gpointer,
						      GtkStateType,
						      gboolean);
    extern void gtk_style_context_pop_animatable_region(GtkStyleContext *
							context);
    extern void gtk_style_context_push_animatable_region(GtkStyleContext *
							 context,
							 gpointer);
    extern void gtk_style_context_remove_class(GtkStyleContext * context,
					       const char *);
    extern void gtk_style_context_remove_provider(GtkStyleContext *
						  context,
						  GtkStyleProvider *);
    extern void gtk_style_context_remove_provider_for_screen(GdkScreen *
							     screen,
							     GtkStyleProvider
							     *);
    extern void gtk_style_context_remove_region(GtkStyleContext * context,
						const char *);
    extern void gtk_style_context_reset_widgets(GdkScreen * screen);
    extern void gtk_style_context_restore(GtkStyleContext * context);
    extern void gtk_style_context_save(GtkStyleContext * context);
    extern void gtk_style_context_scroll_animations(GtkStyleContext *
						    context, GdkWindow *,
						    gint, gint);
    extern void gtk_style_context_set_background(GtkStyleContext * context,
						 GdkWindow *);
    extern void gtk_style_context_set_direction(GtkStyleContext * context,
						GtkTextDirection);
    extern void gtk_style_context_set_junction_sides(GtkStyleContext *
						     context,
						     GtkJunctionSides);
    extern void gtk_style_context_set_parent(GtkStyleContext * context,
					     GtkStyleContext *);
    extern void gtk_style_context_set_path(GtkStyleContext * context,
					   GtkWidgetPath *);
    extern void gtk_style_context_set_screen(GtkStyleContext * context,
					     GdkScreen *);
    extern void gtk_style_context_set_state(GtkStyleContext * context,
					    GtkStateFlags);
    extern gboolean gtk_style_context_state_is_running(GtkStyleContext *
						       context,
						       GtkStateType,
						       gdouble *);
    extern void gtk_style_properties_clear(GtkStyleProperties * props);
    extern void gtk_style_properties_get(GtkStyleProperties * props,
					 GtkStateFlags, ...);
    extern gboolean gtk_style_properties_get_property(GtkStyleProperties *
						      props, const char *,
						      GtkStateFlags,
						      GValue *);
    extern GType gtk_style_properties_get_type(void);
    extern void gtk_style_properties_get_valist(GtkStyleProperties * props,
						GtkStateFlags state,
						va_list var_args);
    extern GtkSymbolicColor
	*gtk_style_properties_lookup_color(GtkStyleProperties * props,
					   const char *);
    extern gboolean gtk_style_properties_lookup_property(const char
							 *property_name,
							 GtkStylePropertyParser
							 *,
							 GParamSpec * *);
    extern void gtk_style_properties_map_color(GtkStyleProperties * props,
					       const char *,
					       GtkSymbolicColor *);
    extern void gtk_style_properties_merge(GtkStyleProperties * props,
					   const GtkStyleProperties *,
					   gboolean);
    extern GtkStyleProperties *gtk_style_properties_new(void);
    extern void
	gtk_style_properties_register_property(GtkStylePropertyParser
					       parse_func, GParamSpec *);
    extern void gtk_style_properties_set(GtkStyleProperties * props,
					 GtkStateFlags, ...);
    extern void gtk_style_properties_set_property(GtkStyleProperties *
						  props, const char *,
						  GtkStateFlags,
						  const GValue *);
    extern void gtk_style_properties_set_valist(GtkStyleProperties * props,
						GtkStateFlags state,
						va_list);
    extern void gtk_style_properties_unset_property(GtkStyleProperties *
						    props, const char *,
						    GtkStateFlags);
    extern GtkIconFactory
	*gtk_style_provider_get_icon_factory(GtkStyleProvider * provider,
					     GtkWidgetPath *);
    extern GtkStyleProperties
	*gtk_style_provider_get_style(GtkStyleProvider * provider,
				      GtkWidgetPath *);
    extern gboolean gtk_style_provider_get_style_property(GtkStyleProvider
							  * provider,
							  GtkWidgetPath *,
							  GtkStateFlags,
							  GParamSpec *,
							  GValue *);
    extern GType gtk_style_provider_get_type(void);
    extern gboolean gtk_switch_get_active(GtkSwitch * sw);
    extern GType gtk_switch_get_type(void);
    extern GtkWidget *gtk_switch_new(void);
    extern void gtk_switch_set_active(GtkSwitch * sw, gboolean);
    extern GType gtk_symbolic_color_get_type(void);
    extern GtkSymbolicColor *gtk_symbolic_color_new_alpha(GtkSymbolicColor
							  * color,
							  gdouble);
    extern GtkSymbolicColor *gtk_symbolic_color_new_literal(const GdkRGBA *
							    color);
    extern GtkSymbolicColor *gtk_symbolic_color_new_mix(GtkSymbolicColor *
							color1,
							GtkSymbolicColor *,
							gdouble);
    extern GtkSymbolicColor *gtk_symbolic_color_new_name(const char *name);
    extern GtkSymbolicColor *gtk_symbolic_color_new_shade(GtkSymbolicColor
							  * color,
							  gdouble);
    extern GtkSymbolicColor *gtk_symbolic_color_new_win32(const char
							  *theme_class,
							  gint);
    extern GtkSymbolicColor *gtk_symbolic_color_ref(GtkSymbolicColor *
						    color);
    extern gboolean gtk_symbolic_color_resolve(GtkSymbolicColor * color,
					       GtkStyleProperties *,
					       GdkRGBA *);
    extern char *gtk_symbolic_color_to_string(GtkSymbolicColor * color);
    extern void gtk_symbolic_color_unref(GtkSymbolicColor * color);
    extern GtkTargetEntry *gtk_target_entry_copy(GtkTargetEntry * data);
    extern void gtk_target_entry_free(GtkTargetEntry * data);
    extern GType gtk_target_entry_get_type(void);
    extern GtkTargetEntry *gtk_target_entry_new(const char *target, guint,
						guint);
    extern GType gtk_target_flags_get_type(void);
    extern void gtk_target_list_add(GtkTargetList * list, GdkAtom target,
				    guint flags, guint info);
    extern void gtk_target_list_add_image_targets(GtkTargetList * list,
						  guint, gboolean);
    extern void gtk_target_list_add_rich_text_targets(GtkTargetList * list,
						      guint, gboolean,
						      GtkTextBuffer *);
    extern void gtk_target_list_add_table(GtkTargetList * list,
					  const GtkTargetEntry *, guint);
    extern void gtk_target_list_add_text_targets(GtkTargetList * list,
						 guint);
    extern void gtk_target_list_add_uri_targets(GtkTargetList * list,
						guint);
    extern gboolean gtk_target_list_find(GtkTargetList * list,
					 GdkAtom target, guint * info);
    extern GType gtk_target_list_get_type(void);
    extern GtkTargetList *gtk_target_list_new(const GtkTargetEntry *
					      targets, guint);
    extern GtkTargetList *gtk_target_list_ref(GtkTargetList * list);
    extern void gtk_target_list_remove(GtkTargetList * list,
				       GdkAtom target);
    extern void gtk_target_list_unref(GtkTargetList * list);
    extern void gtk_target_table_free(GtkTargetEntry * targets, gint);
    extern GtkTargetEntry *gtk_target_table_new_from_list(GtkTargetList *
							  list, gint *);
    extern gboolean gtk_targets_include_image(GdkAtom * targets, gint,
					      gboolean);
    extern gboolean gtk_targets_include_rich_text(GdkAtom * targets, gint,
						  GtkTextBuffer *);
    extern gboolean gtk_targets_include_text(GdkAtom * targets, gint);
    extern gboolean gtk_targets_include_uri(GdkAtom * targets, gint);
    extern GtkWidget *gtk_test_create_simple_window(const char
						    *window_title,
						    const char *);
    extern GtkWidget *gtk_test_create_widget(GType widget_type,
					     const char *, ...);
    extern GtkWidget *gtk_test_display_button_window(const char
						     *window_title,
						     const char *, ...);
    extern GtkWidget *gtk_test_find_label(GtkWidget * widget,
					  const char *);
    extern GtkWidget *gtk_test_find_sibling(GtkWidget * base_widget,
					    GType);
    extern GtkWidget *gtk_test_find_widget(GtkWidget * widget,
					   const char *, GType);
    extern void gtk_test_init(int *argcp, char ***, ...);
    extern const unsigned long int *gtk_test_list_all_types(guint *
							    n_types);
    extern void gtk_test_register_all_types(void);
    extern double gtk_test_slider_get_value(GtkWidget * widget);
    extern void gtk_test_slider_set_perc(GtkWidget * widget, double);
    extern gboolean gtk_test_spin_button_click(GtkSpinButton * spinner,
					       guint, gboolean);
    extern gchar *gtk_test_text_get(GtkWidget * widget);
    extern void gtk_test_text_set(GtkWidget * widget, const char *);
    extern gboolean gtk_test_widget_click(GtkWidget * widget, guint button,
					  GdkModifierType modifiers);
    extern gboolean gtk_test_widget_send_key(GtkWidget * widget,
					     guint keyval,
					     GdkModifierType modifiers);
    extern GtkTextAttributes *gtk_text_attributes_copy(GtkTextAttributes *
						       src);
    extern void gtk_text_attributes_copy_values(GtkTextAttributes * src,
						GtkTextAttributes *);
    extern GType gtk_text_attributes_get_type(void);
    extern GtkTextAttributes *gtk_text_attributes_new(void);
    extern GtkTextAttributes *gtk_text_attributes_ref(GtkTextAttributes *
						      values);
    extern void gtk_text_attributes_unref(GtkTextAttributes * values);
    extern void gtk_text_buffer_add_mark(GtkTextBuffer * buffer,
					 GtkTextMark *,
					 const GtkTextIter *);
    extern void gtk_text_buffer_add_selection_clipboard(GtkTextBuffer *
							buffer,
							GtkClipboard *);
    extern void gtk_text_buffer_apply_tag(GtkTextBuffer * buffer,
					  GtkTextTag *,
					  const GtkTextIter *,
					  const GtkTextIter *);
    extern void gtk_text_buffer_apply_tag_by_name(GtkTextBuffer * buffer,
						  const char *,
						  const GtkTextIter *,
						  const GtkTextIter *);
    extern gboolean gtk_text_buffer_backspace(GtkTextBuffer * buffer,
					      GtkTextIter *, gboolean,
					      gboolean);
    extern void gtk_text_buffer_begin_user_action(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_copy_clipboard(GtkTextBuffer * buffer,
					       GtkClipboard *);
    extern GtkTextChildAnchor
	*gtk_text_buffer_create_child_anchor(GtkTextBuffer * buffer,
					     GtkTextIter *);
    extern GtkTextMark *gtk_text_buffer_create_mark(GtkTextBuffer * buffer,
						    const char *,
						    const GtkTextIter *,
						    gboolean);
    extern GtkTextTag *gtk_text_buffer_create_tag(GtkTextBuffer * buffer,
						  const char *,
						  const char *, ...);
    extern void gtk_text_buffer_cut_clipboard(GtkTextBuffer * buffer,
					      GtkClipboard *, gboolean);
    extern void gtk_text_buffer_delete(GtkTextBuffer * buffer,
				       GtkTextIter *, GtkTextIter *);
    extern gboolean gtk_text_buffer_delete_interactive(GtkTextBuffer *
						       buffer,
						       GtkTextIter *,
						       GtkTextIter *,
						       gboolean);
    extern void gtk_text_buffer_delete_mark(GtkTextBuffer * buffer,
					    GtkTextMark *);
    extern void gtk_text_buffer_delete_mark_by_name(GtkTextBuffer * buffer,
						    const char *);
    extern gboolean gtk_text_buffer_delete_selection(GtkTextBuffer *
						     buffer, gboolean,
						     gboolean);
    extern gboolean gtk_text_buffer_deserialize(GtkTextBuffer *
						register_buffer,
						GtkTextBuffer *, GdkAtom,
						GtkTextIter *,
						const unsigned char *,
						gsize, GError * *);
    extern gboolean
	gtk_text_buffer_deserialize_get_can_create_tags(GtkTextBuffer *
							buffer,
							GdkAtom format);
    extern void
	gtk_text_buffer_deserialize_set_can_create_tags(GtkTextBuffer *
							buffer,
							GdkAtom format,
							gboolean
							can_create_tags);
    extern void gtk_text_buffer_end_user_action(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_get_bounds(GtkTextBuffer * buffer,
					   GtkTextIter *, GtkTextIter *);
    extern gint gtk_text_buffer_get_char_count(GtkTextBuffer * buffer);
    extern GtkTargetList
	*gtk_text_buffer_get_copy_target_list(GtkTextBuffer * buffer);
    extern GdkAtom *gtk_text_buffer_get_deserialize_formats(GtkTextBuffer *
							    buffer,
							    gint *);
    extern void gtk_text_buffer_get_end_iter(GtkTextBuffer * buffer,
					     GtkTextIter *);
    extern gboolean gtk_text_buffer_get_has_selection(GtkTextBuffer *
						      buffer);
    extern GtkTextMark *gtk_text_buffer_get_insert(GtkTextBuffer * buffer);
    extern void gtk_text_buffer_get_iter_at_child_anchor(GtkTextBuffer *
							 buffer,
							 GtkTextIter *,
							 GtkTextChildAnchor
							 *);
    extern void gtk_text_buffer_get_iter_at_line(GtkTextBuffer * buffer,
						 GtkTextIter *, gint);
    extern void gtk_text_buffer_get_iter_at_line_index(GtkTextBuffer *
						       buffer,
						       GtkTextIter *, gint,
						       gint);
    extern void gtk_text_buffer_get_iter_at_line_offset(GtkTextBuffer *
							buffer,
							GtkTextIter *,
							gint, gint);
    extern void gtk_text_buffer_get_iter_at_mark(GtkTextBuffer * buffer,
						 GtkTextIter *,
						 GtkTextMark *);
    extern void gtk_text_buffer_get_iter_at_offset(GtkTextBuffer * buffer,
						   GtkTextIter *, gint);
    extern gint gtk_text_buffer_get_line_count(GtkTextBuffer * buffer);
    extern GtkTextMark *gtk_text_buffer_get_mark(GtkTextBuffer * buffer,
						 const char *);
    extern gboolean gtk_text_buffer_get_modified(GtkTextBuffer * buffer);
    extern GtkTargetList
	*gtk_text_buffer_get_paste_target_list(GtkTextBuffer * buffer);
    extern GtkTextMark *gtk_text_buffer_get_selection_bound(GtkTextBuffer *
							    buffer);
    extern gboolean gtk_text_buffer_get_selection_bounds(GtkTextBuffer *
							 buffer,
							 GtkTextIter *,
							 GtkTextIter *);
    extern GdkAtom *gtk_text_buffer_get_serialize_formats(GtkTextBuffer *
							  buffer, gint *);
    extern gchar *gtk_text_buffer_get_slice(GtkTextBuffer * buffer,
					    const GtkTextIter *,
					    const GtkTextIter *, gboolean);
    extern void gtk_text_buffer_get_start_iter(GtkTextBuffer * buffer,
					       GtkTextIter *);
    extern GtkTextTagTable *gtk_text_buffer_get_tag_table(GtkTextBuffer *
							  buffer);
    extern gchar *gtk_text_buffer_get_text(GtkTextBuffer * buffer,
					   const GtkTextIter *,
					   const GtkTextIter *, gboolean);
    extern GType gtk_text_buffer_get_type(void);
    extern void gtk_text_buffer_insert(GtkTextBuffer * buffer,
				       GtkTextIter *, const char *, gint);
    extern void gtk_text_buffer_insert_at_cursor(GtkTextBuffer * buffer,
						 const char *, gint);
    extern void gtk_text_buffer_insert_child_anchor(GtkTextBuffer * buffer,
						    GtkTextIter *,
						    GtkTextChildAnchor *);
    extern gboolean gtk_text_buffer_insert_interactive(GtkTextBuffer *
						       buffer,
						       GtkTextIter *,
						       const char *, gint,
						       gboolean);
    extern gboolean
	gtk_text_buffer_insert_interactive_at_cursor(GtkTextBuffer *
						     buffer, const char *,
						     gint, gboolean);
    extern void gtk_text_buffer_insert_pixbuf(GtkTextBuffer * buffer,
					      GtkTextIter *, GdkPixbuf *);
    extern void gtk_text_buffer_insert_range(GtkTextBuffer * buffer,
					     GtkTextIter *,
					     const GtkTextIter *,
					     const GtkTextIter *);
    extern gboolean gtk_text_buffer_insert_range_interactive(GtkTextBuffer
							     * buffer,
							     GtkTextIter *,
							     const
							     GtkTextIter *,
							     const
							     GtkTextIter *,
							     gboolean);
    extern void gtk_text_buffer_insert_with_tags(GtkTextBuffer * buffer,
						 GtkTextIter *,
						 const char *, gint,
						 GtkTextTag *, ...);
    extern void gtk_text_buffer_insert_with_tags_by_name(GtkTextBuffer *
							 buffer,
							 GtkTextIter *,
							 const char *,
							 gint,
							 const char *,
							 ...);
    extern void gtk_text_buffer_move_mark(GtkTextBuffer * buffer,
					  GtkTextMark *,
					  const GtkTextIter *);
    extern void gtk_text_buffer_move_mark_by_name(GtkTextBuffer * buffer,
						  const char *,
						  const GtkTextIter *);
    extern GtkTextBuffer *gtk_text_buffer_new(GtkTextTagTable * table);
    extern void gtk_text_buffer_paste_clipboard(GtkTextBuffer * buffer,
						GtkClipboard *,
						GtkTextIter *, gboolean);
    extern void gtk_text_buffer_place_cursor(GtkTextBuffer * buffer,
					     const GtkTextIter *);
    extern GdkAtom
	gtk_text_buffer_register_deserialize_format(GtkTextBuffer * buffer,
						    const char *,
						    GtkTextBufferDeserializeFunc,
						    gpointer,
						    GDestroyNotify);
    extern GdkAtom
	gtk_text_buffer_register_deserialize_tagset(GtkTextBuffer * buffer,
						    const char *);
    extern GdkAtom gtk_text_buffer_register_serialize_format(GtkTextBuffer
							     * buffer,
							     const char *,
							     GtkTextBufferSerializeFunc,
							     gpointer,
							     GDestroyNotify);
    extern GdkAtom gtk_text_buffer_register_serialize_tagset(GtkTextBuffer
							     * buffer,
							     const char *);
    extern void gtk_text_buffer_remove_all_tags(GtkTextBuffer * buffer,
						const GtkTextIter *,
						const GtkTextIter *);
    extern void gtk_text_buffer_remove_selection_clipboard(GtkTextBuffer *
							   buffer,
							   GtkClipboard *);
    extern void gtk_text_buffer_remove_tag(GtkTextBuffer * buffer,
					   GtkTextTag *,
					   const GtkTextIter *,
					   const GtkTextIter *);
    extern void gtk_text_buffer_remove_tag_by_name(GtkTextBuffer * buffer,
						   const char *,
						   const GtkTextIter *,
						   const GtkTextIter *);
    extern void gtk_text_buffer_select_range(GtkTextBuffer * buffer,
					     const GtkTextIter *,
					     const GtkTextIter *);
    extern guint8 *gtk_text_buffer_serialize(GtkTextBuffer *
					     register_buffer,
					     GtkTextBuffer *, GdkAtom,
					     const GtkTextIter *,
					     const GtkTextIter *, gsize *);
    extern void gtk_text_buffer_set_modified(GtkTextBuffer * buffer,
					     gboolean);
    extern void gtk_text_buffer_set_text(GtkTextBuffer * buffer,
					 const char *, gint);
    extern GType gtk_text_buffer_target_info_get_type(void);
    extern void gtk_text_buffer_unregister_deserialize_format(GtkTextBuffer
							      * buffer,
							      GdkAtom
							      format);
    extern void gtk_text_buffer_unregister_serialize_format(GtkTextBuffer *
							    buffer,
							    GdkAtom
							    format);
    extern gboolean gtk_text_child_anchor_get_deleted(GtkTextChildAnchor *
						      anchor);
    extern GType gtk_text_child_anchor_get_type(void);
    extern GList *gtk_text_child_anchor_get_widgets(GtkTextChildAnchor *
						    anchor);
    extern GtkTextChildAnchor *gtk_text_child_anchor_new(void);
    extern GType gtk_text_direction_get_type(void);
    extern void gtk_text_iter_assign(GtkTextIter * iter,
				     const GtkTextIter *);
    extern gboolean gtk_text_iter_backward_char(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_chars(GtkTextIter * iter, gint);
    extern gboolean gtk_text_iter_backward_cursor_position(GtkTextIter *
							   iter);
    extern gboolean gtk_text_iter_backward_cursor_positions(GtkTextIter *
							    iter, gint);
    extern gboolean gtk_text_iter_backward_find_char(GtkTextIter * iter,
						     GtkTextCharPredicate,
						     gpointer,
						     const GtkTextIter *);
    extern gboolean gtk_text_iter_backward_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_lines(GtkTextIter * iter, gint);
    extern gboolean gtk_text_iter_backward_search(const GtkTextIter * iter,
						  const char *,
						  GtkTextSearchFlags,
						  GtkTextIter *,
						  GtkTextIter *,
						  const GtkTextIter *);
    extern gboolean gtk_text_iter_backward_sentence_start(GtkTextIter *
							  iter);
    extern gboolean gtk_text_iter_backward_sentence_starts(GtkTextIter *
							   iter, gint);
    extern gboolean gtk_text_iter_backward_to_tag_toggle(GtkTextIter *
							 iter,
							 GtkTextTag *);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_position(GtkTextIter * iter);
    extern gboolean
	gtk_text_iter_backward_visible_cursor_positions(GtkTextIter * iter,
							gint);
    extern gboolean gtk_text_iter_backward_visible_line(GtkTextIter *
							iter);
    extern gboolean gtk_text_iter_backward_visible_lines(GtkTextIter *
							 iter, gint);
    extern gboolean gtk_text_iter_backward_visible_word_start(GtkTextIter *
							      iter);
    extern gboolean gtk_text_iter_backward_visible_word_starts(GtkTextIter
							       * iter,
							       gint);
    extern gboolean gtk_text_iter_backward_word_start(GtkTextIter * iter);
    extern gboolean gtk_text_iter_backward_word_starts(GtkTextIter * iter,
						       gint);
    extern gboolean gtk_text_iter_begins_tag(const GtkTextIter * iter,
					     GtkTextTag *);
    extern gboolean gtk_text_iter_can_insert(const GtkTextIter * iter,
					     gboolean);
    extern gint gtk_text_iter_compare(const GtkTextIter * lhs,
				      const GtkTextIter *);
    extern GtkTextIter *gtk_text_iter_copy(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_editable(const GtkTextIter * iter,
					   gboolean);
    extern gboolean gtk_text_iter_ends_line(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_ends_sentence(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_ends_tag(const GtkTextIter * iter,
					   GtkTextTag *);
    extern gboolean gtk_text_iter_ends_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_equal(const GtkTextIter * lhs,
					const GtkTextIter *);
    extern gboolean gtk_text_iter_forward_char(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_chars(GtkTextIter * iter, gint);
    extern gboolean gtk_text_iter_forward_cursor_position(GtkTextIter *
							  iter);
    extern gboolean gtk_text_iter_forward_cursor_positions(GtkTextIter *
							   iter, gint);
    extern gboolean gtk_text_iter_forward_find_char(GtkTextIter * iter,
						    GtkTextCharPredicate,
						    gpointer,
						    const GtkTextIter *);
    extern gboolean gtk_text_iter_forward_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_lines(GtkTextIter * iter, gint);
    extern gboolean gtk_text_iter_forward_search(const GtkTextIter * iter,
						 const char *,
						 GtkTextSearchFlags,
						 GtkTextIter *,
						 GtkTextIter *,
						 const GtkTextIter *);
    extern gboolean gtk_text_iter_forward_sentence_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_sentence_ends(GtkTextIter * iter,
							gint);
    extern void gtk_text_iter_forward_to_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_to_line_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_to_tag_toggle(GtkTextIter * iter,
							GtkTextTag *);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_position(GtkTextIter * iter);
    extern gboolean
	gtk_text_iter_forward_visible_cursor_positions(GtkTextIter * iter,
						       gint);
    extern gboolean gtk_text_iter_forward_visible_line(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_visible_lines(GtkTextIter * iter,
							gint);
    extern gboolean gtk_text_iter_forward_visible_word_end(GtkTextIter *
							   iter);
    extern gboolean gtk_text_iter_forward_visible_word_ends(GtkTextIter *
							    iter, gint);
    extern gboolean gtk_text_iter_forward_word_end(GtkTextIter * iter);
    extern gboolean gtk_text_iter_forward_word_ends(GtkTextIter * iter,
						    gint);
    extern void gtk_text_iter_free(GtkTextIter * iter);
    extern gboolean gtk_text_iter_get_attributes(const GtkTextIter * iter,
						 GtkTextAttributes *);
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
					  const GtkTextIter *);
    extern GSList *gtk_text_iter_get_tags(const GtkTextIter * iter);
    extern gchar *gtk_text_iter_get_text(const GtkTextIter * start,
					 const GtkTextIter *);
    extern GSList *gtk_text_iter_get_toggled_tags(const GtkTextIter * iter,
						  gboolean);
    extern GType gtk_text_iter_get_type(void);
    extern gint gtk_text_iter_get_visible_line_index(const GtkTextIter *
						     iter);
    extern gint gtk_text_iter_get_visible_line_offset(const GtkTextIter *
						      iter);
    extern gchar *gtk_text_iter_get_visible_slice(const GtkTextIter *
						  start,
						  const GtkTextIter *);
    extern gchar *gtk_text_iter_get_visible_text(const GtkTextIter * start,
						 const GtkTextIter *);
    extern gboolean gtk_text_iter_has_tag(const GtkTextIter * iter,
					  GtkTextTag *);
    extern gboolean gtk_text_iter_in_range(const GtkTextIter * iter,
					   const GtkTextIter *,
					   const GtkTextIter *);
    extern gboolean gtk_text_iter_inside_sentence(const GtkTextIter *
						  iter);
    extern gboolean gtk_text_iter_inside_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_is_cursor_position(const GtkTextIter *
						     iter);
    extern gboolean gtk_text_iter_is_end(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_is_start(const GtkTextIter * iter);
    extern void gtk_text_iter_order(GtkTextIter * first, GtkTextIter *);
    extern void gtk_text_iter_set_line(GtkTextIter * iter, gint);
    extern void gtk_text_iter_set_line_index(GtkTextIter * iter, gint);
    extern void gtk_text_iter_set_line_offset(GtkTextIter * iter, gint);
    extern void gtk_text_iter_set_offset(GtkTextIter * iter, gint);
    extern void gtk_text_iter_set_visible_line_index(GtkTextIter * iter,
						     gint);
    extern void gtk_text_iter_set_visible_line_offset(GtkTextIter * iter,
						      gint);
    extern gboolean gtk_text_iter_starts_line(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_starts_sentence(const GtkTextIter *
						  iter);
    extern gboolean gtk_text_iter_starts_word(const GtkTextIter * iter);
    extern gboolean gtk_text_iter_toggles_tag(const GtkTextIter * iter,
					      GtkTextTag *);
    extern GtkTextBuffer *gtk_text_mark_get_buffer(GtkTextMark * mark);
    extern gboolean gtk_text_mark_get_deleted(GtkTextMark * mark);
    extern gboolean gtk_text_mark_get_left_gravity(GtkTextMark * mark);
    extern const char *gtk_text_mark_get_name(GtkTextMark * mark);
    extern GType gtk_text_mark_get_type(void);
    extern gboolean gtk_text_mark_get_visible(GtkTextMark * mark);
    extern GtkTextMark *gtk_text_mark_new(const char *name, gboolean);
    extern void gtk_text_mark_set_visible(GtkTextMark * mark, gboolean);
    extern GType gtk_text_search_flags_get_type(void);
    extern gboolean gtk_text_tag_event(GtkTextTag * tag, GObject *,
				       GdkEvent *, const GtkTextIter *);
    extern gint gtk_text_tag_get_priority(GtkTextTag * tag);
    extern GType gtk_text_tag_get_type(void);
    extern GtkTextTag *gtk_text_tag_new(const char *name);
    extern void gtk_text_tag_set_priority(GtkTextTag * tag, gint);
    extern void gtk_text_tag_table_add(GtkTextTagTable * table,
				       GtkTextTag *);
    extern void gtk_text_tag_table_foreach(GtkTextTagTable * table,
					   GtkTextTagTableForeach,
					   gpointer);
    extern gint gtk_text_tag_table_get_size(GtkTextTagTable * table);
    extern GType gtk_text_tag_table_get_type(void);
    extern GtkTextTag *gtk_text_tag_table_lookup(GtkTextTagTable * table,
						 const char *);
    extern GtkTextTagTable *gtk_text_tag_table_new(void);
    extern void gtk_text_tag_table_remove(GtkTextTagTable * table,
					  GtkTextTag *);
    extern void gtk_text_view_add_child_at_anchor(GtkTextView * text_view,
						  GtkWidget *,
						  GtkTextChildAnchor *);
    extern void gtk_text_view_add_child_in_window(GtkTextView * text_view,
						  GtkWidget *,
						  GtkTextWindowType, gint,
						  gint);
    extern gboolean gtk_text_view_backward_display_line(GtkTextView *
							text_view,
							GtkTextIter *);
    extern gboolean gtk_text_view_backward_display_line_start(GtkTextView *
							      text_view,
							      GtkTextIter
							      *);
    extern void gtk_text_view_buffer_to_window_coords(GtkTextView *
						      text_view,
						      GtkTextWindowType,
						      gint, gint, gint *,
						      gint *);
    extern gboolean gtk_text_view_forward_display_line(GtkTextView *
						       text_view,
						       GtkTextIter *);
    extern gboolean gtk_text_view_forward_display_line_end(GtkTextView *
							   text_view,
							   GtkTextIter *);
    extern gboolean gtk_text_view_get_accepts_tab(GtkTextView * text_view);
    extern gint gtk_text_view_get_border_window_size(GtkTextView *
						     text_view,
						     GtkTextWindowType);
    extern GtkTextBuffer *gtk_text_view_get_buffer(GtkTextView *
						   text_view);
    extern void gtk_text_view_get_cursor_locations(GtkTextView * text_view,
						   const GtkTextIter *,
						   GdkRectangle *,
						   GdkRectangle *);
    extern gboolean gtk_text_view_get_cursor_visible(GtkTextView *
						     text_view);
    extern GtkTextAttributes
	*gtk_text_view_get_default_attributes(GtkTextView * text_view);
    extern gboolean gtk_text_view_get_editable(GtkTextView * text_view);
    extern GtkAdjustment *gtk_text_view_get_hadjustment(GtkTextView *
							text_view);
    extern gint gtk_text_view_get_indent(GtkTextView * text_view);
    extern GtkInputHints gtk_text_view_get_input_hints(GtkTextView *
						       text_view);
    extern GtkInputPurpose gtk_text_view_get_input_purpose(GtkTextView *
							   text_view);
    extern void gtk_text_view_get_iter_at_location(GtkTextView * text_view,
						   GtkTextIter *, gint,
						   gint);
    extern void gtk_text_view_get_iter_at_position(GtkTextView * text_view,
						   GtkTextIter *, gint *,
						   gint, gint);
    extern void gtk_text_view_get_iter_location(GtkTextView * text_view,
						const GtkTextIter *,
						GdkRectangle *);
    extern GtkJustification gtk_text_view_get_justification(GtkTextView *
							    text_view);
    extern gint gtk_text_view_get_left_margin(GtkTextView * text_view);
    extern void gtk_text_view_get_line_at_y(GtkTextView * text_view,
					    GtkTextIter *, gint, gint *);
    extern void gtk_text_view_get_line_yrange(GtkTextView * text_view,
					      const GtkTextIter *, gint *,
					      gint *);
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
    extern GtkAdjustment *gtk_text_view_get_vadjustment(GtkTextView *
							text_view);
    extern void gtk_text_view_get_visible_rect(GtkTextView * text_view,
					       GdkRectangle *);
    extern GdkWindow *gtk_text_view_get_window(GtkTextView * text_view,
					       GtkTextWindowType);
    extern GtkTextWindowType gtk_text_view_get_window_type(GtkTextView *
							   text_view,
							   GdkWindow *);
    extern GtkWrapMode gtk_text_view_get_wrap_mode(GtkTextView *
						   text_view);
    extern gboolean gtk_text_view_im_context_filter_keypress(GtkTextView *
							     text_view,
							     GdkEventKey
							     *);
    extern void gtk_text_view_move_child(GtkTextView * text_view,
					 GtkWidget *, gint, gint);
    extern gboolean gtk_text_view_move_mark_onscreen(GtkTextView *
						     text_view,
						     GtkTextMark *);
    extern gboolean gtk_text_view_move_visually(GtkTextView * text_view,
						GtkTextIter *, gint);
    extern GtkWidget *gtk_text_view_new(void);
    extern GtkWidget *gtk_text_view_new_with_buffer(GtkTextBuffer *
						    buffer);
    extern gboolean gtk_text_view_place_cursor_onscreen(GtkTextView *
							text_view);
    extern void gtk_text_view_reset_im_context(GtkTextView * text_view);
    extern void gtk_text_view_scroll_mark_onscreen(GtkTextView * text_view,
						   GtkTextMark *);
    extern gboolean gtk_text_view_scroll_to_iter(GtkTextView * text_view,
						 GtkTextIter *, gdouble,
						 gboolean, gdouble,
						 gdouble);
    extern void gtk_text_view_scroll_to_mark(GtkTextView * text_view,
					     GtkTextMark *, gdouble,
					     gboolean, gdouble, gdouble);
    extern void gtk_text_view_set_accepts_tab(GtkTextView * text_view,
					      gboolean);
    extern void gtk_text_view_set_border_window_size(GtkTextView *
						     text_view,
						     GtkTextWindowType,
						     gint);
    extern void gtk_text_view_set_buffer(GtkTextView * text_view,
					 GtkTextBuffer *);
    extern void gtk_text_view_set_cursor_visible(GtkTextView * text_view,
						 gboolean);
    extern void gtk_text_view_set_editable(GtkTextView * text_view,
					   gboolean);
    extern void gtk_text_view_set_indent(GtkTextView * text_view, gint);
    extern void gtk_text_view_set_input_hints(GtkTextView * text_view,
					      GtkInputHints);
    extern void gtk_text_view_set_input_purpose(GtkTextView * text_view,
						GtkInputPurpose);
    extern void gtk_text_view_set_justification(GtkTextView * text_view,
						GtkJustification);
    extern void gtk_text_view_set_left_margin(GtkTextView * text_view,
					      gint);
    extern void gtk_text_view_set_overwrite(GtkTextView * text_view,
					    gboolean);
    extern void gtk_text_view_set_pixels_above_lines(GtkTextView *
						     text_view, gint);
    extern void gtk_text_view_set_pixels_below_lines(GtkTextView *
						     text_view, gint);
    extern void gtk_text_view_set_pixels_inside_wrap(GtkTextView *
						     text_view, gint);
    extern void gtk_text_view_set_right_margin(GtkTextView * text_view,
					       gint);
    extern void gtk_text_view_set_tabs(GtkTextView * text_view,
				       PangoTabArray *);
    extern void gtk_text_view_set_wrap_mode(GtkTextView * text_view,
					    GtkWrapMode);
    extern gboolean gtk_text_view_starts_display_line(GtkTextView *
						      text_view,
						      const GtkTextIter *);
    extern void gtk_text_view_window_to_buffer_coords(GtkTextView *
						      text_view,
						      GtkTextWindowType,
						      gint, gint, gint *,
						      gint *);
    extern GType gtk_text_window_type_get_type(void);
    extern void gtk_theming_engine_get(GtkThemingEngine * engine,
				       GtkStateFlags, ...);
    extern void gtk_theming_engine_get_background_color(GtkThemingEngine *
							engine,
							GtkStateFlags,
							GdkRGBA *);
    extern void gtk_theming_engine_get_border(GtkThemingEngine * engine,
					      GtkStateFlags, GtkBorder *);
    extern void gtk_theming_engine_get_border_color(GtkThemingEngine *
						    engine, GtkStateFlags,
						    GdkRGBA *);
    extern void gtk_theming_engine_get_color(GtkThemingEngine * engine,
					     GtkStateFlags, GdkRGBA *);
    extern GtkTextDirection
	gtk_theming_engine_get_direction(GtkThemingEngine * engine);
    extern const PangoFontDescription
	*gtk_theming_engine_get_font(GtkThemingEngine * engine,
				     GtkStateFlags);
    extern GtkJunctionSides
	gtk_theming_engine_get_junction_sides(GtkThemingEngine * engine);
    extern void gtk_theming_engine_get_margin(GtkThemingEngine * engine,
					      GtkStateFlags, GtkBorder *);
    extern void gtk_theming_engine_get_padding(GtkThemingEngine * engine,
					       GtkStateFlags, GtkBorder *);
    extern const GtkWidgetPath
	*gtk_theming_engine_get_path(GtkThemingEngine * engine);
    extern void gtk_theming_engine_get_property(GtkThemingEngine * engine,
						const char *,
						GtkStateFlags, GValue *);
    extern GdkScreen *gtk_theming_engine_get_screen(GtkThemingEngine *
						    engine);
    extern GtkStateFlags gtk_theming_engine_get_state(GtkThemingEngine *
						      engine);
    extern void gtk_theming_engine_get_style(GtkThemingEngine * engine,
					     ...);
    extern void gtk_theming_engine_get_style_property(GtkThemingEngine *
						      engine, const char *,
						      GValue *);
    extern void gtk_theming_engine_get_style_valist(GtkThemingEngine *
						    engine,
						    va_list var_args);
    extern GType gtk_theming_engine_get_type(void);
    extern void gtk_theming_engine_get_valist(GtkThemingEngine * engine,
					      GtkStateFlags state,
					      va_list var_args);
    extern gboolean gtk_theming_engine_has_class(GtkThemingEngine * engine,
						 const char *);
    extern gboolean gtk_theming_engine_has_region(GtkThemingEngine *
						  engine, const char *,
						  GtkRegionFlags *);
    extern GtkThemingEngine *gtk_theming_engine_load(const char *name);
    extern gboolean gtk_theming_engine_lookup_color(GtkThemingEngine *
						    engine, const char *,
						    GdkRGBA *);
    extern void gtk_theming_engine_register_property(const char
						     *name_space,
						     GtkStylePropertyParser,
						     GParamSpec *);
    extern gboolean gtk_theming_engine_state_is_running(GtkThemingEngine *
							engine,
							GtkStateType,
							gdouble *);
    extern gboolean gtk_toggle_action_get_active(GtkToggleAction * action);
    extern gboolean gtk_toggle_action_get_draw_as_radio(GtkToggleAction *
							action);
    extern GType gtk_toggle_action_get_type(void);
    extern GtkToggleAction *gtk_toggle_action_new(const char *name,
						  const char *,
						  const char *,
						  const char *);
    extern void gtk_toggle_action_set_active(GtkToggleAction * action,
					     gboolean);
    extern void gtk_toggle_action_set_draw_as_radio(GtkToggleAction *
						    action, gboolean);
    extern void gtk_toggle_action_toggled(GtkToggleAction * action);
    extern gboolean gtk_toggle_button_get_active(GtkToggleButton *
						 toggle_button);
    extern gboolean gtk_toggle_button_get_inconsistent(GtkToggleButton *
						       toggle_button);
    extern gboolean gtk_toggle_button_get_mode(GtkToggleButton *
					       toggle_button);
    extern GType gtk_toggle_button_get_type(void);
    extern GtkWidget *gtk_toggle_button_new(void);
    extern GtkWidget *gtk_toggle_button_new_with_label(const char *label);
    extern GtkWidget *gtk_toggle_button_new_with_mnemonic(const char
							  *label);
    extern void gtk_toggle_button_set_active(GtkToggleButton *
					     toggle_button, gboolean);
    extern void gtk_toggle_button_set_inconsistent(GtkToggleButton *
						   toggle_button,
						   gboolean);
    extern void gtk_toggle_button_set_mode(GtkToggleButton * toggle_button,
					   gboolean);
    extern void gtk_toggle_button_toggled(GtkToggleButton * toggle_button);
    extern gboolean gtk_toggle_tool_button_get_active(GtkToggleToolButton *
						      button);
    extern GType gtk_toggle_tool_button_get_type(void);
    extern GtkToolItem *gtk_toggle_tool_button_new(void);
    extern GtkToolItem *gtk_toggle_tool_button_new_from_stock(const char
							      *stock_id);
    extern void gtk_toggle_tool_button_set_active(GtkToggleToolButton *
						  button, gboolean);
    extern const char *gtk_tool_button_get_icon_name(GtkToolButton *
						     button);
    extern GtkWidget *gtk_tool_button_get_icon_widget(GtkToolButton *
						      button);
    extern const char *gtk_tool_button_get_label(GtkToolButton * button);
    extern GtkWidget *gtk_tool_button_get_label_widget(GtkToolButton *
						       button);
    extern const char *gtk_tool_button_get_stock_id(GtkToolButton *
						    button);
    extern GType gtk_tool_button_get_type(void);
    extern gboolean gtk_tool_button_get_use_underline(GtkToolButton *
						      button);
    extern GtkToolItem *gtk_tool_button_new(GtkWidget * icon_widget,
					    const char *);
    extern GtkToolItem *gtk_tool_button_new_from_stock(const char
						       *stock_id);
    extern void gtk_tool_button_set_icon_name(GtkToolButton * button,
					      const char *);
    extern void gtk_tool_button_set_icon_widget(GtkToolButton * button,
						GtkWidget *);
    extern void gtk_tool_button_set_label(GtkToolButton * button,
					  const char *);
    extern void gtk_tool_button_set_label_widget(GtkToolButton * button,
						 GtkWidget *);
    extern void gtk_tool_button_set_stock_id(GtkToolButton * button,
					     const char *);
    extern void gtk_tool_button_set_use_underline(GtkToolButton * button,
						  gboolean);
    extern PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode(GtkToolItem
							       *
							       tool_item);
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
							const char *);
    extern GtkReliefStyle gtk_tool_item_get_relief_style(GtkToolItem *
							 tool_item);
    extern gfloat gtk_tool_item_get_text_alignment(GtkToolItem *
						   tool_item);
    extern GtkOrientation gtk_tool_item_get_text_orientation(GtkToolItem *
							     tool_item);
    extern GtkSizeGroup *gtk_tool_item_get_text_size_group(GtkToolItem *
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
    extern gboolean gtk_tool_item_group_get_collapsed(GtkToolItemGroup *
						      group);
    extern GtkToolItem *gtk_tool_item_group_get_drop_item(GtkToolItemGroup
							  * group, gint,
							  gint);
    extern PangoEllipsizeMode
	gtk_tool_item_group_get_ellipsize(GtkToolItemGroup * group);
    extern GtkReliefStyle
	gtk_tool_item_group_get_header_relief(GtkToolItemGroup * group);
    extern gint gtk_tool_item_group_get_item_position(GtkToolItemGroup *
						      group,
						      GtkToolItem *);
    extern const char *gtk_tool_item_group_get_label(GtkToolItemGroup *
						     group);
    extern GtkWidget *gtk_tool_item_group_get_label_widget(GtkToolItemGroup
							   * group);
    extern guint gtk_tool_item_group_get_n_items(GtkToolItemGroup * group);
    extern GtkToolItem *gtk_tool_item_group_get_nth_item(GtkToolItemGroup *
							 group, guint);
    extern GType gtk_tool_item_group_get_type(void);
    extern void gtk_tool_item_group_insert(GtkToolItemGroup * group,
					   GtkToolItem *, gint);
    extern GtkWidget *gtk_tool_item_group_new(const char *label);
    extern void gtk_tool_item_group_set_collapsed(GtkToolItemGroup * group,
						  gboolean);
    extern void gtk_tool_item_group_set_ellipsize(GtkToolItemGroup * group,
						  PangoEllipsizeMode);
    extern void gtk_tool_item_group_set_header_relief(GtkToolItemGroup *
						      group,
						      GtkReliefStyle);
    extern void gtk_tool_item_group_set_item_position(GtkToolItemGroup *
						      group, GtkToolItem *,
						      gint);
    extern void gtk_tool_item_group_set_label(GtkToolItemGroup * group,
					      const char *);
    extern void gtk_tool_item_group_set_label_widget(GtkToolItemGroup *
						     group, GtkWidget *);
    extern GtkToolItem *gtk_tool_item_new(void);
    extern void gtk_tool_item_rebuild_menu(GtkToolItem * tool_item);
    extern GtkWidget *gtk_tool_item_retrieve_proxy_menu_item(GtkToolItem *
							     tool_item);
    extern void gtk_tool_item_set_expand(GtkToolItem * tool_item,
					 gboolean);
    extern void gtk_tool_item_set_homogeneous(GtkToolItem * tool_item,
					      gboolean);
    extern void gtk_tool_item_set_is_important(GtkToolItem * tool_item,
					       gboolean);
    extern void gtk_tool_item_set_proxy_menu_item(GtkToolItem * tool_item,
						  const char *,
						  GtkWidget *);
    extern void gtk_tool_item_set_tooltip_markup(GtkToolItem * tool_item,
						 const char *);
    extern void gtk_tool_item_set_tooltip_text(GtkToolItem * tool_item,
					       const char *);
    extern void gtk_tool_item_set_use_drag_window(GtkToolItem * tool_item,
						  gboolean);
    extern void gtk_tool_item_set_visible_horizontal(GtkToolItem *
						     tool_item, gboolean);
    extern void gtk_tool_item_set_visible_vertical(GtkToolItem * tool_item,
						   gboolean);
    extern void gtk_tool_item_toolbar_reconfigured(GtkToolItem *
						   tool_item);
    extern void gtk_tool_palette_add_drag_dest(GtkToolPalette * palette,
					       GtkWidget * widget,
					       GtkDestDefaults flags,
					       GtkToolPaletteDragTargets
					       targets,
					       GdkDragAction actions);
    extern GType gtk_tool_palette_drag_targets_get_type(void);
    extern GtkWidget *gtk_tool_palette_get_drag_item(GtkToolPalette *
						     palette,
						     const GtkSelectionData
						     *);
    extern const GtkTargetEntry
	*gtk_tool_palette_get_drag_target_group(void);
    extern const GtkTargetEntry
	*gtk_tool_palette_get_drag_target_item(void);
    extern GtkToolItemGroup *gtk_tool_palette_get_drop_group(GtkToolPalette
							     * palette,
							     gint, gint);
    extern GtkToolItem *gtk_tool_palette_get_drop_item(GtkToolPalette *
						       palette, gint,
						       gint);
    extern gboolean gtk_tool_palette_get_exclusive(GtkToolPalette *
						   palette,
						   GtkToolItemGroup *);
    extern gboolean gtk_tool_palette_get_expand(GtkToolPalette * palette,
						GtkToolItemGroup *);
    extern gint gtk_tool_palette_get_group_position(GtkToolPalette *
						    palette,
						    GtkToolItemGroup *);
    extern GtkAdjustment *gtk_tool_palette_get_hadjustment(GtkToolPalette *
							   palette);
    extern GtkIconSize gtk_tool_palette_get_icon_size(GtkToolPalette *
						      palette);
    extern GtkToolbarStyle gtk_tool_palette_get_style(GtkToolPalette *
						      palette);
    extern GType gtk_tool_palette_get_type(void);
    extern GtkAdjustment *gtk_tool_palette_get_vadjustment(GtkToolPalette *
							   palette);
    extern GtkWidget *gtk_tool_palette_new(void);
    extern void gtk_tool_palette_set_drag_source(GtkToolPalette * palette,
						 GtkToolPaletteDragTargets);
    extern void gtk_tool_palette_set_exclusive(GtkToolPalette * palette,
					       GtkToolItemGroup *,
					       gboolean);
    extern void gtk_tool_palette_set_expand(GtkToolPalette * palette,
					    GtkToolItemGroup *, gboolean);
    extern void gtk_tool_palette_set_group_position(GtkToolPalette *
						    palette,
						    GtkToolItemGroup *,
						    gint);
    extern void gtk_tool_palette_set_icon_size(GtkToolPalette * palette,
					       GtkIconSize);
    extern void gtk_tool_palette_set_style(GtkToolPalette * palette,
					   GtkToolbarStyle);
    extern void gtk_tool_palette_unset_icon_size(GtkToolPalette * palette);
    extern void gtk_tool_palette_unset_style(GtkToolPalette * palette);
    extern PangoEllipsizeMode
	gtk_tool_shell_get_ellipsize_mode(GtkToolShell * shell);
    extern GtkIconSize gtk_tool_shell_get_icon_size(GtkToolShell * shell);
    extern GtkOrientation gtk_tool_shell_get_orientation(GtkToolShell *
							 shell);
    extern GtkReliefStyle gtk_tool_shell_get_relief_style(GtkToolShell *
							  shell);
    extern GtkToolbarStyle gtk_tool_shell_get_style(GtkToolShell * shell);
    extern gfloat gtk_tool_shell_get_text_alignment(GtkToolShell * shell);
    extern GtkOrientation gtk_tool_shell_get_text_orientation(GtkToolShell
							      * shell);
    extern GtkSizeGroup *gtk_tool_shell_get_text_size_group(GtkToolShell *
							    shell);
    extern GType gtk_tool_shell_get_type(void);
    extern void gtk_tool_shell_rebuild_menu(GtkToolShell * shell);
    extern gint gtk_toolbar_get_drop_index(GtkToolbar * toolbar, gint,
					   gint);
    extern GtkIconSize gtk_toolbar_get_icon_size(GtkToolbar * toolbar);
    extern gint gtk_toolbar_get_item_index(GtkToolbar * toolbar,
					   GtkToolItem *);
    extern gint gtk_toolbar_get_n_items(GtkToolbar * toolbar);
    extern GtkToolItem *gtk_toolbar_get_nth_item(GtkToolbar * toolbar,
						 gint);
    extern GtkReliefStyle gtk_toolbar_get_relief_style(GtkToolbar *
						       toolbar);
    extern gboolean gtk_toolbar_get_show_arrow(GtkToolbar * toolbar);
    extern GtkToolbarStyle gtk_toolbar_get_style(GtkToolbar * toolbar);
    extern GType gtk_toolbar_get_type(void);
    extern void gtk_toolbar_insert(GtkToolbar * toolbar, GtkToolItem *,
				   gint);
    extern GtkWidget *gtk_toolbar_new(void);
    extern void gtk_toolbar_set_drop_highlight_item(GtkToolbar * toolbar,
						    GtkToolItem *, gint);
    extern void gtk_toolbar_set_icon_size(GtkToolbar * toolbar,
					  GtkIconSize);
    extern void gtk_toolbar_set_show_arrow(GtkToolbar * toolbar, gboolean);
    extern void gtk_toolbar_set_style(GtkToolbar * toolbar,
				      GtkToolbarStyle);
    extern GType gtk_toolbar_space_style_get_type(void);
    extern GType gtk_toolbar_style_get_type(void);
    extern void gtk_toolbar_unset_icon_size(GtkToolbar * toolbar);
    extern void gtk_toolbar_unset_style(GtkToolbar * toolbar);
    extern GType gtk_tooltip_get_type(void);
    extern void gtk_tooltip_set_custom(GtkTooltip * tooltip, GtkWidget *);
    extern void gtk_tooltip_set_icon(GtkTooltip * tooltip, GdkPixbuf *);
    extern void gtk_tooltip_set_icon_from_gicon(GtkTooltip * tooltip,
						GIcon *, GtkIconSize);
    extern void gtk_tooltip_set_icon_from_icon_name(GtkTooltip * tooltip,
						    const char *,
						    GtkIconSize);
    extern void gtk_tooltip_set_icon_from_stock(GtkTooltip * tooltip,
						const char *, GtkIconSize);
    extern void gtk_tooltip_set_markup(GtkTooltip * tooltip, const char *);
    extern void gtk_tooltip_set_text(GtkTooltip * tooltip, const char *);
    extern void gtk_tooltip_set_tip_area(GtkTooltip * tooltip,
					 const GdkRectangle *);
    extern void gtk_tooltip_trigger_tooltip_query(GdkDisplay * display);
    extern gboolean gtk_tree_drag_dest_drag_data_received(GtkTreeDragDest *
							  drag_dest,
							  GtkTreePath *,
							  GtkSelectionData
							  *);
    extern GType gtk_tree_drag_dest_get_type(void);
    extern gboolean gtk_tree_drag_dest_row_drop_possible(GtkTreeDragDest *
							 drag_dest,
							 GtkTreePath *,
							 GtkSelectionData
							 *);
    extern gboolean gtk_tree_drag_source_drag_data_delete(GtkTreeDragSource
							  * drag_source,
							  GtkTreePath *);
    extern gboolean gtk_tree_drag_source_drag_data_get(GtkTreeDragSource *
						       drag_source,
						       GtkTreePath *,
						       GtkSelectionData *);
    extern GType gtk_tree_drag_source_get_type(void);
    extern gboolean gtk_tree_drag_source_row_draggable(GtkTreeDragSource *
						       drag_source,
						       GtkTreePath *);
    extern gboolean gtk_tree_get_row_drag_data(GtkSelectionData *
					       selection_data,
					       GtkTreeModel * *,
					       GtkTreePath * *);
    extern GtkTreeIter *gtk_tree_iter_copy(GtkTreeIter * iter);
    extern void gtk_tree_iter_free(GtkTreeIter * iter);
    extern GType gtk_tree_iter_get_type(void);
    extern void gtk_tree_model_filter_clear_cache(GtkTreeModelFilter *
						  filter);
    extern gboolean
	gtk_tree_model_filter_convert_child_iter_to_iter(GtkTreeModelFilter
							 * filter,
							 GtkTreeIter *,
							 GtkTreeIter *);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_child_path_to_path
	(GtkTreeModelFilter * filter, GtkTreePath *);
    extern void
	gtk_tree_model_filter_convert_iter_to_child_iter(GtkTreeModelFilter
							 * filter,
							 GtkTreeIter *,
							 GtkTreeIter *);
    extern GtkTreePath
	*gtk_tree_model_filter_convert_path_to_child_path
	(GtkTreeModelFilter * filter, GtkTreePath *);
    extern GtkTreeModel *gtk_tree_model_filter_get_model(GtkTreeModelFilter
							 * filter);
    extern GType gtk_tree_model_filter_get_type(void);
    extern GtkTreeModel *gtk_tree_model_filter_new(GtkTreeModel *
						   child_model,
						   GtkTreePath *);
    extern void gtk_tree_model_filter_refilter(GtkTreeModelFilter *
					       filter);
    extern void gtk_tree_model_filter_set_modify_func(GtkTreeModelFilter *
						      filter, gint,
						      GType *,
						      GtkTreeModelFilterModifyFunc,
						      gpointer,
						      GDestroyNotify);
    extern void gtk_tree_model_filter_set_visible_column(GtkTreeModelFilter
							 * filter, gint);
    extern void gtk_tree_model_filter_set_visible_func(GtkTreeModelFilter *
						       filter,
						       GtkTreeModelFilterVisibleFunc,
						       gpointer,
						       GDestroyNotify);
    extern GType gtk_tree_model_flags_get_type(void);
    extern void gtk_tree_model_foreach(GtkTreeModel * model,
				       GtkTreeModelForeachFunc, gpointer);
    extern void gtk_tree_model_get(GtkTreeModel * tree_model,
				   GtkTreeIter *, ...);
    extern GType gtk_tree_model_get_column_type(GtkTreeModel * tree_model,
						gint);
    extern GtkTreeModelFlags gtk_tree_model_get_flags(GtkTreeModel *
						      tree_model);
    extern gboolean gtk_tree_model_get_iter(GtkTreeModel * tree_model,
					    GtkTreeIter *, GtkTreePath *);
    extern gboolean gtk_tree_model_get_iter_first(GtkTreeModel *
						  tree_model,
						  GtkTreeIter *);
    extern gboolean gtk_tree_model_get_iter_from_string(GtkTreeModel *
							tree_model,
							GtkTreeIter *,
							const char *);
    extern gint gtk_tree_model_get_n_columns(GtkTreeModel * tree_model);
    extern GtkTreePath *gtk_tree_model_get_path(GtkTreeModel * tree_model,
						GtkTreeIter *);
    extern gchar *gtk_tree_model_get_string_from_iter(GtkTreeModel *
						      tree_model,
						      GtkTreeIter *);
    extern GType gtk_tree_model_get_type(void);
    extern void gtk_tree_model_get_valist(GtkTreeModel * tree_model,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_tree_model_get_value(GtkTreeModel * tree_model,
					 GtkTreeIter *, gint, GValue *);
    extern gboolean gtk_tree_model_iter_children(GtkTreeModel * tree_model,
						 GtkTreeIter *,
						 GtkTreeIter *);
    extern gboolean gtk_tree_model_iter_has_child(GtkTreeModel *
						  tree_model,
						  GtkTreeIter *);
    extern gint gtk_tree_model_iter_n_children(GtkTreeModel * tree_model,
					       GtkTreeIter *);
    extern gboolean gtk_tree_model_iter_next(GtkTreeModel * tree_model,
					     GtkTreeIter *);
    extern gboolean gtk_tree_model_iter_nth_child(GtkTreeModel *
						  tree_model,
						  GtkTreeIter *,
						  GtkTreeIter *, gint);
    extern gboolean gtk_tree_model_iter_parent(GtkTreeModel * tree_model,
					       GtkTreeIter *,
					       GtkTreeIter *);
    extern gboolean gtk_tree_model_iter_previous(GtkTreeModel * tree_model,
						 GtkTreeIter *);
    extern void gtk_tree_model_ref_node(GtkTreeModel * tree_model,
					GtkTreeIter *);
    extern void gtk_tree_model_row_changed(GtkTreeModel * tree_model,
					   GtkTreePath *, GtkTreeIter *);
    extern void gtk_tree_model_row_deleted(GtkTreeModel * tree_model,
					   GtkTreePath *);
    extern void gtk_tree_model_row_has_child_toggled(GtkTreeModel *
						     tree_model,
						     GtkTreePath *,
						     GtkTreeIter *);
    extern void gtk_tree_model_row_inserted(GtkTreeModel * tree_model,
					    GtkTreePath *, GtkTreeIter *);
    extern void gtk_tree_model_rows_reordered(GtkTreeModel * tree_model,
					      GtkTreePath *, GtkTreeIter *,
					      gint *);
    extern void gtk_tree_model_sort_clear_cache(GtkTreeModelSort *
						tree_model_sort);
    extern gboolean
	gtk_tree_model_sort_convert_child_iter_to_iter(GtkTreeModelSort *
						       tree_model_sort,
						       GtkTreeIter *,
						       GtkTreeIter *);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_child_path_to_path(GtkTreeModelSort *
							tree_model_sort,
							GtkTreePath *);
    extern void
	gtk_tree_model_sort_convert_iter_to_child_iter(GtkTreeModelSort *
						       tree_model_sort,
						       GtkTreeIter *,
						       GtkTreeIter *);
    extern GtkTreePath
	*gtk_tree_model_sort_convert_path_to_child_path(GtkTreeModelSort *
							tree_model_sort,
							GtkTreePath *);
    extern GtkTreeModel *gtk_tree_model_sort_get_model(GtkTreeModelSort *
						       tree_model);
    extern GType gtk_tree_model_sort_get_type(void);
    extern gboolean gtk_tree_model_sort_iter_is_valid(GtkTreeModelSort *
						      tree_model_sort,
						      GtkTreeIter *);
    extern GtkTreeModel *gtk_tree_model_sort_new_with_model(GtkTreeModel *
							    child_model);
    extern void
	gtk_tree_model_sort_reset_default_sort_func(GtkTreeModelSort *
						    tree_model_sort);
    extern void gtk_tree_model_unref_node(GtkTreeModel * tree_model,
					  GtkTreeIter *);
    extern void gtk_tree_path_append_index(GtkTreePath * path, gint);
    extern gint gtk_tree_path_compare(const GtkTreePath * a,
				      const GtkTreePath *);
    extern GtkTreePath *gtk_tree_path_copy(const GtkTreePath * path);
    extern void gtk_tree_path_down(GtkTreePath * path);
    extern void gtk_tree_path_free(GtkTreePath * path);
    extern gint gtk_tree_path_get_depth(GtkTreePath * path);
    extern gint *gtk_tree_path_get_indices(GtkTreePath * path);
    extern gint *gtk_tree_path_get_indices_with_depth(GtkTreePath * path,
						      gint *);
    extern GType gtk_tree_path_get_type(void);
    extern gboolean gtk_tree_path_is_ancestor(GtkTreePath * path,
					      GtkTreePath *);
    extern gboolean gtk_tree_path_is_descendant(GtkTreePath * path,
						GtkTreePath *);
    extern GtkTreePath *gtk_tree_path_new(void);
    extern GtkTreePath *gtk_tree_path_new_first(void);
    extern GtkTreePath *gtk_tree_path_new_from_indices(gint first_index,
						       ...);
    extern GtkTreePath *gtk_tree_path_new_from_string(const char *path);
    extern void gtk_tree_path_next(GtkTreePath * path);
    extern void gtk_tree_path_prepend_index(GtkTreePath * path, gint);
    extern gboolean gtk_tree_path_prev(GtkTreePath * path);
    extern gchar *gtk_tree_path_to_string(GtkTreePath * path);
    extern gboolean gtk_tree_path_up(GtkTreePath * path);
    extern GtkTreeRowReference
	*gtk_tree_row_reference_copy(GtkTreeRowReference * reference);
    extern void gtk_tree_row_reference_deleted(GObject * proxy,
					       GtkTreePath *);
    extern void gtk_tree_row_reference_free(GtkTreeRowReference *
					    reference);
    extern GtkTreeModel
	*gtk_tree_row_reference_get_model(GtkTreeRowReference * reference);
    extern GtkTreePath *gtk_tree_row_reference_get_path(GtkTreeRowReference
							* reference);
    extern GType gtk_tree_row_reference_get_type(void);
    extern void gtk_tree_row_reference_inserted(GObject * proxy,
						GtkTreePath *);
    extern GtkTreeRowReference *gtk_tree_row_reference_new(GtkTreeModel *
							   model,
							   GtkTreePath *);
    extern GtkTreeRowReference *gtk_tree_row_reference_new_proxy(GObject *
								 proxy,
								 GtkTreeModel
								 *,
								 GtkTreePath
								 *);
    extern void gtk_tree_row_reference_reordered(GObject * proxy,
						 GtkTreePath *,
						 GtkTreeIter *, gint *);
    extern gboolean gtk_tree_row_reference_valid(GtkTreeRowReference *
						 reference);
    extern gint gtk_tree_selection_count_selected_rows(GtkTreeSelection *
						       selection);
    extern GtkSelectionMode gtk_tree_selection_get_mode(GtkTreeSelection *
							selection);
    extern GtkTreeSelectionFunc
	gtk_tree_selection_get_select_function(GtkTreeSelection *
					       selection);
    extern gboolean gtk_tree_selection_get_selected(GtkTreeSelection *
						    selection,
						    GtkTreeModel * *,
						    GtkTreeIter *);
    extern GList *gtk_tree_selection_get_selected_rows(GtkTreeSelection *
						       selection,
						       GtkTreeModel * *);
    extern GtkTreeView *gtk_tree_selection_get_tree_view(GtkTreeSelection *
							 selection);
    extern GType gtk_tree_selection_get_type(void);
    extern gpointer gtk_tree_selection_get_user_data(GtkTreeSelection *
						     selection);
    extern gboolean gtk_tree_selection_iter_is_selected(GtkTreeSelection *
							selection,
							GtkTreeIter *);
    extern gboolean gtk_tree_selection_path_is_selected(GtkTreeSelection *
							selection,
							GtkTreePath *);
    extern void gtk_tree_selection_select_all(GtkTreeSelection *
					      selection);
    extern void gtk_tree_selection_select_iter(GtkTreeSelection *
					       selection, GtkTreeIter *);
    extern void gtk_tree_selection_select_path(GtkTreeSelection *
					       selection, GtkTreePath *);
    extern void gtk_tree_selection_select_range(GtkTreeSelection *
						selection, GtkTreePath *,
						GtkTreePath *);
    extern void gtk_tree_selection_selected_foreach(GtkTreeSelection *
						    selection,
						    GtkTreeSelectionForeachFunc,
						    gpointer);
    extern void gtk_tree_selection_set_mode(GtkTreeSelection * selection,
					    GtkSelectionMode);
    extern void gtk_tree_selection_set_select_function(GtkTreeSelection *
						       selection,
						       GtkTreeSelectionFunc,
						       gpointer,
						       GDestroyNotify);
    extern void gtk_tree_selection_unselect_all(GtkTreeSelection *
						selection);
    extern void gtk_tree_selection_unselect_iter(GtkTreeSelection *
						 selection, GtkTreeIter *);
    extern void gtk_tree_selection_unselect_path(GtkTreeSelection *
						 selection, GtkTreePath *);
    extern void gtk_tree_selection_unselect_range(GtkTreeSelection *
						  selection, GtkTreePath *,
						  GtkTreePath *);
    extern gboolean gtk_tree_set_row_drag_data(GtkSelectionData *
					       selection_data,
					       GtkTreeModel *,
					       GtkTreePath *);
    extern gboolean gtk_tree_sortable_get_sort_column_id(GtkTreeSortable *
							 sortable, gint *,
							 GtkSortType *);
    extern GType gtk_tree_sortable_get_type(void);
    extern gboolean gtk_tree_sortable_has_default_sort_func(GtkTreeSortable
							    * sortable);
    extern void gtk_tree_sortable_set_default_sort_func(GtkTreeSortable *
							sortable,
							GtkTreeIterCompareFunc,
							gpointer,
							GDestroyNotify);
    extern void gtk_tree_sortable_set_sort_column_id(GtkTreeSortable *
						     sortable, gint,
						     GtkSortType);
    extern void gtk_tree_sortable_set_sort_func(GtkTreeSortable * sortable,
						gint,
						GtkTreeIterCompareFunc,
						gpointer, GDestroyNotify);
    extern void gtk_tree_sortable_sort_column_changed(GtkTreeSortable *
						      sortable);
    extern void gtk_tree_store_append(GtkTreeStore * tree_store,
				      GtkTreeIter *, GtkTreeIter *);
    extern void gtk_tree_store_clear(GtkTreeStore * tree_store);
    extern GType gtk_tree_store_get_type(void);
    extern void gtk_tree_store_insert(GtkTreeStore * tree_store,
				      GtkTreeIter *, GtkTreeIter *, gint);
    extern void gtk_tree_store_insert_after(GtkTreeStore * tree_store,
					    GtkTreeIter *, GtkTreeIter *,
					    GtkTreeIter *);
    extern void gtk_tree_store_insert_before(GtkTreeStore * tree_store,
					     GtkTreeIter *, GtkTreeIter *,
					     GtkTreeIter *);
    extern void gtk_tree_store_insert_with_values(GtkTreeStore *
						  tree_store,
						  GtkTreeIter *,
						  GtkTreeIter *, gint,
						  ...);
    extern void gtk_tree_store_insert_with_valuesv(GtkTreeStore *
						   tree_store,
						   GtkTreeIter *,
						   GtkTreeIter *, gint,
						   gint *, GValue *, gint);
    extern gboolean gtk_tree_store_is_ancestor(GtkTreeStore * tree_store,
					       GtkTreeIter *,
					       GtkTreeIter *);
    extern gint gtk_tree_store_iter_depth(GtkTreeStore * tree_store,
					  GtkTreeIter *);
    extern gboolean gtk_tree_store_iter_is_valid(GtkTreeStore * tree_store,
						 GtkTreeIter *);
    extern void gtk_tree_store_move_after(GtkTreeStore * tree_store,
					  GtkTreeIter *, GtkTreeIter *);
    extern void gtk_tree_store_move_before(GtkTreeStore * tree_store,
					   GtkTreeIter *, GtkTreeIter *);
    extern GtkTreeStore *gtk_tree_store_new(gint n_columns, ...);
    extern GtkTreeStore *gtk_tree_store_newv(gint n_columns, GType *);
    extern void gtk_tree_store_prepend(GtkTreeStore * tree_store,
				       GtkTreeIter *, GtkTreeIter *);
    extern gboolean gtk_tree_store_remove(GtkTreeStore * tree_store,
					  GtkTreeIter *);
    extern void gtk_tree_store_reorder(GtkTreeStore * tree_store,
				       GtkTreeIter *, gint *);
    extern void gtk_tree_store_set(GtkTreeStore * tree_store,
				   GtkTreeIter *, ...);
    extern void gtk_tree_store_set_column_types(GtkTreeStore * tree_store,
						gint, GType *);
    extern void gtk_tree_store_set_valist(GtkTreeStore * tree_store,
					  GtkTreeIter * iter,
					  va_list var_args);
    extern void gtk_tree_store_set_value(GtkTreeStore * tree_store,
					 GtkTreeIter *, gint, GValue *);
    extern void gtk_tree_store_set_valuesv(GtkTreeStore * tree_store,
					   GtkTreeIter *, gint *, GValue *,
					   gint);
    extern void gtk_tree_store_swap(GtkTreeStore * tree_store,
				    GtkTreeIter *, GtkTreeIter *);
    extern gint gtk_tree_view_append_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn *);
    extern void gtk_tree_view_collapse_all(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_collapse_row(GtkTreeView * tree_view,
					       GtkTreePath *);
    extern void gtk_tree_view_column_add_attribute(GtkTreeViewColumn *
						   tree_column,
						   GtkCellRenderer *,
						   const char *, gint);
    extern gboolean
	gtk_tree_view_column_cell_get_position(GtkTreeViewColumn *
					       tree_column,
					       GtkCellRenderer *, gint *,
					       gint *);
    extern void gtk_tree_view_column_cell_get_size(GtkTreeViewColumn *
						   tree_column,
						   const GdkRectangle *,
						   gint *, gint *, gint *,
						   gint *);
    extern gboolean gtk_tree_view_column_cell_is_visible(GtkTreeViewColumn
							 * tree_column);
    extern void gtk_tree_view_column_cell_set_cell_data(GtkTreeViewColumn *
							tree_column,
							GtkTreeModel *,
							GtkTreeIter *,
							gboolean,
							gboolean);
    extern void gtk_tree_view_column_clear(GtkTreeViewColumn *
					   tree_column);
    extern void gtk_tree_view_column_clear_attributes(GtkTreeViewColumn *
						      tree_column,
						      GtkCellRenderer *);
    extern void gtk_tree_view_column_clicked(GtkTreeViewColumn *
					     tree_column);
    extern void gtk_tree_view_column_focus_cell(GtkTreeViewColumn *
						tree_column,
						GtkCellRenderer *);
    extern gfloat gtk_tree_view_column_get_alignment(GtkTreeViewColumn *
						     tree_column);
    extern GtkWidget *gtk_tree_view_column_get_button(GtkTreeViewColumn *
						      tree_column);
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
    extern const char *gtk_tree_view_column_get_title(GtkTreeViewColumn *
						      tree_column);
    extern GtkWidget *gtk_tree_view_column_get_tree_view(GtkTreeViewColumn
							 * tree_column);
    extern GType gtk_tree_view_column_get_type(void);
    extern gboolean gtk_tree_view_column_get_visible(GtkTreeViewColumn *
						     tree_column);
    extern GtkWidget *gtk_tree_view_column_get_widget(GtkTreeViewColumn *
						      tree_column);
    extern gint gtk_tree_view_column_get_width(GtkTreeViewColumn *
					       tree_column);
    extern gint gtk_tree_view_column_get_x_offset(GtkTreeViewColumn *
						  tree_column);
    extern GtkTreeViewColumn *gtk_tree_view_column_new(void);
    extern GtkTreeViewColumn
	*gtk_tree_view_column_new_with_area(GtkCellArea * area);
    extern GtkTreeViewColumn
	*gtk_tree_view_column_new_with_attributes(const char *title,
						  GtkCellRenderer *, ...);
    extern void gtk_tree_view_column_pack_end(GtkTreeViewColumn *
					      tree_column,
					      GtkCellRenderer *, gboolean);
    extern void gtk_tree_view_column_pack_start(GtkTreeViewColumn *
						tree_column,
						GtkCellRenderer *,
						gboolean);
    extern void gtk_tree_view_column_queue_resize(GtkTreeViewColumn *
						  tree_column);
    extern void gtk_tree_view_column_set_alignment(GtkTreeViewColumn *
						   tree_column, gfloat);
    extern void gtk_tree_view_column_set_attributes(GtkTreeViewColumn *
						    tree_column,
						    GtkCellRenderer *,
						    ...);
    extern void gtk_tree_view_column_set_cell_data_func(GtkTreeViewColumn *
							tree_column,
							GtkCellRenderer *,
							GtkTreeCellDataFunc,
							gpointer,
							GDestroyNotify);
    extern void gtk_tree_view_column_set_clickable(GtkTreeViewColumn *
						   tree_column, gboolean);
    extern void gtk_tree_view_column_set_expand(GtkTreeViewColumn *
						tree_column, gboolean);
    extern void gtk_tree_view_column_set_fixed_width(GtkTreeViewColumn *
						     tree_column, gint);
    extern void gtk_tree_view_column_set_max_width(GtkTreeViewColumn *
						   tree_column, gint);
    extern void gtk_tree_view_column_set_min_width(GtkTreeViewColumn *
						   tree_column, gint);
    extern void gtk_tree_view_column_set_reorderable(GtkTreeViewColumn *
						     tree_column,
						     gboolean);
    extern void gtk_tree_view_column_set_resizable(GtkTreeViewColumn *
						   tree_column, gboolean);
    extern void gtk_tree_view_column_set_sizing(GtkTreeViewColumn *
						tree_column,
						GtkTreeViewColumnSizing);
    extern void gtk_tree_view_column_set_sort_column_id(GtkTreeViewColumn *
							tree_column, gint);
    extern void gtk_tree_view_column_set_sort_indicator(GtkTreeViewColumn *
							tree_column,
							gboolean);
    extern void gtk_tree_view_column_set_sort_order(GtkTreeViewColumn *
						    tree_column,
						    GtkSortType);
    extern void gtk_tree_view_column_set_spacing(GtkTreeViewColumn *
						 tree_column, gint);
    extern void gtk_tree_view_column_set_title(GtkTreeViewColumn *
					       tree_column, const char *);
    extern void gtk_tree_view_column_set_visible(GtkTreeViewColumn *
						 tree_column, gboolean);
    extern void gtk_tree_view_column_set_widget(GtkTreeViewColumn *
						tree_column, GtkWidget *);
    extern GType gtk_tree_view_column_sizing_get_type(void);
    extern void gtk_tree_view_columns_autosize(GtkTreeView * tree_view);
    extern void gtk_tree_view_convert_bin_window_to_tree_coords(GtkTreeView
								*
								tree_view,
								gint, gint,
								gint *,
								gint *);
    extern void
	gtk_tree_view_convert_bin_window_to_widget_coords(GtkTreeView *
							  tree_view, gint,
							  gint, gint *,
							  gint *);
    extern void gtk_tree_view_convert_tree_to_bin_window_coords(GtkTreeView
								*
								tree_view,
								gint, gint,
								gint *,
								gint *);
    extern void gtk_tree_view_convert_tree_to_widget_coords(GtkTreeView *
							    tree_view,
							    gint, gint,
							    gint *,
							    gint *);
    extern void
	gtk_tree_view_convert_widget_to_bin_window_coords(GtkTreeView *
							  tree_view, gint,
							  gint, gint *,
							  gint *);
    extern void gtk_tree_view_convert_widget_to_tree_coords(GtkTreeView *
							    tree_view,
							    gint, gint,
							    gint *,
							    gint *);
    extern cairo_surface_t *gtk_tree_view_create_row_drag_icon(GtkTreeView
							       * tree_view,
							       GtkTreePath
							       *);
    extern GType gtk_tree_view_drop_position_get_type(void);
    extern void gtk_tree_view_enable_model_drag_dest(GtkTreeView *
						     tree_view,
						     gint n_targets,
						     GdkDragAction
						     actions);
    extern void gtk_tree_view_enable_model_drag_source(GtkTreeView *
						       tree_view,
						       GdkModifierType
						       start_button_mask,
						       gint n_targets,
						       GdkDragAction
						       actions);
    extern void gtk_tree_view_expand_all(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_expand_row(GtkTreeView * tree_view,
					     GtkTreePath *, gboolean);
    extern void gtk_tree_view_expand_to_path(GtkTreeView * tree_view,
					     GtkTreePath *);
    extern void gtk_tree_view_get_background_area(GtkTreeView * tree_view,
						  GtkTreePath *,
						  GtkTreeViewColumn *,
						  GdkRectangle *);
    extern GdkWindow *gtk_tree_view_get_bin_window(GtkTreeView *
						   tree_view);
    extern void gtk_tree_view_get_cell_area(GtkTreeView * tree_view,
					    GtkTreePath *,
					    GtkTreeViewColumn *,
					    GdkRectangle *);
    extern GtkTreeViewColumn *gtk_tree_view_get_column(GtkTreeView *
						       tree_view, gint);
    extern GList *gtk_tree_view_get_columns(GtkTreeView * tree_view);
    extern void gtk_tree_view_get_cursor(GtkTreeView * tree_view,
					 GtkTreePath * *,
					 GtkTreeViewColumn * *);
    extern gboolean gtk_tree_view_get_dest_row_at_pos(GtkTreeView *
						      tree_view, gint,
						      gint,
						      GtkTreePath * *,
						      GtkTreeViewDropPosition
						      *);
    extern void gtk_tree_view_get_drag_dest_row(GtkTreeView * tree_view,
						GtkTreePath * *,
						GtkTreeViewDropPosition *);
    extern gboolean gtk_tree_view_get_enable_search(GtkTreeView *
						    tree_view);
    extern gboolean gtk_tree_view_get_enable_tree_lines(GtkTreeView *
							tree_view);
    extern GtkTreeViewColumn *gtk_tree_view_get_expander_column(GtkTreeView
								*
								tree_view);
    extern gboolean gtk_tree_view_get_fixed_height_mode(GtkTreeView *
							tree_view);
    extern GtkTreeViewGridLines gtk_tree_view_get_grid_lines(GtkTreeView *
							     tree_view);
    extern GtkAdjustment *gtk_tree_view_get_hadjustment(GtkTreeView *
							tree_view);
    extern gboolean gtk_tree_view_get_headers_clickable(GtkTreeView *
							tree_view);
    extern gboolean gtk_tree_view_get_headers_visible(GtkTreeView *
						      tree_view);
    extern gboolean gtk_tree_view_get_hover_expand(GtkTreeView *
						   tree_view);
    extern gboolean gtk_tree_view_get_hover_selection(GtkTreeView *
						      tree_view);
    extern gint gtk_tree_view_get_level_indentation(GtkTreeView *
						    tree_view);
    extern GtkTreeModel *gtk_tree_view_get_model(GtkTreeView * tree_view);
    extern guint gtk_tree_view_get_n_columns(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_get_path_at_pos(GtkTreeView * tree_view,
						  gint, gint,
						  GtkTreePath * *,
						  GtkTreeViewColumn * *,
						  gint *, gint *);
    extern gboolean gtk_tree_view_get_reorderable(GtkTreeView * tree_view);
    extern GtkTreeViewRowSeparatorFunc
	gtk_tree_view_get_row_separator_func(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_get_rubber_banding(GtkTreeView *
						     tree_view);
    extern gboolean gtk_tree_view_get_rules_hint(GtkTreeView * tree_view);
    extern gint gtk_tree_view_get_search_column(GtkTreeView * tree_view);
    extern GtkEntry *gtk_tree_view_get_search_entry(GtkTreeView *
						    tree_view);
    extern GtkTreeViewSearchEqualFunc
	gtk_tree_view_get_search_equal_func(GtkTreeView * tree_view);
    extern GtkTreeViewSearchPositionFunc
	gtk_tree_view_get_search_position_func(GtkTreeView * tree_view);
    extern GtkTreeSelection *gtk_tree_view_get_selection(GtkTreeView *
							 tree_view);
    extern gboolean gtk_tree_view_get_show_expanders(GtkTreeView *
						     tree_view);
    extern gint gtk_tree_view_get_tooltip_column(GtkTreeView * tree_view);
    extern gboolean gtk_tree_view_get_tooltip_context(GtkTreeView *
						      tree_view, gint *,
						      gint *, gboolean,
						      GtkTreeModel * *,
						      GtkTreePath * *,
						      GtkTreeIter *);
    extern GType gtk_tree_view_get_type(void);
    extern GtkAdjustment *gtk_tree_view_get_vadjustment(GtkTreeView *
							tree_view);
    extern gboolean gtk_tree_view_get_visible_range(GtkTreeView *
						    tree_view,
						    GtkTreePath * *,
						    GtkTreePath * *);
    extern void gtk_tree_view_get_visible_rect(GtkTreeView * tree_view,
					       GdkRectangle *);
    extern GType gtk_tree_view_grid_lines_get_type(void);
    extern gint gtk_tree_view_insert_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn *, gint);
    extern gint gtk_tree_view_insert_column_with_attributes(GtkTreeView *
							    tree_view,
							    gint,
							    const char *,
							    GtkCellRenderer
							    *, ...);
    extern gint gtk_tree_view_insert_column_with_data_func(GtkTreeView *
							   tree_view, gint,
							   const char *,
							   GtkCellRenderer
							   *,
							   GtkTreeCellDataFunc,
							   gpointer,
							   GDestroyNotify);
    extern gboolean gtk_tree_view_is_blank_at_pos(GtkTreeView * tree_view,
						  gint, gint,
						  GtkTreePath * *,
						  GtkTreeViewColumn * *,
						  gint *, gint *);
    extern gboolean gtk_tree_view_is_rubber_banding_active(GtkTreeView *
							   tree_view);
    extern void gtk_tree_view_map_expanded_rows(GtkTreeView * tree_view,
						GtkTreeViewMappingFunc,
						gpointer);
    extern void gtk_tree_view_move_column_after(GtkTreeView * tree_view,
						GtkTreeViewColumn *,
						GtkTreeViewColumn *);
    extern GtkWidget *gtk_tree_view_new(void);
    extern GtkWidget *gtk_tree_view_new_with_model(GtkTreeModel * model);
    extern gint gtk_tree_view_remove_column(GtkTreeView * tree_view,
					    GtkTreeViewColumn *);
    extern void gtk_tree_view_row_activated(GtkTreeView * tree_view,
					    GtkTreePath *,
					    GtkTreeViewColumn *);
    extern gboolean gtk_tree_view_row_expanded(GtkTreeView * tree_view,
					       GtkTreePath *);
    extern void gtk_tree_view_scroll_to_cell(GtkTreeView * tree_view,
					     GtkTreePath *,
					     GtkTreeViewColumn *, gboolean,
					     gfloat, gfloat);
    extern void gtk_tree_view_scroll_to_point(GtkTreeView * tree_view,
					      gint, gint);
    extern void gtk_tree_view_set_column_drag_function(GtkTreeView *
						       tree_view,
						       GtkTreeViewColumnDropFunc,
						       gpointer,
						       GDestroyNotify);
    extern void gtk_tree_view_set_cursor(GtkTreeView * tree_view,
					 GtkTreePath *,
					 GtkTreeViewColumn *, gboolean);
    extern void gtk_tree_view_set_cursor_on_cell(GtkTreeView * tree_view,
						 GtkTreePath *,
						 GtkTreeViewColumn *,
						 GtkCellRenderer *,
						 gboolean);
    extern void gtk_tree_view_set_destroy_count_func(GtkTreeView *
						     tree_view,
						     GtkTreeDestroyCountFunc,
						     gpointer,
						     GDestroyNotify);
    extern void gtk_tree_view_set_drag_dest_row(GtkTreeView * tree_view,
						GtkTreePath *,
						GtkTreeViewDropPosition);
    extern void gtk_tree_view_set_enable_search(GtkTreeView * tree_view,
						gboolean);
    extern void gtk_tree_view_set_enable_tree_lines(GtkTreeView *
						    tree_view, gboolean);
    extern void gtk_tree_view_set_expander_column(GtkTreeView * tree_view,
						  GtkTreeViewColumn *);
    extern void gtk_tree_view_set_fixed_height_mode(GtkTreeView *
						    tree_view, gboolean);
    extern void gtk_tree_view_set_grid_lines(GtkTreeView * tree_view,
					     GtkTreeViewGridLines);
    extern void gtk_tree_view_set_hadjustment(GtkTreeView * tree_view,
					      GtkAdjustment *);
    extern void gtk_tree_view_set_headers_clickable(GtkTreeView *
						    tree_view, gboolean);
    extern void gtk_tree_view_set_headers_visible(GtkTreeView * tree_view,
						  gboolean);
    extern void gtk_tree_view_set_hover_expand(GtkTreeView * tree_view,
					       gboolean);
    extern void gtk_tree_view_set_hover_selection(GtkTreeView * tree_view,
						  gboolean);
    extern void gtk_tree_view_set_level_indentation(GtkTreeView *
						    tree_view, gint);
    extern void gtk_tree_view_set_model(GtkTreeView * tree_view,
					GtkTreeModel *);
    extern void gtk_tree_view_set_reorderable(GtkTreeView * tree_view,
					      gboolean);
    extern void gtk_tree_view_set_row_separator_func(GtkTreeView *
						     tree_view,
						     GtkTreeViewRowSeparatorFunc,
						     gpointer,
						     GDestroyNotify);
    extern void gtk_tree_view_set_rubber_banding(GtkTreeView * tree_view,
						 gboolean);
    extern void gtk_tree_view_set_rules_hint(GtkTreeView * tree_view,
					     gboolean);
    extern void gtk_tree_view_set_search_column(GtkTreeView * tree_view,
						gint);
    extern void gtk_tree_view_set_search_entry(GtkTreeView * tree_view,
					       GtkEntry *);
    extern void gtk_tree_view_set_search_equal_func(GtkTreeView *
						    tree_view,
						    GtkTreeViewSearchEqualFunc,
						    gpointer,
						    GDestroyNotify);
    extern void gtk_tree_view_set_search_position_func(GtkTreeView *
						       tree_view,
						       GtkTreeViewSearchPositionFunc,
						       gpointer,
						       GDestroyNotify);
    extern void gtk_tree_view_set_show_expanders(GtkTreeView * tree_view,
						 gboolean);
    extern void gtk_tree_view_set_tooltip_cell(GtkTreeView * tree_view,
					       GtkTooltip *, GtkTreePath *,
					       GtkTreeViewColumn *,
					       GtkCellRenderer *);
    extern void gtk_tree_view_set_tooltip_column(GtkTreeView * tree_view,
						 gint);
    extern void gtk_tree_view_set_tooltip_row(GtkTreeView * tree_view,
					      GtkTooltip *, GtkTreePath *);
    extern void gtk_tree_view_set_vadjustment(GtkTreeView * tree_view,
					      GtkAdjustment *);
    extern void gtk_tree_view_unset_rows_drag_dest(GtkTreeView *
						   tree_view);
    extern void gtk_tree_view_unset_rows_drag_source(GtkTreeView *
						     tree_view);
    extern gboolean gtk_true(void);
    extern void gtk_ui_manager_add_ui(GtkUIManager * manager, guint,
				      const char *, const char *,
				      const char *, GtkUIManagerItemType,
				      gboolean);
    extern guint gtk_ui_manager_add_ui_from_file(GtkUIManager * manager,
						 const char *, GError * *);
    extern guint gtk_ui_manager_add_ui_from_resource(GtkUIManager *
						     manager, const char *,
						     GError * *);
    extern guint gtk_ui_manager_add_ui_from_string(GtkUIManager * manager,
						   const char *, gssize,
						   GError * *);
    extern void gtk_ui_manager_ensure_update(GtkUIManager * manager);
    extern GtkAccelGroup *gtk_ui_manager_get_accel_group(GtkUIManager *
							 manager);
    extern GtkAction *gtk_ui_manager_get_action(GtkUIManager * manager,
						const char *);
    extern GList *gtk_ui_manager_get_action_groups(GtkUIManager * manager);
    extern gboolean gtk_ui_manager_get_add_tearoffs(GtkUIManager *
						    manager);
    extern GSList *gtk_ui_manager_get_toplevels(GtkUIManager * manager,
						GtkUIManagerItemType);
    extern GType gtk_ui_manager_get_type(void);
    extern gchar *gtk_ui_manager_get_ui(GtkUIManager * manager);
    extern GtkWidget *gtk_ui_manager_get_widget(GtkUIManager * manager,
						const char *);
    extern void gtk_ui_manager_insert_action_group(GtkUIManager * manager,
						   GtkActionGroup *, gint);
    extern GType gtk_ui_manager_item_type_get_type(void);
    extern GtkUIManager *gtk_ui_manager_new(void);
    extern guint gtk_ui_manager_new_merge_id(GtkUIManager * manager);
    extern void gtk_ui_manager_remove_action_group(GtkUIManager * manager,
						   GtkActionGroup *);
    extern void gtk_ui_manager_remove_ui(GtkUIManager * manager, guint);
    extern void gtk_ui_manager_set_add_tearoffs(GtkUIManager * manager,
						gboolean);
    extern GType gtk_unit_get_type(void);
    extern GdkWindow *gtk_viewport_get_bin_window(GtkViewport * viewport);
    extern GtkAdjustment *gtk_viewport_get_hadjustment(GtkViewport *
						       viewport);
    extern GtkShadowType gtk_viewport_get_shadow_type(GtkViewport *
						      viewport);
    extern GType gtk_viewport_get_type(void);
    extern GtkAdjustment *gtk_viewport_get_vadjustment(GtkViewport *
						       viewport);
    extern GdkWindow *gtk_viewport_get_view_window(GtkViewport * viewport);
    extern GtkWidget *gtk_viewport_new(GtkAdjustment * hadjustment,
				       GtkAdjustment *);
    extern void gtk_viewport_set_hadjustment(GtkViewport * viewport,
					     GtkAdjustment *);
    extern void gtk_viewport_set_shadow_type(GtkViewport * viewport,
					     GtkShadowType);
    extern void gtk_viewport_set_vadjustment(GtkViewport * viewport,
					     GtkAdjustment *);
    extern GType gtk_volume_button_get_type(void);
    extern GtkWidget *gtk_volume_button_new(void);
    extern gboolean gtk_widget_activate(GtkWidget * widget);
    extern void gtk_widget_add_accelerator(GtkWidget * widget,
					   const gchar * accel_signal,
					   GtkAccelGroup * accel_group,
					   guint accel_key,
					   GdkModifierType accel_mods,
					   GtkAccelFlags accel_flags);
    extern void gtk_widget_add_device_events(GtkWidget * widget,
					     GdkDevice * device,
					     GdkEventMask events);
    extern void gtk_widget_add_events(GtkWidget * widget, gint);
    extern void gtk_widget_add_mnemonic_label(GtkWidget * widget,
					      GtkWidget *);
    extern gboolean gtk_widget_can_activate_accel(GtkWidget * widget,
						  guint);
    extern gboolean gtk_widget_child_focus(GtkWidget * widget,
					   GtkDirectionType);
    extern void gtk_widget_child_notify(GtkWidget * widget, const char *);
    extern GParamSpec *gtk_widget_class_find_style_property(GtkWidgetClass
							    * klass,
							    const char *);
    extern void gtk_widget_class_install_style_property(GtkWidgetClass *
							klass,
							GParamSpec *);
    extern void
	gtk_widget_class_install_style_property_parser(GtkWidgetClass *
						       klass, GParamSpec *,
						       GtkRcPropertyParser);
    extern GParamSpec
	**gtk_widget_class_list_style_properties(GtkWidgetClass * klass,
						 guint *);
    extern void gtk_widget_class_set_accessible_role(GtkWidgetClass *
						     widget_class,
						     AtkRole);
    extern void gtk_widget_class_set_accessible_type(GtkWidgetClass *
						     widget_class, GType);
    extern gboolean gtk_widget_compute_expand(GtkWidget * widget,
					      GtkOrientation);
    extern PangoContext *gtk_widget_create_pango_context(GtkWidget *
							 widget);
    extern PangoLayout *gtk_widget_create_pango_layout(GtkWidget * widget,
						       const char *);
    extern void gtk_widget_destroy(GtkWidget * widget);
    extern void gtk_widget_destroyed(GtkWidget * widget, GtkWidget * *);
    extern gboolean gtk_widget_device_is_shadowed(GtkWidget * widget,
						  GdkDevice *);
    extern void gtk_widget_draw(GtkWidget * widget, cairo_t *);
    extern void gtk_widget_error_bell(GtkWidget * widget);
    extern gboolean gtk_widget_event(GtkWidget * widget, GdkEvent *);
    extern void gtk_widget_freeze_child_notify(GtkWidget * widget);
    extern AtkObject *gtk_widget_get_accessible(GtkWidget * widget);
    extern int gtk_widget_get_allocated_height(GtkWidget * widget);
    extern int gtk_widget_get_allocated_width(GtkWidget * widget);
    extern void gtk_widget_get_allocation(GtkWidget * widget,
					  GtkAllocation *);
    extern GtkWidget *gtk_widget_get_ancestor(GtkWidget * widget, GType);
    extern gboolean gtk_widget_get_app_paintable(GtkWidget * widget);
    extern gboolean gtk_widget_get_can_default(GtkWidget * widget);
    extern gboolean gtk_widget_get_can_focus(GtkWidget * widget);
    extern void gtk_widget_get_child_requisition(GtkWidget * widget,
						 GtkRequisition *);
    extern gboolean gtk_widget_get_child_visible(GtkWidget * widget);
    extern GtkClipboard *gtk_widget_get_clipboard(GtkWidget * widget,
						  GdkAtom selection);
    extern gchar *gtk_widget_get_composite_name(GtkWidget * widget);
    extern GtkTextDirection gtk_widget_get_default_direction(void);
    extern gboolean gtk_widget_get_device_enabled(GtkWidget * widget,
						  GdkDevice *);
    extern GdkEventMask gtk_widget_get_device_events(GtkWidget * widget,
						     GdkDevice *);
    extern GtkTextDirection gtk_widget_get_direction(GtkWidget * widget);
    extern GdkDisplay *gtk_widget_get_display(GtkWidget * widget);
    extern gboolean gtk_widget_get_double_buffered(GtkWidget * widget);
    extern gint gtk_widget_get_events(GtkWidget * widget);
    extern GtkAlign gtk_widget_get_halign(GtkWidget * widget);
    extern gboolean gtk_widget_get_has_tooltip(GtkWidget * widget);
    extern gboolean gtk_widget_get_has_window(GtkWidget * widget);
    extern gboolean gtk_widget_get_hexpand(GtkWidget * widget);
    extern gboolean gtk_widget_get_hexpand_set(GtkWidget * widget);
    extern gboolean gtk_widget_get_mapped(GtkWidget * widget);
    extern gint gtk_widget_get_margin_bottom(GtkWidget * widget);
    extern gint gtk_widget_get_margin_left(GtkWidget * widget);
    extern gint gtk_widget_get_margin_right(GtkWidget * widget);
    extern gint gtk_widget_get_margin_top(GtkWidget * widget);
    extern GdkModifierType gtk_widget_get_modifier_mask(GtkWidget * widget,
							GdkModifierIntent);
    extern const char *gtk_widget_get_name(GtkWidget * widget);
    extern gboolean gtk_widget_get_no_show_all(GtkWidget * widget);
    extern PangoContext *gtk_widget_get_pango_context(GtkWidget * widget);
    extern GtkWidget *gtk_widget_get_parent(GtkWidget * widget);
    extern GdkWindow *gtk_widget_get_parent_window(GtkWidget * widget);
    extern GtkWidgetPath *gtk_widget_get_path(GtkWidget * widget);
    extern void gtk_widget_get_pointer(GtkWidget * widget, gint *, gint *);
    extern void gtk_widget_get_preferred_height(GtkWidget * widget, gint *,
						gint *);
    extern void gtk_widget_get_preferred_height_for_width(GtkWidget *
							  widget, gint,
							  gint *, gint *);
    extern void gtk_widget_get_preferred_size(GtkWidget * widget,
					      GtkRequisition *,
					      GtkRequisition *);
    extern void gtk_widget_get_preferred_width(GtkWidget * widget, gint *,
					       gint *);
    extern void gtk_widget_get_preferred_width_for_height(GtkWidget *
							  widget, gint,
							  gint *, gint *);
    extern gboolean gtk_widget_get_realized(GtkWidget * widget);
    extern gboolean gtk_widget_get_receives_default(GtkWidget * widget);
    extern GtkSizeRequestMode gtk_widget_get_request_mode(GtkWidget *
							  widget);
    extern void gtk_widget_get_requisition(GtkWidget * widget,
					   GtkRequisition *);
    extern GdkWindow *gtk_widget_get_root_window(GtkWidget * widget);
    extern GdkScreen *gtk_widget_get_screen(GtkWidget * widget);
    extern gboolean gtk_widget_get_sensitive(GtkWidget * widget);
    extern GtkSettings *gtk_widget_get_settings(GtkWidget * widget);
    extern void gtk_widget_get_size_request(GtkWidget * widget, gint *,
					    gint *);
    extern GtkStateType gtk_widget_get_state(GtkWidget * widget);
    extern GtkStateFlags gtk_widget_get_state_flags(GtkWidget * widget);
    extern GtkStyleContext *gtk_widget_get_style_context(GtkWidget *
							 widget);
    extern gboolean gtk_widget_get_support_multidevice(GtkWidget * widget);
    extern gchar *gtk_widget_get_tooltip_markup(GtkWidget * widget);
    extern gchar *gtk_widget_get_tooltip_text(GtkWidget * widget);
    extern GtkWindow *gtk_widget_get_tooltip_window(GtkWidget * widget);
    extern GtkWidget *gtk_widget_get_toplevel(GtkWidget * widget);
    extern GType gtk_widget_get_type(void);
    extern GtkAlign gtk_widget_get_valign(GtkWidget * widget);
    extern gboolean gtk_widget_get_vexpand(GtkWidget * widget);
    extern gboolean gtk_widget_get_vexpand_set(GtkWidget * widget);
    extern gboolean gtk_widget_get_visible(GtkWidget * widget);
    extern GdkVisual *gtk_widget_get_visual(GtkWidget * widget);
    extern GdkWindow *gtk_widget_get_window(GtkWidget * widget);
    extern void gtk_widget_grab_default(GtkWidget * widget);
    extern void gtk_widget_grab_focus(GtkWidget * widget);
    extern gboolean gtk_widget_has_default(GtkWidget * widget);
    extern gboolean gtk_widget_has_focus(GtkWidget * widget);
    extern gboolean gtk_widget_has_grab(GtkWidget * widget);
    extern gboolean gtk_widget_has_screen(GtkWidget * widget);
    extern gboolean gtk_widget_has_visible_focus(GtkWidget * widget);
    extern GType gtk_widget_help_type_get_type(void);
    extern void gtk_widget_hide(GtkWidget * widget);
    extern gboolean gtk_widget_hide_on_delete(GtkWidget * widget);
    extern gboolean gtk_widget_in_destruction(GtkWidget * widget);
    extern void gtk_widget_input_shape_combine_region(GtkWidget * widget,
						      cairo_region_t *);
    extern void gtk_widget_insert_action_group(GtkWidget * widget,
					       const char *,
					       GActionGroup *);
    extern gboolean gtk_widget_intersect(GtkWidget * widget,
					 const GdkRectangle *,
					 GdkRectangle *);
    extern gboolean gtk_widget_is_ancestor(GtkWidget * widget,
					   GtkWidget *);
    extern gboolean gtk_widget_is_composited(GtkWidget * widget);
    extern gboolean gtk_widget_is_drawable(GtkWidget * widget);
    extern gboolean gtk_widget_is_focus(GtkWidget * widget);
    extern gboolean gtk_widget_is_sensitive(GtkWidget * widget);
    extern gboolean gtk_widget_is_toplevel(GtkWidget * widget);
    extern gboolean gtk_widget_keynav_failed(GtkWidget * widget,
					     GtkDirectionType);
    extern GList *gtk_widget_list_accel_closures(GtkWidget * widget);
    extern GList *gtk_widget_list_mnemonic_labels(GtkWidget * widget);
    extern void gtk_widget_map(GtkWidget * widget);
    extern gboolean gtk_widget_mnemonic_activate(GtkWidget * widget,
						 gboolean);
    extern GtkWidget *gtk_widget_new(GType type, const char *, ...);
    extern void gtk_widget_override_background_color(GtkWidget * widget,
						     GtkStateFlags,
						     const GdkRGBA *);
    extern void gtk_widget_override_color(GtkWidget * widget,
					  GtkStateFlags, const GdkRGBA *);
    extern void gtk_widget_override_cursor(GtkWidget * widget,
					   const GdkRGBA *,
					   const GdkRGBA *);
    extern void gtk_widget_override_font(GtkWidget * widget,
					 const PangoFontDescription *);
    extern void gtk_widget_override_symbolic_color(GtkWidget * widget,
						   const char *,
						   const GdkRGBA *);
    extern gint gtk_widget_path_append_for_widget(GtkWidgetPath * path,
						  GtkWidget *);
    extern gint gtk_widget_path_append_type(GtkWidgetPath * path, GType);
    extern gint gtk_widget_path_append_with_siblings(GtkWidgetPath * path,
						     GtkWidgetPath *,
						     guint);
    extern GtkWidgetPath *gtk_widget_path_copy(const GtkWidgetPath * path);
    extern void gtk_widget_path_free(GtkWidgetPath * path);
    extern GType gtk_widget_path_get_object_type(const GtkWidgetPath *
						 path);
    extern GType gtk_widget_path_get_type(void);
    extern gboolean gtk_widget_path_has_parent(const GtkWidgetPath * path,
					       GType);
    extern gboolean gtk_widget_path_is_type(const GtkWidgetPath * path,
					    GType);
    extern void gtk_widget_path_iter_add_class(GtkWidgetPath * path, gint,
					       const char *);
    extern void gtk_widget_path_iter_add_region(GtkWidgetPath * path, gint,
						const char *,
						GtkRegionFlags);
    extern void gtk_widget_path_iter_clear_classes(GtkWidgetPath * path,
						   gint);
    extern void gtk_widget_path_iter_clear_regions(GtkWidgetPath * path,
						   gint);
    extern const char *gtk_widget_path_iter_get_name(const GtkWidgetPath *
						     path, gint);
    extern GType gtk_widget_path_iter_get_object_type(const GtkWidgetPath *
						      path, gint);
    extern guint gtk_widget_path_iter_get_sibling_index(const GtkWidgetPath
							* path, gint);
    extern const GtkWidgetPath *gtk_widget_path_iter_get_siblings(const
								  GtkWidgetPath
								  * path,
								  gint);
    extern gboolean gtk_widget_path_iter_has_class(const GtkWidgetPath *
						   path, gint,
						   const char *);
    extern gboolean gtk_widget_path_iter_has_name(const GtkWidgetPath *
						  path, gint,
						  const char *);
    extern gboolean gtk_widget_path_iter_has_qclass(const GtkWidgetPath *
						    path, gint, GQuark);
    extern gboolean gtk_widget_path_iter_has_qname(const GtkWidgetPath *
						   path, gint, GQuark);
    extern gboolean gtk_widget_path_iter_has_qregion(const GtkWidgetPath *
						     path, gint, GQuark,
						     GtkRegionFlags *);
    extern gboolean gtk_widget_path_iter_has_region(const GtkWidgetPath *
						    path, gint,
						    const char *,
						    GtkRegionFlags *);
    extern GSList *gtk_widget_path_iter_list_classes(const GtkWidgetPath *
						     path, gint);
    extern GSList *gtk_widget_path_iter_list_regions(const GtkWidgetPath *
						     path, gint);
    extern void gtk_widget_path_iter_remove_class(GtkWidgetPath * path,
						  gint, const char *);
    extern void gtk_widget_path_iter_remove_region(GtkWidgetPath * path,
						   gint, const char *);
    extern void gtk_widget_path_iter_set_name(GtkWidgetPath * path, gint,
					      const char *);
    extern void gtk_widget_path_iter_set_object_type(GtkWidgetPath * path,
						     gint, GType);
    extern gint gtk_widget_path_length(const GtkWidgetPath * path);
    extern GtkWidgetPath *gtk_widget_path_new(void);
    extern void gtk_widget_path_prepend_type(GtkWidgetPath * path, GType);
    extern GtkWidgetPath *gtk_widget_path_ref(GtkWidgetPath * path);
    extern char *gtk_widget_path_to_string(const GtkWidgetPath * path);
    extern void gtk_widget_path_unref(GtkWidgetPath * path);
    extern void gtk_widget_pop_composite_child(void);
    extern void gtk_widget_push_composite_child(void);
    extern void gtk_widget_queue_compute_expand(GtkWidget * widget);
    extern void gtk_widget_queue_draw(GtkWidget * widget);
    extern void gtk_widget_queue_draw_area(GtkWidget * widget, gint, gint,
					   gint, gint);
    extern void gtk_widget_queue_draw_region(GtkWidget * widget,
					     const cairo_region_t);
    extern void gtk_widget_queue_resize(GtkWidget * widget);
    extern void gtk_widget_queue_resize_no_redraw(GtkWidget * widget);
    extern void gtk_widget_realize(GtkWidget * widget);
    extern cairo_region_t *gtk_widget_region_intersect(GtkWidget * widget,
						       const
						       cairo_region_t);
    extern gboolean gtk_widget_remove_accelerator(GtkWidget * widget,
						  GtkAccelGroup *
						  accel_group,
						  guint accel_key,
						  GdkModifierType
						  accel_mods);
    extern void gtk_widget_remove_mnemonic_label(GtkWidget * widget,
						 GtkWidget *);
    extern GdkPixbuf *gtk_widget_render_icon_pixbuf(GtkWidget * widget,
						    const char *,
						    GtkIconSize);
    extern void gtk_widget_reparent(GtkWidget * widget, GtkWidget *);
    extern void gtk_widget_reset_style(GtkWidget * widget);
    extern gint gtk_widget_send_expose(GtkWidget * widget, GdkEvent *);
    extern gboolean gtk_widget_send_focus_change(GtkWidget * widget,
						 GdkEvent *);
    extern void gtk_widget_set_accel_path(GtkWidget * widget, const char *,
					  GtkAccelGroup *);
    extern void gtk_widget_set_allocation(GtkWidget * widget,
					  const GtkAllocation *);
    extern void gtk_widget_set_app_paintable(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_can_default(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_can_focus(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_child_visible(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_composite_name(GtkWidget * widget,
					      const char *);
    extern void gtk_widget_set_default_direction(GtkTextDirection dir);
    extern void gtk_widget_set_device_enabled(GtkWidget * widget,
					      GdkDevice *, gboolean);
    extern void gtk_widget_set_device_events(GtkWidget * widget,
					     GdkDevice * device,
					     GdkEventMask events);
    extern void gtk_widget_set_direction(GtkWidget * widget,
					 GtkTextDirection);
    extern void gtk_widget_set_double_buffered(GtkWidget * widget,
					       gboolean);
    extern void gtk_widget_set_events(GtkWidget * widget, gint);
    extern void gtk_widget_set_halign(GtkWidget * widget, GtkAlign);
    extern void gtk_widget_set_has_tooltip(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_has_window(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_hexpand(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_hexpand_set(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_mapped(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_margin_bottom(GtkWidget * widget, gint);
    extern void gtk_widget_set_margin_left(GtkWidget * widget, gint);
    extern void gtk_widget_set_margin_right(GtkWidget * widget, gint);
    extern void gtk_widget_set_margin_top(GtkWidget * widget, gint);
    extern void gtk_widget_set_name(GtkWidget * widget, const char *);
    extern void gtk_widget_set_no_show_all(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_parent(GtkWidget * widget, GtkWidget *);
    extern void gtk_widget_set_parent_window(GtkWidget * widget,
					     GdkWindow *);
    extern void gtk_widget_set_realized(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_receives_default(GtkWidget * widget,
						gboolean);
    extern void gtk_widget_set_redraw_on_allocate(GtkWidget * widget,
						  gboolean);
    extern void gtk_widget_set_sensitive(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_size_request(GtkWidget * widget, gint,
					    gint);
    extern void gtk_widget_set_state(GtkWidget * widget, GtkStateType);
    extern void gtk_widget_set_state_flags(GtkWidget * widget,
					   GtkStateFlags, gboolean);
    extern void gtk_widget_set_support_multidevice(GtkWidget * widget,
						   gboolean);
    extern void gtk_widget_set_tooltip_markup(GtkWidget * widget,
					      const char *);
    extern void gtk_widget_set_tooltip_text(GtkWidget * widget,
					    const char *);
    extern void gtk_widget_set_tooltip_window(GtkWidget * widget,
					      GtkWindow *);
    extern void gtk_widget_set_valign(GtkWidget * widget, GtkAlign);
    extern void gtk_widget_set_vexpand(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_vexpand_set(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_visible(GtkWidget * widget, gboolean);
    extern void gtk_widget_set_visual(GtkWidget * widget, GdkVisual *);
    extern void gtk_widget_set_window(GtkWidget * widget, GdkWindow *);
    extern void gtk_widget_shape_combine_region(GtkWidget * widget,
						cairo_region_t *);
    extern void gtk_widget_show(GtkWidget * widget);
    extern void gtk_widget_show_all(GtkWidget * widget);
    extern void gtk_widget_show_now(GtkWidget * widget);
    extern void gtk_widget_size_allocate(GtkWidget * widget,
					 GtkAllocation *);
    extern void gtk_widget_size_request(GtkWidget * widget,
					GtkRequisition *);
    extern void gtk_widget_style_get(GtkWidget * widget, const char *,
				     ...);
    extern void gtk_widget_style_get_property(GtkWidget * widget,
					      const char *, GValue *);
    extern void gtk_widget_style_get_valist(GtkWidget * widget,
					    const gchar *
					    first_property_name,
					    va_list var_args);
    extern void gtk_widget_thaw_child_notify(GtkWidget * widget);
    extern gboolean gtk_widget_translate_coordinates(GtkWidget *
						     src_widget,
						     GtkWidget *, gint,
						     gint, gint *, gint *);
    extern void gtk_widget_trigger_tooltip_query(GtkWidget * widget);
    extern void gtk_widget_unmap(GtkWidget * widget);
    extern void gtk_widget_unparent(GtkWidget * widget);
    extern void gtk_widget_unrealize(GtkWidget * widget);
    extern void gtk_widget_unset_state_flags(GtkWidget * widget,
					     GtkStateFlags);
    extern gboolean gtk_window_activate_default(GtkWindow * window);
    extern gboolean gtk_window_activate_focus(GtkWindow * window);
    extern gboolean gtk_window_activate_key(GtkWindow * window,
					    GdkEventKey *);
    extern void gtk_window_add_accel_group(GtkWindow * window,
					   GtkAccelGroup *);
    extern void gtk_window_add_mnemonic(GtkWindow * window, guint,
					GtkWidget *);
    extern void gtk_window_begin_move_drag(GtkWindow * window, gint, gint,
					   gint, guint32);
    extern void gtk_window_begin_resize_drag(GtkWindow * window,
					     GdkWindowEdge edge,
					     gint button, gint root_x,
					     gint root_y,
					     guint32 timestamp);
    extern void gtk_window_deiconify(GtkWindow * window);
    extern void gtk_window_fullscreen(GtkWindow * window);
    extern gboolean gtk_window_get_accept_focus(GtkWindow * window);
    extern GtkApplication *gtk_window_get_application(GtkWindow * window);
    extern GtkWidget *gtk_window_get_attached_to(GtkWindow * window);
    extern gboolean gtk_window_get_decorated(GtkWindow * window);
    extern GList *gtk_window_get_default_icon_list(void);
    extern const char *gtk_window_get_default_icon_name(void);
    extern void gtk_window_get_default_size(GtkWindow * window, gint *,
					    gint *);
    extern GtkWidget *gtk_window_get_default_widget(GtkWindow * window);
    extern gboolean gtk_window_get_deletable(GtkWindow * window);
    extern gboolean gtk_window_get_destroy_with_parent(GtkWindow * window);
    extern GtkWidget *gtk_window_get_focus(GtkWindow * window);
    extern gboolean gtk_window_get_focus_on_map(GtkWindow * window);
    extern gboolean gtk_window_get_focus_visible(GtkWindow * window);
    extern GdkGravity gtk_window_get_gravity(GtkWindow * window);
    extern GtkWindowGroup *gtk_window_get_group(GtkWindow * window);
    extern gboolean gtk_window_get_has_resize_grip(GtkWindow * window);
    extern gboolean gtk_window_get_hide_titlebar_when_maximized(GtkWindow *
								window);
    extern GdkPixbuf *gtk_window_get_icon(GtkWindow * window);
    extern GList *gtk_window_get_icon_list(GtkWindow * window);
    extern const char *gtk_window_get_icon_name(GtkWindow * window);
    extern GdkModifierType gtk_window_get_mnemonic_modifier(GtkWindow *
							    window);
    extern gboolean gtk_window_get_mnemonics_visible(GtkWindow * window);
    extern gboolean gtk_window_get_modal(GtkWindow * window);
    extern gdouble gtk_window_get_opacity(GtkWindow * window);
    extern void gtk_window_get_position(GtkWindow * window, gint *,
					gint *);
    extern gboolean gtk_window_get_resizable(GtkWindow * window);
    extern gboolean gtk_window_get_resize_grip_area(GtkWindow * window,
						    GdkRectangle *);
    extern const char *gtk_window_get_role(GtkWindow * window);
    extern GdkScreen *gtk_window_get_screen(GtkWindow * window);
    extern void gtk_window_get_size(GtkWindow * window, gint *, gint *);
    extern gboolean gtk_window_get_skip_pager_hint(GtkWindow * window);
    extern gboolean gtk_window_get_skip_taskbar_hint(GtkWindow * window);
    extern const char *gtk_window_get_title(GtkWindow * window);
    extern GtkWindow *gtk_window_get_transient_for(GtkWindow * window);
    extern GType gtk_window_get_type(void);
    extern GdkWindowTypeHint gtk_window_get_type_hint(GtkWindow * window);
    extern gboolean gtk_window_get_urgency_hint(GtkWindow * window);
    extern GtkWindowType gtk_window_get_window_type(GtkWindow * window);
    extern void gtk_window_group_add_window(GtkWindowGroup * window_group,
					    GtkWindow *);
    extern GtkWidget
	*gtk_window_group_get_current_device_grab(GtkWindowGroup *
						  window_group,
						  GdkDevice *);
    extern GtkWidget *gtk_window_group_get_current_grab(GtkWindowGroup *
							window_group);
    extern GType gtk_window_group_get_type(void);
    extern GList *gtk_window_group_list_windows(GtkWindowGroup *
						window_group);
    extern GtkWindowGroup *gtk_window_group_new(void);
    extern void gtk_window_group_remove_window(GtkWindowGroup *
					       window_group, GtkWindow *);
    extern gboolean gtk_window_has_group(GtkWindow * window);
    extern gboolean gtk_window_has_toplevel_focus(GtkWindow * window);
    extern void gtk_window_iconify(GtkWindow * window);
    extern gboolean gtk_window_is_active(GtkWindow * window);
    extern GList *gtk_window_list_toplevels(void);
    extern void gtk_window_maximize(GtkWindow * window);
    extern gboolean gtk_window_mnemonic_activate(GtkWindow * window,
						 guint keyval,
						 GdkModifierType modifier);
    extern void gtk_window_move(GtkWindow * window, gint, gint);
    extern GtkWidget *gtk_window_new(GtkWindowType type);
    extern gboolean gtk_window_parse_geometry(GtkWindow * window,
					      const char *);
    extern GType gtk_window_position_get_type(void);
    extern void gtk_window_present(GtkWindow * window);
    extern void gtk_window_present_with_time(GtkWindow * window, guint32);
    extern gboolean gtk_window_propagate_key_event(GtkWindow * window,
						   GdkEventKey *);
    extern void gtk_window_remove_accel_group(GtkWindow * window,
					      GtkAccelGroup *);
    extern void gtk_window_remove_mnemonic(GtkWindow * window, guint,
					   GtkWidget *);
    extern void gtk_window_reshow_with_initial_size(GtkWindow * window);
    extern void gtk_window_resize(GtkWindow * window, gint, gint);
    extern gboolean gtk_window_resize_grip_is_visible(GtkWindow * window);
    extern void gtk_window_resize_to_geometry(GtkWindow * window, gint,
					      gint);
    extern void gtk_window_set_accept_focus(GtkWindow * window, gboolean);
    extern void gtk_window_set_application(GtkWindow * window,
					   GtkApplication *);
    extern void gtk_window_set_attached_to(GtkWindow * window,
					   GtkWidget *);
    extern void gtk_window_set_auto_startup_notification(gboolean setting);
    extern void gtk_window_set_decorated(GtkWindow * window, gboolean);
    extern void gtk_window_set_default(GtkWindow * window, GtkWidget *);
    extern void gtk_window_set_default_geometry(GtkWindow * window, gint,
						gint);
    extern void gtk_window_set_default_icon(GdkPixbuf * icon);
    extern gboolean gtk_window_set_default_icon_from_file(const char
							  *filename,
							  GError * *);
    extern void gtk_window_set_default_icon_list(GList * list);
    extern void gtk_window_set_default_icon_name(const char *name);
    extern void gtk_window_set_default_size(GtkWindow * window, gint,
					    gint);
    extern void gtk_window_set_deletable(GtkWindow * window, gboolean);
    extern void gtk_window_set_destroy_with_parent(GtkWindow * window,
						   gboolean);
    extern void gtk_window_set_focus(GtkWindow * window, GtkWidget *);
    extern void gtk_window_set_focus_on_map(GtkWindow * window, gboolean);
    extern void gtk_window_set_focus_visible(GtkWindow * window, gboolean);
    extern void gtk_window_set_geometry_hints(GtkWindow * window,
					      GtkWidget * geometry_widget,
					      GdkGeometry * geometry,
					      GdkWindowHints geom_mask);
    extern void gtk_window_set_gravity(GtkWindow * window,
				       GdkGravity gravity);
    extern void gtk_window_set_has_resize_grip(GtkWindow * window,
					       gboolean);
    extern void gtk_window_set_has_user_ref_count(GtkWindow * window,
						  gboolean);
    extern void gtk_window_set_hide_titlebar_when_maximized(GtkWindow *
							    window,
							    gboolean);
    extern void gtk_window_set_icon(GtkWindow * window, GdkPixbuf *);
    extern gboolean gtk_window_set_icon_from_file(GtkWindow * window,
						  const char *,
						  GError * *);
    extern void gtk_window_set_icon_list(GtkWindow * window, GList *);
    extern void gtk_window_set_icon_name(GtkWindow * window, const char *);
    extern void gtk_window_set_keep_above(GtkWindow * window, gboolean);
    extern void gtk_window_set_keep_below(GtkWindow * window, gboolean);
    extern void gtk_window_set_mnemonic_modifier(GtkWindow * window,
						 GdkModifierType modifier);
    extern void gtk_window_set_mnemonics_visible(GtkWindow * window,
						 gboolean);
    extern void gtk_window_set_modal(GtkWindow * window, gboolean);
    extern void gtk_window_set_opacity(GtkWindow * window, gdouble);
    extern void gtk_window_set_position(GtkWindow * window,
					GtkWindowPosition);
    extern void gtk_window_set_resizable(GtkWindow * window, gboolean);
    extern void gtk_window_set_role(GtkWindow * window, const char *);
    extern void gtk_window_set_screen(GtkWindow * window, GdkScreen *);
    extern void gtk_window_set_skip_pager_hint(GtkWindow * window,
					       gboolean);
    extern void gtk_window_set_skip_taskbar_hint(GtkWindow * window,
						 gboolean);
    extern void gtk_window_set_startup_id(GtkWindow * window,
					  const char *);
    extern void gtk_window_set_title(GtkWindow * window, const char *);
    extern void gtk_window_set_transient_for(GtkWindow * window,
					     GtkWindow *);
    extern void gtk_window_set_type_hint(GtkWindow * window,
					 GdkWindowTypeHint hint);
    extern void gtk_window_set_urgency_hint(GtkWindow * window, gboolean);
    extern void gtk_window_set_wmclass(GtkWindow * window, const char *,
				       const char *);
    extern void gtk_window_stick(GtkWindow * window);
    extern GType gtk_window_type_get_type(void);
    extern void gtk_window_unfullscreen(GtkWindow * window);
    extern void gtk_window_unmaximize(GtkWindow * window);
    extern void gtk_window_unstick(GtkWindow * window);
    extern GType gtk_wrap_mode_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
