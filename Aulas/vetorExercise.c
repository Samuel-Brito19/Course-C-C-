#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[3], a, med;
    printf("Digite 3 valores: ");
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    for (a = 0; a < 3; a++)
    {
    }
    printf("A média dos vetores é: %d", (vetor[0] + vetor[1] + vetor[2]) / 3);
}