#include <stdio.h>
#include <stdlib.h>

int main()
{

    int count, a;

    for (count = 1; count <= 10; count++)
    {
        printf("\n 5 x %d = %d", count, 5 * count);
    }

    for (a = 10; a > 0; a--)
    {
        printf("\n %d", a);
    }
}