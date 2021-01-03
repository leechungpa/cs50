#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("1st string : ");
    char *t = get_string("2nd string : ");

    if (s == t)
    {
        printf("Same.\n");
    }
    else
    {
        // 항상 다른 것으로 나옴 : 주소가 다르기 때문
        // 즉 s와 t는 문자열이 아니라 pointer이므로, 주소가 같은지 확인하는 것이기에 항상 다른 것으로 나옴
        printf("Different.\n");
    }
}
