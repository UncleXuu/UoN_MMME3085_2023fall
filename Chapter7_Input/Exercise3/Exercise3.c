#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float r, h; //initialise radius and height
    double surfaceArea;

    printf("Please type in the value of the radius:");
    scanf("%f",&r);
    printf("Please type in the value of the height:");
    scanf("%f",&h);

    surfaceArea=2*M_PI*r*r+2*M_PI*r*h;

    printf("surfaceArea = %.3f\n", surfaceArea);

    return 0;
}
