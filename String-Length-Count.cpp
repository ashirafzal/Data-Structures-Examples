#include<string.h> 
#include<iostream> 
using namespace std; 
int main() 
{ 
	// String obj 
	string str = "Hello World!"; 

	// 1. size of string object using size() method 
	cout << str.size() << endl; 
	
	// 2. size of string object using length method 
	cout << str.length() << endl; 
	
	// 3. size using old style 
	// size of string object using strlen function 
	cout << strlen(str.c_str()) << endl; 
return 0; 
} 
