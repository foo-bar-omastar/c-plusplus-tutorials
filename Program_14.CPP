/*Traversal Of An Array*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

clrscr();
int arr[50],s,n,p;

cout<<"Enter the size of the array (max50) : ";
cin>>n;

cout<<"\nEnter the array elements: \n";

for(int i=0;i<n;++i)
	cin>>arr[i];

cout<<"\nThe new array is as follows: \n";

for(i=0;i<n;++i)
{
	arr[i]*=3;
	cout<<' '<<arr[i];
}

getch();

}

