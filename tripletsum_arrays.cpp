#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	int target;
	cin>>target;
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++){
		int sum=(target-arr[i]);
		int l=i+1;
		int r=n-1;
		while(l<r){
			if(arr[l]+arr[r]==sum){
				cout<<arr[i]<<" , "<<arr[l]<<" , "<<arr[r]<<endl;
				l++;
				r--;
			}
			else if(arr[l]+arr[r]<sum){
				l++;
			}
			else{
				r--;
			}
		}
	}
}