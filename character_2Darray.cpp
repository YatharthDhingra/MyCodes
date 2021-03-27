#include<iostream>
using namespace std;

int main(){
	char arr[][10]={{'a', 'b' , 'c' } , {'h','i', '\0'}};
	char a[][10]={"hello","world"};
	cout<<arr[0];
	cout<<endl<<arr[1];
	cout<<endl<<a[0];
	cout<<endl<<a[1];
}