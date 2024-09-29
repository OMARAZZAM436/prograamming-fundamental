#include<iostream>
using namespace std;
void pakistan(string,float);
void ireland(string,float);
void india(string,float);
void england(string ,float);
void canada(string,float);
main()
{
 while(true)
{
 string nam;
 float amount;
 cout<<"Enter the country name:";
 cin>>nam;
 cout<<"Enter the amount in dollars:$";
 cin>>amount;
 if(nam == "Pakistan")
 {
  pakistan(nam,amount);
 }
 if(nam == "Ireland")
 {
  ireland(nam,amount);
 }
 if(nam == "India")
 {
 india(nam,amount);
 }
 if(nam == "England")
 {
 england(nam,amount);
 }
 if(nam == "Canada")
 {
 canada(nam,amount);
 }
}
}
void pakistan(string nam,float amount)
{
 float dis;

 dis=(amount*5)/100;
 amount=amount-dis;

 cout<<"Final ticket price after discount:$"<<amount <<endl;
} 
void ireland(string nam,float amount)
{
 float dis;
 dis=(amount*10)/100;
 amount=amount-dis;
 cout<<"Final ticket price after discount:$"<<amount <<endl;
} 
void india(string nam,float amount)
{
 float dis;
 dis=(amount*20)/100;
 amount=amount-dis;
 cout<<"Final ticket price after discount:$"<<amount <<endl;
} 
void england(string nam,float amount)
{
 float dis;
 dis=(amount*30)/100;
 amount=amount-dis;
 cout<<"Final ticket price after discount:$"<<amount <<endl;
} 
void canada(string nam,float amount)
{
 float dis;
 dis=(amount*45)/100;
 amount=amount-dis;
 cout<<"Final ticket price after discount:$"<<amount <<endl;
} 





