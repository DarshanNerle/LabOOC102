#include <iostream>
using namespace std;

class Distance {
    public:
        int feet;
        float inches;

        Distance(int f, int i) 
        { 
            this->feet = f; 
            this->inches = i; 
        }

        void operator-() { 
            feet--; 
            inches--;
            cout << "\nFeet & Inches(Decrement): " << feet << "'" << inches << "\"" << endl; 
        }
         void operator+() { 
            feet++; 
            inches++;
            cout << "\nFeet & Inches(Increment): " << feet << "'" << inches << "\"" << endl; 
        }
    };  

int main() {
    Distance d1(8,9);
    -d1;
    +d1;
    return 0;
}