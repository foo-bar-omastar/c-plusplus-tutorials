/*Program to search the file for the student details in the file on the basis of rollno. supplied*/

#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class student
{ char name[30];
  int rno;
  int marks;
  public:
  void read()
  { cout<<"Enter Name:  ";
    gets(name);
    cout<<"Enter Rollno: ";
    cin>>rno;
    cout<<"Enter marks:  ";
    cin>>marks;
  }
  void display()
  { cout<<"\nName: "<<name;
    cout<<"\nRollno: "<<rno;
    cout<<"\nMarks: "<<marks;
  }
  int returnrno()
  { return rno; }
}stud;
void main()
{ clrscr();
  void enter();
  void search();
  enter();
  search();
getch();
}
void enter()
{ char ch='y';
  ofstream fout;
  fout.open("student.dat",ios::binary);
  while(ch=='y'||ch=='Y')
  { stud.read();
    fout.write((char*)&stud, sizeof(stud));
    cout<<"Do you want to enter more records?(y/n) :";
    cin>>ch;
  }
}
void search()
{ int rn,count=0;
  ifstream fin;
  fin.open("student.dat",ios::binary);
   cout<<"\nEnter the rollno for the student record to be searched for:\n";
   cin>>rn;
   fin.seekg(0,ios::beg);
   fin.read((char*)&stud, sizeof(stud));
   while(fin)
   { if(stud.returnrno()==rn)
     { stud.display();
       count++;
     }
    fin.read((char*)&stud, sizeof(stud));
   }
  if(count==0)
  cout<<"No record with that rollno found";
  fin.close();
  }
