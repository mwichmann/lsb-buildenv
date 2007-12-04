/* Generated file */

#ifndef LSBCC_LIBS_H
#define LSBCC_LIBS_H

typedef struct {
    char module_name[64];
    char **lib_names;
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
    "QtCore",
    "QtGui",
    "QtNetwork",
    "QtXml",
    "QtOpenGL",
    "QtSql",
    "QtSvg",
    "fontconfig",
    "png12",
    "png",
    "jpeg",
    "Xrender",
    "freetype",
    "Xft",
    "xml2",
    "qt-mt",
    "cups",
    "cupsimage",
    NULL
};

char *lsb_Multimedia_libs[] = {
    "asound",
    NULL
};

int lsb_num_modules = 10;

lsb_lib_modules_t lsb_modules[] = {
    {"Multimedia", lsb_Multimedia_libs},
    {"Core", NULL},
    {"Graphics", NULL},
    {"Cpp", NULL},
    {"Toolkit_Gtk", NULL},
    {"Toolkit_Qt", NULL},
    {"Graphics_Ext", NULL},
    {"XML", NULL},
    {"Toolkit_Qt3", NULL},
    {"Printing", NULL},
};

char *lsb_cplus_libs[] = {
    "stdc++",
    NULL
};

#endif
