#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter an index (0 to 4): ";
    cin >> index;

    try {
        if (index < 0 || index >= size) {
            throw out_of_range("Index is out of bounds.");
        }

        cout << "Value at index " << index << " is " << arr[index] << endl;
    }
    catch (out_of_range &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
