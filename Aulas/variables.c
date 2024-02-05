#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    printf("Olá \n");

    int a = 5;

    printf(" O valor a de é: %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);

    float b = 5.6;

    printf(" O valor b de é: %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f", b);

    char d = 't';

    printf("digite um caractere:\n");

    fflush(stdin);

    scanf(" %c", &d); // aqui adicionei um espaço

    printf("O caractere d mudou para: %c\n", d);
}