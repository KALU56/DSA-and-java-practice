#include <iostream>
using namespace std;

void simple_sort();

int main() {
    char ch = 'y';

    do {
        cout << "1. simplesort\n";
        cout << "2. Exit\n";
        cout << "Please enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                simple_sort();
                break;
            case 2:
                ch = 'n';
                cout << "Goodbye\n";
                break;
            default:
                cout << "Please enter your choice (1-2)\n";
                break;
        }

    } while (ch == 'y' || ch == 'Y');

    cout << "Goodbye\n";
    return 0;
}

void simple_sort() {
    int n;
    cout << "Please enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size.\n";
        return;
    }

    int* arr = new int[n]; // Dynamically allocate memory for the array

    cout << "Please enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "The sorted array is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Release the dynamically allocated memory
}