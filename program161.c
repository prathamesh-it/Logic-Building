#include<stdio.h>

void Display(char str[])
{
    printf("Entered string is : \n");

    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}