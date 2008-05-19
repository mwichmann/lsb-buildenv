#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

/* This is a generated file, do not edit */

typedef struct {
	char	module_name[64];
	char	**lib_names;
} lsb_lib_modules_t;

char *lsb_libs[] = {
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

char *lsb_Multimedia_libs[] = {
	"asound",
	NULL
};

int	lsb_num_modules = 1;

lsb_lib_modules_t lsb_modules[] = {
	{"Multimedia", lsb_Multimedia_libs },
};

char *lsb_Toolkit_Qt3_libs[] = {
	"qt-mt",
	NULL
};

int	lsb_num_deprecated_modules = 1;

lsb_lib_modules_t lsb_deprecated_modules[] = {
	{"Toolkit_Qt3", lsb_Toolkit_Qt3_libs },
};


char *lsb_cplus_libs[] = {
	"stdc++",
	NULL
};

#endif
