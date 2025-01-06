//Check whether the number is didvisible by 3 or not?

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    int iResult = 0;
    
    iResult = iNo % 3;

    if(iResult == 0)
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
    int iValue= 0;
    bool bFlag = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);   

    bFlag = CheckDivisible(iValue);
    if(bFlag==true)
    {
        printf("%d is divisibile by 3 \n",iValue);
    }
    else
    {
        printf("%d is not divisibile by 3 \n",iValue);
    }

    return 0;
}