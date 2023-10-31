// Write a C program to enter radius of a circle and find its diameter, circumference and area.
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int main ()
{
	int r;
	float cer,area;
	
	cout<<"Enter the radius of circle ::";
	cin>>r;
	cer=2*3.14*r;
	area=3.14*r*r;
	cout<<"area is = "<<area<<endl;
	cout<<"circumference is = ::" <<cer;
	return 0;
}
