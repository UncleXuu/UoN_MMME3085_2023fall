#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int a = 0, b = 0, x = 0;

    printf("Please enter the lower number: ");
    scanf ("%d", &a);
    printf("Please enter the upper number: ");
    scanf ("%d", &b);

    for (int i = a; i <= b; i++)
    {
        x = x + i;
    }
    printf ("The sum of all the numbers is %d\n", x);

    return 0;
}
