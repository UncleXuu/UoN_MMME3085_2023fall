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
    return 0;
}
