#include <iostream>

using namespace std;

int main() {
    int n, key;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int list[n];

    // Input sorted array elements
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    // Input the key to search
    cout << "Enter the key to search: ";
    cin >> key;

    int left = 0, right = n - 1, mid, index = -1;

    // Binary Search loop
    while (left <= right) {
        mid = left + (right - left) / 2; // Avoids overflow

        if (list[mid] == key) {
            index = mid; // Key found
            break;
        }
        else if (list[mid] < key)
            left = mid + 1; // Search in right half
        else
            right = mid - 1; // Search in left half
    }

    // Output result
    if (index != -1)
        cout << "Key found at index: " << index << endl;
    else
        cout << "Key not found!" << endl;

    return 0;
}
