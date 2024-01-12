#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0;

    printf("\nPlease enter the number:");
    scanf("%d",&a);

    if(a==1)
    {
        printf("\nBrown\n");
    }
    else if(a==2)
    {
        printf("\nRed\n");
    }
    else if(a==3)
    {
        printf("\nOrange\n");
    }
    else if(a==4)
    {
        printf("\nYellow\n");
    }
    else
    {
        printf("\nInvalid input\n");
    }

    return 0;
}
