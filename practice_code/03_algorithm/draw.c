#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int h)
{
    // 재귀 : draw함수를 다시 호출
    if (h == 0)
    {
        return;
    }
    draw(h - 1);

    // #를 그리는 코드
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
