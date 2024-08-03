#include <stdio.h>
#include <string.h>
#define WEAK_IMPORT __attribute__((weak_import, weak))

extern char* ret_c(const char *parent) WEAK_IMPORT;
extern  char* ret_b(const char *parent) ;

static char* k_lib_name = "ret_c_new ";
char* ret_c(const char *parent) {
    char _dependencies[50] = "";
    strcpy(_dependencies, k_lib_name);
    strncat(_dependencies, parent,
            sizeof(_dependencies) - strlen(_dependencies) - 1);
    return strdup(_dependencies);
}


int main()
{
    printf("ac2b2c ret_c() returns %s\n", ret_c("a2b2c "));
    printf("ac2b2c ret_b() returns %s\n", ret_b("a2b2c "));
}