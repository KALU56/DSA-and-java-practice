#include <iostream>
using namespace std;

void b_search();  // Function declaration for binary search

int main() {
    char ch = 'y';

    do {
        cout << "1. Binary search\n";
        cout << "2. Exit\n";
        cout << "Please enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {  // Corrected "switch" spelling
            case 1:
                b_search();  // Call binary search function
                break;
            case 2:
                ch = 'n';
                cout << "Goodbye\n";  // Fixed output statement
                break;
            default:
                cout << "Please enter your choice (1-2)\n";
                break;
        }

    } while (ch == 'y' || ch == 'Y');  // Keep running while the user chooses 'y'

    cout << "Goodbye\n";  // Final goodbye message
    return 0;
}
void b_search(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int target;
  cout << "Please enter the target number: ";
  cin>> target;
  int left =0; int right=9; int mid;
  bool found =false;
  while(left<=right){
    mid = left+right/2;
    if (arr[mid]==target){
      found=true;
      break;
    }
    else if (target>arr[mid]){
      left=mid+1;
    }
    else{
      right=mid-1;

    }

  }
  if(found){
    cout<<"The target number is not found "  << endl;
  }
  else{
    cout<<"The target number is  found."<<endl;
  }

}