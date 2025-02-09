//*     *     *      *
#include<stdio.h>

void DisplayI()
{
    int iCnt = 0;

    iCnt=1;         //Initialisation
    while(iCnt<=4)          //Condition
    {
        printf("*\n");
        iCnt++;             //Updation
    }
}

int main()
{

    DisplayI();

    return 0;
}