#include<string.h> 
#include<iostream> 
using namespace std; 
int main() 
{ 
	// String obj 
	string str = "Hello World!"; 
	string str1 = " Hello Mars!";
	string str2 = " How is the weather at Karachi today?";

	// 1. size of string object using size() method 
	cout << str.size() << endl; 
	
	// 2. size of string object using length method 
	cout << str1.length() << endl; 
	
	// 3. size using old style 
	// size of string object using strlen function 
	cout << strlen(str2.c_str()) << endl; 
	cout << str+str1+str2;
return 0; 
} 
