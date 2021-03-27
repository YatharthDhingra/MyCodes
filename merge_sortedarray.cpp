#include<iostream>
#include<climits>
using namespace std;

void merge_sort(int n1 , int arr1[] , int n2 , int arr2[]){
	int arr[n1+n2];
	int i=0 , j=0;
	bool check = false;
	for(int k=0;k<n1+n2;k++){
		if(check){
			check = false;
			continue;
		}
		else{
		if(arr1[i]>arr2[j]){
			arr[k] = arr2[j];
			j++;
			if(j==n2){
				for(int x=i;x<n1;x++){
					k++;
					arr[k] = arr1[x];
				}
				break;
			}
		}
		else if(arr1[i]<arr2[j]){
			arr[k] = arr1[i];
			i++;
			if(i==n1){
				for(int x=j;x<n2;x++){
					k++;
					arr[k] = arr2[x];
				}
				break;
			}
		}
		else{
			arr[k] = arr1[i];
			i++;
			arr[k+1] = arr2[j];
			j++;
			check=true;
			}
		}
	}
	for(int i=0;i<n1+n2;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n1 , n2;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	merge_sort(n1 , arr1 , n2 , arr2);
}