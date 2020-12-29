#include <stdio.h>
#include <cs50.h>

// 위에서 아래 순서로 가므로
// 함수가 아래에 정의되어 있다는 것을 알려주기 위한 코드
float average(int length, int array[]);

int main(void)
{
    // the number of scores
    int n = get_int("the number of scores :  ");

    // input score
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("score %i : ", i + 1);
    }

    printf("average : %.2f\n", average(n, scores));
}

// average function
float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}
