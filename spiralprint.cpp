#include<iostream>
using namespace std;

void spiralprint(int arr[][100] , int rows , int col){
	int strow=0, strcol = 0;
	int erow= rows-1 , ecol = col-1;
	while(strow<=erow  and strcol<=ecol){
		for(int i=strow;i<=erow;i++){
			cout<<arr[i][strcol]<<" ";
		}
		strcol++;
		for(int i=strcol;i<=ecol;i++){
			cout<<arr[erow][i]<<" ";
		}
		erow--;
		if(strcol<=ecol){
		for(int i=erow;i>=strow;i--){
			cout<<arr[i][ecol]<<" ";
		}
	}
		ecol--;
		if(strow<=erow){
		for(int i=ecol;i>=strcol;i--){
			cout<<arr[strow][i]<<" ";
		}
	}
		strow++;
	}
	cout<<"END";
}

int main(){
	int arr[100][100];
	int rows , col;
	cin>>rows>>col;
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	spiralprint(arr,rows , col);
}