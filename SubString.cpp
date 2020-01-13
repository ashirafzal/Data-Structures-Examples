#include <string.h> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// Take any string 
	string s1 = "Hello World!"; 

	string r = s1.substr(5, 3); 
	
	cout << "String is: " << r; 

	return 0; 
} 
