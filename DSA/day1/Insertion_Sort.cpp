#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int arr[100], n;
    clock_t t1, t2;
    t1 = clock();
    
    cout << "How many elements do you want to enter?" << endl;
    cin >> n;
    
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    // Insertion Sort Algorithm
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (arr[j - 1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } else {
                break;
            }
        }
    }
    
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    t2 = clock();
    double time_taken = double(t2 - t1) / CLOCKS_PER_SEC;
    cout << "Time taken: " << time_taken << " seconds" << endl;
    
    return 0;
}
