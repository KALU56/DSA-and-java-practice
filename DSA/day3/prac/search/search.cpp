#include <iostream>
using namespace std;

void search();

int main() {
    char ch = 'y';

    do {
        cout << "1. Search" << endl;
        cout << "2. Exit" << endl;
        cout << "Please enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                search();
                break;
            case 2:
                ch = 'n';
                cout << "Goodbye\n";
                break;
            default:
                cout << "Please enter your choice (1-2)\n";
        }

        if (choice == 1) {
            cout << "Do you want to continue (y/n)? ";
            cin >> ch;
        }

    } while (ch == 'y' || ch == 'Y');

    cout << "Goodbye\n";
    return 0;
}

void search() {
    int arr[10];
    int target;

    cout << "Please enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Please enter the target number: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The target number is found." << endl;
    } else {
        cout << "The target number is not found." << endl;
    }
}
