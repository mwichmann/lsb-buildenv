#ifndef LSBCC_VERSION_H
#define LSBCC_VERSION_H

/* This is a generated file, do not edit */

/* LSBCC_VERSION should be overridden by packaging, which knows the version */

#ifdef SKIP_DEVEL_VERSIONS

#define DEFAULT_LSB_VERSION "4.1"	/* hand-edit: temporary, not 5.0 */
#ifndef LSBCC_VERSION
#define LSBCC_VERSION "5.0.unreleased"
#endif

static char lsbcc_lsb_version [] = "LSB version 4.1; supports 3.0,3.1,3.2,4.0,4.1,5.0";

#else

#define DEFAULT_LSB_VERSION "5.0"	/* hand-edit: temporary, not 5.1 */
#ifndef LSBCC_VERSION
#define LSBCC_VERSION "5.0.development (for 5.1)"
#endif

static char lsbcc_lsb_version [] = "LSB version 5.0; supports 3.0,3.1,3.2,4.0,4.1,5.0,5.1";

#endif /* SKIP_DEVEL_VERSIONS */

#endif
