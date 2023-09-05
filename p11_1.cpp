// Write a C program to enter two numbers and find their sum
#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	float avg,sum;

	cout<<"Enter the frist number ::";
	cin>>a;
	cout<<"Enter the second number ::";
	cin>>b;
	sum=a+b;
	avg=sum/2;
	cout<<"Sum of a + b = "<<sum<<endl;
	cout<<"Average of a and b ::" <<avg;
	return 0;
}