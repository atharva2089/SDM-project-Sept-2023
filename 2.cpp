#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cout<<"Enter the 5 marks: ";
	cin>>a>>b>>c>>d>>e;
	float avg;
	int sum;
	sum=a+b+c+d+e;
	avg=(float)sum/5;
	//avg=(float)(a+b+c+d+e)/5;
	cout<<"Average of 5 marks is: "<<avg<<endl;
	return 0;
}
