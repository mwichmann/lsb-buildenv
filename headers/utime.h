struct utimbuf {
    __time_t actime;
    __time_t modtime;
};

int utime(char *, struct utimbuf *);
