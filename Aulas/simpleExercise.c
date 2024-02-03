#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float a, b;
    printf("Digite sua primeira nota: ");
    scanf("%f", &a);
    printf("Digite sua segunda nota: ");
    scanf("%f", &b);
    printf("Sua média foi de: %f", (a + b) / 2);

    setlocale(LC_ALL, "");
}