/*Program To Update the file with a new “no. of people” after the execution of the program.*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct colony
  { char colony_code[10];
    char colony_name[20];
    int no_of_people;
  };
void main()
{ clrscr();
  colony col;
  char ch='y',code[10];
  int count=0;
  ofstream fout;
  fout.open("colony.dat", ios::binary);
  while(ch=='y'||ch=='Y')                      //Entering records in the file
  { cout<<"Enter the code of the colony:\n";
    gets(col.colony_code);
    cout<<"\nEnter the name of the colony:\n";
    gets(col.colony_name);
    cout<<"\nEnter the number of people in the colony:\n";
    cin>>col.no_of_people;
    fout.write((char*)&col, sizeof(col));
    cout<<"Do you want to enter more records?(y/n) ";
    cin>>ch;
  }
  fout.close();
  fstream fin;
  fin.open("colony.dat",ios::binary|ios::in|ios::out);
  fin.read((char*)&col, sizeof(col));
  cout<<"\nEnter the code of the colony of"<<
	" whose number of people you want to change";
  gets(code);
  while(fin)
  { int p=strcmp(col.colony_code,code);
    if(p==0)
    { cout<<col.colony_code<<'\n'<<col.colony_name;
      cout<<"\nEnter the new number of people:\n";
      cin>>col.no_of_people;
      int x=fin.tellg();                //current position of the pointer
      fin.seekg(x-sizeof(col));         //changing the position to overwrite.
      fin.write((char*)&col, sizeof(col));
      count++;
    }
    fin.read((char*)&col, sizeof(col));
  }
  if(count==0)
  cout<<"No colony with that code exists !";
  fin.close();
  getch();                                   //to freeze the screen
}

