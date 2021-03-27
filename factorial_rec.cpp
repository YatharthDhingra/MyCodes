#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    //rec case
    int fac = factorial(n-1);
    return fac * n;
}

int main(){
    int n;
    cin>>n;
    int output = factorial(n);
    cout<<output<<endl;
}