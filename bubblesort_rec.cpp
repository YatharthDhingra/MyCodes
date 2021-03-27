#include<iostream>
using namespace std;

void bubblesort(int n , int arr[]){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    bubblesort(n-1 , arr);
}
//different method
void bubble_sort_fully_recursive(int arr[] , int j , int n){
    //base case
    if(n==1){
        return ;
    }
    if(j==(n-1)){
         return bubble_sort_fully_recursive(arr , 0 , n-1); //It is necessary to return here , as n==1 will return here , so it has to return to its previous self to clear the stack
    }
    //rec case
    if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
    }
    return bubble_sort_fully_recursive(arr , j+1 , n);
}

int main(){
    int  n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort_fully_recursive(arr , 0 , n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}