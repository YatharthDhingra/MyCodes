#include <iostream>
using namespace std;

/*input: 4 4 5 20
.
.
*
.
.
#
.
.
*
*
.
.
.
#
*
*    */

void magicalpark(char arr[][100], int rows, int col, int K, int S)
{
    for (int i = 0; i < rows; i++)
    {
    
        for (int j = 0; j < col; j++)
        {
            if (S >= K)
            {
                if (arr[i][j] == '.')
                {
                    S -= 2;
                }
                if (S >= K)
                {
                    if (arr[i][j] == '#')
                    {
                        break;
                    }
                }
                else
                {
                    cout << "NO";
                }
                if(arr[i][j]== '*'){
                    S+=5;
                }       
            }
            else
            {
                cout << "NO";
            }
            if(j!=col-1){
            S--;
            }
        }
    }
    cout<<"YES"<<endl<<S;
}

int main()
{
    char arr[100][100];
    int rows, col;
    cin>>rows>>col;
    int K, S;
    cin >> K >> S;
    if (S >= K)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        magicalpark(arr, rows, col, K, S);
    }
    else
    {
        cout << "The initial strength is less than K";
    }
}