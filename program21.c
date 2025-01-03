/*
  8    9.30
  9    10.30
  10   11.30
*/

#include<stdio.h>
void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
      case 8:
      printf("Your exam is at 9.30AM \n");

      case 9:
      printf("Your exam is at 10.30AM \n");

      case 10: 
      printf("Your exam is at 11.30AM \n");

    }
}

int main()
{
    int iValue=0;

    printf("Please enter your standard : \n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);


    return 0;
}

/*
OUTPUT
C:\Users\hp\Desktop\LB>Myexe
Please enter your standard :
8
Your exam is at 9.30AM
Your exam is at 10.30AM
Your exam is at 11.30AM

C:\Users\hp\Desktop\LB>gcc program21.c -o Myexe

C:\Users\hp\Desktop\LB>Myexe
Please enter your standard :
9
Your exam is at 10.30AM
Your exam is at 11.30AM

C:\Users\hp\Desktop\LB>gcc program21.c -o Myexe

C:\Users\hp\Desktop\LB>Myexe
Please enter your standard :
10
Your exam is at 11.30AM

C:\Users\hp\Desktop\LB>





*/