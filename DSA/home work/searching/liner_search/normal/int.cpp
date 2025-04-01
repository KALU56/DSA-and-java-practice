#include <iostream>

using namespace std;

int main() {
    int list[] = {10, 20, 30, 40, 50};
    int n = sizeof(list) / sizeof(list[0]);
    int key, index = -1; // Initialize index as -1 (not found)

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
