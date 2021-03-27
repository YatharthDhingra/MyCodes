#include<iostream>
using namespace std;

//We can also use linear search , and binary search for all rows but they will not be as efficient as this.
//Staircasesearch is for a sorted array , both row wise and col wise.

void staircasesearch(int arr[][100] , int rows , int col , int key){
	int i=0 , j=col-1;
	while(key!=arr[i][j]){
	if(key>arr[i][j]){
		i++;
	}
	else{
		j--;
	}
}
cout<<i<<" "<<j;
}

int main(){
	int arr[100][100];
	int rows,col;
	cin>>rows>>col;
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cin>>key;
	staircasesearch(arr,rows,col , key);
}