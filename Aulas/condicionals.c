#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, opcao = 4;

    if (a % 2 == 0)
    {
        printf("\n its par");
    }
    else
    {
        printf("\n its it's odd");
    }
    if (opcao == 1)
    {
        printf("\n Ok");
    }
    else if (opcao == 4)
    {
        printf("\n Other value");
    }
    system("pause");
}