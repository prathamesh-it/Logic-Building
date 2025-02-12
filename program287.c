#include<stdio.h>

int strlenXR(char *str)
{
    static int iLength = 0;

    if(*str!='\0')
    {
        iLength++;
        str++;
        strlenXR(str);
    }
    return iLength;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenXR(Arr);

    printf("String length is : %d\n",iRet);

    return 0;
}