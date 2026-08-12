// Write a C++ program for complex one number formation.

#include <iostream>
using namespace std;
int main()
{
    int real, imag;
    cout << "Enter the real part of the complex number: ";
    cin >> real;

    cout << "Enter the imaginary part of the complex number: ";
    cin >> imag;

    cout << "The complex number is: " << real << " + " << imag << "i" << endl;

    return 0;
}