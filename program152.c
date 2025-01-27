#include<stdio.h>

int StrlenX(char *ptr)
{
    int iCount = 0;

    while(*ptr!='\0')
    {
        //iCount++;
        ptr++;
        iCount++;
    }
    return iCount;

}

int main()
{
    char Arr[30];
    int iRet = 0;


    printf("Enter string: \n");
    scanf("%[^\n']s",Arr);         
    
    iRet=StrlenX(Arr);       //Display(100);

    printf("Length of string is : %d \n",iRet);
    
    return 0;

}
