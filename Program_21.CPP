/*Merging in 1D Array*/

#include<iostream.h>
#include<conio.h>

void merge(int [],int [],int [],int ,int );

void merge(int A[],int B[],int C[], int m,int n)
{  
  int i,j,k;
  i=j=k=0;

  while((i<m)&&(j<n))
  { 
    if(A[i]<=B[j])
    { 
      C[k]=A[i];
      i++;
    }
    else
    { 
      C[k]=B[j];
      j++;
    }

    k++;   }

    if(i==m)
    { 

      while(j<n)
      {  
        C[k]=B[j];
        j++;
        k++;
      }
    }
    else
    { 
      while(i<m)
      {
        C[k]=A[i];
        i++; k++;
      }
    }
  }

  void main()
  { 

    clrscr();
    int p,o,A[10],B[10],C[10],mn;

    cout<<"\n Enter no.of elements of 1st array(max10) ->";
    cin>>p;
    cout<<"\nEnter elements of 1st array :\n";
    for(int i=0;i<p;i++)
      cin>>A[i];
    cout<<"\nEnter no. of elements of 2nd array(max10)->";
    cin>>o;
    mn=p+o;
    cout<<"\nEnter elements of 2nd array :\n";
    for(i=0;i<o;i++)
      cin>>B[i];

    merge(A,B,C,p,o);                     //calling the function to merge.
    
    cout<<"\nMerged array is-> ";
    for(i=0;i<mn;i++)
      cout<<C[i]<<" ";
    cout<<endl;
    
    getch();
    
  }
