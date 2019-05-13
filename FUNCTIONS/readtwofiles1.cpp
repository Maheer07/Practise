// READING FROM TWO FILES SIMULTANEOUSLY
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
main()
{
clrscr();
const int SIZE=80;
char line[SIZE];

ifstream fin1,fin2;
fin1.open("country");
fin2.open("capital");

for(int i=1;i<=10;i++)
{
if(fin1.eof()!=0)
{
cout<<" EXIT FROM COUNTRY \n"
exit(1);
}
fin1.getline(line,SIZE);
cout<< "CAPITAL OF "<<line;


if(fin2.eof()!=0)
{
cout<<" EXIT FROM CAPITAL \n"
exit(1);
}
fin2.getline(line,SIZE);
cout<<line<<" \n";
}
getch();
return(0);
}

