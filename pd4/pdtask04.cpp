#include<iostream>
using namespace std;
void reverse(string);
void reverse2(string);
main()
{
 string comm;
 cout<<"Enter 'true' or 'false':";
 cin>>comm;
 if(comm == "true")
{
 reverse(comm);
}
if(comm == "false")
{
 reverse2(comm);
}
}
void reverse(string comm)
{
 cout<<"false";
}
void reverse2(string comm)
{
 cout<<"true";
}
