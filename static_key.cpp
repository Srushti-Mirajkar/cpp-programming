#include <iostream>
using namespace std;

// A function to demonstrate static local variable
void demoFunction() {
    static int count = 0; // static variable
    count++;
    cout << "Count is: " << count << endl;
}

// A class to demonstrate static member variable and static function
class MyClass {
public:
    static int staticVar; // static member declaration

    static void staticFunction() { // static member function
        cout << "Static function called. Static variable value: " << staticVar << endl;
    }
};

// Static member definition (outside class)
int MyClass::staticVar = 5;

int main() {
    cout << "Demonstrating static local variable:" << endl;
    demoFunction();
    demoFunction();
    demoFunction();

    cout << "\nDemonstrating static members in a class:" << endl;
    MyClass::staticFunction();
    
    // Modify static member
    MyClass::staticVar = 10;
    MyClass::staticFunction();

    return 0;
}
