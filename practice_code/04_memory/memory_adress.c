#include <stdio.h>

int main(void)
{
    int n = 50;
    // pointer
    printf("%p\n", &n);
    // pointer->value
    printf("%i\n", *&n);

    int *p = &n;
    printf("\nUsing pointer\n");
    // pointer
    printf("%p\n", p);
    // pointer->value
    printf("%i\n", *p);
}
