#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    printf("Olá \n");

    int a = 5;

    printf(" O valor a de é: %d", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d", a);
}