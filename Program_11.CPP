/*Program to read the contents of the file APPLY.DAT and display the details of those students whose A_Score is above 70*/
#in clude<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

class applicant
 { char a_rno[10];
   char a_name[30];
   int a_score;
   public:
   void enroll()
   { cout<<"rollno: ";
     gets(a_rno);
     cout<<"name: ";
     gets(a_name);
     cout<<"score: ";
     cin>>a_score;
   }
   void status()
   { cout<<setw(12)<<a_rno;
     cout<<setw(32)<<a_name;
     cout<<setw(3)<<a_score<<endl;
   }
   int returnscore()
   { return a_score; }
 }a;
void main()
{ clrscr();
  void input();
  void display();
  input();
  display();
getch();
}
void input()
{ char ch='y';
  ofstream fout;
  fout.open("appy.dat", ios::binary);
  while(ch=='y'||ch=='Y')
  { a.enroll();
    fout.write((char*)&a, sizeof(a));
    cout<<"Do you want to enter more records?(y/n)";
    cin>>ch;
  }
  fout.close();
}
void display()
{ int count=0;
  ifstream fin;
  cout<<"\nStudents scoring more than 70 marks are:\n";
  fin.open("appy.dat",ios::binary);
  fin.read((char*)&a,sizeof(a));
  while(fin)
  { if(a.returnscore()>70)
    { a.status();
      count++;
    }
    fin.read((char*)&a, sizeof(a));
  }
  if(count==0)
  cout<<"No student scored more than 70";
 fin.close();
}

