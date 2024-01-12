#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a = 0, b = 0;

    printf("Please enter the lower number: ");
    scanf ("%d", &a);
    printf("Please enter the upper number: ");
    scanf ("%d", &b);

    for (int i = a; i <= b; i++)
    {
        printf ("This number is %d\n", i);
    }

    return 0;
}
