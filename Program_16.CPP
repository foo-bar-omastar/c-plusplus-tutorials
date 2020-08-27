/*Binary Search In 1D Array.*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	clrscr();
	int Bsearch(int arr[],int,int);
	int n,arr[50],s,p;

	cout<<"\nEnter the size of the array (max 50) : ";
	cin>>n;
	cout<<"\nEnter the array elements : \n";
	
	for(int i=0;i<n;++i)
		cin>>arr[i];
	
	cout<<"\nEnter the element to be searched for : ";
	cin>>s;
	
	p=Bsearch(arr,n,s);
	
	cout<<"\nThe position of the element is : "<<p;
	
	getch();
}

int Bsearch(int arr[],int n,int s)
{
	int beg=0,last=n-1,mid;

	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(s==arr[mid])
			return mid+1;
		else if(s>arr[mid])
			beg=mid+1;
		else last=mid-1;
	}
	return 0;
}
