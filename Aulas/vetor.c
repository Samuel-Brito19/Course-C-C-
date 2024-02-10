#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[3], cont;
    vetor[0] = 5;
    vetor[1] = 17;
    vetor[2] = 20;
    printf("\n posição 1: %d", vetor[0]);
    printf("\n posição 2: %d", vetor[1]);
    printf("\n posição 3: %d", vetor[2]);

    for (cont = 0; cont < 3; cont++)
    {
        printf("\n position %d:%d", cont, vetor[cont]);
    }
    for (cont = 0; cont < 3; cont++)
    {
        vetor[cont] = vetor[cont] + 1;
        printf("\n posição 1: %d", vetor[0]);
        printf("\n posição 2: %d", vetor[1]);
        printf("\n posição 3: %d", vetor[2]);
    }
    for (cont = 0; cont < 3; cont++)
    {
        scanf("%d", &vetor[cont]);
    }
    for (cont = 0; cont < 3; cont++)
    {
        printf("\n position %d:%d", cont, vetor[cont]);
    }
}