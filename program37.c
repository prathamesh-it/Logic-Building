#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("%d Jay Ganesh...\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iFrequency=0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}

/*
OUTPUT:
1 Jay Ganesh...
2 Jay Ganesh...
3 Jay Ganesh...
4 Jay Ganesh...
5 Jay Ganesh...
*/