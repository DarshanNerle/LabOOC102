
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("sample.txt");

    cout << "Enter text (-1 to stop):" << endl;

    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    cout << "Data written successfully." <<endl;

    return 0;
}
