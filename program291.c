//Accept array from user and display elements
#include<stdio.h>

void Display(int Arr[],int iSize)
{
    int i = 0;
    for(i= 0 ; i<iSize;i++)
    {
        printf("%d\n",Arr[i]);
    }

}
int main()
{
    int Arr[] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}