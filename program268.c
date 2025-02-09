#include<stdio.h>

void DisplayR()
{
    int iCnt = 1;   //default storage class auto
 
    if(iCnt<=4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();      //Recursive Call
    }
}

int main()
{

    DisplayR();

    return 0;
}

//*     *     *      *