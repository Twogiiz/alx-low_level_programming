#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*       main - Determines if a number is positive, negative or zero.
*
*       Return: Always 0 (Success)
*/
int main(void)
{
    int n;
    srand(time(0)); // Seed the random number generator
    n = rand() - RAND_MAX / 2; // Generate a random number between -RAND_MAX/2 and RAND_MAX/2

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
}
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
