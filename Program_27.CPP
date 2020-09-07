/*Program To Illustrate The Dynamic allocation of memory with pointers...*/
#include<iostream.h>
#include<conio.h>
#include<process.h>

int *rollno;                  //Declaration of int pointer for rollno array
float *marks;                 //Declare a float pointer for marks array

void main()
{ 
	clrscr();
	int size;
	
	cout<<"\nHow Many elements are there in the array?\n";
	cin>>size;
	
 rollno= new int[size];    //dynamically allocate rollno array
 marks= new float[size];   //Dynamically allocate marks array
 
 //Check whether memory is available or not...
 if((!rollno)||(!marks))
 {
 	cout<<"Out Of Memory...ABORTING...!!";
 	exit(1);
 } 

 //Read in values of the array elements..
 for(int i=0;i<size;i++)
 {
 	cout<<"\nEnter Rollno and Marks for student "<<i+1<<" \n";
 	cin>>rollno[i]>>marks[i];
 }
 
 //Display The Array Contents
 cout<<"\n\tRoll No. \tMarks\n";
 for(i=0;i<size;i++)
 	{  cout<<"\t"<<rollno[i]<<"\t\t"<<marks[i]<<"\n";}
 
 delete[]rollno;   //Deallocating rollno array
 delete[]marks;    //Deallocating Marks array...
 getch();
}
