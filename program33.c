
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iCnt=0;
    int iFrequency=0;

    printf("Enter the Freuquency : \n");
    scanf("%d",&iFrequency);

    
    Display(iFrequency);
    

    return 0;
}