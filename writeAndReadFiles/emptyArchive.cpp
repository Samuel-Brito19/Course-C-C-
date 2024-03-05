#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream myArchieve;

    myArchieve.open("text.txt");

    myArchieve << "";

    myArchieve.close();

    return 0;
}