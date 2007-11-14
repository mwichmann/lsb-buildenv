#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

typedef struct {
	char	module_name[64];
	char	**lib_names;
} lsb_lib_modules_t;

char *lsb_libs[] = {
	"m",
	"dl",
	"crypt",
	"z",
	"ncurses",
	"util",
	"c",
	"pthread",
	"rt",
	"pam",
	"gcc_s",
	"X11",
	"Xt",
	"GL",
	"Xext",
	"ICE",
	"SM",
	"Xi",
	"glib-2.0",
	"gobject-2.0",
	"gmodule-2.0",
	"gthread-2.0",
	"atk-1.0",
	"pango-1.0",
	"pangoxft-1.0",
	"pangoft2-1.0",
	"gdk_pixbuf-2.0",
	"gdk_pixbuf_xlib-2.0",
	"gdk-x11-2.0",
	"gtk-x11-2.0",
	"fontconfig",
	"png12",
	"jpeg",
	"Xrender",
	"freetype",
	"Xft",
	"xml2",
	"qt-mt",
	NULL
};

char *lsb_Toolkit_Qt_libs[] = {
	"QtCore",
	"QtGui",
	"QtNetwork",
	"QtXml",
	"QtOpenGL",
	"QtSql",
	"QtSvg",
	NULL
};

char *lsb_Printing_libs[] = {
	"cups",
	"cupsimage",
	"ijs",
	NULL
};

char *lsb_TUM_libs[] = {
	"cairo",
	"pangocairo-1.0",
	"dbus-1",
	NULL
};

int	lsb_num_modules = 3;

lsb_lib_modules_t lsb_modules[] = {
	{"Toolkit_Qt", lsb_Toolkit_Qt_libs },
	{"Printing", lsb_Printing_libs },
	{"TUM", lsb_TUM_libs },
};

char *lsb_cplus_libs[] = {
	"stdc++",
	NULL
};

#endif
