#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float r=8.8f; //initialise radius
    double volume, surfaceArea;

    volume=4*M_PI*r*r*r/3;
    surfaceArea=4*M_PI*r*r;

    printf("volume = %.2f\nsurfaceArea = %.2f\n", volume, surfaceArea);

    return 0;
}
