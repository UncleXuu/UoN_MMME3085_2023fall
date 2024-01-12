#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float array[90];

    for (int i = 0; i < 90; i++)
    {
        array[i] = i;
    }

    // Show the value of the array
    for (int i = 0; i < 90; i++)
    {
        printf ("array[%d] is %.0f\n", i, array[i]);
    }

    return 0;
}
