#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int b = 10;

    int *pointer;

    pointer = &b;

    printf("valor de b: %d\n", b);

    //* can be reader like "CONTENT POINTED AT"
    *pointer = 40;

    printf("valor de b: %d\n", b);
    return 0;
}