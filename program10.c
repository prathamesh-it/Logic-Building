#include<stdio.h>

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

/*
    Step 3: Decide the Programming language
    According to the problem statement we select C programming.
*/

/*
    step 4: Write the Program
*/

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   It is used to perform addition of 2 float values
//  Input :         Float,Float
//  Output :        Float
//  Author :        Prathamesh Prafulla Nistane 
//  Date :          06/10/2024
//
///////////////////////////////////////////////////////////////////////////


float Addition(float fValue1,float fValue2)
{ 
    float fAdd=0.0f;                               //Local variable for result
    
    //updator
    if(fValue1<0.0f)
    {
        fValue1=-fValue1;
    }

    if(fValue2<0.0f)
    {
        fValue2=-fValue2;
    }
    
    fAdd=fValue1+fValue2;                         //Business logic
    return fAdd;
}

////////////////////////////////////////////////////////////////
//
//  This application is used to perform addition of 2 numbers
//
////////////////////////////////////////////////////////////////
int main()
{
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;         //Local variables for input

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns=Addition(fNo1,fNo2);                   //Function call

    printf("Addition is : %f",fAns);


    return 0;
}

/*
   Step 5:Test the Program

Case-1 :
Enter first number :
10
Enter second number :
20
Addition is : 30.000000

Case-2:
Enter first number :
-10
Enter second number :
20
Addition is : 30.000000

Case-3:
Enter first number :
10
Enter second number :
-20
Addition is : 30.000000

Case-4:
Enter first number :
-10
Enter second number :
-20
Addition is : 30.000000

   
*/