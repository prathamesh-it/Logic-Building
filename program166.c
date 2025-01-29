//Program to count capital letters
//Program 165 syntax is best to prefer

#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str>='65' && *str<='91')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}