#include <stdio.h>
#include <stdlib.h>

void showNextNumber(int number)
{
    printf("\n O sucessor de %d é %d", number, number + 1);
}

int showAnteriorNumber(int number)
{
    return number - 1;
}

int main()
{
    int a;
    printf("Dgite um valor: ");

    scanf("%d", &a);

    showNextNumber(a);
    printf("\nO antecessor de %d é %d", a, showAnteriorNumber(a));
    return 0;
}