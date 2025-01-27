#include<stdio.h>


int main()
{
    char Arr[30];

    printf("Enter your name : \n");
    //Accept till First space only
    scanf("%s",Arr);         //Name of array is internally considered as base adress of array

    printf("Your name is : %s\n",Arr);

    
    return 0;

}

/*
OUTPUT:
Enter your name :
Prathamesh Praful Nistane
Your name is : Prathamesh

*/