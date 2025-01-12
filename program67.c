#include<stdio.h>

void Display(int *ptr)    //Accept address of int
{
    printf("Values of the array are : \n");

    printf("%d \n",*ptr);
    ptr++;
    printf("%d \n",*ptr);
    ptr++;
    printf("%d \n",*ptr);
    ptr++;
    printf("%d \n",*ptr);
    

}

int main()
{

    int Arr[4];
    int iCnt = 0;
    
    printf("Please enter the value : \n");

    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);    
    }
    
    Display(Arr);      //Display(100)

    return 0;
}