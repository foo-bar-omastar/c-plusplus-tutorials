/*Insertion In 1D Array */

#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();

	int findpos(int arr[],int n,int s);
	int arr[50],n,s,p;

	cout<<"enter the size of the array";
	cin>>n;
	cout<<"\n enter the array elements(must be in a sorted way)";

	for(int i=0;i<n;++i)
		cin>>arr[i];

	char ch='y';

	while(ch=='y')
	{

		cout<<"\n enter the element to be inserted";
		cin>>s;

		p=findpos(arr,n,s);

		for(i=n;i>p;--i)
		{
			arr[i]=arr[i-1];
		}

		arr[p]=s;
		n+=1;

		cout<<"\n want to enter more(y/n)";
		cin>>ch;

	}

	cout<<"\n the new array is:";

	for(i=0;i<n;++i)
		cout<<' '<<arr[i];
	getch();
}

int findpos(int arr[],int n,int s)
{
	int pos;
	if(s<arr[0])
		pos=0;
	else
	{
		for(int i=0;i<n-1;++i)
		{
			if(arr[i]<=s&&s<arr[i+1])
			{
				pos=i+1;
				break;
			}
		}
		if(i==n-1)
			pos=n;
	}
	return pos;
}
