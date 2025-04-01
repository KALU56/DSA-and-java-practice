#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    char key;
    int index = -1; 

  
    cout << "Enter a string: ";
    getline(cin, text);

   
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
        cout << "Character '" << key << "' found at index: " << index << endl;
    else
        cout << "Character '" << key << "' not found!" << endl;

    return 0;
}
