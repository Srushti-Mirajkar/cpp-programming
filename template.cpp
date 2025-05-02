#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int addition: " << add(5, 3) << endl;
    cout << "Double addition: " << add(5.5, 3.2) << endl;
    cout << "Char addition (ASCII sum): " << add('A', 'B') << endl;
    
    return 0;
}
