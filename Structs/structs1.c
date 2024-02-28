#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word
{
    /* data */
    int sequence;
    char letter;
    char text[255];
};

int main()
{
    struct word firstWord;

    firstWord.sequence = 10;
    firstWord.letter = '0';
    strcpy(firstWord.text, "Neymar");

    printf("Order: %d letter: %c word: %s", firstWord.sequence, firstWord.letter, firstWord.text);

    struct word wordsList[3];

    wordsList[0].sequence = 0;
    wordsList[1].sequence = 1;
    wordsList[2].sequence = 2;
    wordsList[0].letter = 'w';
    wordsList[1].letter = 's';
    wordsList[2].letter = 't';
    strcpy(wordsList[0].text, "messi");
    strcpy(wordsList[1].text, "cristiano");
    strcpy(wordsList[2].text, "vini");

        int count;
    for (count = 0; count < 3; count++)
    {
        printf("Order: %d letter: %c word: %s", wordsList[count].sequence, wordsList[count].letter, wordsList[count].text);
    }

    return 0;
}
