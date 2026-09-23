#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.getData();

    cout << "\nEnter details of Student 2:\n";
    s2.getData();

    cout << "\n--- Student Details ---";
    s1.displayData();
    s2.displayData();
    cout << endl;

    return 0;
}