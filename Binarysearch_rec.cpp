#include<iostream>
using namespace std;

bool check = false;

int binarysearch(int a[] , int key , int s , int e ){
        if(s==e){
            if(a[s]==key){
                return s;
            }
            else{
                return -1;
            }
        }
        int m = (s+e)/2;
        if(a[m]==key){
            return m;
        }
        else if(a[m]>key){
            return binarysearch(a , key , s , m-1);
        }
        else{
            return binarysearch(a , key , m+1 , e);
        }
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
    //sorted array
    cout<<binarysearch(a , key, 0 , n-1);
}