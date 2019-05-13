// CHARACTER I/O WITH get() AND put() FUNCTION
#include<iostream.h>
#include<conio.h>
main()
{
int count=0;
char c;
clrscr();

cout<<"ENTER INPUT TEXT : \n";
cin.get(c);

while(c!='\n')
{
cout.put(c);
count++;
cin.get(c);
}
cout<<" \n NUMBER OF CHARACTERS = : "<<count<<"\n\n";


getch();
return(0);
}
