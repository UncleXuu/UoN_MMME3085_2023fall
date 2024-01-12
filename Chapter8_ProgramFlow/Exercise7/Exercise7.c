#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0;

    printf("\nPlease enter the number:");
    scanf("%d",&a);

    switch(a)
    {
        case (1):
            printf("\nBrown\n");
            break;
        case(2):
            printf("\nRed\n");
            break;
        case(3):
            printf("\nOrange\n");
            break;
        case(4):
            printf("\nYellow\n");
            break;
        default:
            printf("\nInvalid Input");
            break;
    }

    return 0;
}
