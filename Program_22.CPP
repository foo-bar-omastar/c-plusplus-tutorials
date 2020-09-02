/*Stack Implemented In form of arrays*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
#define max 10
int stk[max],top=-1;
void push();
void pop();
void display();
void main()
{   clrscr();
	int ch;
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
			case 1 : push();
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
void push()
{    if(top==max-1)
	cout<<"\nOverflow";
	else
		{	  cout<<"\nEnter the element to be inserted : ";
	cin>>stk[++top];
}
}
void pop()
{
	if(top==-1)
		cout<<"\nUnderflow";
	else
		cout<<"\nElement deleted "<<stk[top--]<<"\n";
}
void display()
{
	int i;
	if(top==-1)
		cout<<"\nEmpty stack";
	else
	{
		for(i=top;i>=0;i--)
			cout<<"\n"<<stk[i];
	}
}
