#include <stdio.h>
#include <stdlib.h>

int main (void )
{
    // Declare a in integer
    int c,d;

	// Declar and integer pointer
	int *ptrC;

	// Some assgnment
    c = 10; // C now contains the value 10
    ptrC = &c;   // ptrC now 'Points' to c
    *ptrC = 20; // now c stores 20

    // Get the value of c via the pointer and store in d
    d = c;  // d now contains 20
    printf ("\nThe value in d is %d", d);

    // Change the value of c via the pointer ptrC
    *ptrC = 1;  //c now contains 1
    printf ("\nThe value in c is %d", c);

	return 0;   // exit
}
