#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;

    
    char *end = str;

    char temp = '\0';

    while(*end != '\0') //TIME COMPLEXITY : N
    {
        end++;
    }
    end--;
    while(start<end)   //TIME COMPLEXITY : N/2
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("String after reversal :%s\n",Arr);

    return 0;
}