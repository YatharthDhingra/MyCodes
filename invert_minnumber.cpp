#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	int x=n;
	int newno=0;
	int i=0;
	while(x>0){
		int lastdigit=x%10;
		int y=lastdigit;
		if((9-lastdigit)<y){
			y = 9-lastdigit;
		}
		newno+= y*pow(10, i);
		i++;
		x/=10;
	}
	cout<<newno;
}