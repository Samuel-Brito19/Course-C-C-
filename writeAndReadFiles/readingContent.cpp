#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream input("text.txt");

    string readedText;

    for (string line; getline(input, line);)
    {
        readedText += line;
    }

    cout << readedText;

    return 0;
}