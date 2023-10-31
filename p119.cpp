// Write C++ Program to Make a Simple Calculator with the use of switch case
//220130318038
//Bhavy Bhuva
#include <iostream>
using namespace std;
  int main() 
  {
    char op;
    float num1, num2;
      
    cout<<"Enter the arithemetic operator(+ - * /)";
    cin>>op;
    cout<<"Enter the first number ::";
    cin>>num1;
    cout<<"Enter the second number ::";
    cin>>num2;
    switch(op) {
        case '+': 
                cout<<num1<<" + "<<num2<<" = "<<num1+num2;
                break;
        case '-':
                cout<<num1<<" - "<<num2<<" = "<<num1-num2;
                break;
        case '*':
                cout<<num1<<" * "<<num2<<" = "<<num1*num2;
                break;
        case '/':
                cout<<num1<<" / "<<num2<<" = "<<num1/num2;
                break;
        default: 
                cout<<"Please... Enter the ( +,  -,  *,  /  )";
    }
      
    return 0;
}
