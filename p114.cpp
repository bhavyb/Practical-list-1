//Write C++ Program to Check Whether a Number is a Palindrome or Not using function.
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int palindrome(int);
int main()
{
    int num, val;
    cout<<"Enter the Number: ";
    cin>>num;
    val = palindrome(num);
    if(val==0)
        cout<<num<<" is a Palindrome Number";
    else
        cout<<num<<" is not a Palindrome Number";
    return 0;
}
int palindrome(int n)
{
    int temp, rem, rev=0;
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==n)
        return 0;
    else
        return 1;
}
