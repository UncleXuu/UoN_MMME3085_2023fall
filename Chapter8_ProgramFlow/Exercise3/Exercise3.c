#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=0;

    printf("\nPlease enter the number:");
    scanf("%d",&a);

    if(a>=0 && a<=10)
    {
        printf("\nThe number is in range!\n");
    }
    else
    {
        printf("The number is not in range\n");
    }

    return 0;
}
