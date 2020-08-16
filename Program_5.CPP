/*Program to print the count of the word “THE” as an independent word in a text file DIALOGUE.TXT*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  char line[80], ch='y';
  int count=0;
  ofstream fout;
  fout.open("DIALOGUE.TXT");
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
  fin.open("DIALOGUE.TXT");
  fin.get(ch);
  while(fin)
  {  if(ch==' ')
     { fin.get(ch);
       if(ch=='t'||ch=='T')
       { fin.get(ch);
	 if(ch=='h'||ch=='H')
	 { fin.get(ch);
	   if(ch=='e'||ch=='E')
	   count++;
	 }
       }
     }
     fin.get(ch);
  }
  fin.close();
  cout<<"\nThe number of word 'the' in the file 'DIALOGUE.TXT' are.."<<count;
getch();
}
