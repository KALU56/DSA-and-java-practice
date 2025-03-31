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

    // Selection sort for strings
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    // Output sorted array of strings
    cout << "Sorted strings: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
