#include<iostream>
using namespace std;

int firstocc(int a[] , int n , int i , int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a,n, ++i , key);
}

int lastocc(int a[] , int n , int key){
    //base case
    if(n==0){
        return -1;
    }

    //rec case

    int check =  lastocc(a+1,n-1,key);
    if(check==-1){
        return -1;
    }
    else{
        
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<firstocc(arr , n , 0 , key )<<endl;
    cout<<lastocc(arr ,  n ,  key);
}