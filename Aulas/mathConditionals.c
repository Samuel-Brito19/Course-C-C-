#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 5, b = 10, c = 15;
    if (a > 2)
    {
        printf("\n %d is higher than 2", a);
    }
    if (c > b)
    {
        printf("\n %d is higher than %d", c, b);
    }
    if (b <= c)
    {
        printf("\n %d is equal or smaller than %d", c, b);
    }
}