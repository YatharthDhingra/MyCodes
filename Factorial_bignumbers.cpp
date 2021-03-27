#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[10000];
	arr[0] = 1;
	int len=1;
	int q=2;
	int num=0;
	while(q<=n){
		int x=0;
		while(x<len){
			arr[x] = arr[x]*q + num;
			num = arr[x]/10;
			arr[x] = arr[x]%10;
			x++;
		}
		while(num!=0){
			arr[len] = num%10;
			num/=10;
			len++;
		}
		q++;
	}
	for(int i=len-1; i>=0 ; i--){
		cout<<arr[i];
	}
}