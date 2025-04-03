#include <iostream>
using namespace std;

int main() {
    int n;

    // Asking the user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print the right-angled star pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";  // Print star
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
