// PADDING WITH fill() FUNCTION
#include<iostream.h>
#include<conio.h>

main()
{
int n;
clrscr();
cout.fill('<');
cout.precision(3);
for(n=1;n<=6;n++)
{
cout.width(5);
cout<<n;
cout.width(10);
cout<<1.0/float(n)<<"\n";
if(n==3)
cout.fill('>');
}
cout<<"\n PADDING CHANGED \n\n";
cout.fill('#');
cout.width(15);
cout<<12.345678;
getch();
return(0);
}
