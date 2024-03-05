#include <string.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int c;
    char textContent[255];
    int count = 0;

    FILE *file;

    file = fopen("text.txt", "r");

    if (file)
    {
        while ((c = getc(file)) != EOF)
        {
            printf("%c", c);
            textContent[count] = c;
            count++;
        }
        fclose(file);
    }
    for (count = 0; count < strlen(textContent) - 2; count++)
    {
        printf("%c", textContent[count]);
    }
    return 0;
}
