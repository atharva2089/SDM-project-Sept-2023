//#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int r;
	const float pi=3.14f;
	cout<<"Enter the radius: "<<endl;
	cin>>r;
	float A, cir;
	A=pi*r*r;
	cir=2*pi*r;
	cout<<"Area of circle: "<<A<<'\n'<<"Circumferance of circle: "<<cir<<endl;
	
}
