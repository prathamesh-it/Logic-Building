/*Enter the number
12345
Number of digits are are : 5 */

#include<stdio.h>

int CountDigitsI(int iNo)
{
    int iCount = 0;

    while(iNo!=0)
    {
        iCount++;
        iNo = iNo/10;

    }
    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountDigitsI(iValue);

    printf("Number of digits are are : %d\n",iRet);

    return 0;
}