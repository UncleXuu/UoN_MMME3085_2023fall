#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int returnParameters (double angleDegree, double *angleRadians, double *sine, double *cosine, double *tangent)
{
    *angleRadians = angleDegree*M_PI/180;
    *sine = sin (*angleRadians);
    *cosine = cos (*angleRadians);
    *tangent = tan (*angleRadians);
    
    return 0;
}

int main (void)
{
    double angleDegree = 0, angleRadians, sine, cosine, tangent;
    
    printf ("Please enter angle of degree: ");
    scanf ("%lf", &angleDegree);

    returnParameters (angleDegree, &angleRadians, &sine, &cosine, &tangent);

    printf ("The angle of Radians is %.3f\n", angleRadians);
    printf ("The sine value is %.3f\n", cosine);
    printf ("The cosine value is %.3f\n", cosine);
    printf ("The tangent value is %.3f\n", tangent);

    return 0;
}
