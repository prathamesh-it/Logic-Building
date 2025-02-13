#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[],int iSize)
{
    static int i = 0;

    if(i<iSize)
    {
        printf("%d\n",Arr[i]);
        i++;
        DisplayR(Arr,iSize);

    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0,i=0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr =(int*)malloc(iLength * sizeof(int));

    printf("Enter the values : \n");
    for(i = 0; i<iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayR(ptr,iLength);

    return 0;
}