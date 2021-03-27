#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s;
	getline(cin , s);
	char delimiter ; 
	delimiter = cin.get();
	int i=0;
	while(s[i]!='\0'){
		if(s[i]!=delimiter){
			cout<<s[i];
		}
		else{
			cout<<endl;
		}
		i++;
	}
}