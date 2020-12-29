#include <stdio.h>

const int n = 3;

// constant
const int main(void)

{
    // array
    int scores[n];
    scores[0] = 82;
    scores[1] = 73;
    scores[2] = 93;

    printf("average : %i\n", (scores[0] + scores[1] + scores[2])/n);
}
