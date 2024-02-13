#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

int returnTen()
{
    return 10;
}
float returnFloat();

int main()
{
    int a;

    a = returnTen();

    printf("%d", a);

    float b;
    b = returnFloat();
    printf("\n%f", b);

    return 0;
}

float returnFloat()
{
    return 5.5;
}