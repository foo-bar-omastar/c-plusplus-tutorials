/*Program in C++ to count and display the number of Lines starting with 'A' 
present in the file 'LINES.TXT'*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char line[80], ch='y';
  int count=0;
  ofstream fout;
  fout.open("LINES.TXT", ios::app);
  while(ch=='y'||ch=='Y')
  {
  cout<<"\nEnter the  sentence\n";
  gets(line);
  fout<<line<<"\n";
  cout<<"\nDo you want to enter more?(y/n)  ";
  cin>>ch;
  }
  fout.close();
  ifstream fin;
  fin.open("LINES.TXT");
  fin>>line;
  while(fin)
  { if(line[0]=='A')
    count++;
    fin>>line;
  }
  fin.close();
  cout<<"\nThe Number Of Lines From  the File LINES.TXT Which\n”;
  cout<<”Start With The Alphabet  – A – is --> “<<count;
  getch();
}
