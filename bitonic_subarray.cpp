#include<iostream>
using namespace std;
/*Let us consider the array {12, 4, 78, 90, 45, 23} to understand the soultion.
1) Construct an auxiliary array inc[] from left to right such that inc[i] contains length of the nondecreaing subarray ending at arr[i].
For A[] = {12, 4, 78, 90, 45, 23}, inc[] is {1, 1, 2, 3, 1, 1}

2) Construct another array dec[] from right to left such that dec[i] contains length of nonincreasing subarray starting at arr[i].
For A[] = {12, 4, 78, 90, 45, 23}, dec[] is {2, 1, 1, 3, 2, 1}.

3) Once we have the inc[] and dec[] arrays, all we need to do is find the maximum value of (inc[i] + dec[i] – 1).
For {12, 4, 78, 90, 45, 23}, the max value of (inc[i] + dec[i] – 1) is 5 for i = 3.*/

int bitonic(int arr[] , int n){
	int inc[n] , dec[n];
	inc[0] = 1;
	dec[n-1] = 1;
	int i=1 , k=1;
	while(k<n){
		if(arr[k-1]<arr[k]){
		i++;
		inc[k] = i;
		}
		else{
			i=1;
			inc[k] = i;
		}
		k++;
	}
	k=n-2;
	i=1;
	while(k>=0){
		if(arr[k+1]<arr[k]){
			i++;
			dec[k]=i;
		}
		else{
			i=1;
			dec[k] = 1;
		}
		k--;
	}
	int m=0;
	for(int i=0;i<n;i++){
		m = max(inc[i]+dec[i]-1 , m);
	}
	return m;
}
 

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The length of maximum bitonic subarray is: "<<bitonic(arr,n);
}