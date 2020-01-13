#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int find_largest(int nums[], int n) {
  return *max_element(nums, nums + n);
}
 int main() {
 
   int arr[10], size, pos, val, i;
 
   cout << "Enter the size of an array (MAX 10) \n";
   cin  >> size;
 
   // Create an input array
   cout << "Enter an elements in an array \n";
 
   //Input the value of an array
   for(i = 0; i < size; i++) {
        cin >> arr[i];
   }
 
  cout << "\nLargest element of the said array: "<< find_largest(arr, size);
   
 
 
   return 0;
 }


