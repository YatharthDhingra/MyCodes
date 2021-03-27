//Tower of Hanoi --> print each step taken 
#include<iostream>
using namespace std;

void towerofhanoi(int n , char starting_rod , char helping_rod , char destination_rod ){
    //move (n-1) discs from A to B (recursion will do this)
    // move nth disc from A to C (base case)
    // move (n-1) discs from B to C (recursion will do this)

    //base case
    if(n==0){
        return ;
    }
    towerofhanoi(n-1 , starting_rod , destination_rod , helping_rod);
    cout<<"Disc "<<n<<" moved from "<<starting_rod<<" to "<<destination_rod<<endl;
    towerofhanoi(n-1 , helping_rod , starting_rod , destination_rod);
    return ;
}

int main(){
    int n; //number of discs
    cin>>n;
    towerofhanoi(n , 'A' , 'B' , 'C' );
}