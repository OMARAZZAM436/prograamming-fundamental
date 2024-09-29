#include<iostream>
using namespace std;
void earnbonus(int,int);
main()
{
 int a,b;
 cout<<"Enter your position:";
 cin>>a;
 cout<<"Enter yours friend\'s position:";
 cin>>b;
if(a < b)
{
 earnbonus(a,b);
}
}
void earnbonus(int a,int b)
{
 if((b-a) <= 6)
{
 cout<<"true";
}
if((b-a) > 6)
{
 cout<<"false";
}
}

 
    
 