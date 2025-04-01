#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence, word;
    
    // Input the sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Input the word to search
    cout << "Enter the word to search: ";
    getline(cin, word);

    // Search for the word in the sentence
    int index = sentence.find(word);

    // Output result
    if (index != string::npos)
        cout << "Word '" << word << "' found at index: " << index << endl;
    else
        cout << "Word '" << word << "' not found!" << endl;

    return 0;
}
