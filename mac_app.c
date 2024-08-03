#define LISTING 5
#if LISTING==2

#include <stdio.h>
extern char* A_name();          // libArt.dylib
extern char* dependencies();    // libBus.dylib

int main(void) {
    printf("[%s] libArt.A_name() = %s\n", __FILE__, A_name());
    printf("[%s] libBus.dependencies() = %s\n", __FILE__, dependencies());
}
#endif
#if LISTING==3
#include <stdio.h>
#include <dlfcn.h>

int main(void) {
    void* Bus1a_handle = dlopen("libBus1a.dylib", RTLD_LOCAL);
    if (Bus1a_handle) {
        char* (*b1a_name)() = dlsym(Bus1a_handle, "B1a_name");
        if (b1a_name) {
            printf("[%s] libBus1a.B1a_name() = %s\n",
                __FILE__, b1a_name());
        }
    }
    else {
        printf("[%s] Unable to open libBus1a.dylib: %s\n",
            __FILE__, dlerror());
    }
    dlclose(Bus1a_handle);
}
#endif
#if LISTING == 5
#include <stdio.h>
extern char* dependencies();    // libBus.dylib

int main(void) {
    printf("[%s] libBus.dependencies() = %s\n",
        __FILE__, dependencies());
}

#endif
