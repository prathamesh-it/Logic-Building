//display factors of given number

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)      //O(N)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt<<"\n";
        }
    }
}

int main()
{
    int iValue;

    cout<<"Enter number: \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}