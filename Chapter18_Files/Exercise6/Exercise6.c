#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float *ArrayData; // Set an array
    long size = 0;
    FILE *fBinary;
    long length; // number in the array

    fBinary = fopen ("Display.dat", "rb"); // Open the binary file

    if (fBinary == NULL)
    {
        printf ("Failed!\n");
        return -1;
    }
    fseek (fBinary, 0, SEEK_END); // Use fseek to adjust the position of the file

    size = ftell (fBinary);
    printf ("size is %ld\n", size);
    int a = sizeof (float);
    printf ("size of float is %d\n", a);

    ArrayData = malloc ((unsigned long)size);

    fread (ArrayData, sizeof (float), (unsigned long) size, fBinary); // read data to the array

    fclose (fBinary); // close the file

    printf ("%f\n", ArrayData[5]);

    // Display all the data
    length = (unsigned long)size/sizeof (float);
    printf ("%ld\n", length);
    for (int i = 0; i < length; i++)
    {
        printf ("Number %d is %.3f\n", i, ArrayData[i]);
    }

    return 0;
}
