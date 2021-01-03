#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = "abc";
    
    // malloc : 새로운 메모리 할당
    char *t = malloc(strlen(s) + 1);
    // string 복사
    for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    // s: abc
    printf("t: %s\n", t);
    // t: Abc
    
    // 메모리 수집
    free(t);
}
