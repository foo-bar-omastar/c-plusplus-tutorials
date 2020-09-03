/*Stack Implemented As Linked List */

#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{
	int data;
	node*next;
}*top=NULL,*temp=NULL,*p=NULL;

void push(int);
void pop();
void display();


void main()
{   clrscr();
	int ch,n;
	while(1)
	{
		cout<<"\n1.PUSH";
		cout<<"\n2.POP";
		cout<<"\n3.DISPLAY";
		cout<<"\n4.EXIT";
		cout<<"\nEnter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"\nEnter the element to be inserted : ";
			cin>>n;
			push(n);
			break;
			case 2 : pop();
			break;
			case 3 : display();
			break;
			case 4 : exit(0);
			default : cout<<"\nInvalid choice ";
		}
	}
	getch();
}
void push(int n)
{
	temp=new node;
	if(temp==NULL)
		cout<<"\nCannot create new node";
	else
	{
		temp->data=n;
		temp->next=top;
		top=temp;
	}
}
void pop()
{
	if(top==NULL)
		cout<<"\nEmpty stack";
	else
	{
		temp=top;
		cout<<"\nItem popped out is : "<<top->data<<"\n";
		top=top->next;
		delete temp;
	}
}
void display()
{
	p=top;
	if(top==NULL)
		cout<<"\nStack is empty";
	else
	{
		while(p!=NULL)
		{
			cout<<p->data<<"\n";
			p=p->next;
		}
	}
}
