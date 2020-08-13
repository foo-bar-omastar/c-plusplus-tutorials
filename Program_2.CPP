/*Assuming That a text file named FIRST.TXT contains some text written into
it, A function vowelwords() that reads the file FIRST.TXT and creates a new
file named SECOND.TXT to contain only those words from the first file which
starts with a lower case vowel (i.e --> a,e,i,o,u) */
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
  void vowelwords();
  char line[20], ch='y';
  ofstream fout;
  fout.open("FIRST.TXT");
  while(ch=='y'||ch=='Y')
  {
  cout<<"\nEnter the word\n";
  gets(line);
  fout<<line<<" ";
  cout<<"\nDo you want to enter more words?(y/n)  ";
  cin>>ch;
  }
  fout.close();
  vowelwords();
  getch();
}
void vowelwords()
{ char ch, x=' ';
  ifstream fin("FIRST.TXT");
  ofstream fout("SECOND.TXT");
  fin.get(ch);
  while(fin)
  { if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {  while(ch!=' ')
       {
	 fout<<ch;
	 fin.get(ch);
	 if(ch==' ')             //For space between words.
	 fout<<" ";

       }
    }
    else
    {
      while(ch!=' ')
      { fin.get(ch);}
    }
    fin.get(ch);
  }
  fin.close();
  fout.close();
}
