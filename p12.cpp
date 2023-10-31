// WAP to convert Fahrenheit into Celsius using class.
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
class Temperature
{
	private:
	float fahren, celsius;
	public:
	float conversion(float f)
	{
		fahren=f;
		celsius=(fahren-32)* 5/9;
		return celsius;
	}
	
};
int main()
{
	Temperature t;
	float f;
	cout<<"Enter the Temperature in Fahrenheit :: ";
	cin>>f;
	cout<<"Temperature in Celsius :: "<<t.conversion(f);
return 0;
}
