/*Linear Search in 1 D Array*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	clrscr();

	int Lsearch(int arr[],int,int);
	int n,arr[50],s,p;

	cout<<"enter the size of the array(max50)";
	cin>>n;

	cout<<"\n enter the array elements";

	for(int i=0;i<n;++i)
		cin>>arr[i];

	cout<<"\n enter the element to be searched for";
	cin>>s;

	p=Lsearch(arr,n,s);

	cout<<"\n the position of the element is "<<p;
	getch();

}

int Lsearch(int arr[],int n,int s)
{
	for(int i=0;i<n;++i)
	{
		if(arr[i]==s)
			return i;
	}
	return 0;
}
