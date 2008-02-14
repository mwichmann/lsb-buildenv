#ifndef _CUPS_PPD_H_
#define _CUPS_PPD_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _CUPS_PPD_H_
#define PPD_MAX_LINE	256
#define PPD_VERSION	4.3
#define PPD_MAX_NAME	41
#define PPD_MAX_TEXT	81


    typedef enum {
	PPD_CS_CMYK,
	PPD_CS_CMY,
	PPD_CS_GRAY,
	PPD_CS_RGB,
	PPD_CS_RGBK,
	PPD_CS_N
    } ppd_cs_t;

    typedef struct {
	char name[41];
	char *start;
	char *stop;
    } ppd_emul_t;

    typedef enum {
	PPD_UI_BOOLEAN,
	PPD_UI_PICKONE,
	PPD_UI_PICKMANY
    } ppd_ui_t;

    typedef enum {
	PPD_ORDER_ANY,
	PPD_ORDER_DOCUMENT,
	PPD_ORDER_EXIT,
	PPD_ORDER_JCL,
	PPD_ORDER_PAGE,
	PPD_ORDER_PROLOG
    } ppd_section_t;

    typedef struct {
	char marked;
	char choice[41];
	char text[81];
	char *code;
	void *option;
    } ppd_choice_t;

    typedef struct {
	char conflicted;
	char keyword[41];
	char defchoice[41];
	char text[81];
	ppd_ui_t ui;
	ppd_section_t section;
	float order;
	int num_choices;
	ppd_choice_t *choices;
    } ppd_option_t;

    typedef struct ppd_group_str ppd_group_t;

    typedef struct {
	int marked;
	char name[41];
	float width;
	float length;
	float left;
	float bottom;
	float right;
	float top;
    } ppd_size_t;

    typedef struct {
	char option1[41];
	char choice1[41];
	char option2[41];
	char choice2[41];
    } ppd_const_t;

    typedef struct {
	char resolution[41];
	char media_type[41];
	float density;
	float gamma;
	float matrix[3][3];
    } ppd_profile_t;

    typedef struct {
	char name[41];
	char spec[41];
	char text[81];
	char *value;
    } ppd_attr_t;

    typedef struct {
	int language_level;
	int color_device;
	int variable_sizes;
	int accurate_screens;
	int contone_only;
	int landscape;
	int model_number;
	int manual_copies;
	int throughput;
	ppd_cs_t colorspace;
	char *patches;
	int num_emulations;
	ppd_emul_t *emulations;
	char *jcl_begin;
	char *jcl_ps;
	char *jcl_end;
	char *lang_encoding;
	char *lang_version;
	char *modelname;
	char *ttrasterizer;
	char *manufacturer;
	char *product;
	char *nickname;
	char *shortnickname;
	int num_groups;
	ppd_group_t *groups;
	int num_sizes;
	ppd_size_t *sizes;
	float custom_min[2];
	float custom_max[2];
	float custom_margins[4];
	int num_consts;
	ppd_const_t *consts;
	int num_fonts;
	char **fonts;
	int num_profiles;
	ppd_profile_t *profiles;
	int num_filters;
	char **filters;
	int flip_duplex;
	char *protocols;
	char *pcfilename;
	int num_attrs;
	int cur_attr;
	ppd_attr_t **attrs;
    } ppd_file_t;

#include <cups/cups.h>
    typedef enum {
	PPD_OK,
	PPD_FILE_OPEN_ERROR,
	PPD_NULL_FILE,
	PPD_ALLOC_ERROR,
	PPD_MISSING_PPDADOBE4,
	PPD_MISSING_VALUE,
	PPD_INTERNAL_ERROR,
	PPD_BAD_OPEN_GROUP,
	PPD_NESTED_OPEN_GROUP,
	PPD_BAD_OPEN_UI,
	PPD_NESTED_OPEN_UI,
	PPD_BAD_ORDER_DEPENDENCY,
	PPD_BAD_UI_CONSTRAINTS,
	PPD_MISSING_ASTERISK,
	PPD_LINE_TOO_LONG,
	PPD_ILLEGAL_CHARACTER,
	PPD_ILLEGAL_MAIN_KEYWORD,
	PPD_ILLEGAL_OPTION_KEYWORD,
	PPD_ILLEGAL_TRANSLATION,
	PPD_ILLEGAL_WHITESPACE
    } ppd_status_t;

    typedef enum {
	PPD_CONFORM_RELAXED,
	PPD_CONFORM_STRICT
    } ppd_conform_t;


    struct ppd_group_str {
	char text[40];
	char name[41];
	int num_options;
	ppd_option_t *options;
	int num_subgroups;
	struct ppd_group_str *subgroups;
    };


    extern float ppdPageLength(ppd_file_t *, const char *);
    extern ppd_status_t ppdLastError(int *);
    extern int ppdEmitFd(ppd_file_t *, int, ppd_section_t);
    extern int ppdMarkOption(ppd_file_t *, const char *, const char *);
    extern int ppdEmitJCL(ppd_file_t *, FILE *, int, const char *,
			  const char *);
    extern ppd_choice_t *ppdFindChoice(ppd_option_t *, const char *);
    extern ppd_file_t *ppdOpenFile(const char *);
    extern int ppdEmit(ppd_file_t *, FILE *, ppd_section_t);
    extern int ppdCollect(ppd_file_t *, ppd_section_t, ppd_choice_t * **);
    extern ppd_option_t *ppdFindOption(ppd_file_t *, const char *);
    extern void ppdMarkDefaults(ppd_file_t *);
    extern ppd_file_t *ppdOpenFd(int);
    extern ppd_attr_t *ppdFindNextAttr(ppd_file_t *, const char *,
				       const char *);
    extern const char *ppdErrorString(ppd_status_t);
    extern ppd_attr_t *ppdFindAttr(ppd_file_t *, const char *,
				   const char *);
    extern ppd_size_t *ppdPageSize(ppd_file_t *, const char *);
    extern ppd_file_t *ppdOpen(FILE *);
    extern int ppdIsMarked(ppd_file_t *, const char *, const char *);
    extern float ppdPageWidth(ppd_file_t *, const char *);
    extern int ppdConflicts(ppd_file_t *);
    extern ppd_choice_t *ppdFindMarkedChoice(ppd_file_t *, const char *);
    extern void ppdClose(ppd_file_t *);
    extern void ppdSetConformance(ppd_conform_t);
#ifdef __cplusplus
}
#endif
#endif
