#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 3;

    if (x>y)
    {
        printf("1\n");
    }
    
    if ((x!=3)&&(y>7))
    {
        printf("2\n");
    }

    if ((x<=7)&&((x+y)>15))
    {
        printf("3\n");
    }

    if ((x==y)||(x==7))
    {
        printf("4\n");
    }

    return 0;
}
