// Write C++ program to find factorial of the given number with the use of function
#include<iostream>
using namespace std;
int factorial(int n);
int main() 
{
        int n;
        cout << "Enter the number :: ";
        cin >> n;
        cout << "Factorial is " << n << " = " << factorial(n);
        return 0;
}
int factorial(int n) 
{
        if(n > 1)
        {
                return n * factorial(n - 1);
        }
        else
        {
                return 1;
        }
}