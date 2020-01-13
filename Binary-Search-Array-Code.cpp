#include <iostream>
using namespace std;

int main()
{
	int size, i, arr[10], num, beg, last, middle;
	cout<<"how many elements would you like to enter?:"; 
        cin>>size;

	for (i=0; i<size; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:"; 
        cin>>num;
	beg = 0;
	last = size-1;
	middle = (beg+last)/2;
	while (beg <= last)
	{
	   if(arr[middle] < num)
	   {
		beg = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (beg + last)/2; 
        } 
        if(beg > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
