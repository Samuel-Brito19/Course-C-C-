#include <string.h>
#include <stdio.h>

typedef struct Date
{
    int day;
    int mounth;
    int year;
} Date;
struct Aluno
{
    int id;
    Date birth;
};

int main()
{
    struct Aluno aluno1;

    aluno1.id = 15;
    aluno1.birth.day = 29;
    aluno1.birth.mounth = 9;
    aluno1.birth.year = 2001;

    printf("Born in %d/%d/%d", aluno1.birth.day, aluno1.birth.mounth, aluno1.birth.year);

    return 0;
}