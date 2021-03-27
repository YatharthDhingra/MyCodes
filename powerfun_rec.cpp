#include<iostream>
using namespace std;

int powerfunction(int a , int b){
    //base case
    if(b==0){
        return 1;
    }
    return a*(powerfunction(a,b-1));
}

int main(){
    int a , b;
    cin>>a>>b;
    cout<<powerfunction(a,b);
}