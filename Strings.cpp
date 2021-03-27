#include<iostream>
#include<string>
using namespace std;

int main(){
	string s0;
	//s0("hello") --> won't work
	string s1("Hello");
	string s2 = "Hello World";
	string s3(s2);
	string s4=s3;
	
	char arr[]={'a','b','c' , '\0'};
	string s5=arr;

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	//check if a string is empty or not
	if(s0.empty()){
		cout<<"s0 is an empty string"<<endl;
	}

	s0 = "Hi";

	//append
	s0.append(" I love C++");
	cout<<s0<<endl;

	s0 = s0 + " and python";
	cout<<s0<<endl;

 	//length
 	cout<<s0.length()<<endl; //--> or we can use 's0.size()'
 	//remove
 	s0.clear();
 	cout<<s0.length()<<endl;

 	//COMPARE two strings LEXICOGRAPHICALLY
 	/*Two strings are lexicographically equal if they are the same length 
 	and contain the same characters in the same positions.
 	 ... Characters are compared using the Unicode character set.
 	  All uppercase letters come before lower case letters.
 	   If two letters are the same case, then alphabetic order is used to compare them.*/

 	s0="Apple";
 	s1="Mango";
 	cout<<s0.compare(s1)<<endl; //returns an integet ==0 if equal strings , greater than 0 if s0>s1  <0 otherwise.

 	if(s0<s1){
 		cout<<"Mango is lexi larger than apple "<<endl;
 	}
 	//access any character
 	cout<<s0[2]<<endl;

 	//find_Substrings
 	string s="I love mango";
 	int index = s.find("mango");
 	cout<<index<<endl;
 	//remove a word from the string
 	string word = "mango";
 	cout<<s<<endl;
 	int len = word.length();
 	s.erase(index, len);
 	cout<<s<<endl;

 	//Iterating over the string
 	string idk= "Hello";
 	for(int i=0;i<idk.length();i++){
 		cout<<idk[i]<<":";
 	}
 	cout<<endl;
 	//Iterators
 	for(auto i=idk.begin(); i!=idk.end();i++){
 		cout<<*i<<",";
 	}
 	cout<<endl;
 	//For each loop
 	for(auto name:idk){
 		cout<<name<<".";
 	}

}