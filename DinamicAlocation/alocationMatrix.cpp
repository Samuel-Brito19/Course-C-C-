#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines = 3, collumn = 3, i, j;

    int **matrix;

    printf("Type the number of lines: ");
    scanf("%d", &lines);
    printf("Type the number of collumns: ");
    scanf("%d", &collumn);

    matrix = (int **)malloc(lines * sizeof(int *));
    for (i = 0; i < lines; i++)
    {
        matrix[i] = (int *)malloc(collumn * sizeof(int));
    }
    for (i = 0; i < lines; i++)
    {
        for (j = 0; j < collumn; j++)
        {
            matrix[i][j] = i;
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);
    return 0;
}