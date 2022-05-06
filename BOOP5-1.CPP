#include<iostream.h>
#include<conio.h>
struct student{
int r_no;
char name[20];
int age;
char br[10];
float pr;
};
int main()
{
student s;
clrscr();
cout<<"GET DETAILS OF STUDENTS:"<<endl;
cout<<"ENTER ROLL NUMBER:";
cin>>s.r_no;
cout<<"ENTER NAME:";
cin>>s.name;
cout<<"ENTER AGE:";
cin>>s.age;
cout<<"ENTER BRANCH:";
cin>>s.br;
cout<<"ENTER PR:";
cin>>s.pr;
cout<<"PRINT DETAILS OF STUDENTS"<<endl;
cout<<"ROLL_NUMBER="<<s.r_no<<endl;
cout<<"NAME="<<s.name<<endl;
cout<<"AGE="<<s.age<<endl;
cout<<"BRANCH="<<s.br<<endl;
cout<<"PR="<<s.pr<<endl;
getch();
return 0;
}