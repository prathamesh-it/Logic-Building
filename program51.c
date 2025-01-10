//Wrie a program which counts the number of input digit

#include<stdio.h>

int main()
{
    int iNo = 74926;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        printf("%d \n",iDigit);
        iNo = iNo/10;
    }


    return 0;
}