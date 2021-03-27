#include<iostream>
using namespace std;

int fibonacci(int n){
    // base case , we made both 1 and 0 base case to prevent n-2<0 , and f(0) = 0 , f(1) = 1 (taking terms from 0). 
    if( n==0 or n==1){
        return n;
    }
    // recursive case
    int last_term = fibonacci(n-1) + fibonacci(n-2);
    return last_term;

}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}