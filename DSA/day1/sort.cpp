#include <iostream>
#include <time.h>
using namespace std;
int main(){
	int arr[100],n,key,index=0;
	clock_t t1, t2;
	t1=clock();
	cout<<"how many elements are enter"<<endl;
	cin>>n;
	cout<<"enter those numbers:"<<n<<"numbers"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
for(int i=0;i<=n-2;i++){
	for (int j=i+1;j<=n-1;j++){
		if (arr[i]>arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
cout<<" after sorting algorithm"<<endl;
for (int i=0;i<n;i++)
	cout<<arr[i]<<endl;
return 0;
}