/*Program to count and display the number of lines not starting with the
 alphabet 'A' present in a text file "STORY.TXT". And to also count the
 number of blank present in this file...*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char line[80], ch='y',x;
  int count=0,numl=0;
  ofstream fout;
  fout.open("STORY.TXT");
  while(ch=='y'||ch=='Y')
  {
  cout<<"\nEnter the line (max 80 char)\n";
  gets(line);
  fout<<line<<"\n";
  cout<<"\nDo you want to enter more lines?(y/n)  ";
  cin>>ch;
  }
  fout.close();

  ifstream fin;
  fin.open("STORY.TXT");
  fin.getline(line,80);
  while(fin)
  { if(line[0]!='A')
    { numl++;
      cout<<line;
      for(int i=0;line[i]!='\0';i++)
      { if(line[i]==' ')
	   count++;
      }
    }
    else
    {  for(int i=0;line[i]!='\0';i++)
	  { if(line[i]==' ')
	   count++;
	  }
     }
    fin.getline(line,80);
  }
  fin.close();
  cout<<"\n\nThe lines not starting with alphabet 'A'\n"<<
	 "present in the text file 'STORY.TXT' are "<<numl;
  cout<<"\n\nThe number of blank spaces in the file 'STORY.TXT' are :"<<count;
  getch();
}
