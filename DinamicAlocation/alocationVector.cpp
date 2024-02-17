#include <stdio.h>
#include <stdlib.h>

int *alocationVector(int size)
{
    // auxiliation pointer
    int *aux;
    aux = (int *)malloc(size * sizeof(int));

    return aux;
}

int main()
{
    // alocar espaço na memória

    int *vector, size, count;
    printf("Type a size for your vector: ");
    scanf("%d", &size);

    vector = alocationVector(size);
    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 12;
    vector[3] = 100;
    vector[4] = 78;
    vector[5] = 5;

    for (count = 0; count < size; count++)
    {
        printf("%d\n", vector[count]);
    }
}