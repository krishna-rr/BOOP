#include<iostream.h>
#include<conio.h>
//using namespace std:
int main()
{
int i,j,n;
cout<<"enter the number";
cin>>n;
clrscr();
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	cout<<"*";
	}
cout<<"\n";
}
getch();
return 0;
}