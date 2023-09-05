//Write a C program to enter two numbers and perform all arithmetic operations
#include<iostream>
using namespace std;
int main ()
{
	int a,b,mod;
	float sum,sub,mul,div;
	cout<<"Enter the first number ::";
	cin>>a;
	cout<<"Enter the second number ::";
	cin>>b;
    mod=a%b;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	cout<<"A + b ="<<sum<<endl;
	cout<<"A - b ="<<sub<<endl;
	cout<<"A * b ="<<mul<<endl;
	cout<<"A / b ="<<div<<endl;
    cout<<"A % B ="<<mod<<endl;
	return 0;
}