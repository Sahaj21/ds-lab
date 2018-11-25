#include<iostream>
using namespace std;


int a[5],f=-1,r=-1;


  display()
  {
  if(f!=-1)
  for(int i=f;i<=r;i++)
  cout<<"->"<<a[i];
  }

void enqueue()
   {
   int item;
   if(r==4)
   {
   cout<<"Queue is Full!!\n";
   
   }
   else if(f==-1 && r==-1)
   {f++;r++;
   cout<<"Enter the element:";
   cin>>item;
   a[r]=item;
   }
   else
   {
   cout<<"Enter the element:";
   cin>>item;
   r++;
   a[r]=item;
   }
   }
   
   
    void dequeue()
   {
   	if(f==-1 && r==-1)
   	cout<<"Queue is Empty!!";
   	else
   	{
   	cout<<"Element popped out is:"<<a[f]<<"\n";
   	if(r==f)
   	{
	r=-1;f=-1;
	}
	else
	f++;
	}
   }
  





int main()
{ int c;
  cout<<"\n1.Enqueue\n2.Dequeue\n0.End\n";
  cin>>c;
  
  while(c!=0)
  {
  
  switch(c)
  {
  	case 1:enqueue();display();cout<<"\n";break;
   	case 2:dequeue();display();cout<<"\n";break;
  	default :break;
  }
cout<<"\n1.Enqueue\n2.Dequeue\n0.End\n";
cin>>c;
	
  }
}
