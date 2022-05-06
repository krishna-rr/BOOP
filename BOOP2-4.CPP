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

ans=a+b;
cout<<"A+B IS="<<ans<<endl;

ans=a-b;
cout<<"A-B IS="<<ans<<endl;

ans=a*b;
cout<<"A*B IS="<<ans<<endl;

ans=a/b;
cout<<"A/B IS="<<ans<<endl;

ans=a%b;
cout<<"A%%B IS="<<ans<<endl;

getch();
return 0;
}