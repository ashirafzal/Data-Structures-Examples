#include <iostream>
#include<conio.h>
using namespace std;


int main() {
   int ch;
   int queue[10] = {10,20,30,40,50,60,70,80,90,100},  front = 0, rear = 9;
   top:
   cout<<"1) Display all the elements of queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Exit"<<endl;

   cout<<"Enter your choice : "<<endl;
   cin>>ch;
if(ch==1)
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
else if(ch==2)
{
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   		getch();
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
      getch();
   }
   goto top;
}
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

