#include <iostream>

using namespace std;

int main() {
    string text = "hello world"; // Given string
    char key;
    int index = -1; // Initialize index as -1 (not found)

    // Input the character to search
    cout << "Enter the character to search: ";
    cin >> key;

    // Linear search loop
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == key) {
            index = i; // If key is found, update index
            break;     // Exit loop once found
        }
    }

    // Output result
    if (index != -1)
        cout << "Character found at index: " << index << endl;
    else
        cout << "Character not found!" << endl;

    return 0;
}
