#include <stdio.h>
#include <string.h>

extern char* ret_c(const char *parent);
extern char* ret_b(const char *parent);

int main(int argc, char**argv)
{
    char name[256];
    strcpy(name,argv[0]);
    strcat(name," ");
    printf("a2b2c ret_c() returns %s\n", ret_c(name));
    printf("a2b2c ret_b() returns %s\n", ret_b(name));
}