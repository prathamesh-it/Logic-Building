/*

Step 1: Understand the problem Statement
Step 2: Write the algorithm
Step 3: Decide the Programming language
Step 4: Write the Program
Step 5: Test the Program
*/

/*
Problem Stetement:
Write a program which is used to perform ADDITION of two number.
*/
//number?  Sir can you tell me which type of input should I use?

/*
    Step 1:Understand the problem Statement
    User is going to enter the data in decimal format.
    If entered data is negative we have to covert it to positive value.

*/

/*
    Step2:Write the algorithm

    START
        Accept first input
        Accept second input
        If any of the input is negative then covert it into positive
        Perform the addition of that accepted values
        Display the addition
    STOP
*/
//BENEFIT ++ : Sir which language should I use? apan tyala mann deto ahe

/*
    Step 3: Decide the Programming language
    According to the problem statement we select C programming.
*/

/*
    step 4: Write the Program
*/

#include<stdio.h>

float Addition(float fValue1,float fValue2)
{
    float fAdd=0.0f;
    fAdd=fValue1+fValue2;
    return fAdd;
}
int main()
{
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns=Addition(fNo1,fNo2);

    printf("Addition is : %f",fAns);


    return 0;
}