#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool returnBoolean()
{
    return false;
}
int main()
{
    bool a;

    a = returnBoolean();
    if (a)
    {
        printf("It's true!");
    }
    else
    {
        printf("It's false");
    }
    printf("%d", a);
    return 0;
}