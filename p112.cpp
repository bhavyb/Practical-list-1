//Write C++ Program To Print Multiplication Table of a Number
#include<iostream>
using namespace std;
int main()
{
    int num,i,tab;
    cout<<"Enter the number of multiplication table ";
    cin>>num;
    for(i=1; i<=10; i++)
    {
       tab=num*i;
        cout<<num<<" * "<<i<<" = "<<tab<<endl;
    }
    return 0;
}