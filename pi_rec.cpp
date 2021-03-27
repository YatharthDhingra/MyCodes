#include<iostream>
#include<cstring>
using namespace std;

//Just have to replace and PRINT
void pi(string s){
    if(s.length()==0){
        return;
    }
    //rec case
    if(s[0]=='p' and s[1]=='i'){
        cout<<"3.14";
        pi(s.substr(2));
    }
    else{
        cout<<s[0];
        pi(s.substr(1));
    }
    //Here even if we don't write return , it will still work as it is automatically understood by the compiler
}

int main(){
    string s;
    cin>>s;
    pi(s);
    cout<<"finish";
}