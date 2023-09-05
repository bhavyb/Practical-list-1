//Write C++ Program to Check Whether a Number is Prime or Not using function
#include<iostream>
using namespace std;
int primeNumber(int);
int main()
{
    int num, chk;
    cout<<"Enter the number :: ";
    cin>>num;
    chk = primeNumber(num);
    if(chk==0)
        cout<<num<<" is a Prime Number";
    else
        cout<<num<<" is not a Prime Number";
    return 0;
}
int primeNumber(int num)
{
    int i, chk=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            return chk;
        }
    }
    return chk;
}