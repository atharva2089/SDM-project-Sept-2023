//#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int r;
	const float pi1=3.14f;
	cout<<"Enter the radius: "<<endl;
	cin>>r;
	float A, cir;
	A=pi1*r*r;
	cir=2*pi1*r;
	cout<<"Area of circle: "<<A<<'\n'<<"Circumferance of circle: "<<cir<<endl;
	
}
