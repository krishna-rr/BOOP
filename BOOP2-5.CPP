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
cout<<"ENTER ANS";
cin>>ans;
clrscr();
switch(ans)
{
case 1:
ans=a+b;
cout<<"A+B IS="<<ans<<endl;
break;

case 2:
ans=a-b;
cout<<"A-B IS="<<ans<<endl;
break;

case 3:
ans=a*b;
cout<<"A*B IS="<<ans<<endl;
break;

case 4:
ans=a/b;
cout<<"A/B IS="<<ans<<endl;
break;

default:
ans=a%b;
cout<<"A%%B IS="<<ans<<endl;
break;
}
getch();
return 0;
}