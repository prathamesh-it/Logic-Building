//Count even digits

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo !=0)
    {
        iDigit = iNo%10;
        if(iDigit %2 ==0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Summation of Digits are are : %d\n",iRet);

    return 0;
}