#include<stdio.h>
#include<string.h>


void Display(char *ptr)
{
    while(*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }

}

int main()
{
    char Arr[30];
    char *ptr =Arr;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);  

    //int length = strlen(Arr);       
    
    Display(Arr);       //Display(100);

    //printf("Length of string is %d ", length);
    
    return 0;

}
