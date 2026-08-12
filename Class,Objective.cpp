// Write a C++ program for creating a class, objective and constructor.

#include <iostream>
using namespace std;

class student
{
private:
    int RollNumber;
    string Name;
public:
    student(string n, int r)
    {
        RollNumber = r;
        Name = n;
    }

    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << RollNumber << endl;
    }
};

int main()
{
    student s1("RBI", 1);
    student s2("BOI", 2);

    s1.display();
    s2.display();

    return 0;
}