/*Bubble Sort On 1D Array*/

#include<iostream.h>
#include<conio.h>

void bubblesort(int [],int );


void bubblesort(int arr[],int size)
{

	int temp,ctr=0;

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<(size-1)-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}

		cout<<"\nArray after iteration "<<++ctr<<" is : ";
		for(int k=0;k<size;k++)
			cout<<arr[k]<<" ";
		cout<<endl;
	}
}


void main()
{
	clrscr();
	int arr[50],n,item,index;

	cout<<"\nHow many elements do you need in the array : ";
	cin>>n;

	cout<<"\nEnter array elements : \n";

	for(int i=0;i<n;i++)
		cin>>arr[i];

	bubblesort(arr,n);

	cout<<"\nArray after all iterations is : ";

	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	getch();
}
