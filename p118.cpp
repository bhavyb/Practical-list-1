//.Write C++ Program to Calculate the Power of a Number using function
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int pow(int base, int power);
int main() 
{
   int base;
   int power;
   cout<<"Enter the base :: ";
   cin>>base;
   cout<<"Enter the power :: ";
   cin>>power;
   cout<<base<<" ^ "<<power<<" = "<<pow(base,power);
   return 0;
}
int pow(int base, int power)
{
   int i,pow=1;
   if(power == 0)
   return 1;
   for(i=1; i<=power; i++)
   pow=pow*base;
   return pow;
}
