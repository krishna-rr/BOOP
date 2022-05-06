#include<conio.h>
#include<iostream.h>
int fun(int&,int&);
int main()
{
int x,y;
cout<<"ENTER A IS:";
cin>>x;
cout<<"ENTER B IS:";
cin>>y;
fun(x,y);
getch();
return 0;
}
int fun(int &a,int &b)
{
int *const a=3;
a=a+1;
b=a;
return(b);
}