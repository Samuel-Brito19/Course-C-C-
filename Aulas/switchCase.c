#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    char b = 's';
    switch (a)
    {
    case 1:
        printf("\n option number one");
        break;
    case 2:
        printf("\n option number two");
        break;
    case 3:
        printf("\n option number three");
        break;

    default:
        printf("\n invalid option");
        break;
    }
    switch (b)
    {
    case 'x':
        printf("\n x");
        break;
    case 's':
        printf("\n s");
        break;

    default:
        break;
    }
}