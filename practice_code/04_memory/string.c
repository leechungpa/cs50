#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%s\n", s);
    printf("%s\n", &s[0]);
    printf("%s\n", &s[1]);
    printf("%s\n", &s[2]);
    printf("%s\n", &s[3]);

    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}
