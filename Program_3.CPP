/*Program to read the contents from the text file STORY.TXT, count and
display the number of alphabets present in it*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char line[80], ch='y',x;
  int count=0;
  ofstream fout;
  fout.open("STORY.TXT");
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
  fin.open("STORY.TXT");
  fin.get(x);
  while(fin)
  {  if((x!=' ')&&(x!='\n'))
     count++;
     fin.get(x);
  }
  cout<<"The Number Of Alphabets In The File STORY.TXT Are --> "<<count;
  getch();
}
