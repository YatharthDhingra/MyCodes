#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.get(); //consume \n or space
	//creating an array of string(2-D character array with each string in one row)
	string s[100];
	for(int i=0;i<n;i++){
		getline(cin , s[i]);
	}
	sort(s , s+n);  //sorts lexicographically
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
}