#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int age = 0;

    do
    {
        printf("Please enter your age: ");
        scanf("%d", &age);
        printf("\nYou are %d years old\n", age);
    } while (age == 0);
    
    return 0;
}
