#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x;

    printf ("Arguments ->%d\n",argc);
    for (x = 0; x<argc; x++)
    {
        printf("%s\n", argv[x]);
    }

    return 0;
}
