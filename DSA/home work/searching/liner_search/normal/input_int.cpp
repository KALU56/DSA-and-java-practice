#include <iostream>

using namespace std;

int main() {
    int n, key, index = -1; // Initialize index as -1 (not found)

    // Get array size from user
    cout << "Enter the number of elements: ";
    cin >> n;

    int list[n]; // Declare array

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    // Input the key to search
    cout << "Enter the key to search: ";
    cin >> key;

    // Linear search loop
    for (int i = 0; i < n; i++) {
        if (list[i] == key) {
            index = i; // If key is found, update index
            break;     // Exit loop once found
        }
    }

    // Output result
    if (index != -1)
        cout << "Key found at index: " << index << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
}
