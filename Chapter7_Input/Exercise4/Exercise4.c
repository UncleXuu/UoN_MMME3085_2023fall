#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];

    printf("\nPlease enter your name: ");
    scanf("%s", name);

    printf("\nHello! %s\n", name);

    return 0;
}
