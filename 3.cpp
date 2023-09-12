#include<iostream>
using namespace std;
//void swap (int,int);
int main()
{
	int a,b;
	cout<<"Enter the two numbers a and b"<<endl;
	cin>>a>>b;
	cout<<"value entered of a and b are:"<<a<<b<<endl;
	swap(a,b);
	cout<<"Value of a and b after swapping:"<<a<<'\t'<<b<<endl;
	return 0;
}

void swap (int p , int q)
{
	int temp;
	temp = p;
	p=q;
	q=temp;
	cout<<"Value of p and q after swapping:"<<p<<'\t'<<q<<endl;
}
