//Change the small letter of string to capital letter and capital to small

#include<stdio.h>

int StrtoggleX(char *str)     
{
    while(*str != 0)
    {
        if(*str >= 'a' && *str<='z')
        {
            *str=*str-32;
        }
        else
        {
            *str=*str+32;
        }
        
        str++;
    }

}

int main()
{
    char Arr[30];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrtoggleX(Arr);

    printf("String after updation is : %s\n",Arr);


    return 0;
}

//output:HELLO@worldQQ
