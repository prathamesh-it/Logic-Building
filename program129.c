//Input : 5
//Output : A    B   C   D   E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    
    for(iCnt =1 ,ch = 65; iCnt <=iNo;iCnt++,ch++)  //ASCII value of A
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}