#include <string.h> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	string s = "Hello World!"; 

	// Find position of ':' using find() 
	int pos = s.find(" "); 

	// Copy substring after pos 
	
	string sub = s.substr(pos ); 

	// prints the result 
	cout << "String is:" << sub; 

	return 0; 
} 
