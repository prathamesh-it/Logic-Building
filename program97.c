//Input : 5
// *  *  *  *  *

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf( "* \t");
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