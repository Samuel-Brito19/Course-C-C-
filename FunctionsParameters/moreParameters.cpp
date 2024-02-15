#include <stdio.h>
#include <stdlib.h>

void showSum(int firstNumber, int secondNumber)
{
    printf("\n the sum between %d and %d is: %d", firstNumber, secondNumber, firstNumber + secondNumber);
}

int sum(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}
int main()
{
    int a = 5, b = 20;

    showSum(a, b);

    printf("\nthe sum is %d", sum(a, b));

    return 0;
}