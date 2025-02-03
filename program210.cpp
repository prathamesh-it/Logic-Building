//Accept number from user and check 8th bit from right side is on or off

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0X80;      
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)   
    {
        return true;
    }
    else
    {
        return false;
    }



}
int main()
{
    int iValue = 0;
    bool bRet=false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet==true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
        cout<<"Bit is OFF\n";
    }

    
    
    return 0;
}