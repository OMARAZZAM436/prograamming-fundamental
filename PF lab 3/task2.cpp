#include<iostream>
using namespace std;
void inches(float);
{

	float n1;
	cout<<"Enter inches: ";
	cin>>n1;
	inches(n1);
}
	void inches(float a)
{
	float feet;
	feet=a/12;
	cout<<"total inches:  "<<feet;
}
