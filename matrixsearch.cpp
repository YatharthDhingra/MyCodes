#include<iostream>
using namespace std;

void matrixsearch(int arr[][30] , int rows , int col,int key){
	int i=0 , j = col-1;
	while(arr[i][j]!=key and (j>=0 or i<rows)){
		if(arr[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}
	if(j<0 or i==rows){
		cout<<"0";
	}
	else{
		cout<<"1";
	}
}

int main(){
	int arr[30][30];
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cin>>key;
	matrixsearch(arr, N , M , key);
}