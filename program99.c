//Input : 5
// 5    4   3   2   1

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >=1 ; iCnt--)
    {
        printf( "%d \t",iCnt);
    }
    printf("\n");
}

#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}