#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite os 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("\n Equilateral triangle");
    }
    else
    {
        printf("\n problaby a triangle, but not equilateral");
    }
}