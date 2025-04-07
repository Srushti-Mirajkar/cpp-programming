#include <iostream>
using namespace std;

int main() {
    int decimal, remainder, octal = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    int temp = decimal; // store original value for display

    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * place;
        decimal /= 8;
        place *= 10;
    }

    cout << "Octal of " << temp << " is: " << octal << endl;

    return 0;
}
