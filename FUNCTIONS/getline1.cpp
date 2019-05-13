// READING STRINGS WITH getline() function
#include<iostream.h>
#include<conio.h>
main()
{
int size=20;
char city[20];
clrscr();

cout<<"ENTER CITY NAME : \n";
cin>>city;
cout<<" CITY NAME : "<<city<<"\n\n";


cout<<"ENTER CITY NAME AGAIN: \n";
cin.getline(city,size);
cout<<" CITY NAME now : "<<city<<"\n\n";

cout<<"ENTER ANOTHER CITY NAME : \n";
cin.getline(city,size);
cout<<" NEW CITY NAME : "<<city<<"\n\n";
getch();
return(0);
}
