#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math obj;
    cout << "Sum: " << obj.add(5, 10) << endl;       // Calls int version
    cout << "Sum: " << obj.add(2.5, 3.5) << endl;   // Calls double version
    cout << "Sum: " << obj.add(1, 2, 3) << endl;    // Calls 3-parameter version
    return 0;
}

