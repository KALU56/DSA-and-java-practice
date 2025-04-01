#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string name[100];

    cout << "Enter the of strings: ";
    cin >> n;
    cin.ignore();

    cout << "Enter " << n << " unsorted names:\n";

    
    for (int i = 0; i < n; i++) {
        getline(cin, name[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
          if (name[i]>name[j]){
            string temp=name[i];
            name[i]=name[j];
            name[j]=temp;
          }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    return 0;
}
