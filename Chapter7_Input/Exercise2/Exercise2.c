#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float r; //initialise radius
    double volume, surfaceArea;

    printf("Please type in the value of the radius:");
    scanf("%f",&r);

    volume=4*M_PI*r*r*r/3;
    surfaceArea=4*M_PI*r*r;

    printf("volume = %.2f\nsurfaceArea = %.2f\n", volume, surfaceArea);

    return 0;
}
