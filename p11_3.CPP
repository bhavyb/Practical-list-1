//Write a C program to enter length and breadth of a rectangle and find its perimeter & area
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int main ()
{
	int len;
	float per,area;
	
	cout<<"Enter the length of rectangle in cm ::";
	cin>>len;
	per=len*len;
	area=4*len*len;
	cout<<"perimiter is = "<<per<<" cm"<<endl;
	cout<<"Area of a and b ::" <<area<<" cm^2";
	return 0;
}
