/* Program to calculate grade of students based on marks */

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>

int i;

class student
{
	int rollno;
	char name[30],grade;
	float marks[10],total;
public:
	void getdata();
	void calculate();
	void showdata();
}stud;

void student :: calculate()
{
	float total=0;

	for(i=0;i<5;i++)
	{
		total+=marks[i];
	}
	if(total>400)
		grade='A';
	else if(300<total<400)
		grade='B';
	else if(200<total<300)
		grade='C';
	else if(150<total<200)
		grade='D';
	else if(100<total<150)
		grade='E';
	else if(total<100)
		grade='F';
}

void student::showdata()
{
	calculate();
	cout<<"\nname:"<<name<<"\nstudent rollno:"<<rollno<<"\ngrade:"<<grade;
}

void student::getdata()
{
	cout<<"\nenter name of student:";
	gets(name);
	cout<<"\nenter rollno of student:";
	cin>>rollno;
	for(i=0;i<5;i++)
	{
		cout<<"enter marks (out of 100) in subject"<<i+1<<":";
		cin>>marks[i];
	}
	calculate();
}
void create()
{int n,i=0;
	ofstream fout;
	fout.open("student.dat",ios::out|ios::binary);
	cout<<"\nEnter how many students?:";
	cin>>n;
	do
	{  stud.getdata();  i++;
		fout.write((char*)&stud,sizeof(stud));
	} while(i<n);
	fout.close();
}

void readfile()
{
	ifstream fin;
	fin.open("student.dat",ios::in|ios::binary);
	fin.read((char*)&stud,sizeof(stud));
	while(fin)
	{
		stud.showdata();
		fin.read((char*)&stud,sizeof(stud));
	}
	fin.close();
}


void main()
{
	clrscr();
	create();
	readfile();
	getch();
}
