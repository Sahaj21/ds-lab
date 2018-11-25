#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
	{
	int data;
	node *link;
	};
	node *root=NULL;
	
	void push()
    {
	node *temp;
    temp=(node*)malloc(sizeof(node));
    cout<<"Enter Number:";
    cin>>temp->data;
    
    if(root==NULL)
	{
	root=temp;
	temp->link=NULL;	
	}
	else
	{
	temp->link=root;
	root=temp;
	
	}
	
	}
	 void pop()
    {
    	node *temp;
    	
		
		temp=root;
			if(temp==NULL)
       {//nothing
       }
	   else
		{
		
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	
		
}
		
			void display()
	{
		node *temp;
		temp=root;
		if(temp==NULL)
       {cout<<"\n Stack Is Empty\n";
       }  
       else
       {
	   while(temp!=NULL)
       {cout<<" ^\n";
       	cout<<"|"<<temp->data<<"|\n";
       	
       	temp=temp->link;
	   }
	    
       	
	   }
	}

		
		
		int main()
{ 
   
   int c,l;
  
  display();
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
