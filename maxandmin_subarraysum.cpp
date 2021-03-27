#include<iostream>
#include<climits>
using namespace std;

//kadane's algorithm

void maximum(int arr[], int n){
	int max=0;
	int cs=0;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		if(cs>max){
			max=cs;
		}
		if(cs<0){
			cs=0;
		}
	}
	cout<<max;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	maximum(arr,n);
}