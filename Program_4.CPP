/*Program to print the count of the word “is” as an indepenent character in a file STORY.TXT*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char line[80], ch='y';
  int count=0;
  ofstream fout;
  fout.open("STORY.TXT");
  while(ch=='y'||ch=='Y')
  {
  cout<<"\nEnter the  sentence\n";
  gets(line);
  fout<<line<<"\0";
  cout<<"\nDo you want to enter more? (y/n)....";
  cin>>ch;
  }
  fout.close();
  ifstream fin;
  fin.open("STORY.TXT");
  fin.get(ch);
  while(fin)
  {
     if(ch==' ')
     { fin.get(ch);
       if(ch=='i'||ch=='I')
       { fin.get(ch);
	if(ch=='s'||ch=='S')
	{ fin.get(ch);
	  count++;
	}
       }
     }
    fin.get(ch);
  }
  fin.close();
  cout<<"The number of times word 'is' present in the file 'STORY.TXT' are.."
       <<count;
getch();                                       //To freeze the screen.
}
