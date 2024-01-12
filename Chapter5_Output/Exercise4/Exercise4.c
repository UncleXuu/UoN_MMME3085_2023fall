#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float r=0.0f; //initialise radius
    double volume, surfaceArea;

    volume=4*M_PI*r*r*r/3;
    surfaceArea=4*M_PI*r*r;

    return 0;
}
