#include<iostream>
using namespace std;
void isequal(int,int);
void notequal(int,int);
main()
{
 int x, y;
 cout<<"Enter first number:";
 cin>>x;
 cout<<"Enter second number:";
 cin>>y;
if(x == y)
{
 isequal(x,y);
}
if(x != y)
{
 notequal(x,y);
}
}
void isequal(int x,int y)
{
 
 cout<<"True";
}
void notequal(int x,int y)
{

 cout<<"False";
}