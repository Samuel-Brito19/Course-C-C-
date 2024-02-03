#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b, c;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &b);
    printf("Digite um valor inteiro: ");
    scanf("%d", &c);
    int d = a * b * c;
    printf("a multiplicação dos 3 números é %d", d);

    setlocale(LC_ALL, "");
}