//Accept number from user and return the summation of its even digits

#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iDigit = 0;     //Digit mojayla
    int iSum = 0;      //Sum ghyayla

    if(iNo<0)          //If inpit is negative
    {
        iNo=-iNo;      //Convert it into positive
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit %2 ==0)
        {
            iSum = iSum + iDigit;
        }       
        iNo = iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue,iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SumEvenDigits(iValue);

    printf("Summation of even digits :%d \n",iRet);
    return 0;
}