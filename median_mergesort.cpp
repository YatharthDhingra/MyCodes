#include<iostream>
using namespace std;

void median(int arr[],int n){
	float m = arr[n-1] + arr[n];
	m/=2;
	cout<<"The median after merging these two sorted array is "<<m;
}

void merge_sort(int n , int arr1[] ,int arr2[]){
	int arr[2*n];
	int i=0,j=0,k=0;
	while(i<n and j<n){
		if(arr1[i]>arr2[j]){
			arr[k++] = arr2[j++];
		}
		else{
			arr[k++] = arr1[i++];
		}
	}
	while(i<n){
		arr[k++] = arr1[i++];
	}
	while(j<n){
		arr[k++] = arr2[j++];
	}
	median(arr,n);
}

int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	merge_sort(n , arr1 , arr2);
}