typedef void *iconv_t;

size_t iconv(iconv_t, char **, size_t *, char **, size_t *);
int iconv_close(iconv_t);
iconv_t iconv_open(char *, char *);
