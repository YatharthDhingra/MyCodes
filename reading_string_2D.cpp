#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char arr[100][100];
	cin.get();
	for(int i=0;i<n;i++){
		cin.getline(arr[i],1000);
	}
	//print out all strings
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}