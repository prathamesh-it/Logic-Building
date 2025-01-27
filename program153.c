//Accept String from user and count frequency of "a"!S

#include<stdio.h>

int Count(char *ptr)
{
    int iCount = 0;

    while(*ptr!='\0')
    {
        if(*ptr== 'a')
        {
            iCount++;
        }
        ptr++;
        
    }
    return iCount;

}

int main()
{
    char Arr[30];
    int iRet = 0;


    printf("Enter string: \n");
    scanf("%[^\n']s",Arr);         
    
    iRet=Count(Arr);       //Display(100);

    printf("Count of a  is : %d \n",iRet);
    
    return 0;

}
