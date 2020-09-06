/*Queue Implemented As Linked List*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{
	int data;
	node*next;
}*front=NULL,*rear=NULL,*p=NULL,*temp;
void insert(int);
void del();
void display();
void main()
{   clrscr();
	int ch,n;
	while(1)
	{
		cout<<"\n1.INSERT";
		cout<<"\n2.DELETE";
		cout<<"\n3.DISPLAY";
		cout<<"\n4.EXIT";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"\nEnter the element to be inserted : ";
			cin>>n;
			insert(n);
			break;
			case 2 : del();
			break;
			case 3 : display();
			break;
			case 4 : exit(0);
			default : cout<<"\nInvalid choice ";
		}
	}
	getch();
}
void insert(int n)
{
	temp=new node;
	if(temp==NULL)
		cout<<"\nQueue is full";
	temp->data=n;
	temp->next=NULL;
	if(front==NULL)
	{
		rear=front=temp;
	}
	else
	{
		rear->next=temp;
		rear=rear->next;
	}
}
void del()
{
	if(front==NULL)
		cout<<"\nQueue is full";
	else
	{
		int n1;
		n1=front->data;
		cout<<"\nDeleted item is : "<<n1;
		temp=front;
		front=front->next;
		delete temp;
	}
}
void display()
{
	if(front)
	{
		p=front;
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
	}
	else
		cout<<"\nQueue is empty";
}
