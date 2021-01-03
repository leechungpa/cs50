#include <stdio.h>


int main(void)
{
    // get_int
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);

    // get_char (크기가 5개인 경우)
    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
