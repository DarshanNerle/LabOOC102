
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    string line;

    fin.open("sample.txt");

    if (!fin)
    {
        cout << "File could not be opened.";
        return 1;
    }

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
