#include <iostream>
#include <time.h>
using namespace std;
int main(){
  string name;
  cout<<"enter the string that you want "<<endl;
  cin>>name;
  int n = name.length();
  int arr[n];
  string wanted;
  cout<<"enter you want to search"<<endl;
  cin>>wanted;
  int key_wanted = wanted.length();
  int wan[key_wanted];
	for (int i=0;i<n;i++)
  cin>>arr[i];
      index=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==wan)
        {
            index=i;
            break;
        }
    }
   
 
  for (int i = 0; i < n; i++)
    if (arr[i] = key_wanted) {
      cout << "found" << endl;
      break;
    } else {
      cout << "not found" << endl;
    }
  cout << "after sorting algorithm" << endl;
}