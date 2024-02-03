#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b;
    // inter numbers, always use "%d"
    printf("%d", a);
    // concat
    printf("\n o valor da var a é: %d", a);
    // changing values
    a = 15;
    printf("\n o valor da var a é: %d", a);
    // reading values
    scanf("%d", &b);
    printf("\n o valor da var b é: %d", b);
    printf("\nE aí molecada");
    system("pause");
}