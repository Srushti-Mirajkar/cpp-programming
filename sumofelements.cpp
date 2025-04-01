#include <iostream>

// Function to calculate the sum of elements in an array
int sumArray(const int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    std::cout << "Numbers in the array: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    int sum = sumArray(numbers, size);
    std::cout << "Sum of elements: " << sum << std::endl;
    
    return 0;
}
