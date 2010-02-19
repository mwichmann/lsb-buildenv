#ifndef LSBCC_VERSION_H
#define LSBCC_VERSION_H

/* This is a generated file, do not edit */

#ifdef SKIP_DEVEL_VERSIONS

#define DEFAULT_LSB_VERSION "4.0"

static char lsbcc_lsb_version [] = "LSB version 3.0,3.1,3.2,4.0";

#else

#define DEFAULT_LSB_VERSION "4.1"

static char lsbcc_lsb_version [] = "LSB version 3.0,3.1,3.2,4.0,4.1,5.0";

#endif /* SKIP_DEVEL_VERSIONS */

#endif
