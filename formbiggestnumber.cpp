#include<iostream>
#include<climits>
using namespace std;

void biggestnumber(int arr[] , int n){
	int lastdigit;
	for(int j=0;j<n;j++){
		int max=0;
		int max_index = 0;
	for(int i=0;i<n;i++){
		int x=arr[i];
		lastdigit=0;
		while(x>0){
			 lastdigit = x%10;
			x/=10;
		}
		if(lastdigit>max){
			max = lastdigit;
			max_index=i;
			}
			else if(lastdigit==max){
				if(arr[i]>arr[max_index]){
					max_index = i;
				}
			}
		}
		cout<<arr[max_index];
		arr[max_index]= INT_MIN;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	biggestnumber(arr,n);
}