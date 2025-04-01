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

    // Bubble sort for words (substrings)
    int n = words.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (words[j] > words[j+1]) {
                swap(words[j], words[j+1]);
            }
        }
    }

    // Output sorted words
    cout << "Sorted words: ";
    for (const string &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
