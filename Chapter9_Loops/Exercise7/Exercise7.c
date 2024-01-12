#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int a = 0, b = 0;

    printf("Please enter the lower number: ");
    scanf ("%d", &a);
    printf("Please enter the upper number: ");
    scanf ("%d", &b);

    for (int i = a; i <= b; i++)
    {
        double x = 0;
        x = pow(i, 2);
        printf ("This number is %.1f\n", x);
    }

    return 0;
}
