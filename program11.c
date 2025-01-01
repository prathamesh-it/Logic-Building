#include<stdio.h>

int main()
{
    float fRadius=0.0f;
    float fArea=0.0f;

    printf("Enter the readius of circle \n");
    scanf("%f",&fRadius);

    fArea= 3.14 * fRadius * fRadius;
    //     3.14     10.5      10.5
    
    printf("Area of circle is : %f",fArea);


    return 0;
}