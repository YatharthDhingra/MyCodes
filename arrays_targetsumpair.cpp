#include<iostream>
#include<algorithm>
using namespace std;

/*BRUTE FORCE APPROACH
void targetsumpair(int arr[],int n,int target){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=arr[i]+arr[j];
			if(sum==target){
				cout<<arr[i]<<" and "<<arr[j]<<endl;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	targetsumpair(arr,n,target);
}*/

//BETTER METHOD
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
	int l=0 , r= n-1;
	while(l<r){
		if((arr[l]+arr[r])==target){
			cout<<arr[l]<<" and "<<arr[r]<<endl;
			l++;
			r--;
		}
		else if((arr[l]+arr[r]<target)){
			l++;
		}
		else{
			r--;
		}
	}
}