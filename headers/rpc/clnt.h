
struct CLIENT *clnt_create (char *, u_long, u_long, char *);
void clnt_pcreateerror (char *);
void clnt_perrno (,);
void clnt_perror (struct CLIENT *, char *);
char *clnt_spcreateerror (char *);
char *clnt_sperrno (,);
char *clnt_sperror (struct CLIENT *, char *);
