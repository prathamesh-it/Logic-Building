//Replace a--> d

#include<stdio.h>

void Update(char *str)     
{
    while(*str != 0)
    {
        if(*str =='a')
        {
            *str='d';
        }
        str++;
    }
}

int main()
{
    char Arr[30];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Update(Arr);//return nastanna main funtion la string midte 
    //bcz apan call by address vaparto ahe

    printf("String after updation is : %s\n",Arr);


    return 0;
}