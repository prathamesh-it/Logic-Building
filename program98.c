//Input : 5
// 1    2   3   4   5

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
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