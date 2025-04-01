#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Split the sentence into words
    stringstream ss(sentence);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Insertion sort for words (substrings)
    int n = words.size();
    for (int i = 1; i < n; i++) {
        string key = words[i];
        int j = i - 1;

        // Move elements of words[0..i-1] that are greater than key
        while (j >= 0 && words[j] > key) {
            words[j + 1] = words[j];
            j = j - 1;
        }
        words[j + 1] = key;
    }

    // Output sorted words
    cout << "Sorted words: ";
    for (const string &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
