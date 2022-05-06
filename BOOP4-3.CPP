#include<iostream.h>
#include<conio.h>
//using namespace std;
void point(int x,int y=0);
int main()
{
int p,q;
cout<<"ENTER P CODINATE:";
cin>>p;
cout<<"ENTER Q CODINATE";
cin>>q;
clrscr();
point(p,q);
getch();
return 0;
}
void point(int x,int y)
{
cout<<"("<<x<<","<<y<<")"<<endl;
}