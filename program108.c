//Input : 4
//Output :-1    -2  -3  -4
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    //     1       2          3
    for(iCnt=-1;iCnt>=-iNo ; iCnt--)     //iCnt=-1 ;iCnt-- -->  -1-1  -- >-2
    {
        printf("%d \t",iCnt);         //4
    } 
     
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}