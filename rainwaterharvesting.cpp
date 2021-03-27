#include<iostream>
#include<cmath>
using namespace std;
/*The idea is to traverse every array element and find the highest bars on left and right sides. Take the smaller of two heights. The difference between the smaller height and height of the current element is the amount of water that can be stored in this array element*/
//This can be optimised , but we will do it later

int rainwater(int arr[]  , int n){
    int amount  = 0;
    for(int i=1;i<n-1;i++){
        int a = 0 , b = 0;
        for(int j=0; j<=i; j++){
            a = max(a , arr[j]);
        }
        for(int j=i; j<n;j++){
            b = max(b , arr[j]);
        }
        amount += min(a,b) - arr[i];
    }
    return amount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<rainwater(arr , n);
}