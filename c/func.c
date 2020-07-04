#include <stdio.h>

// 원하는 함수 : c는 위에서 아래로 실행되므로 먼저 정의할 필요 있음
void cough(int n);


// main 함수
int main(void)
{
    cough(3);
}



// 함수는 뒤에 위치하는 것이 좋음
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
