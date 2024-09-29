#include<iostream>
using namespace std;
void pet(int);
main()
{
 int holidays;
 cout<<"Enter the holidays:";
 cin>>holidays;
 pet(holidays);
}
void pet(int holidays)
{
 int workingdays;
 int gametime;
 int gametime2;
 int difference;
 workingdays=365-holidays;
 gametime=(workingdays*63)+(holidays*127);
 difference=30000-gametime;
 difference=difference/60;
 gametime2=difference%60;

 if(holidays <= 40)
{
 cout<<"Tom sleeps well" <<endl<< "  " <<difference<< " hours and " <<gametime2<< " minutes less for play ";
}
if(holidays > 40)
{
 difference=gametime-30000;
 difference=difference/60;
 gametime2=difference%60;
 cout<<"Tom will run away" <<endl<< "  " <<difference<< " hours and " <<gametime2<< " minutes for play";
}
}
 