#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("enter a number:");
    scanf("%f", &x);
    // Complete the y = line below
    y = x+2/(x-1);
    printf("y: %f\n", y);
    return 0;
}
