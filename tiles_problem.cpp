#include<iostream>
using namespace std;

int ways(int n){
    if(n==0){
        return 0;
    }
    else if( n==1 or n==2 or n==3){
        return 1;
    }
    else if(n==4){
        return 2;
    }
    //think for this logically
    int no_ofways = ways(n-1)  + ways(n-4);
    return no_ofways;
}

int main(){
    int n;
    cin>>n;
    cout<<ways(n);
}