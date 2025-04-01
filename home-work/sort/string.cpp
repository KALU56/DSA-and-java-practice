#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string name[100];

    cout << "Enter the number of strings: "<<endl;
    cin >> n;
    cin.ignore(); 

    cout<<"enter : "<<n<<"unsort name :"<<endl;
  
    for (int i = 0; i <= n; i++) {
      getline(cin,name[i]);
    }

    for(int i=0;i<=n-2;i++){
      for (int j=i+1;j<=n-1;j++){
        if (name[i]>name[j]){
          string temp=name[i];
          name[i]=name[j];
          name[j]=temp;
        }
      }
    }
    cout<<"sort : "<<endl;
    for (int i=0;i<n;i++){
      cout<<name[i]<<endl;
    
    }
    return 0;
}  