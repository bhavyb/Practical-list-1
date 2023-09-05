// Write C++ Program to Find Largest Among 3 Numbers
#include <iostream>
using namespace std;
int main() 
{
    int num1, num2, num3;
    cout<<"Enter first numbers :: ";
    cin>>num1;
    cout<<"Enter second numbers :: ";
    cin>>num2;
    cout<<"Enter therd numbers :: ";
    cin>>num3;
    if(num1 >= num2 && num1 >= num3)
    {
        cout<<"Largest number :: " <<num1;
    }
    else
    { 
        if(num2 >= num1 && num2 >= num3)
        {
            cout<<"Largest number: " <<num2;
        }
        else
        { 
            cout<<"Largest number: " <<num3;
        }
    }
    return 0;
}