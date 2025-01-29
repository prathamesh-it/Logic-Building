//Check whether string contains the user given character or not

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str , char ch)     
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str==ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    bool bRet = false;
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);    //WE give space here before %c

    bRet = Check(Arr,cValue);
    
    if(bRet==true)
    {
        printf("String contains the given character");
    }
    else
    {
        printf("String do not contains the given character");
    }

    return 0;
}