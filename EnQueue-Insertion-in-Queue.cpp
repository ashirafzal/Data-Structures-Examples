#include <iostream>
#include<conio.h>
using namespace std;

int main() {
   int ch;
   int queue[10], n = 10, front = - 1, rear = - 1;
   top:
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Display all the elements of queue"<<endl;
   cout<<"3) Exit"<<endl;

   cout<<"Enter your choice : "<<endl;
   cin>>ch;
if(ch==1)
   {
   	int val;
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
      
   }
   goto top;
   }
else if(ch==2)
	{
	if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
      getch();
      
	}
	goto top;}
else if(ch==3)
{
	cout<<"Exit"<<endl;
	exit;
}
      else
       {
	   cout<<"Invalid choice"<<endl;
       getch();
       goto top;}
}
