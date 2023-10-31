// Write C++ program to find compound interest
//220130318038
//Bhavy Bhuva
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float ci, amount, p, r, t;
    int n;
    cout<<"Enter the principal amount :: ";
    cin>> p;
    cout<<"Enter the annual interest rate :: ";
    cin>> r;
    cout<<"Enter compound year :: ";
    cin>> n;
    cout<<"Enter the year  :: ";
    cin>> t;
    amount = p * pow((1 + r/(100 * n)), n*t);
    ci = amount - p;
    cout<<"Compound interest :: "<<ci<<endl;
    return 0;
}
