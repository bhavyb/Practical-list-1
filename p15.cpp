//Write C++ program to swap two numbers
//220130318038
//Bhavy Bhuva
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter the first number ::";
    cin>>a;
    cout<<"Enter the second number ::";
    cin>>b;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping the number"<<endl;
    cout<<"First number :: "<<a<<endl;
    cout<<"Second number :: "<<b;

    return 0;
}
