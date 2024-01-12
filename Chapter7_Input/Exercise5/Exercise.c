#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];
    int age=0;

    printf("\nPlease enter your name: ");
    gets(name);
    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    printf("\nHello! %s\nYou are %d years old\n", name, age);

    return 0;
}
