#include<iostream>
using namespace std;
void longestTime(int,int);
main()
{
 int hours , minutes ;
 cout<<"Enter the hours:";
 cin>>hours;
 cout<<"Enter the minutes:";
 cin>>minutes;
 hours=hours*60;
 longestTime(hours,minutes);
}
void longestTime(int hours,int minutes)
{
 if(hours < minutes)
{
 cout<<" "<<minutes;
}
if(hours > minutes)
{
 hours=hours/60;
 cout<<" "<<hours;
}
} 
 
