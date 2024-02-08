#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, value, b;

    printf("Digite um número: ");
    scanf("%d", &value);

    for (a = 1; a <= value; a++)
    {
        if (value % a == 0)
        {
            b++;
        }
    }
    if (b == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("It's not prime");
    }
}