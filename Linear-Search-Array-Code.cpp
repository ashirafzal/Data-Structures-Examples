#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int arr[10], k, item, size, c=0, loc;
	cout<<"Enter the array size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(k=0; k<size; k++)
	{
		cin>>arr[k];
	}
	cout<<"Enter the number to be search : ";
	cin>>item;
	for(k=0; k<size; k++)
	{
		if(arr[k]==item)
		{
			c=1;
			loc=k+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<item<<" found at position "<<loc;
	}
	getch();
}
