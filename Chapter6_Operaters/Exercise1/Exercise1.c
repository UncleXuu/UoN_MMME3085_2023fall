#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a, b;

    // Note: Order of a,b indicates the order in which operations are carried out on execution
    
    // Increment operators
    b = 3;
    a = ++b;    // b is now 4, a is also 4
    printf("The value of a is now %d\n", a);
    a = b++;    // a is 4, b is now 5, 
    printf("The value of a is now %d\n", a);
    
    // Decrement operators (reset a back to 3)
    b = 3;
    a = b--;    // a is 3, b is now 2
    printf("The value of a is now %d\n", a);    
    a = --b;    // b is now 1, a is also 1
    printf("The value of a is now %d\n", a);

    return 0;
}
