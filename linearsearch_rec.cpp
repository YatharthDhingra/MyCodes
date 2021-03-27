#include<iostream>
using namespace std;

//first occurance of key is returned only.
int index(int a[] , int n , int key){
   if(n==0){
       return -1;
   }
   if(a[0]==key){
       return 0;
   }
   int i = index(a+1 ,n-1 , key);
   if(i==-1){
       return -1;
   }
   return i+1;
}

//different way of same thing(much similar to iterative way)
//i is current index                        //default arg
int linearsearch(int a[] , int n , int key , int i=0){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return linearsearch(a , n , key , ++i); // this is like a for loop(don't use i++ here , ++i can be used or i+1)
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<index(a , n , key)<<endl;
    cout<<linearsearch(a , n , key);
}