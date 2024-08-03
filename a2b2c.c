#include <stdio.h>

extern char* ret_c(const char *parent);
extern char* ret_b(const char *parent);

int main()
{
    printf("a2b2c ret_c() returns %s\n", ret_c("a2b2c "));
    printf("a2b2c ret_b() returns %s\n", ret_b("a2b2c "));
}