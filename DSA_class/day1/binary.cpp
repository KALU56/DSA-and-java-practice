//binary
#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;
int main(){
  int arr[100],n,key,index=0;
  clock_t t1,t2;
  t1=clock();
  cout<<"how many elements are enter\n";
  cin>>n;
  cout<<"enter those:"<<n<<"numbers\n";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"enter they want to search....\n";
  cin>>key;
    int middle=0,top=n-1,bottom=0;
  while(bottom<=top){
       middle=(top+bottom)/2;
       if(arr[middle]==key){
       index++;
       cout<<key<<"is found at postion at"<<middle<<endl;
       t2=clock();
       cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC; 
       getch();
     }
     else if(arr[middle]<key)
       bottom=middle+1;
       
     
     else top=middle-1;
  }
if(index==0){
    cout<<key<<"is notfound at postion at the list"<<endl;
    t2=clock();
    cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC;
    
}  
return 0;
}