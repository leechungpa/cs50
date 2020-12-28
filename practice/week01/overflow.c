#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 1; ; i = i*2+1)
    {
        printf("%i\n", i);
        sleep(1);
    }
}
