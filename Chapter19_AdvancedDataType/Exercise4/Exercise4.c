#include <stdio.h>
#include <stdlib.h>

struct staffInfo
{
    int age;
    int birthYear;
    char forename[30];
    char surname[50];
};

void readInfo (struct staffInfo *staff)
{
    // Input staff's information
    printf ("Please enter your age: ");
    scanf ("%d", &staff->age);
    printf ("Please enter you birth of year: ");
    scanf ("%d", &staff->birthYear);
    printf ("Please enter your forename: ");
    scanf ("%s", staff->forename);
    printf ("Please enter your surname: ");
    scanf ("%s", staff->surname);
}

int main (void)
{
    struct staffInfo staff_1; // declear structure variable

    // Input staff 1's information
    readInfo (&staff_1);

    // Output recorded information
    printf ("Hello! %s %s, your were birth in %d and you are %d years old!\n", staff_1.forename, staff_1.surname, staff_1.birthYear, staff_1.age);

    return 0;
}
