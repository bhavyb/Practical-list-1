//Write C++ Program to Check Armstrong Number using function
//220130318038
//Bhavy Bhuva
#include<iostream>  
using namespace std;  
int arm(int num);    
int main()
{
     int num, flag=1;
     cout<<"Enter the number :: "; 
     cin>>num;
     flag = arm(num);
     if(flag == 1)
        cout<<num<<" is Armstrong number";
     else
        cout<<num<<" is not Armstrong number";
       return 0;
}
int arm(int num) 
{
    int temp, sum=0, digit;
    int isArm;
    temp = num;
    while(temp != 0) 
    {
        digit = temp % 10;
        sum = sum +(digit * digit * digit);
        temp = temp/10;
    } 
    if (sum==num)
    {
        isArm = 1;
    }
    else
    {
        isArm = 0;
    }
    return isArm;
}
