#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float radiansDegreesConverter (float degree)
{
    float radians;
    radians = (float)M_PI*degree/180;

    return radians;
}

int main (void)
{
    float array[90], radians;

    for (int i = 0; i < 90; i++)
    {
        radians = radiansDegreesConverter(i);
        array[i] = radians;
    }

    // Show the value of the array
    for (int i = 0; i < 90; i++)
    {
        printf ("array[%d] is %.0f\n", i, array[i]);
    }

    return 0;
}
