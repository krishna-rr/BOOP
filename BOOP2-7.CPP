#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//using namespace std:
int main()
{
int x,*ptr,**pptr;
cout<<"ENTER X";
cin>>x;
x=*ptr;
*ptr=**pptr;
cout<<"THE VALUE OF X IS "<<x<<endl;
cout<<"THE VALUE OF PTR IS "<<&ptr<<endl;
cout<<"THE VALUE OF PPTR IS "<<&pptr<<endl;
getch();
return 0;
}