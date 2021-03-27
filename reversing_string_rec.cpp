#include<iostream>
#include<cstring>
using namespace std;

//method 1
void reverse( char s[], int n){
    if(n==0 or n==1){
        return;
    }
    reverse(s+1 , n-2);
    swap(s[0] , s[n-1]);
    return ;
}

//method 2(like we did in the question number to words(somewhat same logic , to go backwards))
//we can use s.substr(i) (STL)
void reverse_two(char s[] , int n){
    if(n == 1){
        cout<<s[0];
        return;
    }
    reverse_two(s+1 , n-1);
    cout<<s[0];
    return ;

}

int main(){
    char arr[1000];
    cin>>arr;
    reverse_two(arr , strlen(arr));
}