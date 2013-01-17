#if (__LSB_VERSION__ >= 31 )
#ifndef _ATK_1_0_ATK_ATK_H_
#define _ATK_1_0_ATK_ATK_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

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


#define _TYPEDEF_ATK_ACTION_
#define _TYPEDEF_ATK_COMPONENT_
#define _TYPEDEF_ATK_DOCUMENT_
#define _TYPEDEF_ATK_EDITABLE_TEXT_
#define _TYPEDEF_ATK_HYPERTEXT_
#define _TYPEDEF_ATK_IMAGE_
#define _TYPEDEF_ATK_SELECTION_
#define _TYPEDEF_ATK_STREAMABLE_CONTENT
#define _TYPEDEF_ATK_TABLE_
#define _TYPEDEF_ATK_TEXT_
#define _TYPEDEF_ATK_UTIL_
#define _TYPEDEF_ATK_VALUE__
#define ATK_TYPE_NO_OP_OBJECT_FACTORY	 \
	(atk_no_op_object_factory_get_type ())
#define ATK_GOBJECT_ACCESSIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_GOBJECT_ACCESSIBLE, \
	AtkGObjectAccessibleClass))
#define ATK_HYPERLINK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_HYPERLINK, \
	AtkHyperlinkClass))
#define ATK_NO_OP_OBJECT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_NO_OP_OBJECT, \
	AtkNoOpObjectClass))
#define ATK_NO_OP_OBJECT_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_NO_OP_OBJECT_FACTORY, \
	AtkNoOpObjectFactoryClass))
#define ATK_OBJECT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_OBJECT, AtkObjectClass))
#define ATK_OBJECT_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_OBJECT_FACTORY, \
	AtkObjectFactoryClass))
#define ATK_REGISTRY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_REGISTRY, \
	AtkRegistryClass))
#define ATK_RELATION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_RELATION, \
	AtkRelationClass))
#define ATK_RELATION_SET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_RELATION_SET, \
	AtkRelationSetClass))
#define ATK_STATE_SET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_STATE_SET, \
	AtkStateSetClass))
#define ATK_UTIL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_UTIL, AtkUtilClass))
#define ATK_IS_GOBJECT_ACCESSIBLE_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_GOBJECT_ACCESSIBLE))
#define ATK_IS_HYPERLINK_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_HYPERLINK))
#define ATK_IS_NO_OP_OBJECT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_NO_OP_OBJECT))
#define ATK_IS_NO_OP_OBJECT_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_NO_OP_OBJECT_FACTORY))
#define ATK_IS_OBJECT_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_OBJECT))
#define ATK_IS_OBJECT_FACTORY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_OBJECT_FACTORY))
#define ATK_IS_REGISTRY_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_REGISTRY))
#define ATK_IS_RELATION_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_RELATION))
#define ATK_IS_RELATION_SET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_RELATION_SET))
#define ATK_IS_STATE_SET_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_STATE_SET))
#define ATK_IS_UTIL_CLASS(klass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_UTIL))
#define ATK_GOBJECT_ACCESSIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_GOBJECT_ACCESSIBLE, \
	AtkGObjectAccessible))
#define ATK_HYPERLINK(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_HYPERLINK, \
	AtkHyperlink))
#define ATK_NO_OP_OBJECT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_NO_OP_OBJECT, \
	AtkNoOpObject))
#define ATK_NO_OP_OBJECT_FACTORY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_NO_OP_OBJECT_FACTORY, \
	AtkNoOpObjectFactory))
#define ATK_OBJECT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_OBJECT, AtkObject))
#define ATK_OBJECT_FACTORY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_OBJECT_FACTORY, \
	AtkObjectFactory))
#define ATK_REGISTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_REGISTRY, AtkRegistry))
#define ATK_RELATION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_RELATION, AtkRelation))
#define ATK_RELATION_SET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_RELATION_SET, \
	AtkRelationSet))
#define ATK_STATE_SET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_STATE_SET, AtkStateSet))
#define ATK_IS_GOBJECT_ACCESSIBLE(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_GOBJECT_ACCESSIBLE))
#define ATK_IS_HYPERLINK(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_HYPERLINK))
#define ATK_IS_NO_OP_OBJECT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_NO_OP_OBJECT))
#define ATK_IS_NO_OP_OBJECT_FACTORY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_NO_OP_OBJECT_FACTORY))
#define ATK_IS_OBJECT(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_OBJECT))
#define ATK_IS_OBJECT_FACTORY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_OBJECT_FACTORY))
#define ATK_IS_REGISTRY(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_REGISTRY))
#define ATK_IS_RELATION(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_RELATION))
#define ATK_IS_RELATION_SET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_RELATION_SET))
#define ATK_IS_STATE_SET(obj)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_STATE_SET))
#define ATK_NO_OP_OBJECT_FACTORY_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ( (obj), ATK_TYPE_NO_OP_OBJECT_FACTORY, \
	AtkNoOpObjectFactoryClass))
#define ATK_GOBJECT_ACCESSIBLE_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_GOBJECT_ACCESSIBLE, \
	AtkGObjectAccessibleClass))
#define ATK_HYPERLINK_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_HYPERLINK, \
	AtkHyperlinkClass))
#define ATK_NO_OP_OBJECT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_NO_OP_OBJECT, \
	AtkNoOpObjectClass))
#define ATK_OBJECT_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_OBJECT, AtkObjectClass))
#define ATK_OBJECT_FACTORY_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_OBJECT_FACTORY, \
	AtkObjectFactoryClass))
#define ATK_REGISTRY_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_REGISTRY, \
	AtkRegistryClass))
#define ATK_RELATION_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_RELATION, \
	AtkRelationClass))
#define ATK_RELATION_SET_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_RELATION_SET, \
	AtkRelationSetClass))
#define ATK_STATE_SET_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_STATE_SET, \
	AtkStateSetClass))
#define ATK_UTIL_GET_CLASS(obj)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_UTIL, AtkUtilClass))
#define ATK_ACTION_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_ACTION, \
	AtkActionIface))
#define ATK_COMPONENT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_COMPONENT, \
	AtkComponentIface))
#define ATK_DOCUMENT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_DOCUMENT, \
	AtkDocumentIface))
#define ATK_EDITABLE_TEXT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_EDITABLE_TEXT, \
	AtkEditableTextIface))
#define ATK_HYPERTEXT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_HYPERTEXT, \
	AtkHypertextIface))
#define ATK_IMAGE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_IMAGE, \
	AtkImageIface))
#define ATK_IMPLEMENTOR_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_IMPLEMENTOR, \
	AtkImplementorIface))
#define ATK_SELECTION_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_SELECTION, \
	AtkSelectionIface))
#define ATK_STREAMABLE_CONTENT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_STREAMABLE_CONTENT, \
	AtkStreamableContentIface))
#define ATK_TABLE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_TABLE, \
	AtkTableIface))
#define ATK_TEXT_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_TEXT, AtkTextIface))
#define ATK_VALUE_GET_IFACE(obj)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_VALUE, \
	AtkValueIface))
#define ATK_ACTION(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_ACTION, AtkAction)
#define ATK_COMPONENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_COMPONENT, AtkComponent)
#define ATK_DOCUMENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_DOCUMENT, AtkDocument)
#define ATK_EDITABLE_TEXT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_EDITABLE_TEXT, \
	AtkEditableText)
#define ATK_HYPERTEXT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_HYPERTEXT, AtkHypertext)
#define ATK_IMAGE(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_IMAGE, AtkImage)
#define ATK_IMPLEMENTOR(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_IMPLEMENTOR, \
	AtkImplementor)
#define ATK_SELECTION(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_SELECTION, AtkSelection)
#define ATK_STREAMABLE_CONTENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_STREAMABLE_CONTENT, \
	AtkStreamableContent)
#define ATK_TABLE(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_TABLE, AtkTable)
#define ATK_TEXT(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_TEXT, AtkText)
#define ATK_UTIL(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_UTIL, AtkUtil)
#define ATK_VALUE(obj)	 \
	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_VALUE, AtkValue)
#define ATK_IS_ACTION(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_ACTION)
#define ATK_IS_COMPONENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_COMPONENT)
#define ATK_IS_DOCUMENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_DOCUMENT)
#define ATK_IS_EDITABLE_TEXT(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_EDITABLE_TEXT)
#define ATK_IS_HYPERTEXT(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_HYPERTEXT)
#define ATK_IS_IMAGE(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_IMAGE)
#define ATK_IS_IMPLEMENTOR(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_IMPLEMENTOR)
#define ATK_IS_SELECTION(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_SELECTION)
#define ATK_IS_STREAMABLE_CONTENT(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_STREAMABLE_CONTENT)
#define ATK_IS_TABLE(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_TABLE)
#define ATK_IS_VALUE(obj)	 \
	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_VALUE)
