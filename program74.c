//ARRAY CREATTION USING MALLOC FUNCTION

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));


    //Use

    free(ptr);

    return 0;
}