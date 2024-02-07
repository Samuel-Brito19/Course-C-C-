#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b;
    printf("digite 3 valores: ");
    scanf("%f %f", &a, &b);
    int c;
    printf("\n Digite 1 para somar, 2 para subitrair e 3 para multiplicar: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\n A soma é: %f", a + b);
        break;
    case 2:
        printf("\n A subtração é: %f", a - b);
        break;
    case 3:
        printf("\n A multiplicação é é: %f", a * b);
        break;
    default:
        break;
    }
}