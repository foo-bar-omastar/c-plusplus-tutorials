/* Circular queues */

#include<iostream.h>
#include<conio.h>
#include<process.h>
#define size 10
int q[size],front=-1,rear=-1;
void insert(int);
void dele();
void display();
void insert(int n)
{
 if(rear==size-1)
  rear=0;
else
  rear++;
if(front==rear)
{
  cout<<"\nQueue Overflow...";
  exit(1);
}
q[rear]=n;
if(front==-1)  front++;
}
void dele()
{
 if(front<0)
 {
   cout<<"\nQUEUE UNDERFLOW!!!"; exit(1);
 }
 cout<<"\nDELETED element is..."<<q[front];
 if(front==rear)   front=rear=-1;
 else
 {
   if(front==size-1)   front=0;
   else  front++;
 }
}
void display()
{
 int pos;
 if(front>=0)
 {
  cout<<"\nTotal size of queue..."<<size ;
  cout<<"\nQueue after the operation is performed...\n";
  if(front<=rear)
  {
   for(pos=front;pos<=rear;pos++)
     cout<<q[pos]<<" ";
 }
 else
 {
  for(pos=front;pos<size;pos++)
   cout<<q[pos]<<" ";
 for(pos=0;pos<=rear;pos++)
   cout<<q[pos]<<" ";
}
}
cout<<"\nFront="<<front<<"\nRear="<<rear;
}
void main()
{
 int ch;
 while(1)
 {
  clrscr();
  cout<<"\n1. Insert";
  cout<<"\n2. Delete";
  cout<<"\n3. Display";
  cout<<"\n4. End";
  cout<<"\nEnter Choice...";
  cin>>ch;
  switch(ch)
  {
   case 1:cout<<"\nEnter Element To Be INSERTED...";
   int n;
   cin>>n;
   insert(n); break;
   case 2:dele(); break;
   case 3:display(); break;
   case 4: exit(0); break;
   default:cout<<"\nInvalid Choice!!!"; break;
 }
 getch();
}

}
