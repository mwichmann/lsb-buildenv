
#define assert(expr)	(__ASSERT_VOID_CAST((expr)?0:(__assert_fail(__STRING(expr),_
void __assert_fail (char *, char *, unsigned int, char *);
