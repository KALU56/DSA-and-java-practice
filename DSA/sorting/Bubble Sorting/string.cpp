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

    // Bubble sort for strings
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // Output sorted array of strings
    cout << "Sorted strings: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
