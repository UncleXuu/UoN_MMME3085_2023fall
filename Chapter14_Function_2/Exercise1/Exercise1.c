#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float polarCoordinates (float x, float y, float *r)
{
    float theata;

    *r = pow (x*x+y*y,0.5);
    theata = y/x;

    return theata;
}

int main (void)
{
    float x = 1.0;
    float y = 1.0;
    float r = 0.0;
    float theata = 0.0;

    theata = polarCoordinates (x, y, &r);
    printf ("radius is %f\n", r);
    printf ("theata is %f\n", theata);

    return 0;
}
