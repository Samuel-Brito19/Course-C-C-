#include <string.h>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream exitFile;

    exitFile.open("text.txt", std::ios_base::app);

    exitFile << "mother";

    exitFile.close();

    return 0;
}