#include<iostream>
#include<stdlib.h>
using namespace std;

 int a[5],top=-1;
	
 
    display()
  {
  
  for(int i=top;i>=0;i--)
  cout<<a[i]<<"\n";
  }

void push()
   {
   int item;
   if(top==4)
   {
   cout<<"Stack is Full!!\n";
   
   }
   else
   {
   cout<<"Enter the element:";
   cin>>item;
   top++;
   a[top]=item;
   }
   }
   
   
    void pop()
   {
   	if(top==-1)
   	cout<<"Stach is Empty!!";
   	else
   	{
   	cout<<"Element poped out is:"<<a[top]<<"\n";
   	top--;
	}
   }
  





int main()
{ int c;
  cout<<"\n1.Push\n2.Pop\n0.End\n";
  cin>>c;
  
  while(c!=0)
  {
  
  switch(c)
  {
  	case 1:push();display();cout<<"\n";break;
   	case 2:pop();display();cout<<"\n";break;
  	default :break;
  }
cout<<"\n1.Push\n2.Pop\n0.End\n";
cin>>c;
	
  }
}
