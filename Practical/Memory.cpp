//Write a C++ program to demonstrate dynamic memory allocation for an integer array using new and delete operators.

#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout<<"Enter the size of the integer array:";
    cin>>size;

    cout<<"Creating an array of size" <<size <<"..";
    arr = new int[size];

    cout<<"\n Dynamic allocation of memory for array arr is successful." <<endl;

    delete arr;

    return 0;
}