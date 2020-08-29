/*Deletion In 1D Array..*/

#include<iostream.h>
#include<conio.h>

int Bsearch(int [],int,int);
void main()
{
 int arr[50];
 int n,s,i,c;
 cout<<"Enter the desired array size(max 50) : ";
 cin>>n;
 cout<<"Enter array elements(in ascending) ";
 for(i=0;i<n;i++)
   cin>>arr[i];
 cout<<"Enter the elements to be deleted";
 cin>>s;
 c=Bsearch(arr,n,s);
 if(c==-1)
   cout<<"The element to be deleted is not present in the given array";
 else
 {
   for(i=c+1;i<n;i++)
     arr[i-1]=arr[i];
   cout<<"The array after deletion of element is : ";
   for(i=0;i<n-1;i++)
     cout<<arr[i]<<" ";
       }            //end of else
       getch();
}             //end of main
int Bsearch(int arr[],int n,int s)
{
 int beg,last,mid;
 beg=0;last=n-1;
 while(beg<=last)
 {
   mid=(beg+last)/2;
   if(s==arr[mid])
     return mid;
   else if (s>arr[mid])
     beg=mid+1;
   else last=mid-1;
       }           //end of while loop
       return -1;
}
