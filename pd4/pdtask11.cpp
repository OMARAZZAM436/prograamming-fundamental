#include<iostream>
using namespace std;
void tpcheck(int,int);
main()
{
 int people,tissuepaper;
 cout<<"Number of peoples in the household:";
 cin>>people;
 cout<<"Number of rolls of TP:";
 cin>>tissuepaper;
 tpcheck(people,tissuepaper);
}
void tpcheck(int people,int tissuepaper)
{
 tissuepaper=tissuepaper*500;
 people=tissuepaper/(people*57);
if(people < 20)
{
 cout<<"Youe TP will last only last "<<people<< " days, buy more!";
}
if(people > 20)
{
 cout<<"Your TP will last "<<people<< " days, no need to panic!";
}
}
 