#include <iostream>
#include <time.h>
using namespace std;
int main(){
 int arr[100],n, key, index=0;
 clock_t t1, t2;
 cout<<"how many elements are enter \n";
 cin>>n;
 cout<<"enter those: "<<n<<"numbers\n";
 for (int i=0;i<n;i++)
  cin>>arr[i];
 cout<<"enter the numbers those in search.....\n";
 cin>>key;
 int left=0, right=n-1, middel=0;
 while(left<=right){
  middel=(left+right)/2;
  if(arr[middel]==key){
   index++;
   cout<<key<<"found at position"<<middel<<endl;
   t2=clock();
   cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC;
   break;
  }
  else if (arr[middel]<key){
   left=middel+1;
  }
  else 
  {
   right=middel-1;
  }
  
  } 
if (index==0){
  cout<<"the number is not found";
  t2=clock();
  cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC;
 }
 return 0;
}