#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Digite a nota a: ");
    scanf("%f", &a);
    printf("\nDigite a nota b: ");
    scanf("%f", &b);
    printf("\nDigite a nota c: ");
    scanf("%f", &c);
    int d = (a + b + c) / 3;
    if (d < 7)
    {
        printf("\n Recuperação");
    }
    else if (7 <= d)
    {
        printf("Aprovado");
    }
}