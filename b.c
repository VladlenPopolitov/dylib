#include <string.h>
extern char* ret_c(const char *parent);
extern char* ret_b(const char *parent);

static char* k_lib_name = "ret_b ";
char* ret_b(const char *parent) {
    char _dependencies[50] = "";
    strcpy(_dependencies, ret_c(k_lib_name));
    //strncat(_dependencies, k_lib_name,
    //        sizeof(_dependencies) - strlen(_dependencies) - 1);
    strncat(_dependencies, parent,
            sizeof(_dependencies) - strlen(_dependencies) - 1);
    return strdup(_dependencies);
}
