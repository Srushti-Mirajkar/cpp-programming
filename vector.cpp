#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse
using namespace std;

int main() {
    // Declare and initialize a vector
    vector<int> v = {10, 20, 30, 40};

    // Add elements
    v.push_back(50);     // Add to end
    v.insert(v.begin(), 5); // Insert at beginning

    // Remove elements
    v.pop_back();         // Remove from end
    v.erase(v.begin());   // Erase first element

    // Access elements
    cout << "First element: " << v[0] << endl;
    cout << "Size: " << v.size() << endl;

    // Iterate over vector
    cout << "Elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Sort the vector
    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Reverse the vector
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Clear the vector
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}
