/*To find the output of the file "data.dat" if it contains the string "ABC"
 before execution of the program....where " " are not a part of the file*/
#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
char ch='A';
fstream fileout("data.dat",ios::app);
fileout<<ch;
fileout.seekg(0,ios::end);
int p=fileout.tellg();
cout<<p;
getch();
}
