#include <stdio.h>
#include <stdlib.h>
#include <new>

int main()
{
    int size, count;

    printf("Type a size: ");
    scanf("%d", &size);

    int *vector = new int(size);
    for (count = 0; count < size; count++)
    {
        vector[count] = count;
        printf("\n%d", vector[count]);
    }

    return 0;
}