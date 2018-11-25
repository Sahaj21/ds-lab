#include<iostream>
using namespace std;


int a[5],f=-1,r=-1;


  int display()
 
  {if(r>=0 && f>=0)		
  {
    
  int i=f;
  if(r==f)
  {
  cout<<a[f];
  }
  else
  {
  do
  {cout<<a[i];
  i=(++i)%5;
  	
  }while(i!=r);
  cout<<a[i];
  }
  }

  }

void enqueue()
   {
   int item;
   if((r==4 && f==0)||r+1==f)
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
   r=(++r)%5;
   cout<<"Enter the element:";
   cin>>item;
   a[r]=item;
   }
   }
   
   
    void dequeue()
   {
   	if(f==-1 && r==-1)
   	cout<<"Queue is Empty!!";
   	else if(r==f)
   	{
   	cout<<"Element popped out is:"<<a[f]<<"\n";
	r=-1;f=-1;
	}
	else
	{
	cout<<"Element popped out is:"<<a[f]<<"\n";	
	f=(++f)%5;
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
