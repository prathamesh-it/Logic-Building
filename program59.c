//Accept number from user and return the summation of its digits

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;     //Local variable to count Digit
    int iSum = 0;      //Local variable to count Sum

    if(iNo<0)          //If inpit is negative
    {
        iNo=-iNo;      //Convert it into positive
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        iSum = iSum+iDigit;
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue,iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits :%d \n",iRet);
    return 0;
}