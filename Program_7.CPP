/*Program to display the size of file "PARA.TXT" in bytes*/
#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
fstream fin;
fin.open("PARA.TXT",ios::in|ios::out|ios::ate);
char ans='y';
int rollno;
float marks;
while(ans=='y'||ans=='Y')
{
cout<<"\n Enter Rollno. : ";
cin>>rollno;
cout<<"\n Enter Marks : ";
cin>>marks;
fin<<rollno<<"\n"<<marks<<"\n";
cout<<"\n Want to enter more records?(y/n)...";
cin>>ans;
}
if(!fin)
{   cout<<"Sorry! Cannot open the file";
   exit(-1);
}
long bytes=fin.tellg();
cout<<"File size is "<<bytes<<" bytes \n";
getch();
}
