#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char name[20];

    do
    {
        printf ("What's your name: \n");
        scanf ("%s", name);
        printf ("Hi, %s!\n", name);
    } while (1);
    
    return 0;
}
