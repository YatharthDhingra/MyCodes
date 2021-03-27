#include <iostream>
using namespace std;

int main()
{
    int arr[1000][1000];
    int a, b;
    cin >> a >> b;
    int value = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            value++;
            arr[i][j] = value;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
