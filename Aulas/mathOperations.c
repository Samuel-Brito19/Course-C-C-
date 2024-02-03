#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 6, b = 2;
    printf("\nA soma de %d e %d é %d", a, b, a + b);
    printf("\nA divisão de %d e %d é %d", a, b, a / b);
    // rest
    printf("\nA resto da divisão entre %d e %d é %d", a, b, a % b);
    // absolute value
    printf("\n o valor absoluto de -7 é %d", abs(-7));
    system("pause");
}