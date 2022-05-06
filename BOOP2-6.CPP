#include<iostream.h>
#include<conio.h>
//using namespace std:
int main()
{
int a,b,ans;
cout<<"ENTER A :";
cin>>a;
cout<<"ENTER B :";
cin>>b;
clrscr();
ans=a;
a=b;
b=ans;
cout<<"VALUE OF A IS:"<<a<<endl;
cout<<"VALUE OF B IS:"<<b<<endl;
getch();
return 0;
}