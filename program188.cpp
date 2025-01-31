//display factors of given number using TIME COMPLEXITY

#include<iostream>
using namespace std;

void DisplayFactors(int iNo)          //O(N/2)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
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