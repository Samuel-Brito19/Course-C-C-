#include <stdio.h>
#include <stdlib.h>

void printVector(int *vector)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d \n", vector[i]);
    }
}

void changeVector(int *vector, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        vector[i] = vector[i] + 1;
    }
}

int main()
{
    int v[3] = {1, 2, 3};
    printVector(v);
    changeVector(v, 3);
    printVector(v);

    return 0;
}