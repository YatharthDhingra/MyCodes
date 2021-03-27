#include<iostream>
#include<cstring>
using namespace std;

//ITERATIVE SOLUTION:
#include <iostream>
using namespace std;

void remove(string s){
    for(int j=1;j<s.length();j++){
        for(int i=j;i<s.length();i++){
            if(s[i]==s[j-1]){
                s.erase(i , 1);
                --i;
            }
        }
    }
    cout<<s;
}

int main() {
    string s;
    cin>>s;
    remove(s);
}


