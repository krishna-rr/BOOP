#include<conio.h>
#include<iostream.h>
//using namespance std;
void ary(int[],int);
int main()
{
int x[3]={1,3,4};
ary(x,3);
getch();
return 0;
}
void ary(int *a,int n)
{
cout<<"ARRAY CONTENTS:"<<endl;
while(n>0)
{
cout<<*a<<endl;
a++;
n--;
}
}