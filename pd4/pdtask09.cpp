#include<iostream>
using namespace std;
void Flowershop(int,int,int);
main()
{
 int Red_rose,White_rose,Tullips;

 cout<<"Red Rose:";
 cin>>Red_rose;

 cout<<"White Rose:";
 cin>>White_rose;

 cout<<"Tullips:";
 cin>>Tullips;

 Flowershop(Red_rose,White_rose,Tullips);
}
void Flowershop(int Red_rose,int White_rose,int Tullips)
{
 float amount1,amount2,amount3,Tamount,dis;
 
 amount1=Red_rose*2.00;
 amount2=White_rose*4.10;
 amount3=Tullips*2.50;
 Tamount=amount1+amount2+amount3;

 cout<<"Original price:$"<<Tamount <<endl;

 if(Tamount > 200)
{ 
 dis=(Tamount*20)/100;
 Tamount=Tamount-dis;
 
 cout<<"Price after discount:$"<<Tamount;
}
}
 