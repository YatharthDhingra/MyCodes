#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<4;j++){
        if(j%2==0){
        int i=0;
        
        while(i<3){
            cout<<arr[i][j]<<" ";
            i++;
        }
        }
        else{
            int i=2;
            while(i>=0){
                cout<<arr[i][j]<<" ";
                i--;
            }
        }
    }
}