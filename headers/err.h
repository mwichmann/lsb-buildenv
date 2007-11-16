#ifndef _ERR_H_
#define _ERR_H_


#ifdef __cplusplus
extern "C" {
#endif






    extern void err(int, const char *, ...);
    extern void errx(int, const char *, ...);
    extern void warn(const char *, ...);
    extern void warnx(const char *, ...);
    extern void error(int, int, const char *, ...);
#ifdef __cplusplus
}
#endif
#endif
