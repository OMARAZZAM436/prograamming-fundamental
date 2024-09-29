#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void playermove(int x, int y);
main()
{
  int x=8, y=8;
system("cls");
 printmaze();
while(true)
{
 playermove(x,y);
 x=x+1;
 if(x==34)
{
 x=3;
}
 }
 gotoxy(0,19);
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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
void playermove(int x, int y)
{
 gotoxy(x,y);
 cout<<"p";
 Sleep(500);
 gotoxy(x,y);
 cout<<" ";
}
