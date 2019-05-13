// WORKING WITH MULTIPLE FILES OPEN() FUNCTION
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
clrscr();
ofstream fout;
fout.open("country");
fout<<" UNITED STATES OF AMERICA \n";
fout<<" UNITED KINGDOM \n";
fout<<" SOUTH KOREA \n";
fout.close();

fout.open("capital");
fout<<" Washington \n";
fout<<" London \n";
fout<<" Seoul \n";
fout.close();

cin>>name;
outf<<name<<"\n";
cout<<"ENTER ITEM COST : ";
cin>>cost;
outf<<cost<<"\n";
outf.close();

const int N=80;
char line[N];
ifstream fin;
fin.open("country");

cout<<" CONTENTS OF COUNTRY FILE \n";
while(fin)
{
fin.getline(line,N);
cout<<line;
}
fin.close();

fin.open("capital");
cout<<"\n CONTENTS OF CAPITAL FILE : \n";
while(fin)
{
fin.getline(line,N);
cout<<line;
}
fin.close();
getch();
return(0);
}



inf.close();
getch();
return(0);
}