#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define DEBUG_MODE

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
    int lowerValue = 0, upperValue = 0;
    int i;
    
    printf ("Please enter the lower value of degree: ");
    scanf ("%d", &lowerValue);
    printf ("Please enter the upper value of degree: ");
    scanf ("%d", &upperValue);

    // Set the Initial Value of For Loop and Start For Loop
    printf ("\nDegs    Rad        sin        cos        tan\n");
    for (i = lowerValue; i >= lowerValue && i <= upperValue; i++ )
    {
        angleDegree = (double)i;
        returnParameters (angleDegree, &angleRadians, &sine, &cosine, &tangent);
        printf ("%-7.0f %-10.3f %-10.3f %-10.3f %-10.3f\n", angleDegree, angleRadians, sine, cosine, tangent);
    }

    #ifdef DEBUG_MODE
        printf ("The angle of Radians is %.3f\n", angleRadians);
        printf ("The sine value is %.3f\n", cosine);
        printf ("The cosine value is %.3f\n", cosine);
        printf ("The tangent value is %.3f\n", tangent);
    #endif

    return 0;
}
