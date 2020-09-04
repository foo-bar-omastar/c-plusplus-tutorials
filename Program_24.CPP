/*Queue Implemented As An Array*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
#define max 20
int q[max],f=-1,r=-1;
void insert();
void del();
void display();
void main()
{   clrscr();
	int ch;
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
			case 1 : insert();
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
void insert()
{
	if(r==max-1)
		cout<<"\nOverflow";
	else
	{
		cin>>q[++r];
		if(f==-1)
			f++;
	}
}
void del()
{
	if(f==-1)
		cout<<"Underflow";
	else
		cout<<"\nElement deleted : "<<q[f++];
	if(f>r)
	{
		f=-1;
		r=-1;
	}
}
void display()
{
	int i;
	if(f==-1)
		cout<<"\nQueue is empty";
	else
		for(i=f;i<=r;i++)
			cout<<q[i];
	}
