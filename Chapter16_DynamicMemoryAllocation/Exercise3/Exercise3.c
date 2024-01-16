#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *iparray = NULL; // define the array
    int number = 0; // define the number of elements

    // Get the Quantity of Numbers in the Array
    printf ("Please enter the quantity of numbers in the array: ");
    scanf ("%d", &number);

    // Allocate Memory
    iparray = (int *)malloc ((unsigned long) number*sizeof (int));

    // Check If Memeory Allocated Successfully
    if (iparray == NULL)
    {
        printf("\nUnable to allocate the memory requested");
        exit (-1);
    }

    // Fill the Array
    for (int i = 0; i < number; i++)
    {
        iparray[i] = i;
        printf ("array[%d] is %d\n", i, iparray[i]);
    }
    
    // Free Memory
    free (iparray);

    return 0;
}
