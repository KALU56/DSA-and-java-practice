#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string key;

    // Input number of words
    cout << "Enter the number of words: ";
    cin >> n;

    string words[n];

    // Input sorted words
    cout << "Enter " << n << " sorted words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Input the word to search
    cout << "Enter the word to search: ";
    cin >> key;

    int left = 0, right = n - 1, mid, index = -1;

    // Binary Search loop for word search
    while (left <= right) {
        mid = left + (right - left) / 2; // Avoids overflow

        if (words[mid] == key) {
            index = mid; // Word found
            break;
        }
        else if (words[mid] < key)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    // Output result
    if (index != -1)
        cout << "Word '" << key << "' found at index: " << index << endl;
    else
        cout << "Word '" << key << "' not found!" << endl;

    return 0;
}
