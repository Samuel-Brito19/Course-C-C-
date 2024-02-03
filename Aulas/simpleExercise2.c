#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &b);
    printf("A diferença absoluta foi de %d", abs(a - b));

    setlocale(LC_ALL, "");
}