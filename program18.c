#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage <0.0f || fPercentage > 100.0f)     //Filter  
    {
        printf("Invalid percentage . Please enter the value in the range 0 to 100\n");
        return; //tya program cha execution madhun tumhi baher padta
    }
    if(fPercentage>40.00f)
    {
        printf("You are PASS \n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}

int main()
{
    float fValue=0.0f;

    printf("Enter the percentage : \n");
    scanf("%f",&fValue);

    DisplayResult(fValue);



    return 0;
}
