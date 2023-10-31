// Write C++ program to find simple interest
//220130318038
//Bhavy Bhuva
#include <iostream>
using namespace std;

int main()
{
    int p, t, r, SI;
    cout<<"Enter the principal amount :: ";
    cin>>p;
    cout<<"Enter the years :: ";
    cin>>t;
    cout<<"Enter the annual interest rate :: ";
    cin>> r;
    SI = (p*r*t)/100;
    cout<<"Simple Interest is :: "<<SI<<endl;
    return 0;
}
