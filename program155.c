//Accept String and count frequency of Small Aplhabets
#include<stdio.h>

int CountSmall(char *ptr)
{
    int iCount = 0;

    while(*ptr!='\0')
    {
        if(*ptr>='a' && *ptr<='z')
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
    scanf("%[^'\n']s",Arr);         
    
    iRet=CountSmall(Arr);       //Display(100);

    printf("Count of small letters  is : %d \n",iRet);
    
    return 0;

}