#define ATK_TYPE_ACTION	(atk_action_get_type ())
#define ATK_TYPE_COMPONENT	(atk_component_get_type ())
#define ATK_TYPE_DOCUMENT	(atk_document_get_type ())
#define ATK_TYPE_EDITABLE_TEXT	(atk_editable_text_get_type ())
#define ATK_TYPE_GOBJECT_ACCESSIBLE	(atk_gobject_accessible_get_type ())
#define ATK_TYPE_HYPERLINK	(atk_hyperlink_get_type ())
#define ATK_TYPE_HYPERTEXT	(atk_hypertext_get_type ())
#define ATK_TYPE_IMAGE	(atk_image_get_type ())
#define ATK_TYPE_IMPLEMENTOR	(atk_implementor_get_type ())
#define ATK_TYPE_NO_OP_OBJECT	(atk_no_op_object_get_type ())
#define ATK_TYPE_OBJECT_FACTORY	(atk_object_factory_get_type ())
#define ATK_TYPE_OBJECT	(atk_object_get_type ())
#define ATK_TYPE_RECTANGLE	(atk_rectangle_get_type ())
#define ATK_TYPE_REGISTRY	(atk_registry_get_type ())
#define ATK_TYPE_RELATION	(atk_relation_get_type ())
#define ATK_TYPE_RELATION_SET	(atk_relation_set_get_type ())
#define ATK_TYPE_SELECTION	(atk_selection_get_type ())
#define ATK_TYPE_STATE_SET	(atk_state_set_get_type ())
#define ATK_TYPE_STREAMABLE_CONTENT	(atk_streamable_content_get_type ())
#define ATK_TYPE_TABLE	(atk_table_get_type ())
#define ATK_TYPE_TEXT	(atk_text_get_type ())
#define ATK_TYPE_UTIL	(atk_util_get_type ())
#define ATK_TYPE_VALUE	(atk_value_get_type ())
#define ATK_IS_TEXT(obj)	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_TEXT)
#define ATK_IS_UTIL(obj)	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_UTIL)
#if __LSB_VERSION__ >= 50
#define _ATK_DEFINE_TYPE_EXTENDED_END()	 \
      /* following custom code */     \
      } \
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); \
    } \
  return g_define_type_id__volatile; \
}				/* closes type_name##_get_type() */
#define _ATK_DEFINE_TYPE_EXTENDED_BEGIN(TypeName,type_name,TYPE,flags)	 \
\
static void     type_name##_init              (TypeName        *self); \
static void     type_name##_class_init        (TypeName##Class *klass); \
static gpointer type_name##_parent_class = NULL; \
static void     type_name##_class_intern_init (gpointer klass) \
{ \
  type_name##_parent_class = g_type_class_peek_parent (klass); \
  type_name##_class_init ((TypeName##Class*) klass); \
} \
\
GType \
type_name##_get_type (void) \
{ \
  static volatile gsize g_define_type_id__volatile = 0; \
  if (g_once_init_enter (&g_define_type_id__volatile))  \
    { \
      AtkObjectFactory *factory; \
      GType derived_type; \
      GTypeQuery query; \
      GType derived_atk_type; \
      GType g_define_type_id; \
\
      /* Figure out the size of the class and instance we are deriving from */ \
      derived_type = g_type_parent (TYPE); \
      factory = atk_registry_get_factory (atk_get_default_registry (), \
                                          derived_type); \
      derived_atk_type = atk_object_factory_get_accessible_type (factory); \
      g_type_query (derived_atk_type, &query); \
\
      g_define_type_id = \
        g_type_register_static_simple (derived_atk_type, \
                                       g_intern_static_string (#TypeName), \
                                       query.class_size, \
                                       (GClassInitFunc) type_name##_class_intern_init, \
                                       query.instance_size, \
                                       (GInstanceInitFunc) type_name##_init, \
                                       (GTypeFlags) flags); \
      {				/* custom code follows */
#define ATK_TYPE_HYPERLINK_IMPL	(atk_hyperlink_impl_get_type ())
#define ATK_TYPE_MISC	(atk_misc_get_type ())
#define ATK_MISC_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_MISC, AtkMiscClass))
#define ATK_IS_MISC_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_MISC))
#define ATK_MISC_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_MISC, AtkMiscClass))
#define ATK_DEFINE_TYPE(TN,t_n,T_P)	ATK_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define ATK_DEFINE_ABSTRACT_TYPE(TN,t_n,T_P)	ATK_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, {})
#define ATK_VAR	extern
#define ATK_HYPERLINK_IMPL(obj)	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_HYPERLINK_IMPL, AtkHyperlinkImpl)
#define ATK_MISC(obj)	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_MISC, AtkMisc)
#define ATK_IS_HYPERLINK_IMPL(obj)	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_HYPERLINK_IMPL)
#define ATK_IS_MISC(obj)	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_MISC)
#define ATK_HYPERLINK_IMPL_GET_IFACE(obj)	G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_HYPERLINK_IMPL, AtkHyperlinkImplIface)
#define ATK_DEFINE_TYPE_WITH_CODE(TN,t_n,T_P,_C_)	_ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, 0) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#define ATK_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_)	_ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#define ATK_DEFINE_TYPE_EXTENDED(TN,t_n,T_P,_f_,_C_)	_ATK_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, _f_) {_C_;} _ATK_DEFINE_TYPE_EXTENDED_END()
#endif				/* __LSB_VERSION__ >= 5.0 */



    typedef struct _AtkText AtkText;

    typedef struct _AtkObject AtkObject;

    typedef enum {
	ATK_ROLE_INVALID = 0,
	ATK_ROLE_ACCEL_LABEL = 1,
	ATK_ROLE_ALERT = 2,
	ATK_ROLE_ANIMATION = 3,
	ATK_ROLE_ARROW = 4,
	ATK_ROLE_CALENDAR = 5,
	ATK_ROLE_CANVAS = 6,
	ATK_ROLE_CHECK_BOX = 7,
	ATK_ROLE_CHECK_MENU_ITEM = 8,
	ATK_ROLE_COLOR_CHOOSER = 9,
	ATK_ROLE_COLUMN_HEADER = 10,
	ATK_ROLE_COMBO_BOX = 11,
	ATK_ROLE_DATE_EDITOR = 12,
	ATK_ROLE_DESKTOP_ICON = 13,
	ATK_ROLE_DESKTOP_FRAME = 14,
	ATK_ROLE_DIAL = 15,
	ATK_ROLE_DIALOG = 16,
	ATK_ROLE_DIRECTORY_PANE = 17,
	ATK_ROLE_DRAWING_AREA = 18,
	ATK_ROLE_FILE_CHOOSER = 19,
	ATK_ROLE_FILLER = 20,
	ATK_ROLE_FONT_CHOOSER = 21,
	ATK_ROLE_FRAME = 22,
	ATK_ROLE_GLASS_PANE = 23,
	ATK_ROLE_HTML_CONTAINER = 24,
	ATK_ROLE_ICON = 25,
	ATK_ROLE_IMAGE = 26,
	ATK_ROLE_INTERNAL_FRAME = 27,
	ATK_ROLE_LABEL = 28,
	ATK_ROLE_LAYERED_PANE = 29,
	ATK_ROLE_LIST = 30,
	ATK_ROLE_LIST_ITEM = 31,
	ATK_ROLE_MENU = 32,
	ATK_ROLE_MENU_BAR = 33,
	ATK_ROLE_MENU_ITEM = 34,
	ATK_ROLE_OPTION_PANE = 35,
	ATK_ROLE_PAGE_TAB = 36,
	ATK_ROLE_PAGE_TAB_LIST = 37,
	ATK_ROLE_PANEL = 38,
	ATK_ROLE_PASSWORD_TEXT = 39,
	ATK_ROLE_POPUP_MENU = 40,
	ATK_ROLE_PROGRESS_BAR = 41,
	ATK_ROLE_PUSH_BUTTON = 42,
	ATK_ROLE_RADIO_BUTTON = 43,
	ATK_ROLE_RADIO_MENU_ITEM = 44,
	ATK_ROLE_ROOT_PANE = 45,
	ATK_ROLE_ROW_HEADER = 46,
	ATK_ROLE_SCROLL_BAR = 47,
	ATK_ROLE_SCROLL_PANE = 48,
	ATK_ROLE_SEPARATOR = 49,
	ATK_ROLE_SLIDER = 50,
	ATK_ROLE_SPLIT_PANE = 51,
	ATK_ROLE_SPIN_BUTTON = 52,
	ATK_ROLE_STATUSBAR = 53,
	ATK_ROLE_TABLE = 54,
	ATK_ROLE_TABLE_CELL = 55,
	ATK_ROLE_TABLE_COLUMN_HEADER = 56,
	ATK_ROLE_TABLE_ROW_HEADER = 57,
	ATK_ROLE_TEAR_OFF_MENU_ITEM = 58,
	ATK_ROLE_TERMINAL = 59,
	ATK_ROLE_TEXT = 60,
	ATK_ROLE_TOGGLE_BUTTON = 61,
	ATK_ROLE_TOOL_BAR = 62,
	ATK_ROLE_TOOL_TIP = 63,
	ATK_ROLE_TREE = 64,
	ATK_ROLE_TREE_TABLE = 65,
	ATK_ROLE_UNKNOWN = 66,
	ATK_ROLE_VIEWPORT = 67,
	ATK_ROLE_WINDOW = 68,
	ATK_ROLE_HEADER = 69,
	ATK_ROLE_FOOTER = 70,
	ATK_ROLE_PARAGRAPH = 71,
	ATK_ROLE_RULER = 72,
	ATK_ROLE_APPLICATION = 73,
	ATK_ROLE_AUTOCOMPLETE = 74,
	ATK_ROLE_EDITBAR = 75,
	ATK_ROLE_EMBEDDED = 76,
#if __LSB_VERSION__ >= 50
	ATK_ROLE_ENTRY = 77,
	ATK_ROLE_CHART = 78,
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	ATK_ROLE_LAST_DEFINED = 77,
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	ATK_ROLE_CAPTION = 79,
	ATK_ROLE_DOCUMENT_FRAME = 80,
	ATK_ROLE_HEADING = 81,
	ATK_ROLE_PAGE = 82,
	ATK_ROLE_SECTION = 83,
	ATK_ROLE_REDUNDANT_OBJECT = 84,
	ATK_ROLE_FORM = 85,
	ATK_ROLE_LINK = 86,
	ATK_ROLE_INPUT_METHOD_WINDOW = 87,
	ATK_ROLE_TABLE_ROW = 88,
	ATK_ROLE_TREE_ITEM = 89,
	ATK_ROLE_DOCUMENT_SPREADSHEET = 90,
	ATK_ROLE_DOCUMENT_PRESENTATION = 91,
	ATK_ROLE_DOCUMENT_TEXT = 92,
	ATK_ROLE_DOCUMENT_WEB = 93,
	ATK_ROLE_DOCUMENT_EMAIL = 94,
	ATK_ROLE_COMMENT = 95,
	ATK_ROLE_LIST_BOX = 96,
	ATK_ROLE_GROUPING = 97,
	ATK_ROLE_IMAGE_MAP = 98,
	ATK_ROLE_NOTIFICATION = 99,
	ATK_ROLE_INFO_BAR = 100,
	ATK_ROLE_LAST_DEFINED = 101
#endif				/* __LSB_VERSION__ >= 50 */
    } AtkRole;

    typedef struct _AtkRelationSet AtkRelationSet;

    typedef enum {
	ATK_LAYER_INVALID = 0,
	ATK_LAYER_BACKGROUND = 1,
	ATK_LAYER_CANVAS = 2,
	ATK_LAYER_WIDGET = 3,
	ATK_LAYER_MDI = 4,
	ATK_LAYER_POPUP = 5,
	ATK_LAYER_OVERLAY = 6,
	ATK_LAYER_WINDOW = 7
    } AtkLayer;

    typedef struct _AtkPropertyValues AtkPropertyValues;

    typedef void (*AtkPropertyChangeHandler) (AtkObject *,
					      AtkPropertyValues *);

    typedef struct _AtkImage AtkImage;

    typedef enum {
	ATK_XY_SCREEN = 0,
	ATK_XY_WINDOW = 1
    } AtkCoordType;

    typedef enum {
	ATK_RELATION_NULL = 0,
	ATK_RELATION_CONTROLLED_BY = 1,
	ATK_RELATION_CONTROLLER_FOR = 2,
	ATK_RELATION_LABEL_FOR = 3,
	ATK_RELATION_LABELLED_BY = 4,
	ATK_RELATION_MEMBER_OF = 5,
	ATK_RELATION_NODE_CHILD_OF = 6,
	ATK_RELATION_FLOWS_TO = 7,
	ATK_RELATION_FLOWS_FROM = 8,
	ATK_RELATION_SUBWINDOW_OF = 9,
	ATK_RELATION_EMBEDS = 10,
	ATK_RELATION_EMBEDDED_BY = 11,
	ATK_RELATION_POPUP_FOR = 12,
	ATK_RELATION_PARENT_WINDOW_OF = 13,
#if __LSB_VERSION__ >= 50
	ATK_RELATION_DESCRIBED_BY = 14,
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	ATK_RELATION_LAST_DEFINED = 14,
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	ATK_RELATION_DESCRIPTION_FOR = 15,
	ATK_RELATION_NODE_PARENT_OF = 16,
	ATK_RELATION_LAST_DEFINED = 17
#endif				/* __LSB_VERSION__ >= 50 */
    } AtkRelationType;

    typedef struct _AtkRelation AtkRelation;

    typedef struct _AtkDocument AtkDocument;

    typedef struct _AtkTable AtkTable;

    typedef struct _AtkHyperlink AtkHyperlink;

    typedef struct _AtkStateSet AtkStateSet;

    typedef struct _AtkObjectFactory AtkObjectFactory;

    typedef struct _AtkRegistry AtkRegistry;

    typedef struct _AtkEditableText AtkEditableText;

    typedef GSList AtkAttributeSet;

    typedef struct _AtkHypertext AtkHypertext;

    typedef struct _AtkSelection AtkSelection;

    typedef struct _AtkAction AtkAction;

    typedef struct _AtkComponent AtkComponent;

    typedef struct _AtkValue AtkValue;

    typedef struct _AtkStreamableContent AtkStreamableContent;

    typedef void (*AtkEventListenerInit) (void);

    typedef enum {
	ATK_TEXT_ATTR_INVALID = 0,
	ATK_TEXT_ATTR_LEFT_MARGIN = 1,
	ATK_TEXT_ATTR_RIGHT_MARGIN = 2,
	ATK_TEXT_ATTR_INDENT = 3,
	ATK_TEXT_ATTR_INVISIBLE = 4,
	ATK_TEXT_ATTR_EDITABLE = 5,
	ATK_TEXT_ATTR_PIXELS_ABOVE_LINES = 6,
	ATK_TEXT_ATTR_PIXELS_BELOW_LINES = 7,
	ATK_TEXT_ATTR_PIXELS_INSIDE_WRAP = 8,
	ATK_TEXT_ATTR_BG_FULL_HEIGHT = 9,
	ATK_TEXT_ATTR_RISE = 10,
	ATK_TEXT_ATTR_UNDERLINE = 11,
	ATK_TEXT_ATTR_STRIKETHROUGH = 12,
	ATK_TEXT_ATTR_SIZE = 13,
	ATK_TEXT_ATTR_SCALE = 14,
	ATK_TEXT_ATTR_WEIGHT = 15,
	ATK_TEXT_ATTR_LANGUAGE = 16,
	ATK_TEXT_ATTR_FAMILY_NAME = 17,
	ATK_TEXT_ATTR_BG_COLOR = 18,
	ATK_TEXT_ATTR_FG_COLOR = 19,
	ATK_TEXT_ATTR_BG_STIPPLE = 20,
	ATK_TEXT_ATTR_FG_STIPPLE = 21,
	ATK_TEXT_ATTR_WRAP_MODE = 22,
	ATK_TEXT_ATTR_DIRECTION = 23,
	ATK_TEXT_ATTR_JUSTIFICATION = 24,
	ATK_TEXT_ATTR_STRETCH = 25,
	ATK_TEXT_ATTR_VARIANT = 26,
	ATK_TEXT_ATTR_STYLE = 27,
	ATK_TEXT_ATTR_LAST_DEFINED = 28
    } AtkTextAttribute;

    typedef enum {
	ATK_TEXT_BOUNDARY_CHAR = 0,
	ATK_TEXT_BOUNDARY_WORD_START = 1,
	ATK_TEXT_BOUNDARY_WORD_END = 2,
	ATK_TEXT_BOUNDARY_SENTENCE_START = 3,
	ATK_TEXT_BOUNDARY_SENTENCE_END = 4,
	ATK_TEXT_BOUNDARY_LINE_START = 5,
	ATK_TEXT_BOUNDARY_LINE_END = 6
    } AtkTextBoundary;

    typedef enum {
	ATK_STATE_INVALID = 0,
	ATK_STATE_ACTIVE = 1,
	ATK_STATE_ARMED = 2,
	ATK_STATE_BUSY = 3,
	ATK_STATE_CHECKED = 4,
	ATK_STATE_DEFUNCT = 5,
	ATK_STATE_EDITABLE = 6,
	ATK_STATE_ENABLED = 7,
	ATK_STATE_EXPANDABLE = 8,
	ATK_STATE_EXPANDED = 9,
	ATK_STATE_FOCUSABLE = 10,
	ATK_STATE_FOCUSED = 11,
	ATK_STATE_HORIZONTAL = 12,
	ATK_STATE_ICONIFIED = 13,
	ATK_STATE_MODAL = 14,
	ATK_STATE_MULTI_LINE = 15,
	ATK_STATE_MULTISELECTABLE = 16,
	ATK_STATE_OPAQUE = 17,
	ATK_STATE_PRESSED = 18,
	ATK_STATE_RESIZABLE = 19,
	ATK_STATE_SELECTABLE = 20,
	ATK_STATE_SELECTED = 21,
	ATK_STATE_SENSITIVE = 22,
	ATK_STATE_SHOWING = 23,
	ATK_STATE_SINGLE_LINE = 24,
	ATK_STATE_STALE = 25,
	ATK_STATE_TRANSIENT = 26,
	ATK_STATE_VERTICAL = 27,
	ATK_STATE_VISIBLE = 28,
	ATK_STATE_MANAGES_DESCENDANTS = 29,
	ATK_STATE_INDETERMINATE = 30,
#if __LSB_VERSION__ >= 50
	ATK_STATE_REQUIRED = 32,
#endif				/* __LSB_VERSION__ >= 50 */
	ATK_STATE_TRUNCATED = 31,
#if __LSB_VERSION__ < 50
	ATK_STATE_LAST_DEFINED = 32,
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	ATK_STATE_INVALID_ENTRY = 33,
	ATK_STATE_SUPPORTS_AUTOCOMPLETION = 34,
	ATK_STATE_SELECTABLE_TEXT = 35,
	ATK_STATE_DEFAULT = 36,
	ATK_STATE_ANIMATED = 37,
	ATK_STATE_VISITED = 38,
	ATK_STATE_LAST_DEFINED = 39
#endif				/* __LSB_VERSION__ >= 50 */
    } AtkStateType;

    typedef struct _AtkGObjectAccessible AtkGObjectAccessible;

    typedef guint64 AtkState;

    typedef void (*AtkFocusHandler) (AtkObject *, gboolean);

    typedef struct _AtkKeyEventStruct AtkKeyEventStruct;

    typedef gint(*AtkKeySnoopFunc) (AtkKeyEventStruct *, gpointer);

    typedef struct _AtkTextRectangle AtkTextRectangle;

    typedef struct _AtkTextRange AtkTextRange;

    typedef enum {
	ATK_TEXT_CLIP_NONE = 0,
	ATK_TEXT_CLIP_MIN = 1,
	ATK_TEXT_CLIP_MAX = 2,
	ATK_TEXT_CLIP_BOTH = 3
    } AtkTextClipType;

    typedef struct _AtkImplementor AtkImplementor;

    typedef void (*AtkEventListener) (AtkObject *);

    typedef gboolean(*AtkFunction) (gpointer);

    typedef struct _AtkImplementorIface AtkImplementorIface;

    typedef struct _AtkRegistryClass AtkRegistryClass;

    typedef struct _AtkHypertextIface AtkHypertextIface;

    typedef struct _AtkStreamableContentIface AtkStreamableContentIface;

    typedef struct _AtkRectangle AtkRectangle;

    typedef struct _AtkStateSetClass AtkStateSetClass;

    typedef struct _AtkAttribute AtkAttribute;

    typedef struct _AtkObjectClass AtkObjectClass;

    typedef struct _AtkGObjectAccessibleClass AtkGObjectAccessibleClass;

    typedef struct _AtkObjectFactoryClass AtkObjectFactoryClass;

    typedef struct _AtkNoOpObjectFactoryClass AtkNoOpObjectFactoryClass;

    typedef struct _AtkActionIface AtkActionIface;

    typedef struct _AtkTableIface AtkTableIface;

    typedef struct _AtkValueIface AtkValueIface;

    typedef struct _AtkRelationClass AtkRelationClass;

    typedef struct _AtkTextIface AtkTextIface;

    typedef struct _AtkRelationSetClass AtkRelationSetClass;

    typedef struct _AtkSelectionIface AtkSelectionIface;

    typedef struct _AtkUtilClass AtkUtilClass;

    typedef struct _AtkNoOpObjectClass AtkNoOpObjectClass;

    typedef struct _AtkImageIface AtkImageIface;

    typedef struct _AtkComponentIface AtkComponentIface;

    typedef struct _AtkEditableTextIface AtkEditableTextIface;

    typedef struct _AtkDocumentIface AtkDocumentIface;

    typedef struct _AtkHyperlinkClass AtkHyperlinkClass;

    typedef enum {
	ATK_KEY_EVENT_PRESS,
	ATK_KEY_EVENT_RELEASE,
	ATK_KEY_EVENT_LAST_DEFINED
    } AtkKeyEventType;

    typedef struct _AtkUtil AtkUtil;

    typedef enum {
	ATK_HYPERLINK_IS_INLINE = 1 << 0
    } AtkHyperlinkStateFlags;

    typedef struct _AtkNoOpObjectFactory AtkNoOpObjectFactory;

    typedef struct _AtkNoOpObject AtkNoOpObject;

#if __LSB_VERSION__ >= 50
    typedef struct _AtkMisc AtkMisc;

    typedef struct _AtkMiscClass AtkMiscClass;

    typedef struct _AtkHyperlinkImpl AtkHyperlinkImpl;

    typedef struct _AtkHyperlinkImplIface AtkHyperlinkImplIface;

#endif				/* __LSB_VERSION__ >= 5.0 */

#if __LSB_VERSION__ >= 50
    struct _AtkMisc {
	GObject parent;
    };

    struct _AtkMiscClass {
	GObjectClass parent;
	void (*threads_enter) (AtkMisc *);
	void (*threads_leave) (AtkMisc *);
	gpointer vfuncs[32];
    };

    struct _AtkHyperlinkImpl;

    struct _AtkHyperlinkImplIface {
	GTypeInterface parent;
	AtkHyperlink *(*get_hyperlink) (AtkHyperlinkImpl *);
	AtkFunction pad1;
    };

#endif				/* __LSB_VERSION__ >= 5.0 */

    struct _AtkObject {
	GObject parent;
	gchar *description;
	gchar *name;
	AtkObject *accessible_parent;
	AtkRole role;
	AtkRelationSet *relation_set;
	AtkLayer layer;
    };

    struct _AtkRelationSet {
	GObject parent;
	GPtrArray *relations;
    };

    struct _AtkPropertyValues {
	const gchar *property_name;
	GValue old_value;
	GValue new_value;
    };

    struct _AtkRelation {
	GObject parent;
	GPtrArray *target;
	AtkRelationType relationship;
    };

    struct _AtkHyperlink {
	GObject parent;
    };

    struct _AtkStateSet {
	GObject parent;
    };

    struct _AtkObjectFactory {
	GObject parent;
    };

    struct _AtkRegistry {
	GObject parent;
	GHashTable *factory_type_registry;
	GHashTable *factory_singleton_cache;
    };

    struct _AtkGObjectAccessible {
	AtkObject parent;
    };

    struct _AtkKeyEventStruct {
	gint type;
	guint state;
	guint keyval;
	gint length;
	gchar *string;
	guint16 keycode;
	guint32 timestamp;
    };

    struct _AtkTextRectangle {
	gint x;
	gint y;
	gint width;
	gint height;
    };

    struct _AtkTextRange {
	AtkTextRectangle bounds;
	gint start_offset;
	gint end_offset;
	gchar *content;
    };

    struct _AtkImplementorIface {
	GTypeInterface parent;
	AtkObject *(*ref_accessible) (AtkImplementor *);
    };

    struct _AtkRegistryClass {
	GObjectClass parent_class;
    };

    struct _AtkHypertextIface {
	GTypeInterface parent;
	AtkHyperlink *(*get_link) (AtkHypertext *, gint);
	 gint(*get_n_links) (AtkHypertext *);
	 gint(*get_link_index) (AtkHypertext *, gint);
	void (*link_selected) (AtkHypertext *, gint);
	AtkFunction pad1;
	AtkFunction pad2;
	AtkFunction pad3;
    };

    struct _AtkStreamableContentIface {
	GTypeInterface parent;
	 gint(*get_n_mime_types) (AtkStreamableContent *);
	const gchar *(*get_mime_type) (AtkStreamableContent *, gint);
	GIOChannel *(*get_stream) (AtkStreamableContent *, const gchar *);
#if __LSB_VERSION__ < 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	const gchar *(*get_uri) (AtkStreamableContent *, const gchar *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad3;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad4;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad3;
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _AtkRectangle {
	gint x;
	gint y;
	gint width;
	gint height;
    };

    struct _AtkStateSetClass {
	GObjectClass parent;
    };

    struct _AtkAttribute {
	gchar *name;
	gchar *value;
    };

    struct _AtkObjectClass {
	GObjectClass parent;
	const gchar *(*get_name) (AtkObject *);
	const gchar *(*get_description) (AtkObject *);
	AtkObject *(*get_parent) (AtkObject *);
	 gint(*get_n_children) (AtkObject *);
	AtkObject *(*ref_child) (AtkObject *, gint);
	 gint(*get_index_in_parent) (AtkObject *);
	AtkRelationSet *(*ref_relation_set) (AtkObject *);
	 AtkRole(*get_role) (AtkObject *);
	 AtkLayer(*get_layer) (AtkObject *);
	 gint(*get_mdi_zorder) (AtkObject *);
	AtkStateSet *(*ref_state_set) (AtkObject *);
	void (*set_name) (AtkObject *, const gchar *);
	void (*set_description) (AtkObject *, const gchar *);
	void (*set_parent) (AtkObject *, AtkObject *);
	void (*set_role) (AtkObject *, AtkRole);
	 guint(*connect_property_change_handler) (AtkObject *,
						  AtkPropertyChangeHandler
						  *);
	void (*remove_property_change_handler) (AtkObject *, guint);
	void (*initialize) (AtkObject *, gpointer);
	void (*children_changed) (AtkObject *, guint, gpointer);
	void (*focus_event) (AtkObject *, gboolean);
	void (*property_change) (AtkObject *, AtkPropertyValues *);
	void (*state_change) (AtkObject *, const gchar *, gboolean);
	void (*visible_data_changed) (AtkObject *);
	void (*active_descendant_changed) (AtkObject *, gpointer *);
#if __LSB_VERSION__ < 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkAttributeSet *(*get_attributes) (AtkObject *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad3;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _AtkGObjectAccessibleClass {
	AtkObjectClass parent_class;
	AtkFunction pad1;
	AtkFunction pad2;
    };

    struct _AtkObjectFactoryClass {
	GObjectClass parent_class;
	AtkObject *(*create_accessible) (GObject *);
	void (*invalidate) (AtkObjectFactory *);
	 GType(*get_accessible_type) (void);
	AtkFunction pad1;
	AtkFunction pad2;
    };

    struct _AtkNoOpObjectFactoryClass {
	AtkObjectFactoryClass parent_class;
    };

    struct _AtkActionIface {
	GTypeInterface parent;
	 gboolean(*do_action) (AtkAction *, gint);
	 gint(*get_n_actions) (AtkAction *);
	const gchar *(*get_description) (AtkAction *, gint);
	const gchar *(*get_name) (AtkAction *, gint);
	const gchar *(*get_keybinding) (AtkAction *, gint);
	 gboolean(*set_description) (AtkAction *, gint, const gchar *);
	const gchar *(*get_localized_name) (AtkAction *, gint);
	AtkFunction pad2;
    };

    struct _AtkTableIface {
	GTypeInterface parent;
	AtkObject *(*ref_at) (AtkTable *, gint, gint);
	 gint(*get_index_at) (AtkTable *, gint, gint);
	 gint(*get_column_at_index) (AtkTable *, gint);
	 gint(*get_row_at_index) (AtkTable *, gint);
	 gint(*get_n_columns) (AtkTable *);
	 gint(*get_n_rows) (AtkTable *);
	 gint(*get_column_extent_at) (AtkTable *, gint, gint);
	 gint(*get_row_extent_at) (AtkTable *, gint, gint);
	AtkObject *(*get_caption) (AtkTable *);
	const gchar *(*get_column_description) (AtkTable *, gint);
	AtkObject *(*get_column_header) (AtkTable *, gint);
	const gchar *(*get_row_description) (AtkTable *, gint);
	AtkObject *(*get_row_header) (AtkTable *, gint);
	AtkObject *(*get_summary) (AtkTable *);
	void (*set_caption) (AtkTable *, AtkObject *);
	void (*set_column_description) (AtkTable *, gint, const gchar *);
	void (*set_column_header) (AtkTable *, gint, AtkObject *);
	void (*set_row_description) (AtkTable *, gint, const gchar *);
	void (*set_row_header) (AtkTable *, gint, AtkObject *);
	void (*set_summary) (AtkTable *, AtkObject *);
	 gint(*get_selected_columns) (AtkTable *, gint * *);
	 gint(*get_selected_rows) (AtkTable *, gint * *);
	 gboolean(*is_column_selected) (AtkTable *, gint);
	 gboolean(*is_row_selected) (AtkTable *, gint);
	 gboolean(*is_selected) (AtkTable *, gint, gint);
	 gboolean(*add_row_selection) (AtkTable *, gint);
	 gboolean(*remove_row_selection) (AtkTable *, gint);
	 gboolean(*add_column_selection) (AtkTable *, gint);
	 gboolean(*remove_column_selection) (AtkTable *, gint);
	void (*row_inserted) (AtkTable *, gint, gint);
	void (*column_inserted) (AtkTable *, gint, gint);
	void (*row_deleted) (AtkTable *, gint, gint);
	void (*column_deleted) (AtkTable *, gint, gint);
	void (*row_reordered) (AtkTable *);
	void (*column_reordered) (AtkTable *);
	void (*model_changed) (AtkTable *);
	AtkFunction pad1;
	AtkFunction pad2;
	AtkFunction pad3;
	AtkFunction pad4;
    };

    struct _AtkValueIface {
	GTypeInterface parent;
	void (*get_current_value) (AtkValue *, GValue *);
	void (*get_maximum_value) (AtkValue *, GValue *);
	void (*get_minimum_value) (AtkValue *, GValue *);
	 gboolean(*set_current_value) (AtkValue *, const GValue *);
	AtkFunction pad1;
    };

    struct _AtkRelationClass {
	GObjectClass parent;
    };

    struct _AtkTextIface {
	GTypeInterface parent;
	gchar *(*get_text) (AtkText *, gint, gint);
	gchar *(*get_text_after_offset) (AtkText *, gint, AtkTextBoundary,
					 gint *, gint *);
	gchar *(*get_text_at_offset) (AtkText *, gint, AtkTextBoundary,
				      gint *, gint *);
	 gunichar(*get_character_at_offset) (AtkText *, gint);
	gchar *(*get_text_before_offset) (AtkText *, gint, AtkTextBoundary,
					  gint *, gint *);
	 gint(*get_caret_offset) (AtkText *);
	AtkAttributeSet *(*get_run_attributes) (AtkText *, gint, gint *,
						gint *);
	AtkAttributeSet *(*get_default_attributes) (AtkText *);
	void (*get_character_extents) (AtkText *, gint, gint *, gint *,
				       gint *, gint *, AtkCoordType);
	 gint(*get_character_count) (AtkText *);
	 gint(*get_offset_at_point) (AtkText *, gint, gint, AtkCoordType);
	 gint(*get_n_selections) (AtkText *);
	gchar *(*get_selection) (AtkText *, gint, gint *, gint *);
	 gboolean(*add_selection) (AtkText *, gint, gint);
	 gboolean(*remove_selection) (AtkText *, gint);
	 gboolean(*set_selection) (AtkText *, gint, gint, gint);
	 gboolean(*set_caret_offset) (AtkText *, gint);
	void (*text_changed) (AtkText *, gint, gint);
	void (*text_caret_moved) (AtkText *, gint);
	void (*text_selection_changed) (AtkText *);
	void (*text_attributes_changed) (AtkText *);
	void (*get_range_extents) (AtkText *, gint, gint, AtkCoordType,
				   AtkTextRectangle *);
	AtkTextRange **(*get_bounded_ranges) (AtkText *,
					      AtkTextRectangle *,
					      AtkCoordType,
					      AtkTextClipType,
					      AtkTextClipType);
	AtkFunction pad4;
    };

    struct _AtkRelationSetClass {
	GObjectClass parent;
	AtkFunction pad1;
	AtkFunction pad2;
    };

    struct _AtkSelectionIface {
	GTypeInterface parent;
	 gboolean(*add_selection) (AtkSelection *, gint);
	 gboolean(*clear_selection) (AtkSelection *);
	AtkObject *(*ref_selection) (AtkSelection *, gint);
	 gint(*get_selection_count) (AtkSelection *);
	 gboolean(*is_child_selected) (AtkSelection *, gint);
	 gboolean(*remove_selection) (AtkSelection *, gint);
	 gboolean(*select_all_selection) (AtkSelection *);
	void (*selection_changed) (AtkSelection *);
	AtkFunction pad1;
	AtkFunction pad2;
    };

    struct _AtkUtilClass {
	GObjectClass parent;
	 guint(*add_global_event_listener) (GSignalEmissionHook,
					    const gchar *);
	void (*remove_global_event_listener) (guint);
	 guint(*add_key_event_listener) (AtkKeySnoopFunc, gpointer);
	void (*remove_key_event_listener) (guint);
	AtkObject *(*get_root) (void);
	const gchar *(*get_toolkit_name) (void);
	const gchar *(*get_toolkit_version) (void);
    };

    struct _AtkNoOpObjectClass {
	AtkObjectClass parent_class;
    };

    struct _AtkImageIface {
	GTypeInterface parent;
	void (*get_image_position) (AtkImage *, gint *, gint *,
				    AtkCoordType);
	const gchar *(*get_image_description) (AtkImage *, AtkImage *);
	void (*get_image_size) (AtkImage *, gint *, gint *);
	 gboolean(*set_image_description) (AtkImage *, const gchar *);
#if __LSB_VERSION__ < 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	const gchar *(*get_image_locale) (AtkImage *, AtkImage *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _AtkComponentIface {
	GTypeInterface parent;
	 guint(*add_focus_handler) (AtkComponent *, AtkFocusHandler);
	 gboolean(*contains) (AtkComponent *, gint, gint, AtkCoordType);
	AtkObject *(*ref_accessible_at_point) (AtkComponent *, gint, gint,
					       AtkCoordType);
	void (*get_extents) (AtkComponent *, gint *, gint *, gint *,
			     gint *, AtkCoordType);
	void (*get_position) (AtkComponent *, gint *, gint *,
			      AtkCoordType);
	void (*get_size) (AtkComponent *, gint *, gint *);
	 gboolean(*grab_focus) (AtkComponent *);
	void (*remove_focus_handler) (AtkComponent *, guint);
	 gboolean(*set_extents) (AtkComponent *, gint, gint, gint, gint,
				 AtkCoordType);
	 gboolean(*set_position) (AtkComponent *, gint, gint,
				  AtkCoordType);
	 gboolean(*set_size) (AtkComponent *, gint, gint);
	 AtkLayer(*get_layer) (AtkComponent *);
	 gint(*get_mdi_zorder) (AtkComponent *);
	void (*bounds_changed) (AtkComponent *, AtkRectangle *);
#if __LSB_VERSION__ < 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gdouble(*get_alpha) (AtkComponent *);
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _AtkEditableTextIface {
	GTypeInterface parent_interface;
	 gboolean(*set_run_attributes) (AtkEditableText *,
					AtkAttributeSet *, gint, gint);
	void (*set_text_contents) (AtkEditableText *, const gchar *);
	void (*insert_text) (AtkEditableText *, const gchar *, gint,
			     gint *);
	void (*copy_text) (AtkEditableText *, gint, gint);
	void (*cut_text) (AtkEditableText *, gint, gint);
	void (*delete_text) (AtkEditableText *, gint, gint);
	void (*paste_text) (AtkEditableText *, gint);
	AtkFunction pad1;
	AtkFunction pad2;
    };

    struct _AtkDocumentIface {
	GTypeInterface parent;
	const gchar *(*get_document_type) (AtkDocument *);
	 gpointer(*get_document) (AtkDocument *);
#if __LSB_VERSION__ < 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	const gchar *(*get_document_locale) (AtkDocument *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkAttributeSet *(*get_document_attributes) (AtkDocument *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad3;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	const gchar *(*get_document_attribute_value) (AtkDocument *,
						      const gchar *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad4;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	 gboolean(*set_document_attribute) (AtkDocument *, const gchar *,
					    const gchar *);
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad5;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad1;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad6;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad2;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad7;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad3;
#endif				/* __LSB_VERSION__ >= 50 */
#if __LSB_VERSION__ < 50
	AtkFunction pad8;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	AtkFunction pad4;
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _AtkHyperlinkClass {
	GObjectClass parent;
	gchar *(*get_uri) (AtkHyperlink *, gint);
	AtkObject *(*get_object) (AtkHyperlink *, gint);
	 gint(*get_end_index) (AtkHyperlink *);
	 gint(*get_start_index) (AtkHyperlink *);
	 gboolean(*is_valid) (AtkHyperlink *);
	 gint(*get_n_anchors) (AtkHyperlink *);
	 guint(*link_state) (AtkHyperlink *);
	 gboolean(*is_selected_link) (AtkHyperlink *);
	void (*link_activated) (AtkHyperlink *);
	AtkFunction pad1;
    };

    struct _AtkUtil {
	GObject parent;
    };

    struct _AtkNoOpObjectFactory {
	AtkObjectFactory parent;
    };

    struct _AtkNoOpObject {
	AtkObject parent;
    };


/* Function prototypes */

    extern gboolean atk_action_do_action(AtkAction * action, gint i);
    extern const gchar *atk_action_get_description(AtkAction * action,
						   gint i);
    extern const gchar *atk_action_get_keybinding(AtkAction * action,
						  gint i);
    extern const gchar *atk_action_get_localized_name(AtkAction * action,
						      gint i);
    extern gint atk_action_get_n_actions(AtkAction * action);
    extern const gchar *atk_action_get_name(AtkAction * action, gint i);
    extern GType atk_action_get_type(void);
    extern gboolean atk_action_set_description(AtkAction * action, gint i,
					       const gchar * desc);
    extern guint atk_add_focus_tracker(AtkEventListener focus_tracker);
    extern guint atk_add_global_event_listener(GSignalEmissionHook
					       listener,
					       const gchar * event_type);
    extern guint atk_add_key_event_listener(AtkKeySnoopFunc listener,
					    gpointer data);
    extern void atk_attribute_set_free(AtkAttributeSet * attrib_set);
    extern guint atk_component_add_focus_handler(AtkComponent * component,
						 AtkFocusHandler handler);
    extern gboolean atk_component_contains(AtkComponent * component,
					   gint x, gint y,
					   AtkCoordType coord_type);
    extern void atk_component_get_extents(AtkComponent * component,
					  gint * x, gint * y, gint * width,
					  gint * height,
					  AtkCoordType coord_type);
    extern AtkLayer atk_component_get_layer(AtkComponent * component);
    extern gint atk_component_get_mdi_zorder(AtkComponent * component);
    extern void atk_component_get_position(AtkComponent * component,
					   gint * x, gint * y,
					   AtkCoordType coord_type);
    extern void atk_component_get_size(AtkComponent * component,
				       gint * width, gint * height);
    extern GType atk_component_get_type(void);
    extern gboolean atk_component_grab_focus(AtkComponent * component);
    extern AtkObject *atk_component_ref_accessible_at_point(AtkComponent *
							    component,
							    gint x, gint y,
							    AtkCoordType
							    coord_type);
    extern void atk_component_remove_focus_handler(AtkComponent *
						   component,
						   guint handler_id);
    extern gboolean atk_component_set_extents(AtkComponent * component,
					      gint x, gint y, gint width,
					      gint height,
					      AtkCoordType coord_type);
    extern gboolean atk_component_set_position(AtkComponent * component,
					       gint x, gint y,
					       AtkCoordType coord_type);
    extern gboolean atk_component_set_size(AtkComponent * component,
					   gint width, gint height);
    extern gpointer atk_document_get_document(AtkDocument * document);
    extern const gchar *atk_document_get_document_type(AtkDocument *
						       document);
    extern GType atk_document_get_type(void);
    extern void atk_editable_text_copy_text(AtkEditableText * text,
					    gint start_pos, gint end_pos);
    extern void atk_editable_text_cut_text(AtkEditableText * text,
					   gint start_pos, gint end_pos);
    extern void atk_editable_text_delete_text(AtkEditableText * text,
					      gint start_pos,
					      gint end_pos);
    extern GType atk_editable_text_get_type(void);
    extern void atk_editable_text_insert_text(AtkEditableText * text,
					      const gchar * string,
					      gint length,
					      gint * position);
    extern void atk_editable_text_paste_text(AtkEditableText * text,
					     gint position);
    extern gboolean atk_editable_text_set_run_attributes(AtkEditableText *
							 text,
							 AtkAttributeSet *
							 attrib_set,
							 gint start_offset,
							 gint end_offset);
    extern void atk_editable_text_set_text_contents(AtkEditableText * text,
						    const gchar * string);
    extern void atk_focus_tracker_init(AtkEventListenerInit init);
    extern void atk_focus_tracker_notify(AtkObject * object);
    extern AtkRegistry *atk_get_default_registry(void);
    extern AtkObject *atk_get_focus_object(void);
    extern AtkObject *atk_get_root(void);
    extern const gchar *atk_get_toolkit_name(void);
    extern const gchar *atk_get_toolkit_version(void);
    extern AtkObject *atk_gobject_accessible_for_object(GObject * obj);
    extern GObject *atk_gobject_accessible_get_object(AtkGObjectAccessible
						      * obj);
    extern GType atk_gobject_accessible_get_type(void);
    extern gint atk_hyperlink_get_end_index(AtkHyperlink * link_);
    extern gint atk_hyperlink_get_n_anchors(AtkHyperlink * link_);
    extern AtkObject *atk_hyperlink_get_object(AtkHyperlink * link_,
					       gint i);
    extern gint atk_hyperlink_get_start_index(AtkHyperlink * link_);
    extern GType atk_hyperlink_get_type(void);
    extern gchar *atk_hyperlink_get_uri(AtkHyperlink * link_, gint i);
    extern gboolean atk_hyperlink_is_inline(AtkHyperlink * link_);
    /* This function is deprecated use <const libatk-1.0;ATK_STATE_SELECTED>ATK_STATE_SELECTED instead */
    extern gboolean atk_hyperlink_is_selected_link(AtkHyperlink * link_)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern gboolean atk_hyperlink_is_valid(AtkHyperlink * link_);
    extern AtkHyperlink *atk_hypertext_get_link(AtkHypertext * hypertext,
						gint link_index);
    extern gint atk_hypertext_get_link_index(AtkHypertext * hypertext,
					     gint char_index);
    extern gint atk_hypertext_get_n_links(AtkHypertext * hypertext);
    extern GType atk_hypertext_get_type(void);
    extern const gchar *atk_image_get_image_description(AtkImage * image);
    extern void atk_image_get_image_position(AtkImage * image, gint * x,
					     gint * y,
					     AtkCoordType coord_type);
    extern void atk_image_get_image_size(AtkImage * image, int *width,
					 int *height);
    extern GType atk_image_get_type(void);
    extern gboolean atk_image_set_image_description(AtkImage * image,
						    const gchar *
						    description);
    extern GType atk_implementor_get_type(void);
    extern AtkObject *atk_implementor_ref_accessible(AtkImplementor *
						     implementor);
    extern GType atk_no_op_object_factory_get_type(void);
    extern AtkObjectFactory *atk_no_op_object_factory_new(void);
    extern GType atk_no_op_object_get_type(void);
    extern AtkObject *atk_no_op_object_new(GObject *);
    extern gboolean atk_object_add_relationship(AtkObject * object,
						AtkRelationType
						relationship,
						AtkObject * target);
    extern guint atk_object_connect_property_change_handler(AtkObject *
							    accessible,
							    AtkPropertyChangeHandler
							    * handler);
    extern AtkObject *atk_object_factory_create_accessible(AtkObjectFactory
							   * factory,
							   GObject * obj);
    extern GType atk_object_factory_get_accessible_type(AtkObjectFactory *
							factory);
    extern GType atk_object_factory_get_type(void);
    extern void atk_object_factory_invalidate(AtkObjectFactory * factory);
    extern const gchar *atk_object_get_description(AtkObject * accessible);
    extern gint atk_object_get_index_in_parent(AtkObject * accessible);
    extern gint atk_object_get_n_accessible_children(AtkObject *
						     accessible);
    extern const gchar *atk_object_get_name(AtkObject * accessible);
    extern AtkObject *atk_object_get_parent(AtkObject * accessible);
    extern AtkRole atk_object_get_role(AtkObject * accessible);
    extern GType atk_object_get_type(void);
    extern void atk_object_initialize(AtkObject * accessible,
				      gpointer data);
    extern void atk_object_notify_state_change(AtkObject * accessible,
					       AtkState state,
					       gboolean value);
    extern AtkObject *atk_object_ref_accessible_child(AtkObject *
						      accessible, gint i);
    extern AtkRelationSet *atk_object_ref_relation_set(AtkObject *
						       accessible);
    extern AtkStateSet *atk_object_ref_state_set(AtkObject * accessible);
    extern void atk_object_remove_property_change_handler(AtkObject *
							  accessible,
							  guint
							  handler_id);
    extern gboolean atk_object_remove_relationship(AtkObject * object,
						   AtkRelationType
						   relationship,
						   AtkObject * target);
    extern void atk_object_set_description(AtkObject * accessible,
					   const gchar * description);
    extern void atk_object_set_name(AtkObject * accessible,
				    const gchar * name);
    extern void atk_object_set_parent(AtkObject * accessible,
				      AtkObject * parent);
    extern void atk_object_set_role(AtkObject * accessible, AtkRole role);
    extern GType atk_rectangle_get_type(void);
    extern AtkObjectFactory *atk_registry_get_factory(AtkRegistry *
						      registry,
						      GType type);
    extern GType atk_registry_get_factory_type(AtkRegistry * registry,
					       GType type);
    extern GType atk_registry_get_type(void);
    extern void atk_registry_set_factory_type(AtkRegistry * registry,
					      GType type,
					      GType factory_type);
    extern void atk_relation_add_target(AtkRelation * relation,
					AtkObject * target);
    extern AtkRelationType atk_relation_get_relation_type(AtkRelation *
							  relation);
    extern GPtrArray *atk_relation_get_target(AtkRelation * relation);
    extern GType atk_relation_get_type(void);
    extern AtkRelation *atk_relation_new(AtkObject * *targets,
					 gint n_targets,
					 AtkRelationType relationship);
    extern void atk_relation_set_add(AtkRelationSet * set,
				     AtkRelation * relation);
    extern void atk_relation_set_add_relation_by_type(AtkRelationSet * set,
						      AtkRelationType
						      relationship,
						      AtkObject * target);
    extern gboolean atk_relation_set_contains(AtkRelationSet * set,
					      AtkRelationType
					      relationship);
    extern gint atk_relation_set_get_n_relations(AtkRelationSet * set);
    extern AtkRelation *atk_relation_set_get_relation(AtkRelationSet * set,
						      gint i);
    extern AtkRelation
	*atk_relation_set_get_relation_by_type(AtkRelationSet * set,
					       AtkRelationType
					       relationship);
    extern GType atk_relation_set_get_type(void);
    extern AtkRelationSet *atk_relation_set_new(void);
    extern void atk_relation_set_remove(AtkRelationSet * set,
					AtkRelation * relation);
    extern AtkRelationType atk_relation_type_for_name(const gchar * name);
    extern const gchar *atk_relation_type_get_name(AtkRelationType type);
    extern AtkRelationType atk_relation_type_register(const gchar * name);
    extern void atk_remove_focus_tracker(guint tracker_id);
    extern void atk_remove_global_event_listener(guint listener_id);
    extern void atk_remove_key_event_listener(guint listener_id);
    extern AtkRole atk_role_for_name(const gchar * name);
    extern const gchar *atk_role_get_localized_name(AtkRole role);
    extern const gchar *atk_role_get_name(AtkRole role);
    extern AtkRole atk_role_register(const gchar * name);
    extern gboolean atk_selection_add_selection(AtkSelection * selection,
						gint i);
    extern gboolean atk_selection_clear_selection(AtkSelection *
						  selection);
    extern gint atk_selection_get_selection_count(AtkSelection *
						  selection);
    extern GType atk_selection_get_type(void);
    extern gboolean atk_selection_is_child_selected(AtkSelection *
						    selection, gint i);
    extern AtkObject *atk_selection_ref_selection(AtkSelection * selection,
						  gint i);
    extern gboolean atk_selection_remove_selection(AtkSelection *
						   selection, gint i);
    extern gboolean atk_selection_select_all_selection(AtkSelection *
						       selection);
    extern gboolean atk_state_set_add_state(AtkStateSet * set,
					    AtkStateType type);
    extern void atk_state_set_add_states(AtkStateSet * set,
					 AtkStateType * types,
					 gint n_types);
    extern AtkStateSet *atk_state_set_and_sets(AtkStateSet * set,
					       AtkStateSet * compare_set);
    extern void atk_state_set_clear_states(AtkStateSet * set);
    extern gboolean atk_state_set_contains_state(AtkStateSet * set,
						 AtkStateType type);
    extern gboolean atk_state_set_contains_states(AtkStateSet * set,
						  AtkStateType * types,
						  gint n_types);
    extern GType atk_state_set_get_type(void);
    extern gboolean atk_state_set_is_empty(AtkStateSet * set);
    extern AtkStateSet *atk_state_set_new(void);
    extern AtkStateSet *atk_state_set_or_sets(AtkStateSet * set,
					      AtkStateSet * compare_set);
    extern gboolean atk_state_set_remove_state(AtkStateSet * set,
					       AtkStateType type);
    extern AtkStateSet *atk_state_set_xor_sets(AtkStateSet * set,
					       AtkStateSet * compare_set);
    extern AtkStateType atk_state_type_for_name(const gchar * name);
    extern const gchar *atk_state_type_get_name(AtkStateType type);
    extern AtkStateType atk_state_type_register(const gchar * name);
    extern const gchar
	*atk_streamable_content_get_mime_type(AtkStreamableContent *
					      streamable, gint i);
    extern gint
	atk_streamable_content_get_n_mime_types(AtkStreamableContent *
						streamable);
    extern GIOChannel
	*atk_streamable_content_get_stream(AtkStreamableContent *
					   streamable,
					   const gchar * mime_type);
    extern GType atk_streamable_content_get_type(void);
    extern gboolean atk_table_add_column_selection(AtkTable * table,
						   gint column);
    extern gboolean atk_table_add_row_selection(AtkTable * table,
						gint row);
    extern AtkObject *atk_table_get_caption(AtkTable * table);
    extern gint atk_table_get_column_at_index(AtkTable * table,
					      gint index_);
    extern const gchar *atk_table_get_column_description(AtkTable * table,
							 gint column);
    extern gint atk_table_get_column_extent_at(AtkTable * table, gint row,
					       gint column);
    extern AtkObject *atk_table_get_column_header(AtkTable * table,
						  gint column);
    extern gint atk_table_get_index_at(AtkTable * table, gint row,
				       gint column);
    extern gint atk_table_get_n_columns(AtkTable * table);
    extern gint atk_table_get_n_rows(AtkTable * table);
    extern gint atk_table_get_row_at_index(AtkTable * table, gint index_);
    extern const gchar *atk_table_get_row_description(AtkTable * table,
						      gint row);
    extern gint atk_table_get_row_extent_at(AtkTable * table, gint row,
					    gint column);
    extern AtkObject *atk_table_get_row_header(AtkTable * table, gint row);
    extern gint atk_table_get_selected_columns(AtkTable * table,
					       gint * *selected);
    extern gint atk_table_get_selected_rows(AtkTable * table,
					    gint * *selected);
    extern AtkObject *atk_table_get_summary(AtkTable * table);
    extern GType atk_table_get_type(void);
    extern gboolean atk_table_is_column_selected(AtkTable * table,
						 gint column);
    extern gboolean atk_table_is_row_selected(AtkTable * table, gint row);
    extern gboolean atk_table_is_selected(AtkTable * table, gint row,
					  gint column);
    extern AtkObject *atk_table_ref_at(AtkTable * table, gint row,
				       gint column);
    extern gboolean atk_table_remove_column_selection(AtkTable * table,
						      gint column);
    extern gboolean atk_table_remove_row_selection(AtkTable * table,
						   gint row);
    extern void atk_table_set_caption(AtkTable * table,
				      AtkObject * caption);
    extern void atk_table_set_column_description(AtkTable * table,
						 gint column,
						 const gchar *
						 description);
    extern void atk_table_set_column_header(AtkTable * table, gint column,
					    AtkObject * header);
    extern void atk_table_set_row_description(AtkTable * table, gint row,
					      const gchar * description);
    extern void atk_table_set_row_header(AtkTable * table, gint row,
					 AtkObject * header);
    extern void atk_table_set_summary(AtkTable * table,
				      AtkObject * accessible);
    extern gboolean atk_text_add_selection(AtkText * text,
					   gint start_offset,
					   gint end_offset);
    extern AtkTextAttribute atk_text_attribute_for_name(const gchar *
							name);
    extern const gchar *atk_text_attribute_get_name(AtkTextAttribute attr);
    extern const gchar *atk_text_attribute_get_value(AtkTextAttribute attr,
						     gint index_);
    extern AtkTextAttribute atk_text_attribute_register(const gchar *
							name);
    extern void atk_text_free_ranges(AtkTextRange * *ranges);
    extern AtkTextRange **atk_text_get_bounded_ranges(AtkText * text,
						      AtkTextRectangle *
						      rect,
						      AtkCoordType
						      coord_type,
						      AtkTextClipType
						      x_clip_type,
						      AtkTextClipType
						      y_clip_type);
    extern gint atk_text_get_caret_offset(AtkText * text);
    extern gunichar atk_text_get_character_at_offset(AtkText * text,
						     gint offset);
    extern gint atk_text_get_character_count(AtkText * text);
    extern void atk_text_get_character_extents(AtkText * text, gint offset,
					       gint * x, gint * y,
					       gint * width, gint * height,
					       AtkCoordType coords);
    extern AtkAttributeSet *atk_text_get_default_attributes(AtkText *
							    text);
    extern gint atk_text_get_n_selections(AtkText * text);
    extern gint atk_text_get_offset_at_point(AtkText * text, gint x,
					     gint y, AtkCoordType coords);
    extern void atk_text_get_range_extents(AtkText * text,
					   gint start_offset,
					   gint end_offset,
					   AtkCoordType coord_type,
					   AtkTextRectangle * rect);
    extern AtkAttributeSet *atk_text_get_run_attributes(AtkText * text,
							gint offset,
							gint *
							start_offset,
							gint * end_offset);
    extern gchar *atk_text_get_selection(AtkText * text,
					 gint selection_num,
					 gint * start_offset,
					 gint * end_offset);
    extern gchar *atk_text_get_text(AtkText * text, gint start_offset,
				    gint end_offset);
    extern gchar *atk_text_get_text_after_offset(AtkText * text,
						 gint offset,
						 AtkTextBoundary
						 boundary_type,
						 gint * start_offset,
						 gint * end_offset);
    extern gchar *atk_text_get_text_at_offset(AtkText * text, gint offset,
					      AtkTextBoundary
					      boundary_type,
					      gint * start_offset,
					      gint * end_offset);
    extern gchar *atk_text_get_text_before_offset(AtkText * text,
						  gint offset,
						  AtkTextBoundary
						  boundary_type,
						  gint * start_offset,
						  gint * end_offset);
    extern GType atk_text_get_type(void);
    extern gboolean atk_text_remove_selection(AtkText * text,
					      gint selection_num);
    extern gboolean atk_text_set_caret_offset(AtkText * text, gint offset);
    extern gboolean atk_text_set_selection(AtkText * text,
					   gint selection_num,
					   gint start_offset,
					   gint end_offset);
    extern GType atk_util_get_type(void);
    extern void atk_value_get_current_value(AtkValue * obj,
					    GValue * value);
    extern void atk_value_get_maximum_value(AtkValue * obj,
					    GValue * value);
    extern void atk_value_get_minimum_value(AtkValue * obj,
					    GValue * value);
    extern GType atk_value_get_type(void);
    extern gboolean atk_value_set_current_value(AtkValue * obj,
						const GValue * value);
#if __LSB_VERSION__ >= 50
    extern gdouble atk_component_get_alpha(AtkComponent * component);
    extern const char *atk_document_get_attribute_value(AtkDocument *
							document,
							const char
							*attribute_name);
    extern AtkAttributeSet *atk_document_get_attributes(AtkDocument *
							document);
    extern const char *atk_document_get_locale(AtkDocument * document);
    extern gboolean atk_document_set_attribute_value(AtkDocument *
						     document,
						     const gchar *
						     attribute_name,
						     const gchar *
						     attribute_value);
    extern const char *atk_get_version(void);
    extern AtkHyperlink *atk_hyperlink_impl_get_hyperlink(AtkHyperlinkImpl
							  * obj);
    extern GType atk_hyperlink_impl_get_type(void);
    extern const char *atk_image_get_image_locale(AtkImage * image);
    extern const AtkMisc *atk_misc_get_instance(void);
    extern GType atk_misc_get_type(void);
    extern void atk_misc_threads_enter(AtkMisc * misc);
    extern void atk_misc_threads_leave(AtkMisc * misc);
    extern AtkAttributeSet *atk_object_get_attributes(AtkObject *
						      accessible);
    extern gboolean atk_relation_remove_target(AtkRelation * relation,
					       AtkObject * target);
    extern const char *atk_streamable_content_get_uri(AtkStreamableContent
						      * streamable,
						      const char
						      *mime_type);
    extern GType atk_text_range_get_type(void);
    extern void atk_value_get_minimum_increment(AtkValue * obj,
						GValue * value);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
