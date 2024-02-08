#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;

    while (option < 1 || option > 3)
    {

        printf("Choose a option: ");
        printf("\nOpação 1: ");
        printf("\nOpação 2: ");
        printf("\nOpação 3: ");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Hello word");
            break;
        case 2:
            printf("Hello word 2");
            break;
        case 3:
            printf("Hello word 3");
            break;

        default:
            printf("Invalid option");
            break;
        }
    }
}