#include <string.h>
#include <dlfcn.h>
static char* k_lib_name = "libBus1";
char* dependencies(void) {
    char _dependencies[50] = "";
    strcpy(_dependencies, k_lib_name);
    char* (*next_dependencies)() =
        dlsym(RTLD_NEXT, "dependencies");// look for next definition
    if (next_dependencies) {
        strncat(_dependencies, ", ",
            sizeof(_dependencies) - strlen(_dependencies) - 1);
        strncat(_dependencies, next_dependencies(),
            sizeof(_dependencies) - strlen(_dependencies) - 1);
    }
    return strdup(_dependencies);
}
