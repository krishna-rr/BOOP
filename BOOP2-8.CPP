#include<iostream.h>
#include<conio.h>
//using namespace std:
int main()
{
int n1=0,n2=1,n3,i,number;
cout<<"ENTER THE NUMBER IS:";
cin>>number;
clrscr();
cout<<n1<<endl;
cout<<n2<<endl;
for(i=2;i<number;i++)
{
n3=n1+n2;
cout<<n3<<endl;
n1=n2;
n2=n3;
}
getch();
return 0;
}
