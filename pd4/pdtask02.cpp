#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void moveplayer(int x,int y);
main()
{
 int x=3,y=8;
 system("cls");
 printmaze();
 while(true)
{
 moveplayer(x,y);
 x=x+1;
 if(x==33)
 {
 while(true)
{
  moveplayer(x,y);
 x=x-1;
 if(x==3)
{
 while(true)
{
 moveplayer(x,y);
 x=x+1;
 if(x==33)
{
while(true)
{
 moveplayer(x,y);
 x=x-1;
if(x==3)
{
 moveplayer(x,y);
while(true)
{
moveplayer(x,y);
 x=x+1;
}
}
}
}
}
}
}
}
 gotoxy(0,19);
}
}
void printmaze()
{
cout<<"###################################"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"#                                 #"<<endl;
cout<<"###################################"<<endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveplayer(int x,int y)
{
 gotoxy(x,y);
 cout<<"p";
 Sleep(500);
 gotoxy(x,y);
 cout<<" ";
 }
