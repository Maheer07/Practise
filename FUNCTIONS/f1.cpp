// WORKING WITH SINGLE FILE CREATING FILES WITH CONSTRUCTOR FUNCTION
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
main()
{
char name[30];
float cost;
ofstream outf("ITEM");
clrscr();
cout<<"ENTER ITEM NAME : ";
cin>>name;
outf<<name<<"\n";
cout<<"ENTER ITEM COST : ";
cin>>cost;
outf<<cost<<"\n";
outf.close();

ifstream inf("ITEM");
inf>>name;
inf>>cost;
cout<<"\n";
cout<<"ITEM NAME : "<<name<<"\n";
cout<<"ITEM COST : "<<cost<<"\n";
inf.close();
getch();
return(0);
}