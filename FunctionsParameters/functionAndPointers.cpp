#include <stdio.h>
#include <stdlib.h>

void aumentaDez(int *numero)
{
    *numero = *numero + 10;
}

int main()
{

    // Definindo Variáveis
    int a = 5;

    // Mostrando o valor
    printf("%d \n", a);

    // Aumenta 10

    // Mostrando o valor

    // Função que aumenta 10 diretamente
    aumentaDez(&a);

    // Mostrando o valor
    printf("%d \n", a);

    // Retorno da Função
    return 0;
}
