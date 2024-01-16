#include <stdio.h>
#include <stdlib.h>

struct staffInfo
{
    int age;
    char forename[30];
    char surname[50];
};

int main (void)
{
    struct staffInfo staff_1; // declear structure variable

    // Input staff 1's information
    printf ("Please enter your age: ");
    scanf ("%d", &staff_1.age);
    printf ("Please enter your forename: ");
    scanf ("%s", staff_1.forename);
    printf ("Please enter your surname: ");
    scanf ("%s", staff_1.surname);

    // Output recorded information
    printf ("Hello! %s %s, your are %d years old!\n", staff_1.forename, staff_1.surname, staff_1.age);

    return 0;
}
