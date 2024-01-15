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
    float degree, radians;

    printf("Please type in the degree: ");
    scanf("%f", &degree);

    radians = radiansDegreesConverter (degree);

    printf("The radians is %.3f\n", radians);
    
    return 0;
}
