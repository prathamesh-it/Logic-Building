#include<stdio.h>

int StrlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);

    printf("String length is : %d\n",iRet);

    return 0;
}