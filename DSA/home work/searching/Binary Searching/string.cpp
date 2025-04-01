#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string key;

    // Input array size
    cout << "Enter the number of strings: ";
    cin >> n;

    string list[n];

    // Input sorted array of strings
    cout << "Enter " << n << " sorted strings: ";
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    // Input the string to search
    cout << "Enter the string to search: ";
    cin >> key;

    int left = 0, right = n - 1, mid, index = -1;

    // Binary Search loop
    while (left <= right) {
        mid = left + (right - left) / 2; // Avoids overflow

        if (list[mid] == key) {
            index = mid; // String found
            break;
        }
        else if (list[mid] < key)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    // Output result
    if (index != -1)
        cout << "String found at index: " << index << endl;
    else
        cout << "String not found!" << endl;

    return 0;
}
