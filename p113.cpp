//Write C++ Program to Calculate Sum of First n Natural Numbers using function.
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int getsum(int);
int main()
{
    int n;
    cout << "Enter the number :: "; 
    cin >> n;
    int sum = getsum(n);    
    cout << sum;
    return 0;
}
int getsum(int n)
{
    if(n==0) 
        return n;
    return n + getsum(n-1);
}
