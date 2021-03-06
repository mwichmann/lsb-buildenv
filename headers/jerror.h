#if (__LSB_VERSION__ >= 40 )
#ifndef _JERROR_H_
#define _JERROR_H_


#ifdef __cplusplus
extern "C" {
#endif


#define JERROR_H
#define MAKESTMT(stuff)	do { stuff } while (0)
#define TRACEMS(cinfo,lvl,code)	\
  ((cinfo)->err->msg_code = (code), \
   ( *(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define WARNMS(cinfo,code)	\
  ((cinfo)->err->msg_code = (code), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define ERREXIT(cinfo,code)	\
  ((cinfo)->err->msg_code = (code), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define TRACEMS1(cinfo,lvl,code,p1)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define ERREXIT1(cinfo,code,p1)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define TRACEMS2(cinfo,lvl,code,p1,p2)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (cinfo)->err->msg_parm.i[1] = (p2), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define WARNMS2(cinfo,code,p1,p2)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (cinfo)->err->msg_parm.i[1] = (p2), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define ERREXIT2(cinfo,code,p1,p2)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (cinfo)->err->msg_parm.i[1] = (p2), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT3(cinfo,code,p1,p2,p3)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (cinfo)->err->msg_parm.i[1] = (p2), \
   (cinfo)->err->msg_parm.i[2] = (p3), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define ERREXIT4(cinfo,code,p1,p2,p3,p4)	\
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (cinfo)->err->msg_parm.i[1] = (p2), \
   (cinfo)->err->msg_parm.i[2] = (p3), \
   (cinfo)->err->msg_parm.i[3] = (p4), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define TRACEMSS(cinfo,lvl,code,str)	\
  ((cinfo)->err->msg_code = (code), \
   strncpy((cinfo)->err->msg_parm.s, (str), JMSG_STR_PARM_MAX), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))
#define ERREXITS(cinfo,code,str)	\
  ((cinfo)->err->msg_code = (code), \
   strncpy((cinfo)->err->msg_parm.s, (str), JMSG_STR_PARM_MAX), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define WARNMS1(cinfo,code,p1)	\
  ((cinfo)->err->msg_code = (code), \
  (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1))
#define TRACEMS3(cinfo,lvl,code,p1,p2,p3)	\
  MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; \
    _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); \
    (cinfo)->err->msg_code = (code); \
    (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS4(cinfo,lvl,code,p1,p2,p3,p4)	\
  MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; \
    _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); \
    (cinfo)->err->msg_code = (code); \
    (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS5(cinfo,lvl,code,p1,p2,p3,p4,p5)	\
  MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; \
    _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); \
    _mp[4] = (p5); \
    (cinfo)->err->msg_code = (code); \
    (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )
#define TRACEMS8(cinfo,lvl,code,p1,p2,p3,p4,p5,p6,p7,p8)	\
  MAKESTMT(int * _mp = (cinfo)->err->msg_parm.i; \
    _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); \
    _mp[4] = (p5); _mp[5] = (p6); _mp[6] = (p7); _mp[7] = (p8); \
    (cinfo)->err->msg_code = (code); \
    (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )


    typedef enum {
	JMSG_NOMESSAGE = 0,
	JERR_ARITH_NOTIMPL = 1,
	JERR_BAD_ALIGN_TYPE = 2,
	JERR_BAD_ALLOC_CHUNK = 3,
	JERR_BAD_BUFFER_MODE = 4,
	JERR_BAD_COMPONENT_ID = 5,
	JERR_BAD_CROP_SPEC = 6,
	JERR_BAD_DCT_COEF = 7,
	JERR_BAD_DCTSIZE = 8,
	JERR_BAD_HUFF_TABLE = 9,
	JERR_BAD_IN_COLORSPACE = 10,
	JERR_BAD_J_COLORSPACE = 11,
	JERR_BAD_LENGTH = 12,
	JERR_BAD_LIB_VERSION = 13,
	JERR_BAD_MCU_SIZE = 14,
	JERR_BAD_POOL_ID = 15,
	JERR_BAD_PRECISION = 16,
	JERR_BAD_PROGRESSION = 17,
	JERR_BAD_PROG_SCRIPT = 18,
	JERR_BAD_SAMPLING = 19,
	JERR_BAD_SCAN_SCRIPT = 20,
	JERR_BAD_STATE = 21,
	JERR_BAD_STRUCT_SIZE = 22,
	JERR_BAD_VIRTUAL_ACCESS = 23,
	JERR_BUFFER_SIZE = 24,
	JERR_CANT_SUSPEND = 25,
	JERR_CCIR601_NOTIMPL = 26,
	JERR_COMPONENT_COUNT = 27,
	JERR_CONVERSION_NOTIMPL = 28,
	JERR_DAC_INDEX = 29,
	JERR_DAC_VALUE = 30,
	JERR_DHT_INDEX = 31,
	JERR_DQT_INDEX = 32,
	JERR_EMPTY_IMAGE = 33,
	JERR_EMS_READ = 34,
	JERR_EMS_WRITE = 35,
	JERR_EOI_EXPECTED = 36,
	JERR_FILE_READ = 37,
	JERR_FILE_WRITE = 38,
	JERR_FRACT_SAMPLE_NOTIMPL = 39,
	JERR_HUFF_CLEN_OVERFLOW = 40,
	JERR_HUFF_MISSING_CODE = 41,
	JERR_IMAGE_TOO_BIG = 42,
	JERR_INPUT_EMPTY = 43,
	JERR_INPUT_EOF = 44,
	JERR_MISMATCHED_QUANT_TABLE = 45,
	JERR_MISSING_DATA = 46,
	JERR_MODE_CHANGE = 47,
	JERR_NOTIMPL = 48,
	JERR_NOT_COMPILED = 49,
	JERR_NO_BACKING_STORE = 50,
	JERR_NO_HUFF_TABLE = 51,
	JERR_NO_IMAGE = 52,
	JERR_NO_QUANT_TABLE = 53,
	JERR_NO_SOI = 54,
	JERR_OUT_OF_MEMORY = 55,
	JERR_QUANT_COMPONENTS = 56,
	JERR_QUANT_FEW_COLORS = 57,
	JERR_QUANT_MANY_COLORS = 58,
	JERR_SOF_DUPLICATE = 59,
	JERR_SOF_NO_SOS = 60,
	JERR_SOF_UNSUPPORTED = 61,
	JERR_SOI_DUPLICATE = 62,
	JERR_SOS_NO_SOF = 63,
	JERR_TFILE_CREATE = 64,
	JERR_TFILE_READ = 65,
	JERR_TFILE_SEEK = 66,
	JERR_TFILE_WRITE = 67,
	JERR_TOO_LITTLE_DATA = 68,
	JERR_UNKNOWN_MARKER = 69,
	JERR_VIRTUAL_BUG = 70,
	JERR_WIDTH_OVERFLOW = 71,
	JERR_XMS_READ = 72,
	JERR_XMS_WRITE = 73,
	JMSG_COPYRIGHT = 74,
	JMSG_VERSION = 75,
	JTRC_16BIT_TABLES = 76,
	JTRC_ADOBE = 77,
	JTRC_APP0 = 78,
	JTRC_APP14 = 79,
	JTRC_DAC = 80,
	JTRC_DHT = 81,
	JTRC_DQT = 82,
	JTRC_DRI = 83,
	JTRC_EMS_CLOSE = 84,
	JTRC_EMS_OPEN = 85,
	JTRC_EOI = 86,
	JTRC_HUFFBITS = 87,
	JTRC_JFIF = 88,
	JTRC_JFIF_BADTHUMBNAILSIZE = 89,
	JTRC_JFIF_EXTENSION = 90,
	JTRC_JFIF_THUMBNAIL = 91,
	JTRC_MISC_MARKER = 92,
	JTRC_PARMLESS_MARKER = 93,
	JTRC_QUANTVALS = 94,
	JTRC_QUANT_3_NCOLORS = 95,
	JTRC_QUANT_NCOLORS = 96,
	JTRC_QUANT_SELECTED = 97,
	JTRC_RECOVERY_ACTION = 98,
	JTRC_RST = 99,
	JTRC_SMOOTH_NOTIMPL = 100,
	JTRC_SOF = 101,
	JTRC_SOF_COMPONENT = 102,
	JTRC_SOI = 103,
	JTRC_SOS = 104,
	JTRC_SOS_COMPONENT = 105,
	JTRC_SOS_PARAMS = 106,
	JTRC_TFILE_CLOSE = 107,
	JTRC_TFILE_OPEN = 108,
	JTRC_THUMB_JPEG = 109,
	JTRC_THUMB_PALETTE = 110,
	JTRC_THUMB_RGB = 111,
	JTRC_UNKNOWN_IDS = 112,
	JTRC_XMS_CLOSE = 113,
	JTRC_XMS_OPEN = 114,
	JWRN_ADOBE_XFORM = 115,
	JWRN_BOGUS_PROGRESSION = 116,
	JWRN_EXTRANEOUS_DATA = 117,
	JWRN_HIT_MARKER = 118,
	JWRN_HUFF_BAD_CODE = 119,
	JWRN_JFIF_MAJOR = 120,
	JWRN_JPEG_EOF = 121,
	JWRN_MUST_RESYNC = 122,
	JWRN_NOT_SEQUENTIAL = 123,
	JWRN_TOO_MUCH_DATA = 124,
	JMSG_LASTMSGCODE = 125
    } J_MESSAGE_CODE;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
