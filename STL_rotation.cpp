//90degrotation_left ==> reverse(STL)  +   transpose

#include<iostream>
#include<algorithm>
using namespace std;

void rotate_STL(int arr[][100], int order){
	for(int i=0;i<order ;i++){
		reverse(arr[i] , arr[i]+order);
	}
}


void transpose(int arr[][100] , int order){
    for(int i=0;i<order;i++){
        for(int j=i;j<order;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
}

//Reverse+transpose--> 90 degree rotation

int main(){
    int arr[100][100];
    int order;
    cin>>order;
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            cin>>arr[i][j];
        }
    }
    rotate_STL(arr , order);
    transpose(arr, order);
    for(int i=0;i<order;i++){
    	for(int j=0;j<order;j++){
    		cout<<arr[i][j]<<" ";
    	}
    	cout<<endl;
    }
 }