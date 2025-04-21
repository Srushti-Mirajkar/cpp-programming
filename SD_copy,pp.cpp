#include <iostream>
using namespace std;

class Sample {
private:
    int* data;

public:
    // Constructor
    Sample(int value) {
        data = new int;
        *data = value;
        cout << "Constructor: data = " << *data << endl;
    }

    // Shallow Copy Constructor
    Sample(const Sample& source) {
        data = source.data; // just copying the pointer (shallow copy)
        cout << "Shallow Copy Constructor: data = " << *data << endl;
    }

    // Deep Copy Constructor (Uncomment to test deep copy)
    /*
    Sample(const Sample& source) {
        data = new int;
        *data = *(source.data); // copying the value (deep copy)
        cout << "Deep Copy Constructor: data = " << *data << endl;
    }
    */

    // Setter
    void setData(int value) {
        *data = value;
    }

    // Getter
    void showData() const {
        cout << "Data: " << *data << endl;
    }

    // Destructor
    ~Sample() {
        cout << "Destructor freeing memory of data = " << *data << endl;
        delete data;
    }
};

int main() {
    Sample obj1(10);       // Original object
    Sample obj2 = obj1;    // Copy constructor is called

    cout << "\nChanging obj2's data to 20...\n";
    obj2.setData(20);

    cout << "\nobj1 => ";
    obj1.showData();       // Will also show 20 in shallow copy
    cout << "obj2 => ";
    obj2.showData();

    return 0;
}
