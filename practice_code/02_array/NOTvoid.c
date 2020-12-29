#include <cs50.h>
#include <stdio.h>

// void 대신 여러개로 받을 경울 아래와 같이 관용적으로 사용

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
