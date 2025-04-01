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

    // Selection sort for words (substrings)
    int n = words.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (words[j] < words[minIndex]) {
                minIndex = j;
            }
        }
        swap(words[i], words[minIndex]);
    }

    // Output sorted words
    cout << "Sorted words: ";
    for (const string &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
