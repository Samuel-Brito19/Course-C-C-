#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char word[255];
    printf("Digite uma palavra: ");
    setbuf(stdin, 0);

    fgets(word, 255, stdin);

    word[strlen(word) - 1] = '\0';

    printf("%s", word);
}