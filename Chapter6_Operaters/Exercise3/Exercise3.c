#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int A=60;
    unsigned int B=13;
    unsigned int R;

    R=A|B;
    printf("A and B is %#x", R);

    return 0;
}
