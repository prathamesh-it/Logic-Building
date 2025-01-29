//program to count vowels
//Should I write case sensitive program or insensitive program?

#include<stdio.h>

int CountVowels(char *str)     //Case Insensitive
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
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

    iRet = CountVowels(Arr);

    printf("Number of Vowels are : %d\n",iRet);

    return 0;
}