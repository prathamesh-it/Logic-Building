//Change the small letter of string to capital letter

#include<stdio.h>

int StruprX(char *str)     
{
    while(*str != 0)
    {
        if(*str >= 'a' && *str<='z')
        {
            *str=*str-32;  //32 is diff between a and A in ascii table i.e 97 and 65
        }
        str++;
    }

}

int main()
{
    char Arr[30];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StruprX(Arr);

    printf("String after updation is : %s\n",Arr);


    return 0;
}