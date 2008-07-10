#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

/* This is a generated file, do not edit */

typedef struct {
    char    module_name[64];
    char    **lib_names;
} lsb_lib_modules_t;

char *lsb_libs_30[] = {
	"GL",
	"ICE",
	"SM",
	"X11",
	"Xext",
	"Xi",
	"Xt",
	"c",
	"crypt",
	"dl",
	"gcc_s",
	"m",
	"ncurses",
	"pam",
	"pthread",
	"rt",
	"util",
	"z",
NULL
};
char *lsb_libs_31[] = {
	"GL",
	"ICE",
	"SM",
	"X11",
	"Xext",
	"Xi",
	"Xt",
	"atk-1.0",
	"c",
	"crypt",
	"dl",
	"fontconfig",
	"gcc_s",
	"gdk-x11-2.0",
	"gdk_pixbuf-2.0",
	"gdk_pixbuf_xlib-2.0",
	"glib-2.0",
	"gmodule-2.0",
	"gobject-2.0",
	"gthread-2.0",
	"gtk-x11-2.0",
	"jpeg",
	"m",
	"ncurses",
	"pam",
	"pango-1.0",
	"pangoft2-1.0",
	"pangoxft-1.0",
	"png12",
	"png",
	"pthread",
	"qt-mt",
	"rt",
	"util",
	"xml2",
	"z",
NULL
};
char *lsb_libs_32[] = {
	"GL",
	"ICE",
	"QtCore",
	"QtGui",
	"QtNetwork",
	"QtOpenGL",
	"QtSql",
	"QtSvg",
	"QtXml",
	"SM",
	"X11",
	"Xext",
	"Xft",
	"Xi",
	"Xrender",
	"Xt",
	"atk-1.0",
	"c",
	"crypt",
	"cups",
	"cupsimage",
	"dl",
	"fontconfig",
	"freetype",
	"gcc_s",
	"gdk-x11-2.0",
	"gdk_pixbuf-2.0",
	"gdk_pixbuf_xlib-2.0",
	"glib-2.0",
	"gmodule-2.0",
	"gobject-2.0",
	"gthread-2.0",
	"gtk-x11-2.0",
	"jpeg",
	"m",
	"ncurses",
	"pam",
	"pango-1.0",
	"pangoft2-1.0",
	"pangoxft-1.0",
	"png12",
	"png",
	"pthread",
	"qt-mt",
	"rt",
	"util",
	"xml2",
	"z",
NULL
};
char *lsb_libs_40[] = {
	"GL",
	"GLU",
	"ICE",
	"QtCore",
	"QtGui",
	"QtNetwork",
	"QtOpenGL",
	"QtSql",
	"QtSvg",
	"QtXml",
	"SM",
	"X11",
	"Xext",
	"Xft",
	"Xi",
	"Xrender",
	"Xt",
	"Xtst",
	"atk-1.0",
	"c",
	"cairo",
	"crypt",
	"cups",
	"cupsimage",
	"dl",
	"fontconfig",
	"freetype",
	"gcc_s",
	"gdk-x11-2.0",
	"gdk_pixbuf-2.0",
	"gdk_pixbuf_xlib-2.0",
	"glib-2.0",
	"gmodule-2.0",
	"gobject-2.0",
	"gthread-2.0",
	"gtk-x11-2.0",
	"jpeg",
	"m",
	"ncurses",
	"pam",
	"pango-1.0",
	"pangoft2-1.0",
	"pangoxft-1.0",
	"png12",
	"png",
	"pthread",
	"qt-mt",
	"rt",
	"util",
	"xml2",
	"z",
NULL
};
char **lsb_libs[] = {
	lsb_libs_30,
	lsb_libs_31,
	lsb_libs_32,
	lsb_libs_40,
	NULL
};

#define lsb_num_modules_30 0

lsb_lib_modules_t lsb_modules_30[] = {
};

char *lsb_Toolkit_Qt_libs_31[] = {
	"QtCore",
	"QtGui",
	"QtNetwork",
	"QtOpenGL",
	"QtSql",
	"QtSvg",
	"QtXml",
	NULL
};

#define lsb_num_modules_31 1

lsb_lib_modules_t lsb_modules_31[] = {
	{"Toolkit_Qt", lsb_Toolkit_Qt_libs_31 },
};

char *lsb_Multimedia_libs_32[] = {
	"asound",
	NULL
};

#define lsb_num_modules_32 1

lsb_lib_modules_t lsb_modules_32[] = {
	{"Multimedia", lsb_Multimedia_libs_32 },
};

char *lsb_Multimedia_libs_40[] = {
	"asound",
	NULL
};

#define lsb_num_modules_40 1

lsb_lib_modules_t lsb_modules_40[] = {
	{"Multimedia", lsb_Multimedia_libs_40 },
};

lsb_lib_modules_t *lsb_modules[] = {
	lsb_modules_30,
	lsb_modules_31,
	lsb_modules_32,
	lsb_modules_40,
	NULL
};

int lsb_num_modules[] = {
	lsb_num_modules_30,
	lsb_num_modules_31,
	lsb_num_modules_32,
	lsb_num_modules_40,
	0
};

#define lsb_num_deprecated_modules_30 0

lsb_lib_modules_t lsb_deprecated_modules_30[] = {
};

#define lsb_num_deprecated_modules_31 0

lsb_lib_modules_t lsb_deprecated_modules_31[] = {
};

char *lsb_Toolkit_Qt3_libs_32[] = {
	"qt-mt",
	NULL
};

#define lsb_num_deprecated_modules_32 1

lsb_lib_modules_t lsb_deprecated_modules_32[] = {
	{"Toolkit_Qt3", lsb_Toolkit_Qt3_libs_32 },
};

char *lsb_Toolkit_Qt3_libs_40[] = {
	"qt-mt",
	NULL
};

#define lsb_num_deprecated_modules_40 1

lsb_lib_modules_t lsb_deprecated_modules_40[] = {
	{"Toolkit_Qt3", lsb_Toolkit_Qt3_libs_40 },
};

lsb_lib_modules_t *lsb_deprecated_modules[] = {
	lsb_deprecated_modules_30,
	lsb_deprecated_modules_31,
	lsb_deprecated_modules_32,
	lsb_deprecated_modules_40,
	NULL
};

int lsb_num_deprecated_modules[] = {
	lsb_num_deprecated_modules_30,
	lsb_num_deprecated_modules_31,
	lsb_num_deprecated_modules_32,
	lsb_num_deprecated_modules_40,
	0
};

inline int get_version_index( char* vername ) {
	if( strcmp(vername, "3.0") == 0 ) {
		 return 0;
	}
	if( strcmp(vername, "3.1") == 0 ) {
		 return 1;
	}
	if( strcmp(vername, "3.2") == 0 ) {
		 return 2;
	}
	if( strcmp(vername, "4.0") == 0 ) {
		 return 3;
	}
	else {
		return -1;
	}
}

char *lsb_cplus_libs[] = {
    "stdc++",
    NULL
};

#endif
