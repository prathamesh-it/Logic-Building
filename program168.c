//Input : Abiut CstAfB
//Output : 4 ( Capital A,B and Small a,b)

#include<stdio.h>

int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str=='A'||*str=='B'||*str=='a'||*str=='b')
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

    iRet = Count(Arr);

    printf("Number of letters are : %d\n",iRet);

    return 0;
}