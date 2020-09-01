/*Insertion Sort In 1D Array*/

#include<iostream.h>
#include<conio.h>
#include<limits.h>

void insertsort(int [],int );

void main()
{
	clrscr();
	int ar[10],ITEM,n,index;

	cout<<"\nHow many elements do you want in the array : ";
	cin>>n;
	cout<<"\nEnter array elements : \n";

	for(int i=1;i<=n;i++)
		cin>>ar[i];

	insertsort(ar,n);

	cout<<"\nThe sorted array is : ";

	for(i=1;i<=n;i++)
		cout<<ar[i]<<" ";

	cout<<endl;

	getch();
}

void insertsort(int ar[],int size)
{
	int temp,j;
	ar[0]=INT_MIN ;
	for(int i=1;i<=size;i++)
	{
		temp=ar[i];
		j=i-1;
		while(temp<ar[j])
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=temp;
		cout<<"\nArray after pass "<<i<<" is : ";
		for(int k=1;k<=size;k++)
			cout<<ar[k]<<" ";
		cout<<endl;
	}
}
