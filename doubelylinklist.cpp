#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
	{
	int data;
	node *linkl;
	node *linkr;
	};
	node *root=NULL;
	
	int length()
	{
	int count=0;
	node *p;
	p=root;
	
	while(p!=NULL)
	{
	count++;
	p=p->linkr;
    }
    return count;
    }
    
    
    void addAtBegining()
    {
	node *temp;
    temp=(node*)malloc(sizeof(node));
    cout<<"Enter Number:";
    cin>>temp->data;
    temp->linkr=NULL;
    temp->linkl=NULL;
    if(root==NULL)
	{
	root=temp;
		
	}
	else
	{
	temp->linkr=root;
	root=temp;
	
	}
	
	}
	
	 void addAtEnd()
    {
	node *temp;
    temp=(node*)malloc(sizeof(node));
    cout<<"Enter Number:";
    cin>>temp->data;
    temp->linkr=NULL;
    temp->linkl=NULL;
    
    if(root==NULL)
	{root=temp;	
	}
	else
	{node *p;
	p=root;
	while(p->linkr!=NULL)
	{p=p->linkr;
	}
	p->linkr=temp;
	temp->linkl=p;
	}
	
	}
	
	void addAfter()
    {int loc,len,i=1;
	
    len=length();
    cout<<"Enter The Location After You Want To Add :";
	cin>>loc;
	
	if(loc>len)
	{cout<<"Invalid Location!!";
	}
	else
	{
	node *temp;
    temp=(node*)malloc(sizeof(node));
    cout<<"Enter Number:";
    cin>>temp->data;
	
	if(loc==0)
	{
	temp->linkr=root;
	root=temp;
	
	}
	else
	{
	node *p;
	p=root;
	
	while(i<loc)
	{
	p=p->linkr;
	i++;
	}
	
	temp->linkr=p->linkr;
	p->linkr=temp;
	temp->linkl=p;
	}
	}
	
}
    void deleteAt()
    {
    	node *temp,*p,*q;
    	int loc,len;
    	len=length();
    	
    	cout<<"Enter The Location Which You Want To Delete:";
    	cin>>loc;
    	
    	if(loc>len ||loc==0)
    	{
    	cout<<"\nInvalid Location!!\n";	
		}
		else if(loc==1)
		{
		temp=root;
		root=temp->linkr;
		temp->linkr=NULL;
		free(temp);
		}
		else
		{
			p=root;
			int i=1;
			while(i<(loc-1))
			{p=p->linkr;
			i++;
			}
			q=p->linkr;
			p->linkr=q->linkr;
			q->linkr->linkl=p;
			q->linkr=NULL;
			q->linkl=NULL;
			
			free(q);
		}	
	}
	
	void display()
	{
		node *temp;
		temp=root;
		if(temp==NULL)
       {cout<<"\nList Is Empty\n";
       }  
       else
       {
	   while(temp!=NULL)
       {
       	cout<<"->"<<temp->data;
       	temp=temp->linkr;
	   }
	   
	   }
	}


int main()
{ 
   
   int c,l;
  
  display();
  cout<<"\n1.AtBegining\n2.AtEnd\n3.After\n4.Delete\n5.Length\n0.End\n";
  cin>>c;
  
  while(c!=0)
  {
  
  switch(c)
  {
  	case 1:addAtBegining();display();cout<<"\n";break;
   	case 2:addAtEnd();display();cout<<"\n";break;
   	case 3:addAfter();display();cout<<"\n";break;
   	case 4:deleteAt();display();cout<<"\n";break;
   	case 5:l=length();cout<<"Length is:"<<l<<"\n";display();cout<<"\n";break;
  	default :break;
  }
cout<<"\n1.AtBegining\n2.AtEnd\n3.AddAfter\n4.Delete\n5.Length\n0.End\n";
cin>>c;
	
  }
}
	
	
