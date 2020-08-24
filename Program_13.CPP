/*Assuming The class stock....the following functions are performed:
 1. Write the objects of STOCK to the binary file STOCK.DAT
 2. Read the objects of STOCK fromthe binary file STOCK.DAT and display them
    on the screen...
 3. Count and Display the number of records in the file...      */
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
void enter();
void display();
void countit();
class stock{
	    int itno;
	    char item[10];
	    public:
	    void getit()
	    {
	     cout<<"\nEnter The Item Number..\n";
	     cin>>itno;
	     cout<<"\nEnter The Item\n";
	     gets(item);
	    }
	    void showit()
	    {
	     cout<<"\n\t"<<itno<<" --> "<<item;
	     cout<<endl;
	    }
	   };
stock s1;
void main()
{
 clrscr();
 int ch;
 cout<<"\t\t\t\t:: Welcome To Stock Menu ::\n";
 cout<<"Enter Your Choice [1-3]:";
 cout<<"\n1.Enter Details";
 cout<<"\n2.View Details";
 cout<<"\n3.Count Number Of Records\n";
 cin>>ch;
 switch(ch)
 {
  case 1 :enter();   break;
  case 2 :display(); break;
  case 3 :countit(); break;
  default:cout<<"WRONG CHOICE!!!\nEXITING!!!"; break;
 }
 getch();
}
void enter()
{
 ofstream fout;
 fout.open("STOCK.DAT",ios::binary|ios::app);  //file STOCK.DAT opened for writing to it...
 char ch='y';
 while(ch != 'n' && ch != 'N')
 {
	s1.getit();
	fout.write((char*)&s1,sizeof(s1));
	cout<<"Want to add more records (y/n) : ";
	cin>>ch;
 }
 fout.close();
}
void display()
{
 ifstream fin;
 fin.open("STOCK.DAT",ios::in|ios::binary);  //file STOCK.DAT opened for reading from it...
 fin.read((char*)&s1,sizeof(s1));
 while(fin)
 {
  s1.showit();
  fin.read((char*)&s1,sizeof(s1));
 }
 fin.close();
 return;
}
void countit()
{
 ifstream fin;
 fin.open("STOCK.DAT",ios::in|ios::binary);
 cout<<"\nThe No Of Records Are...";
 fin.seekg(0,ios::end); //setting
 float a=fin.tellg(); //Telling
 float records= a/sizeof(s1);
 cout<<records;
 fin.close();
 return;
}
