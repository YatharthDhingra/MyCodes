#include<iostream>
using namespace std;

int fastpower(int a , int n){
    if(n==0){
        return 1;
    }
    int x = fastpower(a , n/2);
    if(n%2==0){
        return x*x;
    }
    else{
        return a*x*x;
    }
}

int main(){
    int a , n;
    cin>>a>>n;
    cout<<fastpower( a , n);
}