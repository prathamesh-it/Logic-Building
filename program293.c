//Recursion
#include<stdio.h>

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
    int Arr[] = {10,20,30,40,50};

    DisplayR(Arr,5);

    return 0;
}