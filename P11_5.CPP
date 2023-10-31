//Write a C program to input elements in array and print all negative elements
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int main()
{
	int array[111],i,size;
	cout<<"Enter the size of array :: ";
	cin>>size;
	for(i=0; i<size; i++)
	{
		cout<<"Enter the "<<i<<" element ::";
		cin>>array[i];
	}
	cout<<"Nagative element is ::";
	for(i=0; i<size; i++)
	{
		if(0>array[i])
		{
			cout<<array[i];
		}
	}
	return 0;
}
