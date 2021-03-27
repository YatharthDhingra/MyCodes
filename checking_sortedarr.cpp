#include<iostream>
using namespace std;

bool check(int arr[] , int n){
    //base case
    if(n==1){
        return true;
    }
    //rec case (check this arr+1 out , it is very clever , however iterative way and recursive way both are same here)
    if(arr[0]<arr[1]  and check(arr+1 , n-1)){
        return true;
    }
    return false;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr,n)){
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
}