#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;
    long int i = 2000000000000;

    // Using calloc (same approach malloc)
    pData = calloc ( i , sizeof (long int));

    if ( pData == NULL)
    {
        printf ("\nMemory could not be allocated - terminating");
        return -1;  // Use minus one as we did not exit sucesfully
    }
    else
    {
        i = i*sizeof (long int)/1000000000;
        int t = sizeof (long int);
        printf ("\nsize of int is %d", t);
        printf ("\nMemory can be allocated.\n");
        printf ("Memory can be allocated is %ld G.\n", i);
    }

     // We have our  memory, make use of it here!

    // Free up the allocated memoey
    free (pData);

    return 0;   // Exit sucesfully
}
