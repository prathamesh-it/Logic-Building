//Accept number from user and check 2nd bit from right side is on or off

#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iMask = 0X2;      //update to Hexadecimal
    int iResult = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
    
    iResult = iValue & iMask;

    if(iResult == 0)
    {
        cout<<"Second bit is OFF\n";
    }
    else
    {
        cout<<"Second bit is ON\n";
    }


    return 0;
}