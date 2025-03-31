#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    // Input number of strings
    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[n];

    // Input array of strings
    cout << "Enter " << n << " strings: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion sort for strings
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Output sorted array of strings
    cout << "Sorted strings: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
