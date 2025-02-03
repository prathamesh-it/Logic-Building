#include<iostream>
using namespace std;

bool CheckBit(int iNo , int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask << (iPos-1);  

    iResult = iNo & iMask;      //Business Logic

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
    int iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue , iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON";
    }
    else
    {
        cout<<"Bit is OFF";
    }

    return 0;
}


/*
Enter the number :
57
Enter the position :
6
Bit is ON

Enter the number :
57
Enter the position :
8
Bit is OFF

Enter the number :
9
Enter the position :
4

Enter the number :
9
Enter the position :
3
Bit is OFF
*/
