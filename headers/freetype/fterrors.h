#ifndef _FREETYPE_FTERRORS_H_
#define _FREETYPE_FTERRORS_H_


#ifdef __cplusplus
extern "C" {
#endif


#define FT_ERRORDEF_(e,v,s)	 \
	FT_ERRORDEF( FT_ERR_CAT( FT_ERR_PREFIX, e ), v + FT_ERR_BASE, s )
#define FT_NOERRORDEF_(e,v,s)	 \
	FT_ERRORDEF( FT_ERR_CAT( FT_ERR_PREFIX, e ), v, s )
#define FT_ERR_BASE	0
#define FT_ERRORDEF(e,v,s)	e = v,
#define FT_ERROR_START_LIST	enum {
#define FT_ERR_PREFIX	FT_Err_
#define FT_ERROR_END_LIST	FT_ERR_CAT( FT_ERR_PREFIX, Max ) };
#define FT_ERR_CAT(x,y)	FT_ERR_XCAT( x, y )
#define FT_ERR_XCAT(x,y)	x ## y

enum {
  FT_Err_Ok = 0x00,
  FT_Err_Cannot_Open_Resource = 0x01 + 0,
  FT_Err_Unknown_File_Format = 0x02 + 0,
  FT_Err_Invalid_File_Format = 0x03 + 0,
  FT_Err_Invalid_Version = 0x04 + 0,
  FT_Err_Lower_Module_Version = 0x05 + 0,
  FT_Err_Invalid_Argument = 0x06 + 0,
  FT_Err_Unimplemented_Feature = 0x07 + 0,
  FT_Err_Invalid_Table = 0x08 + 0,
  FT_Err_Invalid_Offset = 0x09 + 0,

  FT_Err_Invalid_Glyph_Index = 0x10 + 0,
  FT_Err_Invalid_Character_Code = 0x11 + 0,
  FT_Err_Invalid_Glyph_Format = 0x12 + 0,
  FT_Err_Cannot_Render_Glyph = 0x13 + 0,
  FT_Err_Invalid_Outline = 0x14 + 0,
  FT_Err_Invalid_Composite = 0x15 + 0,
  FT_Err_Too_Many_Hints = 0x16 + 0,
  FT_Err_Invalid_Pixel_Size = 0x17 + 0,

  FT_Err_Invalid_Handle = 0x20 + 0,
  FT_Err_Invalid_Library_Handle = 0x21 + 0,
  FT_Err_Invalid_Driver_Handle = 0x22 + 0,
  FT_Err_Invalid_Face_Handle = 0x23 + 0,
  FT_Err_Invalid_Size_Handle = 0x24 + 0,
  FT_Err_Invalid_Slot_Handle = 0x25 + 0,
  FT_Err_Invalid_CharMap_Handle = 0x26 + 0,
  FT_Err_Invalid_Cache_Handle = 0x27 + 0,
  FT_Err_Invalid_Stream_Handle = 0x28 + 0,

  FT_Err_Too_Many_Drivers = 0x30 + 0,
  FT_Err_Too_Many_Extensions = 0x31 + 0,

  FT_Err_Out_Of_Memory = 0x40 + 0,
  FT_Err_Unlisted_Object = 0x41 + 0,

  FT_Err_Cannot_Open_Stream = 0x51 + 0,
  FT_Err_Invalid_Stream_Seek = 0x52 + 0,
  FT_Err_Invalid_Stream_Skip = 0x53 + 0,
  FT_Err_Invalid_Stream_Read = 0x54 + 0,
  FT_Err_Invalid_Stream_Operation = 0x55 + 0,
  FT_Err_Invalid_Frame_Operation = 0x56 + 0,
  FT_Err_Nested_Frame_Access = 0x57 + 0,
  FT_Err_Invalid_Frame_Read = 0x58 + 0,

  FT_Err_Raster_Uninitialized = 0x60 + 0,
  FT_Err_Raster_Corrupted = 0x61 + 0,
  FT_Err_Raster_Overflow = 0x62 + 0,
  FT_Err_Raster_Negative_Height = 0x63 + 0,

  FT_Err_Too_Many_Caches = 0x70 + 0,

  FT_Err_Invalid_Opcode = 0x80 + 0,
  FT_Err_Too_Few_Arguments = 0x81 + 0,
  FT_Err_Stack_Overflow = 0x82 + 0,
  FT_Err_Code_Overflow = 0x83 + 0,
  FT_Err_Bad_Argument = 0x84 + 0,
  FT_Err_Divide_By_Zero = 0x85 + 0,
  FT_Err_Invalid_Reference = 0x86 + 0,
  FT_Err_Debug_OpCode = 0x87 + 0,
  FT_Err_ENDF_In_Exec_Stream = 0x88 + 0,
  FT_Err_Nested_DEFS = 0x89 + 0,
  FT_Err_Invalid_CodeRange = 0x8A + 0,
  FT_Err_Execution_Too_Long = 0x8B + 0,
  FT_Err_Too_Many_Function_Defs = 0x8C + 0,
  FT_Err_Too_Many_Instruction_Defs = 0x8D + 0,
  FT_Err_Table_Missing = 0x8E + 0,
  FT_Err_Horiz_Header_Missing = 0x8F + 0,

  FT_Err_Locations_Missing = 0x90 + 0,
  FT_Err_Name_Table_Missing = 0x91 + 0,
  FT_Err_CMap_Table_Missing = 0x92 + 0,
  FT_Err_Hmtx_Table_Missing = 0x93 + 0,
  FT_Err_Post_Table_Missing = 0x94 + 0,
  FT_Err_Invalid_Horiz_Metrics = 0x95 + 0,
  FT_Err_Invalid_CharMap_Format = 0x96 + 0,
  FT_Err_Invalid_PPem = 0x97 + 0,
  FT_Err_Invalid_Vert_Metrics = 0x98 + 0,
  FT_Err_Could_Not_Find_Context = 0x99 + 0,
  FT_Err_Invalid_Post_Table_Format = 0x9A + 0,
  FT_Err_Invalid_Post_Table = 0x9B + 0,

  FT_Err_Syntax_Error = 0xA0 + 0,
  FT_Err_Stack_Underflow = 0xA1 + 0,
  FT_Err_Ignore = 0xA2 + 0,

  FT_Err_Missing_Startfont_Field = 0xB0 + 0,
  FT_Err_Missing_Font_Field = 0xB1 + 0,
  FT_Err_Missing_Size_Field = 0xB2 + 0,
  FT_Err_Missing_Chars_Field = 0xB3 + 0,
  FT_Err_Missing_Startchar_Field = 0xB4 + 0,
  FT_Err_Missing_Encoding_Field = 0xB5 + 0,
  FT_Err_Missing_Bbx_Field = 0xB6 + 0,
  FT_Err_Bbx_Too_Big = 0xB7 + 0,

  FT_Err_Max };

#undef FT_ERROR_START_LIST
#undef FT_ERROR_END_LIST

#undef FT_ERRORDEF
#undef FT_ERRORDEF_
#undef FT_NOERRORDEF_

#undef FT_NEED_EXTERN_C
#undef FT_ERR_CONCAT
#undef FT_ERR_BASE



#ifdef __cplusplus
}
#endif
#endif
