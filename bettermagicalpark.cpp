#include<iostream>
using namespace std;

int global_S;

bool magicalpark(char arr[][100] , int rows,int col,int K,int S){
    bool success=true;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            char ch=arr[i][j];
            if(S<K){
                success=false;
                break;
            }
            if(ch=='.'){
                S-=2;
            }
            else if(ch=='*'){
                S+=5;
            }
            else{
                break;
            }
            if(j!=col-1){
                S--;
            }
        }
        if(success==false){
            return false;
        }
    }
    global_S=S;
    return true;
}

int main(){
    char arr[100][100];
    int rows, col;
    cin >> rows >> col;
    int K, S;
    cin >> K >> S;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        magicalpark(arr, rows, col, K, S);
        if(magicalpark){
            cout<<"YES"<<endl<<global_S;
        }
        else{
            cout<<"NO";
        }
    }
