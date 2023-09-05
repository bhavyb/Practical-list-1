//Write C++ Program To Find If A Character Is Vowel Or Consonant using function
#include<iostream>
using namespace std;
int isvowel(char c)
{
    c=tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main()
{
    char c;
    cout<<"Enter the charcter ::";
    cin>>c;
    if(isvowel(c))
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonant";
    }
    return 0;
}