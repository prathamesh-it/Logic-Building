//Accept N number from user and return minimum number 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin = 0;
    iMin = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt = 0,iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr,iLength);
    printf("Minimum is %d \n",iRet);

    free(ptr);

    return 0;
}

