//Change the capital letter of string to small letter

#include<stdio.h>

int StrlwrX(char *str)     
{
    while(*str != 0)
    {
        if(*str >= 'A' && *str<='Z')
        {
            *str=*str+32;  //32 is diff between A and a in ascii table i.e 65 and 97
        }
        str++;
    }

}

int main()
{
    char Arr[30];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrlwrX(Arr);

    printf("String after updation is : %s\n",Arr);


    return 0;
}