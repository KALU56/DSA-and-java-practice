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
	cout<<"enter they want to search....."<<endl;
	cin>>key;
	for (int i=0;i<n;i++){
		if (arr[i]==key){
			index++;
cout<<key<<"is found at position "<<i<<endl;
t2=clock();
cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC;
		}
	}
	if(index==0){
		cout<<"key is not found"<<endl;
		t2=clock();
		cout<<"time="<<(t2-t1)/CLOCKS_PER_SEC;
	}
	return 0;
}