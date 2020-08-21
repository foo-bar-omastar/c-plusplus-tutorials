/*To read the contents from the file GAME.DAT and creats a file BASKET.DAT
  where records of all playing basketball is stored*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

struct game
{ char gamename[20];
  char participant[10][30];
};
void main()
{ clrscr();
  char ch='y', b[]="Basketball";
  game sport;
  ofstream fout;
  fout.open("GAME.DAT",ios::binary);
  while(ch=='y'||ch=='Y')
  { cout<<"Enter the name of the game:\n";
    gets(sport.gamename);
    cout<<"Enter the participants:\n";
    for(int i=0;i<3;i++)
    { gets(sport.participant[i]);
    }
    fout.write((char*)&sport, sizeof(sport));
    cout<<"Do you want to enter more records? (y/n): ";
    cin>>ch;
  }
  fout.close();

  ifstream fin;
  fin.open("GAME.DAT",ios::binary);
  fout.open("BASKET.DAT",ios::binary);
  fin.read((char*)&sport, sizeof(sport));
  while(fin)
  {  int p=strcmp(b,sport.gamename);
     if(p==0)
     { fout.write((char*)&sport, sizeof(sport));
     }
  fin.read((char*)&sport, sizeof(sport));
  }
  fin.close();
  fout.close();
  fin.open("BASKET.DAT",ios::binary);
  fin.read((char*)&sport, sizeof(sport));
  while(fin)
  {
    cout<<"\n"<<sport.gamename;
    cout<<"\nParticipants:";
    for(int i=0;i<3;i++)
    {
    cout<<"\n"<<sport.participant[i]; }
    fin.read((char*)&sport, sizeof(sport));
  }
  fin.close();
getch();
}
