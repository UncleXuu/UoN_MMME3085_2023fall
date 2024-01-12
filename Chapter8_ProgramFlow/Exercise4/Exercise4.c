#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0;

    printf("\nPlease enter the age:");
    scanf("%d",&a);

    if(a<=5)
    {
        printf("\nStill a baby!");
    }
    else if(a>5&&a<=12)
    {
        printf("\nThe junior years!");
    }
    else if(a>12&&a<20)
    {
        printf("\nThe teenage years!");
    }
    else if(a>=20)
    {
        printf("\nDownhill all the way now!\n");
    }

    return 0;
}
