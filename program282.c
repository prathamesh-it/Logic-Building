//SUM Of digits

#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iSum = 0;

    while(iNo!=0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;

    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);

    printf("Summation of Digits are are : %d\n",iRet);

    return 0;
}