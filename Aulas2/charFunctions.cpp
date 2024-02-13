#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

char returnLetter()
{
    return 120;
}

int main()
{
    char letter;
    letter = returnLetter();
    printf("%c", letter);

    return 0;
}