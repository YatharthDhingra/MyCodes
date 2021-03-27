#include<iostream>
using namespace std;

void transpose(int arr[][1000] , int order){
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
    int arr[1000][1000];
    int order;
    cin>>order;
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr, order);
    for(int i=order-1;i>=0;i--){
        for(int j=0;j<order;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}