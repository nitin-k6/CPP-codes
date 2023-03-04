#include <stdio.h>

 int main()
{
    unsigned int num;
    int i;
    scanf ("%u", &num);
    for( i =0; i<16; i++)
    {
        printf ("%d", (num<< i & i << 15) ? 1 : 0);
    }
    return 0;
}