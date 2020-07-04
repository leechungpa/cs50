#include <stdio.h>

int main(void)
{

    int counter = 10;

    while(counter>=1)
    {
        if(counter ==1)
        {
            printf("repeat %i time more!!!\n", counter);
        }else{
            printf("repeat %i times more!\n", counter);
        }
        counter -= 1;
    }

printf("\nAnd...\n\n");

    for(int i =1 ; i<10 ; i++ )
    {
        printf("repeat another %i!\n", i);
    }
}
